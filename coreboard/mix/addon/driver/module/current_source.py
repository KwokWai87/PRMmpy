# -*- coding: utf-8 -*-
from mix.driver.module.prm_mix_board import PRMMIXBoard
from mix.driver.ic.ad56x7r import PRMAD5667R as AD5667R
from mix.driver.ic.ads1115 import PRMADS1115 as ADS1115
from mix.driver.ic.cat24cxx import PRMCAT24C256 as CAT24C256

__author__ = 'Clark@PRM'
__version__ = 'v0.1'


class CurrentSourceDef:
    RETURN_DONE = True
    IIC_ADDR = {
        "cat24c256": [0x50],
        "ad5667R": [0x0F],
        "ads1115": [0x48],
    }

    RELAY_DELAY_S = 0.005

    PS_VOLTAGE_CHANNEL = "voltage"
    PS_CURRENT_CHANNEL = "current"
    PS_VOLTAGE_OUTPUT_CHANNEL = "volt_output"
    PS_CURRENT_OUTPUT_CHANNEL = "curr_output"

    RATES = [
        8, 16, 32, 64, 128, 250, 475, 860
    ]


psu_ccs_function_info = {

    CurrentSourceDef.PS_VOLTAGE_CHANNEL: {
        "ch": 0,
        "3000mv": {
            "coefficient": 1/1.0,
            "unit": "mV",
        }

    },
    CurrentSourceDef.PS_CURRENT_CHANNEL: {
        "ch": 3,
        "2100ma": {
            "coefficient": 1.0,
            "unit": "mA"
        }
    },
    CurrentSourceDef.PS_VOLTAGE_OUTPUT_CHANNEL: {
        "ch": 1,
        "coefficient": 1/1.0,
        "unit": "mV"
    },
    CurrentSourceDef.PS_CURRENT_OUTPUT_CHANNEL: {
        "ch": 0,
        "coefficient": 1/1.0,
        "unit": "mA"
    }

}

psu_ccs_calibration_info = {
    CurrentSourceDef.PS_VOLTAGE_CHANNEL: {
        "3000mv": {
            "level1": {"limit": [1000.0, "mV"], "unit_index": 7},
            "level2": {"limit": [3000.0, "mV"], "unit_index": 8}
        }
    },
    CurrentSourceDef.PS_CURRENT_CHANNEL: {
        "2100ma": {
            "level1": {"limit": [100.0, "mA"], "unit_index": 9},
            "level2": {"limit": [500.0, "mA"], "unit_index": 10},
            "level3": {"limit": [1000.0, "mA"], "unit_index": 11},
            "level4": {"limit": [1500.0, "mA"], "unit_index": 12},
            "level5": {"limit": [2100.0, "mA"], "unit_index": 13}
        }
    },
    CurrentSourceDef.PS_VOLTAGE_OUTPUT_CHANNEL: {

        "level1": {"limit": [1000.0, "mV"], "unit_index": 0},
        "level2": {"limit": [3000.0, "mV"], "unit_index": 1}

    },
    CurrentSourceDef.PS_CURRENT_OUTPUT_CHANNEL: {

        "level1": {"limit": [100.0, "mA"], "unit_index": 2},
        "level2": {"limit": [500.0, "mA"], "unit_index": 3},
        "level3": {"limit": [1000.0, "mA"], "unit_index": 4},
        "level4": {"limit": [1500.0, "mA"], "unit_index": 5},
        "level5": {"limit": [2100.0, "mA"], "unit_index": 6}

    }
}


class CCSException(Exception):
    def __init__(self, err_str):
        self.err_reason = '%s.' % err_str

    def __str__(self):
        return self.err_reason


