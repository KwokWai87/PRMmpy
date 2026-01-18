# -*- coding: utf-8 -*-
import sys
if sys.platform == "pyboard":
    from machine import Pin
import time
from mix.driver.module.prm_mix_board import PRMMIXBoard
from mix.driver.ic.cat9555 import PRMCAT9555, CAT9555Def
from mix.driver.ic.ad56x7r import PRMAD5667R
from mix.driver.ic.ad7175 import PLAD7175


eload_calibration_info = {
    "ch0": {
        'voltage_measure': {
            'level1': {"limit": [1000, "mV"], 'unit_index': 0},
            'level2': {"limit": [2500, "mV"], 'unit_index': 1},
            'level3': {"limit": [5000, "mV"], 'unit_index': 2},
            'level4': {"limit": [7500, "mV"], 'unit_index': 3}
        },
        'current_measure': {
                'level1': {"limit": [100, "mA"], 'unit_index': 4},
                'level2': {"limit": [500, "mA"], 'unit_index': 5},
                'level3': {"limit": [1000, "mA"], 'unit_index': 6}
        },
        'current_output': {
                'level1': {"limit": [100.0, "mA"], 'unit_index': 7},
                'level2': {"limit": [500.0, "mA"], 'unit_index': 8},
                'level3': {"limit": [1000.0, "mA"], 'unit_index': 9}
        }
    },
    "ch1": {
            'voltage_measure': {
                'level1': {"limit": [1000, "mV"], 'unit_index': 10},
                'level2': {"limit": [2500, "mV"], 'unit_index': 11},
                'level3': {"limit": [5000, "mV"], 'unit_index': 12},
                'level4': {"limit": [7500, "mV"], 'unit_index': 13}
            },
            'current_measure': {
                'level1': {"limit": [100, "mA"], 'unit_index': 14},
                'level2': {"limit": [500, "mA"], 'unit_index': 15},
                'level3': {"limit": [1000, "mA"], 'unit_index': 16}
            },
            'current_output': {
                'level1': {"limit": [100.0, "mA"], 'unit_index': 17},
                'level2': {"limit": [500.0, "mA"], 'unit_index': 18},
                'level3': {"limit": [1000.0, "mA"], 'unit_index': 19}
            }
    }
}


class EloadException(Exception):
    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason


class ELoadDef:

    RETURN_DONE = "done"
    ENABLE = 1
    DISABLE = 0
    CAT9555_PINS = 16
    CH0_ELOAD_SNS_OUT_EN = 0
    CH0_ELOAD_OUT_EN = 1
    OCP_RESET_CH1 = 2
    CH1_ELOAD_SNS_OUT_EN = 3
    CH1_ELOAD_OUT_EN = 4
    OCP_RESET_CH2 = 5
    PWR_FAN_EN_H = 6
    VOLTAGE_CHANNEL = {"ch0": 0, "ch1": 2}
    CURRENT_CHANNEL = {"ch0": 1, "ch1": 3}

    CURRENT_CHANNEL_DAC = 0
    IOCP_CHANNEL_DAC = 1

    EMULATOR_REG_SIZE = 256
    VOLTAGE_GAIN = 3.0
    CURRENT_MEASURE_GAIN = 1.0/0.1/20.8
    CURRENT_OUTPUT_GAIN = 20.8*0.1
    CURRENT_OUTPUT_OFFSET = 2.5
    CURRENT_OUTPUT_GAIN_GAIN = 21/10.0

    IOCP_CURRENT_OUTPUT_GAIN = 2.5
    # CURRENT_OUTPUT_GAIN = 0.55
    # CURRENT_OUTPUT_OFFSET = 27.5
    PWR_IIC_ADDR = {
        "cat9555": [0x20],
        "ad5667R": [0x0e, 0x0f],
    }


