# -*- coding: utf-8 -*-
import sys
if sys.platform == "pyboard":
    import pyb

__author__ = 'Ming@PRM'
__version__ = '0.1'

class TH10Def:

    ART_COMMAND = [0x2B, 0x32]
    STOP_PERIODIC_COMMAND = [0x30, 0x39]
    RESET_COMMAND = [0x30, 0xA2]
    HEATER_ENABLE = [0x30, 0x6D]
    HEATER_DISABLE = [0x30, 0x66]
    STATUS_COMMAND = [0xF3, 0x2D]
    CLEAR_STATUS_COMMAND = [0x30, 0x41]
    SINGLE_MODE = [0x2C, 0x0D]
    MEASUREMENT_COMMAND = [0xE0, 0x00]

class TH10Exception(Exception):

    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason

class PRMTH10(object):
    '''
    AD56X7R function class

    :param      dev_addr:   hex,          I2C device address of AD56X7R
    :param      i2c_bus:    instance/None Class instance of I2C bus,If not using this parameter,will create Emulator
    :param      mvref:      float         the reference voltage of AD56X7R,the unit is mV
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad56x7r = AD56X7R(0x50, i2c)
    '''
    rpc_public_api = ['reset','art_mode','singe_measurement_start','singe_measurement_start1',
                      '_deal_with','stop_periodic_mode','check_busy','clear_statuse_register','set_heater',
                      'read_register','write_register'
                      ]

    def __init__(self, dev_addr, i2c_bus=None):
        # 7-bit slave address. The two LSBs are variable
        # assert (dev_addr & (~0x03)) == 0x30
        self.dev_addr = dev_addr
        self.i2c_bus = i2c_bus

    def reset(self):
        '''
        AD56X7R reset chip

        :param       mode: str("DAC_AND_INPUT_SHIFT_REG","ALL_REG")   default is "ALL_REG"
        :example:
                      ad56x7r.reset("ALL_REG")
        '''
        self.write_register(TH10Def.RESET_COMMAND)
        return 'done'

    def art_mode(self):
        self.write_register(TH10Def.ART_COMMAND)

    def singe_measurement_start(self, delay_time=100):
        self.write_register(TH10Def.SINGLE_MODE)
        pyb.delay(delay_time)
        result = self.read_register(TH10Def.MEASUREMENT_COMMAND, 6)
        return self._deal_with(result)

    def singe_measurement_start1(self):
        self.write_register(TH10Def.SINGLE_MODE)
        pyb.delay(1000)
        return self.i2c_bus.recv(self.dev_addr, 6)

    def _deal_with(self, buf):
        assert len(buf)==6
        temp = (buf[0]<<8|buf[1])/(2**16-1)*175.0 - 45
        hu = (buf[3]<<8|buf[4])/(2**16-1)*100.0
        return {"rh": hu, "temp": temp}

    def stop_periodic_mode(self):
        self.write_register(TH10Def.STOP_PERIODIC_COMMAND)

    def check_busy(self):
        """
        True means is not busy, False is busy
        :return:
        """
        buf = self.read_register(TH10Def.STATUS_COMMAND, 2)
        busy_bit = (buf[1]&0x02) >> 2
        return True if not busy_bit else False

    def clear_statuse_register(self):
        self.write_register(TH10Def.CLEAR_STATUS_COMMAND)

    def set_heater(self, bl=True):
        '''
        :param bl:
        :return:
        '''
        if bl:
            self.write_register(TH10Def.HEATER_ENABLE)
        else:
            self.write_register(TH10Def.HEATER_DISABLE)


    def read_register(self, reg_addr, rd_len):
        '''
        CAT9555 read specific length datas from address

        :param    reg_addr:   hexmial(0-0xFF), Read datas from this address
        :param    rd_len:     int(0-1024),     Length to read
        :returns:  type is list
        :example:
                   rd_data = cat9555.read_register(0x00, 10)
                   print(rd_data)
        '''
        self.i2c_bus.send(self.dev_addr, reg_addr)
        result = self.i2c_bus.recv(self.dev_addr, rd_len)
        return result

    def write_register(self, reg_addr):
        '''

        :param cmd_data:
        :return:
        '''
        assert isinstance(reg_addr, list)
        self.i2c_bus.send(self.dev_addr, reg_addr)
