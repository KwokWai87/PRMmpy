# -*- coding: utf-8 -*-

import time
from mix.driver.module.prm_mix_board import PRMMIXBoard
from mix.driver.ic.ad56x7r import PRMAD5667R
from mix.driver.ic.ads1115 import PRMADS1115

__author__ = 'Pu@PRM'
__version__ = 'v0.1'

class PowerBoardDef:

    IO_OFFSET = 0
    IO_PINS = 16

    BATTERY = "battery"
    CHARGE = "charger"

    RETURN_DONE = "done"
    RETURN_ERROR = False

    PS_VOLTAGE_CHANNEL = "voltage"
    PS_CURRENT_CHANNEL = "current"
    EX_VOLTAGE_CHANNEL = "ex_voltage"
    PS_VOLTAGE_OUTPUT_CHANNEL = "volt_output"
    PS_CURRENT_OUTPUT_CHANNEL = "curr_output"

    BAT_VOLTAGE_CHANNEL = "ch0"
    BAT_CURRENT_CHANNEL = "ch1"
    BAT_VOLTAGE_OUTPUT_CHANNEL = "volt_output"
    BAT_CURRENT_OUTPUT_CHANNEL = "curr_output"

    RELAY_DELAY_S = 0.05

    BAT_OUTPUT_ENABLE_PIN = {
        "enable": [(8, 1)],
        "disable": [(8, 0)]
    }

    BAT_SENSE_ADD = {
        "enable": [(4, 0), (5, 1)],
        "disable": [(4, 0), (5, 0)]
    }

    PS_OUTPUT_ENABLE_PIN = {
        "enable": [(9, 1)],
        "disable": [(9, 0)]
    }

    PS_SENSE_ENABLE_PIN = {
        "enable": [(10, 1)],
        "disable": [(10, 0)]
    }

    PWR_IIC_ADDR = {
        "ad5667R": [0x0e],
        "ads1115": [0x48],
    }
    BASE_EXTEND_IIC = {
        "cat24c256": [0x50]
    }

    RATES = [
        8, 16, 32, 64, 128, 250, 475, 860
    ]

    SWITCH_DELAY = 0.001


power_board_function_info = {
    PowerBoardDef.CHARGE: {
        PowerBoardDef.PS_VOLTAGE_CHANNEL: {
            "ch": 0,
            "coefficient": 3 / 1.0,
            "unit": "mV",
        },
        PowerBoardDef.PS_CURRENT_CHANNEL: {
            "ch": 3,
            "coefficient": 1.0 / 4.968,
            "unit": "mA",
        },
        PowerBoardDef.PS_VOLTAGE_OUTPUT_CHANNEL: {
            "ch": 1,
            "coefficient": 1.0 / 3,
            "unit": "mV",

        },
        PowerBoardDef.PS_CURRENT_OUTPUT_CHANNEL: {
            "ch": 0,
            "coefficient": 4.968,
            "unit": "mA",
        }
    }
}

power_board_calibration_info = {
    PowerBoardDef.CHARGE: {
        PowerBoardDef.PS_VOLTAGE_OUTPUT_CHANNEL: {
            "7500mv": {
                "level1": {"limit": [100.0, "mV"], "unit_index": 0},
                "level2": {"limit": [1000.0, "mV"], "unit_index": 1},
                "level3": {"limit": [7500.0, "mV"], "unit_index": 2}
            }
        },
        PowerBoardDef.PS_CURRENT_OUTPUT_CHANNEL: {
            "level1": {"limit": [50.0, "mA"], "unit_index": 10},
            "level2": {"limit": [500.0, "mA"], "unit_index": 11}
        },
        PowerBoardDef.PS_VOLTAGE_CHANNEL: {
            "7500mv": {
                "level1": {"limit": [100.0, "mV"], "unit_index": 3},
                "level2": {"limit": [1000.0, "mV"], "unit_index": 4},
                "level3": {"limit": [7500.0, "mV"], "unit_index": 5}
            }
        },
        PowerBoardDef.PS_CURRENT_CHANNEL: {
            "1000ma": {
                "level1": {"limit": [10.0, "mA"], "unit_index": 6},
                "level2": {"limit": [50.0, "mA"], "unit_index": 7},
                "level3": {"limit": [200.0, "mA"], "unit_index": 8},
                "level4": {"limit": [1000.0, "mA"], "unit_index": 9}
            }
        }
    }
}


class PowerBoardException(Exception):
    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason


class PSULite(PRMMIXBoard):
    '''
    PSU function class is charger emulation module driver，internal ADC resolution is 16 bit


    compatible = ["H3J-P128-1-102"]

    It can be used as high performace PowerSupply and battery emulator

    note that charger supply with the maximum output voltage of 7500mV and the maximum Current limiting of 500mA
    battery emulator supply with the maximum output voltage of 4500mV and the maximum Current limiting of 650mA and the
    maximum sink current of 500mA

    for battery measurement, ch0 for voltage channel, ch1 for current channel

    Args:
            i2c:        Instance(I2C),          which is used to control eeprom and cat9555.

            eeprom:     Instance(cat24c256),    EEprom instance which save cal information.

    Examples:
        # normal init
        power_iic = I2C('/dev/i2c-2')
        eeprom = CAT24C256(80, iic_eeprom)
        PRM_PSU = PSULite(power_iic, eeprom)
        PRM_PSU.reset()

    '''
    # compatible = ["H3J-P128-1-102"]
    rpc_public_api = ['reset', 'enable_psu_output', 'disable_psu_output',
                      'set_sample_rate',  'get_sample_rate', 'set_reference_mode', 'get_reference_mode',
                      'set_current_limit', 'get_current_limit', 'voltage_measure', 'current_measure',
                      'ps_volt_output', 'ps_curr_output'] + PRMMIXBoard.rpc_public_api

    def __init__(self, power_iic, eeprom):
        super(PSULite, self).__init__(eeprom)
        self.ps_dac = PRMAD5667R(PowerBoardDef.PWR_IIC_ADDR.get("ad5667R")[0], power_iic, "INTERNAL", 2500.0)
        self.ads1115 = PRMADS1115(PowerBoardDef.PWR_IIC_ADDR.get("ads1115")[0], power_iic, "fs1")

        self.measure_path = dict()
        self.current_limit = dict()

    def reset(self):
        '''
        reset the module, the same function like  post_power_on_init
        :param timeout:
            int 0
        :return:
        '''
        return self._module_init()

    def post_power_on_init(self):
        '''
        init module after power on
        :param timeout:
            int 0
        :return:
        '''
        self._module_init()

    def get_driver_version(self):
        '''
        Odin version
        :return:
            str 'v1.0'
        '''
        return __version__

    def enable_psu_output(self, voltage, current=600):
        """
        Enable psu output

        Args:
            voltage: int   0～7500  unit is mV
            current: int   0~800 mA
        Returns:
            done
        Examples:
                enable_charger_output(5000, 600)
        """
        self.set_current_limit(current)
        self.ps_volt_output(voltage)
        return PowerBoardDef.RETURN_DONE

    def disable_psu_output(self):
        '''
        Disable psu output

        Returns:
            done
        Examples:
                disable_charger_output()
        '''
        self.ps_volt_output(0)
        return PowerBoardDef.RETURN_DONE

    def set_sample_rate(self, sample_rate):
        '''
        Set sampling rate

        Args:
               sample_rate: int (8/16/32/64/128/250/475/860)
        Returns:
               done
        Examples:
                set_sample_rate(16)
        '''
        assert sample_rate in PowerBoardDef.RATES
        self.ads1115.set_sampling_rate(0, sample_rate)
        return PowerBoardDef.RETURN_DONE

    def get_sample_rate(self):
        '''
        Get power_supply sampling rate

        Args:
        Returns:
            int
        Examples:
                sample_rate = get_sample_rate()
        '''
        rate = 0
        rate = self.ads1115.get_sampling_rate(0)
        return rate

    def set_reference_mode(self, mode="INTERNAL"):
        """
        Odin set reference mode

        Args:
            mode: str   EXTERN/INTERNAL
        Returns:
            done
        Examples:
                set_reference_mode("EXTERN")
        """
        assert mode in ["EXTERN", "INTERNAL"]
        self.ps_dac.set_reference(mode)
        return PowerBoardDef.RETURN_DONE

    def get_reference_mode(self):
        """
        Odin get reference mode

        Args:
        Returns:
            str EXTERN/INTERNAL
        Examples:
                mode = get_reference_mode()
        """
        mode = self.ps_dac.ref_mode
        return mode

    def set_current_limit(self, threshold):
        """
        Odin current limit set

        Args:
            threshold: int  0～800(for psu)  unit is mA
        Returns:
            done
        Examples:
                set_current_limit(600)
        """
        self.current_limit.clear()
        self.ps_curr_output(threshold)
        self.current_limit.setdefault(PowerBoardDef.CHARGE, threshold)
        return PowerBoardDef.RETURN_DONE

    def get_current_limit(self):
        """
        Odin current limit get

        Args:
        Returns:
            int
        Examples:
                limit = get_current_limit()
        """
        limit = self.current_limit.get(PowerBoardDef.CHARGE)
        return limit if limit else 0

    def voltage_measure(self):
        """
        Odin voltage measure

        Args:
        Returns:
            float
        Examples:
                voltage,unit = voltage_measure()
        """
        return self.ps_volt_measure_mv()

    def current_measure(self):
        """
        psu current measure

        Args:
        Returns:
            float
        Examples:
                current,unit = current_measure()
        """
        return self.ps_curr_measure_ma()

    def _get_output(self, volt, channel, module):
        assert channel in power_board_function_info.get(module)
        cal_info = power_board_calibration_info.get(module)
        func_info = power_board_function_info.get(module)
        target_value = volt
        if self.is_use_cal_data():
            cal_infor = cal_info.get(channel)
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        target_value = self._volt_to_target_unit(channel, target_value, module)
        unit = func_info.get(channel)["unit"]
        return [target_value, unit]

    def _volt_to_target_unit(self, channel, volt, module):
        '''
        PowerSupply get target unit value (power_board_function_info) from measured voltage

        Args:
            channel:    string,  (m_volt/m_curr/volt_output/curr_output)
            volt:       float,   the measured voltage by ad7175
            module:     string,   (ps/battery)
        :returns:
            string, 'done'
        Examples:
                        inner function
        '''
        assert module in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        dt_info = power_board_function_info.get(module)
        assert channel in dt_info
        return volt * dt_info[channel]['coefficient']

    def ps_volt_measure_mv(self):
        '''
        powersupply measure voltage

        Returns:
            list [value, unit]
        Examples:
                voltage, unit = ps_volt_measure_mv()
        '''
        module = PowerBoardDef.CHARGE
        ps_info = power_board_function_info.get(module)
        cal_info = power_board_calibration_info.get(module)
        channel = PowerBoardDef.PS_VOLTAGE_CHANNEL
        ch = ps_info.get(channel)["ch"]
        target_value = self.ads1115.read_volt(ch)
        target_value = self._volt_to_target_unit(channel, target_value, module)
        unit = ps_info.get(channel)["unit"]

        if self.is_use_cal_data():
            cal_infor = cal_info.get(channel)["7500mv"]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)

        return [target_value, unit]

    def ps_curr_measure_ma(self):
        '''
        powersupply measure voltage

        Returns:
            list [value, unit]
        Examples:
                current, unit = ps_curr_measure_ma()
        '''
        module = PowerBoardDef.CHARGE
        ps_info = power_board_function_info.get(module)
        cal_info = power_board_calibration_info.get(module)
        channel = PowerBoardDef.PS_CURRENT_CHANNEL
        ch = ps_info.get(channel)["ch"]
        target_value = self.ads1115.read_volt(ch)
        target_value = self._volt_to_target_unit(channel, target_value, module)
        unit = ps_info.get(channel)["unit"]

        if self.is_use_cal_data():
            cal_infor = cal_info.get(channel)["1000ma"]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)

        return [target_value, unit]

    def ps_volt_output(self, volt):
        '''
        powersupply set voltage output

        Args:
            volt: float  [0~7500] mv
        Returns:
            bool True
        Examples:
                ps_volt_output(5000)
        '''
        assert 0 <= volt <= 7500
        module = PowerBoardDef.CHARGE
        ps_info = power_board_function_info.get(module)
        channel = PowerBoardDef.PS_VOLTAGE_OUTPUT_CHANNEL
        ch = ps_info.get(channel)["ch"]
        target_value = volt
        if self.is_use_cal_data():
            cal_infor = power_board_calibration_info.get(module)[PowerBoardDef.PS_VOLTAGE_OUTPUT_CHANNEL]["7500mv"]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        target_value = self._volt_to_target_unit(channel, target_value, module)
        if target_value < 0:
            target_value = 0
        self.ps_dac.output_volt_dc(ch, target_value)
        return True

    def ps_curr_output(self, current):
        '''
        powersupply set current output

        Args:
            volt: float  [0~800] ma
        Returns:
            bool True
        Examples:
                ps_curr_output(500)
        '''
        assert 0 <= current <= 800
        module = PowerBoardDef.CHARGE
        ps_info = power_board_function_info.get(module)
        channel = PowerBoardDef.PS_CURRENT_OUTPUT_CHANNEL
        ch = ps_info.get(channel)["ch"]
        target_value, unit = self._get_output(current, channel, module)
        if target_value < 0:
            target_value = 0
        self.ps_dac.output_volt_dc(ch, target_value)
        return True

    def _module_init(self):
        self.ps_dac.select_work_mode(2)
        self.ps_dac.set_reference("INTERNAL")
        time.sleep(0.05)
        self.disable_psu_output()
        self.set_sample_rate(8)
        return "done"