class ELoad(PRMMIXBoard):
    """
    ELoad function class

    :param      ad7175:        instance/None,  Class instance of AD7175, if not using this parameter, will create emulator
    :param      ad5667:        instance/None,  Class instance of ad5667, if not using this parameter, will create emulator
    :param      cat9555:       instance/None,  Class instance of Cat9555, if not using this parameter, will create emulator
    :param      eeprom:        instance/None,  Class instance of Eeprom, if not using this parameter, will create emulator

    :example:
                 axi4 = AXI4LiteBus('/dev/MIX_DUT1_AD7175', 8192)
                 ad7175 = AD717x(axi4, 2500)
                 axi4 = AXI4LiteBus('/dev/MIX_DUT1_I2C1', 256)
                 i2c = PLI2CBus(axi4)
                 cat9555 = CAT9555(0x20,i2c)
                 eeprom = CAT24C32(0x50, i2c)
                 eload = ELoad(ad7175, ad5667, cat9555,eeprom)
    """
    rpc_public_api = ['reset', 'fan_enable', 'fan_disable', 'enable', 'disable',
                      'volt_measure_enable', 'volt_measure_disable', 'set_eload_current_ma',
                      'get_eload_current_ma', 'get_eload_volt_mv', 'cr_set'] + PRMMIXBoard.rpc_public_api

    def __init__(self, i2c_bus=None, eeprom=None, ad7175=None):
        super(ELoad, self).__init__(eeprom)
        dac_ch0 = PRMAD5667R(ELoadDef.PWR_IIC_ADDR.get("ad5667R")[0], i2c_bus, "INTERNAL", 2500.0)
        dac_ch1 = PRMAD5667R(ELoadDef.PWR_IIC_ADDR.get("ad5667R")[1], i2c_bus, "INTERNAL", 2500.0)
        self.dac = [dac_ch0, dac_ch1]
        if ad7175:
            self.ad7175 = ad7175
        else:
            spi_bus = SoftSPI(("PB13", "PB15", "PB14", "PF10"), 1, 1, baudrate=500000)
            self.ad7175 = PLAD7175(spi_bus)
        self.cat9555 = PRMCAT9555(ELoadDef.PWR_IIC_ADDR.get("cat9555")[0], i2c_bus)

    def reset(self):
        """
        reset the module, the same function like  post_power_on_init
        :param timeout:
            int 0
        :return:
        """
        return self._module_init()

    def post_power_on_init(self, timeout=0):
        """
        init module after power on
        :param timeout:
            int 0
        :return:
        """
        self._module_init()

    def _module_init(self):
        """
        init eload board ic mode
        :return: bool True/False;
        :example:
                self.init_device()
        """
        self.set_calibration_mode("raw")
        for i in range(2):
            self.set_eload_iocp_current_ma(i, 1500)
        for pin in range(ELoadDef.CAT9555_PINS):
            self.cat9555.set_pin_dir(pin, CAT9555Def.PIN_DIR_OUTPUT)
            state = self.cat9555.get_pin_dir(pin)
            if state != CAT9555Def.PIN_DIR_OUTPUT:
                raise EloadException("cat9555 init failed!")
        self.cat9555.set_ports([0x00, 0x00])
        time.sleep(0.05)
        # init ad5667 ref INTERNAL; normal work mode
        for i in range(2):
            self.dac[i].set_reference(ref_mode="INTERNAL")
            self.dac[i].select_work_mode(0, mode="NORMAL")
            self.dac[i].select_work_mode(1, mode="NORMAL")
        # init eload
        self.ad7175.config = {
            "ch0": {"P": "AIN0", "N": "AIN4"},
            "ch1": {"P": "AIN1", "N": "AIN4"},
            "ch2": {"P": "AIN2", "N": "AIN4"},
            "ch3": {"P": "AIN3", "N": "AIN4"}
        }
        if hasattr(self.ad7175, 'ic_init'):
            self.ad7175.ic_init()
        self.ad7175.set_sampling_rate("ch0", 100)
        self.ad7175.set_sampling_rate("ch1", 100)
        self.ad7175.set_sampling_rate("ch2", 100)
        self.ad7175.set_sampling_rate("ch3", 100)
        self.set_calibration_mode("cal")
        return ELoadDef.RETURN_DONE

    def set_io_switch(self, io_list):
        """
        eload set io switch
        set io then get io compare the result if they are same return True else return False
        :param io_list:     list, [[9,1],[10,0],[12,1]]
        :return: bool True/False;
        :example:
                self.io_switch([[9,1],[10,1],[11,0],[12,1]])
                self.io_switch([[9,0]])
        """
        assert isinstance(io_list, list)
        for item in io_list:
            assert isinstance(item, list)
            io, level = item
            self.cat9555.set_pin(io, level)
            bit_level = self.cat9555.get_pin_state(io)
            if bit_level != level:
                return False
        return True

    def ocp_reset(self, channel):
        """
        ocp_reset
        :param channel int/str   0/1/"0"/"1"
        :return: bool True/False;
        :example:
                self.ocp_reset(0)
        """
        if str(channel) == "0":
            self.cat9555.set_pin(ELoadDef.OCP_RESET_CH1, 1)
            time.sleep(0.05)
            self.cat9555.set_pin(ELoadDef.OCP_RESET_CH1, 0)
        elif str(channel) == "1":
            self.cat9555.set_pin(ELoadDef.OCP_RESET_CH2, 1)
            time.sleep(0.05)
            self.cat9555.set_pin(ELoadDef.OCP_RESET_CH2, 0)
        else:
            return "error"
        return ELoadDef.RETURN_DONE

    def fan_enable(self):
        """
        turn on fan
        :return: str "done"
        :example:
            self.eload_fan_enable()
        """
        result = "done"
        io_list = [[ELoadDef.PWR_FAN_EN_H, ELoadDef.ENABLE]]
        if not self.set_io_switch(io_list):
            result = "error"
        return result

    def fan_disable(self):
        """
        turn off fan
        :return: str "done"
        :example:
            self.eload_fan_enable()
        """
        result = "done"
        io_list = [[ELoadDef.PWR_FAN_EN_H, ELoadDef.DISABLE]]
        if not self.set_io_switch(io_list):
            result = "error"
        return result

    def enable(self, channel):
        """
        turn on eload
        :param channel int/str  0/1/"0"/"1"
        :return: str "done"
        :example:
            self.eload_enable(0)
        """
        result = "done"
        if str(channel) == "0":
            io_list = [[ELoadDef.CH0_ELOAD_OUT_EN, ELoadDef.ENABLE]]
        elif str(channel) == "1":
            io_list = [[ELoadDef.CH1_ELOAD_OUT_EN, ELoadDef.ENABLE]]
        else:
            return "channel error"
        if not self.set_io_switch(io_list):
            result = "error"
        return result
    
    def disable(self,channel):
        """
        turn off eload
        :param channel int/str  0/1/"0"/"1"
        :return: str "done"
        :example:
            self.eload_disable(0)
        """
        result = "done"
        if str(channel) == "0":
            io_list = [[ELoadDef.CH0_ELOAD_OUT_EN, ELoadDef.DISABLE]]
        elif str(channel) == "1":
            io_list = [[ELoadDef.CH1_ELOAD_OUT_EN, ELoadDef.DISABLE]]
        else:
            return "channel error"
        if not self.set_io_switch(io_list):
            result = "error"
        return result
    
    def volt_measure_enable(self,channel):
        """
        turn on volt measure switch
        :param channel int/str  0/1/"0"/"1"
        :return: str "done"
        :example:
            self.eload_volt_measure_enable(0)
        """
        result = "done"
        if str(channel) == "0":
            io_list = [[ELoadDef.CH0_ELOAD_SNS_OUT_EN, ELoadDef.ENABLE]]
        elif str(channel) == "1":
            io_list = [[ELoadDef.CH1_ELOAD_SNS_OUT_EN, ELoadDef.ENABLE]]
        if not self.set_io_switch(io_list):
            result = "error"
        return result

    def volt_measure_disable(self,channel):
        """
        turn off volt measure switch
        :param channel int/str  0/1/"0"/"1"
        :return: str "done"
        :example:
            self.eload_volt_measure_disable(0)
        """
        result = "done"
        if str(channel) == "0":
            io_list = [[ELoadDef.CH0_ELOAD_SNS_OUT_EN, ELoadDef.DISABLE]]
        elif str(channel) == "1":
            io_list = [[ELoadDef.CH1_ELOAD_SNS_OUT_EN, ELoadDef.DISABLE]]
        if not self.set_io_switch(io_list):
            result = "error"
        return result

    def set_eload_current_ma(self, channel, curr):
        """
        Set eload output current value
        :param channel : int/str  0/1/"0"/"1"
        :param curr:  int; range(0~1000mA)
        :return: str "done"
        :example:
            self.set_eload_current_ma(0,1000)
        """
        assert 0 <= curr <= 1000
        result = "done"
        voltage = curr

        # voltage = curr * ELoadDef.CURRENT_OUTPUT_GAIN + ELoadDef.CURRENT_OUTPUT_OFFSET
        if self.is_use_cal_data():
            cal_info = eload_calibration_info.get("ch{}".format(channel))["current_output"]
            if cal_info:
                curr = self.cal_pipe(cal_info, voltage)
                voltage = (curr * ELoadDef.CURRENT_OUTPUT_GAIN + ELoadDef.CURRENT_OUTPUT_OFFSET) * ELoadDef.CURRENT_OUTPUT_GAIN_GAIN
        else:
            voltage = (curr * ELoadDef.CURRENT_OUTPUT_GAIN + ELoadDef.CURRENT_OUTPUT_OFFSET) * ELoadDef.CURRENT_OUTPUT_GAIN_GAIN
        self.dac[int(channel)].output_volt_dc(ELoadDef.CURRENT_CHANNEL_DAC, voltage)
        return result

    def set_eload_iocp_current_ma(self, channel, curr):
        """
        Set eload output current value
        :param channel : int/str  0/1/"0"/"1"
        :param curr:  int; range(0~2000mA)
        :return: str "done"
        :example:
            self.set_eload_current_ma(1000)
        """
        assert 0 <= curr < 2000
        result = "done"
        voltage = curr * ELoadDef.IOCP_CURRENT_OUTPUT_GAIN
        # voltage = curr * ELoadDef.CURRENT_OUTPUT_GAIN + ELoadDef.CURRENT_OUTPUT_OFFSET
        # if self.is_use_cal_data():
        #     voltage = self.cal_pipe(
        #         eload_calibration_info['current_output'], voltage)
        self.dac[int(channel)].output_volt_dc(ELoadDef.IOCP_CHANNEL_DAC, voltage)
        self.ocp_reset(channel)
        return result

    def get_eload_current_ma(self, channel):
        """
        Get eload output current value
        :param:   str/int   0/1/"0"/"1"
        :return: list; [int,str];[1000,mA]
        :example:
            self.get_eload_current_ma()
        """
        current_channel = "ch{}".format(channel)
        voltage = self.ad7175.read_volt(ELoadDef.CURRENT_CHANNEL.get(current_channel))
        current = voltage * ELoadDef.CURRENT_MEASURE_GAIN

        if self.is_use_cal_data():
            cal_info = eload_calibration_info.get(current_channel)["current_measure"]
            if cal_info:
                current = self.cal_pipe(cal_info, current)

        return [current, 'mA']

    def get_eload_volt_mv(self, channel):
        """
        Get eload external voltage value
        :param:   str/int   0/1/"0"/"1"
        :return: list; [int,str];[1000,mA]
        :example:
            self.get_eload_volt_mv()
        """
        volt_channel = "ch{}".format(channel)
        voltage = self.ad7175.read_volt(ELoadDef.VOLTAGE_CHANNEL.get(volt_channel))
        voltage *= ELoadDef.VOLTAGE_GAIN
        if self.is_use_cal_data():
            cal_info = eload_calibration_info.get(volt_channel)["voltage_measure"]
            if cal_info:
                voltage = self.cal_pipe(cal_info, voltage)
        return [voltage, 'mV']

    def write_cal(self, unit_index, gain, offset, threshold):
        """
        MIXBoard calibration data write
        :param       unit_index:   int,    calibration unit index
        :param       gain:         float,  calibration gain
        :param       offset:       float,  calibration offset
        :param       threshold:    float,  if value < threshold, use this calibration unit data
        :example:
                            board.write_calibration_cel(0, 1.1, 0.1, 100)
        :calibration unit format:
                            Meaning:    Gain,     Offset,   threshold value, Use flag
                            Mem size:   4Bytes,   4Bytes,   4Bytes,            Byte
                            Data type:  float,    float,    float,            uint8_t
                            Formula:    Y = Gain * X  + Offset
        """

        self.write_calibration_cell(unit_index, gain, offset, threshold)
        return ELoadDef.RETURN_DONE

    def read_cal(self, unit_index):
        """
        MIXBoard read calibration data
        :param             unit_index: int, calibration unit index
        :example:
                            data = board.read_calibration_cel(0)
                            print(data)
        :calibration unit format:
                            Meaning:    Gain,     Offset,   threshold value, Use flag
                            Mem size:   4Bytes,   4Bytes,   4Bytes,            Byte
                            Data type:  float,    float,    float,            uint8_t
                            Formula:    Y = Gain * X  + Offset
        """
        return self.read_calibration_cell(unit_index)


    def cr_set(self, channel, res):
        """
        simulator CR mode
        :param channel : int/str  0/1/"0"/"1"
                   res : float  [0.5, 1000]
        """
        assert 0.5 <= res < 1000.0
        # enable volt_measure_enable
        self.volt_measure_enable(channel)
        # read eload voltage
        volt_mv, unit = self.get_eload_volt_mv(channel)
        curr_ma = volt_mv / res
        # print("curr_mA: {}\nvolt_mV: {}".format(curr_ma, volt_mv))
        result = self.set_eload_current_ma(channel, curr_ma)
        self.volt_measure_disable(channel)
        return result

