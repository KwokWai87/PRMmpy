# -*- coding: utf-8 -*-

__author__ = 'Ming@PRM'
__version__ = '0.1'


class AD56X7RDef:

    COMMAND_WRITE_TO_INPUT_REG = 0x00
    COMMAND_UPDATE_DAC_REG = 0x01
    COMMAND_WRITE_TO_INPUT_REG_AND_UPDATE_ALL = 0x02
    COMMAND_WRITE_AND_UPDATE_DAC_CHAN = 0x03
    COMMAND_POWER_UP_OR_DOWN = 0x04
    COMMAND_RESET = 0x05
    COMMAND_LDAC_SETUP = 0x06
    COMMAND_REFERENCE_SETUP = 0x07
    AD5667_RESLUTION = 16
    AD5647_RESLUTION = 14
    AD5627_RESLUTION = 12


class AD56X7RException(Exception):

    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason


class AD56X7R(object):
    '''
    AD56X7R function class

    :param      dev_addr:   hex,          I2C device address of AD56X7R
    :param      i2c_bus:    instance/None Class instance of I2C bus,If not using this parameter,will create Emulator
    :param      mvref:      float         the reference voltage of AD56X7R,the unit is mV
    .. code-block:: python

        address = 0x0C
        i2c = MPYSoftI2CBus(scl="PB8", sda="PB9", freq=100000)
        ad5667r = AD5667R(address, i2c)

        # select normal mode first; 2 means: all channel
        ad5667r.select_work_mode(2, "NORMAL")

        # channel 0 output 1000mV; channel 1 output 2000mV
        ad5667r.output_volt_dc(0, 1000)
        ad5667r.output_volt_dc(1, 2000)

    '''

    rpc_public_api = ["reset", "select_work_mode", "set_ldac_pin_enable", "output_volt_dc",
                      "read_volt", "read_operation", "write_operation"
                      ]


    def __init__(self, dev_addr, i2c_bus=None, mvref=2500.0):
        # 7-bit slave address. The two LSBs are variable

        assert (dev_addr & (~0x03)) == 0x0C
        assert isinstance(mvref, (float, int))

        self.dev_addr = dev_addr
        self.i2c_bus = i2c_bus
        self.mvref = mvref
        # rewritten in the subclass,default is 16
        self.resolution = AD56X7RDef.AD5667_RESLUTION
        self.ref_mode = "EXTERN"

    def reset(self, mode="ALL_REG"):
        '''
        AD56X7R reset chip

        :param       mode: str("DAC_AND_INPUT_SHIFT_REG","ALL_REG")   default is "ALL_REG"
        :example:
                      ad56x7r.reset("ALL_REG")
        '''
        assert mode in ["DAC_AND_INPUT_SHIFT_REG", "ALL_REG"]
        software_reset_mode = {
            "DAC_AND_INPUT_SHIFT_REG": 0x00, "ALL_REG": 0x01}
        mode = software_reset_mode[mode]
        command = AD56X7RDef.COMMAND_RESET
        self.write_operation(command << 3, [0x00, mode])

    def select_work_mode(self, channel, mode="NORMAL"):
        '''
        AD56X7R select work mode

        :param     channel: int(0/1/2),                                          2 mean both channel
        :param     mode:    str("NORMAL","1KOHM_GND", "100KOHM_GND", "HIGH-Z")   default is "NORMAL"
        :example:
                    ad56x7r.select_work_mode(0,"NORMAL")
        '''
        assert channel in [0, 1, 2]
        assert mode in ["NORMAL", "1KOHM_GND", "100KOHM_GND", "HIGH-Z"]
        operation_mode = {"NORMAL": 0x00, "1KOHM_GND": 0x01,
                          "100KOHM_GND": 0x02, "HIGH-Z": 0x03}
        mode = operation_mode[mode]
        channel_select = [0x01, 0x02, 0x03]
        command = AD56X7RDef.COMMAND_POWER_UP_OR_DOWN
        self.write_operation(
            command << 3, [0x00, channel_select[channel] | (mode << 4)])

    def set_ldac_pin_enable(self, channel):
        '''
        AD56X7R configure ldac pin enable

        :param       channel:  int(0/1/2), 2 mean both channel
        :example:
                      ad56x7r.set_ldac_pin_enable(0)
        '''
        assert channel in [0, 1, 2]
        channel_select = [0x02, 0x01, 0x00]
        command = AD56X7RDef.COMMAND_LDAC_SETUP
        self.write_operation(command << 3, [0x00, channel_select[channel]])

    def output_volt_dc(self, channel, volt):
        '''
        AD56X7R output voltage

        :param       channel:  int(0/1/2),                     2 mean both channel
        :param       volt:     float/int(0~reference voltage), unit is mV
        :example:
                      ad56x7r.output_volt_dc(0, 1000)
        '''
        assert channel in [0, 1, 2]
        assert isinstance(volt, (int, float)) and volt >= 0
        command = AD56X7RDef.COMMAND_WRITE_AND_UPDATE_DAC_CHAN
        dac_address = [0x00, 0x01, 0x07]
        code = int(volt * (0x1 << self.resolution) / self.mvref)
        if code == 1 << self.resolution:
            code = (1 << self.resolution) - 1
        code = code if self.ref_mode == "EXTERN" else code / 2
        code = int(code) << (16 - self.resolution) & 0xffff

        self.write_operation(
            command << 3 | dac_address[channel],
            [code >> 8, code & 0xff])

    def read_volt(self, channel):
        '''
        AD56X7R read back the voltage from register

        :param       channel:  int(0/1/2), 2 mean both channel
        :example:
                      volt = ad56x7r.read_volt(0)
                      print(volt)
        '''
        assert channel in [0, 1, 2]
        data_list = self.read_operation()
        print("data_list:",data_list)
        dac_address = {0x00: "DAC_A", 0x01: "DAC_B", 0x07: "BOTH_DAC"}
        dac_address[data_list[0] & 0x07]
        code = (data_list[1] << 8) | data_list[2]
        code = (code & 0xffff) >> (16 - self.resolution)
        code = code if self.ref_mode == "EXTERN" else code * 2
        volt = code * self.mvref / (0x1 << self.resolution)
        return volt

    def read_operation(self):
        '''
        AD56X7R read operation

        :example:
                  ad56x7r.write_operation(0x00, [0x12,0x12])
                  rd_data = ad56x7r.read_operation()
                  print(rd_data)
        '''
        # ryan add params
        return self.i2c_bus.read(self.dev_addr, 3, 3)

    def write_operation(self, command, data):
        '''
        AD56X7R write command and data to address

        :param       command:  int(0-7), Write command to chip
        :param       data:     list,     each element takes one byte,eg:[0x01,0x04]
        :example:
                      wr_data = [0x01, 0x04]
                      ad56x7r.write(0x00, wr_data)
        '''
        assert isinstance(command, int) and command >= 0
        assert isinstance(data, list)
        assert all(isinstance(x, int) and x >= 0 for x in data)
        self.i2c_bus.write(self.dev_addr, [command] + data)