class CurrentSource(PRMMIXBoard):
    """
    PRM Constant Current Source Module
    """
    rpc_public_api = ['reset', 'set_volt_limit', 'curr_output', 'curr_measure', 'volt_measure',
                      'get_sampling_rate', 'set_sampling_rate'] + PRMMIXBoard.rpc_public_api

    def __init__(self, i2c_bus=None, eeprom=None):
        if not eeprom:
            eeprom = CAT24C256(CurrentSourceDef.IIC_ADDR.get("cat24c256")[0], i2c_bus)
        super(CurrentSource, self).__init__(eeprom)
        self.ps_dac = AD5667R(CurrentSourceDef.IIC_ADDR.get("ad5667R")[0], i2c_bus)
        self.ps_adc = ADS1115(CurrentSourceDef.IIC_ADDR.get("ads1115")[0], i2c_bus, "fs1")
        self.measure_path = dict()

    def reset(self):
        """
        reset the module, the same function like  post_power_on_init
        :return:
        """
        return self._module_init()

    def post_power_on_init(self):
        """
        init module after power on
        :param timeout:
            int 0
        :return:
        """
        self._module_init()
    
    def _module_init(self):
        """
        PowerBoard initialization include cat9555 initialization, dac/adc parameter configuration
        :return: "done"
        """
        self.ps_dac.select_work_mode(2)
        self.ps_dac.set_reference("INTERNAL")
        self.set_sampling_rate(8)
        self.ps_dac.output_volt_dc(0, 0)
        self.ps_dac.output_volt_dc(1, 100)
        self.set_calibration_mode("cal")
        return CurrentSourceDef.RETURN_DONE

    def set_sampling_rate(self, rate=16):
        """
        Set power_supply sampling rate
        :param  channel: int(0-7), adc channel index
        :param  rate:    int(8/16/32/64/128/250/475/860), sample rate value
        :return: done
        :example:
                ads1115.set_ps_sampling_rate(128)
        """
        assert rate in CurrentSourceDef.RATES
        self.ps_adc.set_sampling_rate(0, rate)
        return CurrentSourceDef.RETURN_DONE

    def get_sampling_rate(self, channel):
        """
        Get power_supply sampling rate
        :param channel: int(0-7), adc channel index
        :return: int
        """
        assert 0 <= channel < 8
        return self.ps_adc.get_sampling_rate(channel)

    def _volt_to_target_unit(self, channel, volt, scope=None):
        """
        PowerSupply get target unit value (power_board_function_info) from measured voltage

        :param      channel:    string,  (m_volt/m_curr/volt_output/curr_output)
        :param      volt:       float,   the measured voltage by ad7175
        :returns:               string, 'done'
        :example:
                        inner function
        """
        assert channel in psu_ccs_function_info
        if scope:
            return volt * psu_ccs_function_info[channel][scope]['coefficient']
        else:
            return volt * psu_ccs_function_info[channel]['coefficient']
    
    def set_measure_path(self, channel, scope):
        """
        :param channel: voltage/current
        :param scope:
        :param :
        :return:
        """
        assert channel in (CurrentSourceDef.PS_VOLTAGE_CHANNEL, CurrentSourceDef.PS_CURRENT_CHANNEL)
        scope = str(scope).lower()
        curr_info = psu_ccs_function_info.get(channel)
        assert scope in curr_info
        self.measure_path.clear()
        self.measure_path[channel] = scope
        return True

    def get_measure_path(self):
        """
        Mimic get measure path.

        :returns:   dict, the key is channel, value is scope
        :example:
                    path = mimic.get_measure_path()
                    #print(path)
        """
        return self.measure_path

    def volt_measure(self):
        """
        powersupply measure voltage
        :example:
                target_value, unit = ps_volt_measure_mv()
        """
        channel = CurrentSourceDef.PS_VOLTAGE_CHANNEL
        self.set_measure_path(channel, "3000mv")
        measure_path = self.get_measure_path()
        if measure_path[channel] not in psu_ccs_function_info[channel]:
            raise CCSException('error voltage scope')
        scope = measure_path[channel]

        ch = psu_ccs_function_info.get(channel)["ch"]

        target_value = self.ps_adc.read_volt(ch)
        # print "raw value: {}".format(target_value)
        target_value = self._volt_to_target_unit(channel, target_value, scope)
        # print "value: {}".format(target_value)
        unit = psu_ccs_function_info.get(channel)[scope]["unit"]
        if self.is_use_cal_data():
            cal_infor = psu_ccs_calibration_info[channel][scope]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        return [target_value, unit]

    def curr_measure(self):
        """
        powersupply measure voltage
        :example:
                target_value, unit = ps_curr_measure_ma()
        """
        channel = CurrentSourceDef.PS_CURRENT_CHANNEL
        self.set_measure_path(channel, "2100ma")
        measure_path = self.get_measure_path()

        if measure_path[channel] not in psu_ccs_function_info[channel]:
            raise CCSException('error current scope')
        scope = measure_path[channel]  
        ch = psu_ccs_function_info.get(channel)["ch"]
        target_value = self.ps_adc.read_volt(ch)
        # print "raw_voltage: {}".format(target_value)
        target_value = self._volt_to_target_unit(channel, target_value, scope)
        # print "true_current: {}".format(target_value)
        unit = psu_ccs_function_info.get(channel)[scope]["unit"]
        if self.is_use_cal_data():
            cal_infor = psu_ccs_calibration_info[channel][scope]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        return [target_value, unit]

    def set_volt_limit(self, volt):
        """
        Set Current source voltage limit
        :param volt: float  [0~5000] mv
        :return: "done"
        """
        assert 0 <= volt <= 5000
        channel = CurrentSourceDef.PS_VOLTAGE_OUTPUT_CHANNEL
        ch = psu_ccs_function_info.get(channel)["ch"]
        target_value = volt
        if self.is_use_cal_data():
            cal_infor = psu_ccs_calibration_info[channel]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        target_value = self._volt_to_target_unit(channel, target_value)
        self.ps_dac.output_volt_dc(ch, target_value)
        return CurrentSourceDef.RETURN_DONE

    def curr_output(self, current):
        """
        power supply set current output
        :param current: float  [0~1000] ma
        :return: "done"
        """
        assert 0 <= current <= 2100
        channel = CurrentSourceDef.PS_CURRENT_OUTPUT_CHANNEL
        ch = psu_ccs_function_info.get(channel)["ch"]
        target_value = current
        if self.is_use_cal_data():
            cal_infor = psu_ccs_calibration_info[channel]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)

        target_value = 1000*(target_value/1001.0+0.025)
        # print "current_output: {}".format(target_value)
        self.ps_dac.output_volt_dc(ch, target_value)
        return CurrentSourceDef.RETURN_DONE