class PRMAD5667R(AD56X7R):
    '''
    AD5667R function class

    :param      dev_addr:    hex,                      I2C device address
    :param      i2c_bus:     instance/None,            Class instance of I2C bus, if None, will create Emulator
    :param      ref_mode:    str("EXTERN","INTERNAL"), reference mode of AD5667R,defualt is "EXTERN"
    :param      mvref:       float,                    the reference voltage of AD5667R,the unit is mV
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad5667r = AD5667R(0x50, i2c)
    '''

    rpc_public_api = [
        "set_reference"
    ] + AD56X7R.rpc_public_api


    def __init__(self, dev_addr, i2c_bus=None,
                 ref_mode="EXTERN", mvref=2500.0):
        super(PRMAD5667R, self).__init__(dev_addr, i2c_bus, mvref)
        self.resolution = AD56X7RDef.AD5667_RESLUTION
        self.ref_mode = ref_mode

    def set_reference(self, ref_mode="EXTERN"):
        '''
        AD5667R set mode of reference voltage

        :param        ref_mode:  str("INTERNAL,"EXTERN"), default is "EXTERN"
        :example:
                       ad5667r.set_reference("EXTERN")
        '''
        assert ref_mode in ["EXTERN", "INTERNAL"]
        self.ref_mode = ref_mode
        command = AD56X7RDef.COMMAND_REFERENCE_SETUP
        ref_mode_select = {"EXTERN": 0x00, "INTERNAL": 0x01}
        ref_mode = ref_mode_select[self.ref_mode]
        self.write_operation(command << 3, [0x00, ref_mode])


class AD5667(AD56X7R):
    '''
    AD5667 function class

    :param      dev_addr:   hex,           I2C device address
    :param      i2c_bus:    instance/None, Class instance of I2C bus,If not using this parameter,will create Emulator
    :param      mvref:      float,         the reference voltage of AD5667,the unit is mV
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad5667 = AD5667(0x50, i2c)
    '''

    rpc_public_api = [] + AD56X7R.rpc_public_api

    def __init__(self, dev_addr, i2c_bus=None, mvref=2500.0):
        super(AD5667, self).__init__(dev_addr, i2c_bus, mvref)
        self.resolution = AD56X7RDef.AD5667_RESLUTION
        self.ref_mode = "EXTERN"


class AD5647R(AD56X7R):
    '''
    AD5647R function class

    :param      dev_addr:   hex,           I2C device address
    :param      i2c_bus:    instance/None, Class instance of I2C bus,If not using this parameter,will create Emulator
    :param      mvref:      float,         the reference voltage of AD5647R,the unit is mV
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad5647r = AD5647R(0x50, i2c)
    '''
    rpc_public_api = [
        "set_reference"
    ] + AD56X7R.rpc_public_api

    def __init__(self, dev_addr, i2c_bus=None,
                 ref_mode="EXTERN", mvref=2500.0):
        super(AD5647R, self).__init__(dev_addr, i2c_bus, mvref)
        self.resolution = AD56X7RDef.AD5647_RESLUTION
        self.ref_mode = ref_mode

    def set_reference(self, ref_mode="EXTERN"):
        '''
        AD5647R set mode of reference voltage

        :param   ref_mode:  str("INTERNAL,"EXTERN"), default is "EXTERN"
        :example:
                  ad5647r.set_reference("EXTERN")
        '''
        assert ref_mode in ["EXTERN", "INTERNAL"]
        self.ref_mode = ref_mode
        command = AD56X7RDef.COMMAND_REFERENCE_SETUP
        ref_mode_select = {"EXTERN": 0x00, "INTERNAL": 0x01}
        ref_mode = ref_mode_select[self.ref_mode]
        self.write_operation(command << 3, [0x00, ref_mode])


class AD5647(AD56X7R):
    '''
    AD5647 function class

    :param      dev_addr:   hex,           I2C device address
    :param      i2c_bus:    instance/None, Class instance of I2C bus,If not using this parameter,will create Emulator
    :param      mvref:      float,         the reference voltage of AD5667,the unit is mV
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad5647 = AD5647(0x50, i2c)
    '''

    rpc_public_api = [] + AD56X7R.rpc_public_api

    def __init__(self, dev_addr, i2c_bus=None, mvref=2500.0):
        super(AD5647, self).__init__(dev_addr, i2c_bus, mvref)
        self.resolution = AD56X7RDef.AD5647_RESLUTION
        self.ref_mode = "EXTERN"


class AD5627(AD56X7R):
    '''
    AD5627 function class

    :param      dev_addr:   hex,           I2C device address
    :param      i2c_bus:    instance/None, Class instance of I2C bus,If not using this parameter,will create Emulator
    :param      mvref:      float,         the reference voltage of AD5667,the unit is mV
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad5627 = AD5627(0x50, i2c)
    '''
    rpc_public_api = [] + AD56X7R.rpc_public_api

    def __init__(self, dev_addr, i2c_bus=None, mvref=2500.0):
        super(AD5627, self).__init__(dev_addr, i2c_bus, mvref)
        self.resolution = AD56X7RDef.AD5627_RESLUTION
        self.ref_mode = "EXTERN"


class AD5627R(AD56X7R):
    '''
    AD5627R function class

    :param      dev_addr:   hex,           I2C device address
    :param      i2c_bus:    instance/None, Class instance of I2C bus,If not using this parameter,will create Emulator
    :param      mvref:      float,         the reference voltage of AD5667,the unit is mV
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad5627r = AD5627R(0x50, i2c)
    '''
    rpc_public_api = ["set_reference"] + AD56X7R.rpc_public_api

    def __init__(self, dev_addr, i2c_bus=None,
                 ref_mode="EXTERN", mvref=2500.0):
        super(AD5627R, self).__init__(dev_addr, i2c_bus, mvref)
        self.resolution = AD56X7RDef.AD5627_RESLUTION
        self.ref_mode = ref_mode

    def set_reference(self, ref_mode="EXTERN"):
        '''
        AD5627R set mode of reference voltage

        :param        ref_mode:  str("INTERNAL,"EXTERN"), default is "EXTERN"
        :example:
                       ad5627r.set_reference("EXTERN")
        '''
        assert ref_mode in ["EXTERN", "INTERNAL"]
        self.ref_mode = ref_mode
        command = AD56X7RDef.COMMAND_REFERENCE_SETUP
        ref_mode_select = {"EXTERN": 0x00, "INTERNAL": 0x01}
        ref_mode = ref_mode_select[self.ref_mode]
        self.write_operation(command << 3, [0x00, ref_mode])
