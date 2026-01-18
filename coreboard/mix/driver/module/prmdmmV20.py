# -*- coding: utf-8 -*-
import time
import functools
import math
from functools import wraps
from mix.driver.module.prm_mix_board import PRMMIXBoard
from mix.driver.ic.cat9555 import PRMCAT9555
import sys
if sys.platform == "pyboard":
    from machine import Pin
    import ad717x
from mix.driver.ic.ad7175 import PLAD7175
from mix.driver.bus.soft_spi import SoftSPI

__version__ = 'v0.1'


def abstract(f):
    @wraps(f)
    def wrapper(*args, **kwargs):
        return f(*args, **kwargs)
    return wrapper


class DmmDef:
    RETURN_DONE = "done"
    IO_OFFSET = 0
    IO_PINS = 16
    ENABLE = 1
    DISABLE = 0
    VOLTAGE_CHANNEL = "ch1"
    CURRENT_CHANNEL = "ch0"
    RELAY_DELAY_S = 0.005
    SWITCH_DELAY = 0.1
    BASE_EXTEND_IIC = {
        "cat24c256": [0x50]
    }
    PWR_IIC_ADDR = {
        "cat9555": [0x21]
    }
    DFAULT_BITS = [(0, 0), (1, 0), (2, 0), (3, 0), (4, 0), (5, 0), (6, 0), (7, 0), (8, 0), (9, 0)]

    AD7175_CHANNELS = {"ch0", "ch1", "ch2", "ch3", "all", 0, 1, 2, 3}
    SAMPLING_CONFIG_TABLE_AD7175 = {5: 0x14,
                                    10: 0x13, 16.66: 0x12,
                                    20: 0x11, 49.96: 0x10,
                                    59.92: 0x0f, 100: 0x0e,
                                    200: 0x0d, 397.5: 0x0c,
                                    500: 0x0b, 1000: 0x0a,
                                    2500: 0x09, 5000: 0x08,
                                    10000: 0x07, 15625: 0x06,
                                    25000: 0x05, 31250: 0x04,
                                    50000: 0x03, 62500: 0x02,
                                    125000: 0x01, 250000: 0x00}

    DATALOGGER_CONFIG = {
        'dma_default_channel': 0,
        'memory_depth': 8,
        'read_len': 2048,
        'timeout': 60000
    }
    MB_SIZE = 1024 * 1024


dmm_function_info = {
    DmmDef.VOLTAGE_CHANNEL: {
        "ch": 1,
        "10mv": {
            "coefficient": 2/1000.0,
            "unit": "mv",
            "bits": [(1, 1), (2, 1), (3, 0), (4, 0), (5, 0), (6, 1), (7, 0), (8, 1), (9, 1)]
        },
        "100mv": {
            "coefficient": 2/100.0,
            "unit": "mv",
            "bits": [(1, 0), (2, 1), (3, 0), (4, 0), (5, 0), (6, 1), (7, 0), (8, 1), (9, 1)]
        },
        "1000mv": {
            "coefficient": 2/10.0,
            "unit": "mv",
            "bits": [(1, 1), (2, 0), (3, 0), (4, 0), (5, 0), (6, 1), (7, 0), (8, 1), (9, 1)]
        },
        "7000mv": {
            "coefficient": 2/1.0,
            "unit": "mv",
            "bits": [(1, 0), (2, 0), (3, 0), (4, 0), (5, 0), (6, 1), (7, 0), (8, 1), (9, 1)]
        }
    },
    DmmDef.CURRENT_CHANNEL: {
        "ch": 0,
        "10mv": {
            "coefficient": 2/1000.0,
            "unit": "mv",
            "bits": [(1, 0), (2, 0), (3, 1), (4, 1), (5, 0), (6, 1), (7, 1), (8, 0), (9, 1)]
        },
        "100mv": {
            "coefficient": 2/100.0,
            "unit": "mv",
            "bits": [(1, 0), (2, 0), (3, 0), (4, 1), (5, 0), (6, 1), (7, 1), (8, 0), (9, 1)]
        },
        "1000mv": {
            "coefficient": 2/10.0,
            "unit": "mv",
            "bits": [(1, 0), (2, 0), (3, 1), (4, 0), (5, 0), (6, 1), (7, 1), (8, 0), (9, 1)]
        },

        "7000mv": {
            "coefficient": 2/1.0,
            "unit": "mv",
            "bits": [(1, 0), (2, 0), (3, 0), (4, 0), (5, 0), (6, 1), (7, 1), (8, 0), (9, 1)]
        },
        "20ua": {
            "coefficient": 1.0/1000/200,
            "unit": "mA",
            "bits": [(0, 1), (1, 0), (2, 0), (3, 1), (4, 1), (5, 1), (6, 1), (7, 0), (8, 0), (9, 1)]
        },
        "200ua": {
            "coefficient": 1.0/100/200,
            "unit": "mA",
            "bits": [(0, 1), (1, 0), (2, 0), (3, 0), (4, 1), (5, 1), (6, 1), (7, 0), (8, 0), (9, 1)]
        },
        "500ua": {
            "coefficient": 1.0/10/200,
            "unit": "mA",
            "bits": [(0, 1), (1, 0), (2, 0), (3, 1), (4, 0), (5, 1), (6, 1), (7, 0), (8, 0), (9, 1)]
        },
        "2ma": {
            "coefficient": 1.0/10/200,
            "unit": "mA",
            "bits": [(0, 1), (1, 0), (2, 0), (3, 1), (4, 0), (5, 1), (6, 1), (7, 0), (8, 0), (9, 1)]
        },
        "5ma": {
            "coefficient": 1.0/100/(10.0*200/210),
            "unit": "mA",
            "bits": [(0, 0), (1, 0), (2, 0), (3, 0), (4, 1), (5, 1), (6, 1), (7, 0), (8, 0), (9, 1)]
        },
        "50ma": {
            "coefficient": 1.0/10/(10.0*200/210),
            "unit": "mA",
            "bits": [(0, 0), (1, 0), (2, 0), (3, 1), (4, 0), (5, 1), (6, 1), (7, 0), (8, 0), (9, 1)]
        }

    }
}

dmm_calibration_info = {

    DmmDef.CURRENT_CHANNEL: {

        "10mv": {
            "level1": {"limit": [10.0, "mV"], "unit_index": 4}
        },
        "100mv": {
            "level1": {"limit": [100.0, "mV"], "unit_index": 5}
        },
        "1000mv": {
            "level1": {"limit": [1000.0, "mV"], "unit_index": 6}
        },
        "7000mv": {
            "level1": {"limit": [7000.0, "mV"], "unit_index": 7}
        },
        "20ua": {
            "level1": {"limit": [0.02, "mA"], "unit_index": 8}
        },
        "200ua": {
            "level1": {"limit": [0.2, "mA"], "unit_index": 9}
        },
        "500ua": {
            "level1": {"limit": [0.5, "mA"], "unit_index": 10}
        },
        "2ma": {
            "level1": {"limit": [2.0, "mA"], "unit_index": 11}
        },
        "5ma": {
            "level1": {"limit": [5.0, "mA"], "unit_index": 12}
        },
        "50ma": {
            "level1": {"limit": [50.0, "mA"], "unit_index": 13}
        }
    },
    DmmDef.VOLTAGE_CHANNEL: {
        "10mv": {
            "level1": {"limit": [10.0, "mV"], "unit_index": 0}
        },
        "100mv": {
            "level1": {"limit": [100.0, "mV"], "unit_index": 1}
        },
        "1000mv": {
            "level1": {"limit": [1000.0, "mV"], "unit_index": 2}
        },
        "7000mv": {
            "level1": {"limit": [7000.0, "mV"], "unit_index": 3}
        }
    }
}


class PRMDMMException(Exception):
    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason


class PRM_DMMV20(PRMMIXBoard):
    """
    DMM function class

    :param      ad7175:     instance/None,  Class instance of AD7175, if not using this parameter, will create emulator
    :param      i2c_bus:    instance/None,  Class instance of CAT9555, if not using this parameter, will create emulator
    :param      base_entend_i2c:  instance/None,  Class instance of CAT9555, if not using this parameter, will create emulator
    :example:

                 dmm = DMM("/dev/MIX_DUT1_AD7175", "DMM_IIC","BASE_EXTEND_IIC")
    """

    rpc_public_api = ["reset", "set_measure_path", "get_measure_path", "voltage_measure_mv", "measure", "get_coefficient",
                      "get_cal_coefficient", "get_raw_samples", "read_ad7175_id"] + PRMMIXBoard.rpc_public_api

    def __init__(self, i2c_bus, eeprom, ad7175='SWSPI'):
        super(PRM_DMMV20, self).__init__(eeprom)
        if isinstance(ad7175, dict) and ad7175.get('spi') == "HWSPI":
            self.ad7175 = ad717x(ad7175.get('bus'), Pin(ad7175.get('cs')), Pin(ad7175.get('io')), ad7175.get('freq'))
        elif ad7175:
            self.ad7175 = ad7175 # PLAD7175(SoftSPI(("PB3", "PC12", "PC11", "PE4"), 1, 1, baudrate=5000000))
        self.cat9555 = PRMCAT9555(DmmDef.PWR_IIC_ADDR['cat9555'][0], i2c_bus)
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
        init dmm board ic mode
        This function will set cat9555 all pins to low level and set gain to 100.
        :return: str,'done';
        :example:
                self.module_init()
        """
        if hasattr(self.ad7175, 'ic_init'):
            self.ad7175.ic_init()
        self.cat9555.set_pins_dir([0x00, 0x00])
        self.cat9555.set_ports([0x00, 0x00])
        self.set_sampling_rate("ch0", 5)
        self.set_sampling_rate("ch1", 5)
        self._set_io_switch([[6, 1]])  # dmm enable
        self.set_calibration_mode('cal')
        return DmmDef.RETURN_DONE

    def _set_io_switch(self, io_list):
        """
        switch dmm cat9555 io; to change measure_path(channel,scope)
        :param io_list:     list,[(1, 0), (2, 0)]
        :return: bool "True/False";
        :example:
                self.set_io_switch([(1, 0), (2, 0)])
        """
        result = True
        for item in io_list:
            # assert isinstance(item, list)
            io, level = item
            assert io >= DmmDef.IO_OFFSET
            assert level in (0, 1)
            index, pin = divmod(io - DmmDef.IO_OFFSET, DmmDef.IO_PINS)
            self.cat9555.set_pin(pin, level)
            bit_level = self.cat9555.get_pin_state(pin)
            if bit_level != level:
                result = False
        return result

    def _volt_to_target_unit(self, channel, scope, volt):
        """
        Mimic get target unit value (mimic_function_info) from measured voltage

        :param      channel:    string,  (voltage/current/resistor/diode)
        :param      scope:      string,  the range of channel measure
        :param      volt:       float,   the measured voltage by ad7175
        :returns:               string, 'done'
        :example:
                        inner function
        """
        channel = str(channel).lower()
        scope = str(scope).lower()
        assert channel in dmm_function_info
        assert scope in dmm_function_info[channel]
        return volt * dmm_function_info[channel][scope]['coefficient']

    def get_coefficient(self, channel, scope):
        """
        get dmm measure path scope coefficient
        """
        assert channel in (DmmDef.CURRENT_CHANNEL, DmmDef.VOLTAGE_CHANNEL)
        assert scope in dmm_function_info[DmmDef.CURRENT_CHANNEL].keys() or \
               scope in dmm_function_info[DmmDef.VOLTAGE_CHANNEL].keys()
        return dmm_function_info[channel][scope]['coefficient']

    def get_cal_coefficient(self, channel, scope):
        """
        get dmm measure path scope calibration gain and offset
        only use for one level1

        return {"gain": 1.0, "offset": 0.0, "threshold": 0.0, "is_use": True/False}
        """
        assert channel in (DmmDef.CURRENT_CHANNEL, DmmDef.VOLTAGE_CHANNEL)
        assert scope in dmm_calibration_info[DmmDef.CURRENT_CHANNEL].keys() or \
               scope in dmm_calibration_info[DmmDef.VOLTAGE_CHANNEL].keys()
        index = dmm_calibration_info[channel][scope]['level1']['unit_index']
        return self.read_calibration_cell(index) 

    def set_measure_path(self, channel, scope, delay_time=DmmDef.RELAY_DELAY_S):
        """
        set DMM measuring range before measure
        :param channel: string,  (ch0/ch1)
        :param scope:  string,  (10mv/100mv/1000mv/10000mv/25ua/250ua/500ua/2.5ma/5ma/25ma/50ma/500ma)
        :param delay_time:
        :return: string ï¼?'done'/'error'
        example: set_measure_path(ch1,1000mv)
                 set_measure_path(ch0,50ma)
        """
        channel = str(channel).lower()
        scope = str(scope).lower()
        assert channel in dmm_function_info
        assert scope in dmm_function_info[channel]

        bits = dmm_function_info[channel][scope]['bits']
        if not self._set_io_switch(bits):
            return "error"
        time.sleep(delay_time)
        self.measure_path.clear()
        self.measure_path[channel] = scope
        return DmmDef.RETURN_DONE

    def get_measure_path(self):
        """
        get current DMM measuring range

        :return: dictï¼Œ{'ch1':'1000mv'}
        """
        return self.measure_path

    def _single_measure(self, channel):
        """
        Measure once; if want to measure res,must use channel ch0, (R = U/I),
        only ch0 can measure current
        :example:
                volt = self._single_measure(ch1)
        """
        channel = str(channel).lower()
        assert channel in dmm_function_info.keys()
        measure_path = self.get_measure_path()
        if channel not in measure_path:
            raise PRMDMMException('error voltage channel')
        if measure_path[channel] not in dmm_function_info[channel]:
            raise PRMDMMException('error voltage scope')
        adc_channel = dmm_function_info.get(channel)["ch"]
        target_value = self.ad7175.read_volt(adc_channel)

        target_value = self._volt_to_target_unit(channel, measure_path[channel], target_value)
        unit = dmm_function_info[channel][measure_path[channel]]['unit']
        if self.is_use_cal_data() and channel in dmm_function_info.keys() and \
                measure_path[channel] in dmm_function_info[channel]:
            cal_infor = dmm_calibration_info[channel].get(measure_path[channel])
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)

        return [target_value, unit]

    def set_sampling_rate(self, channel, sampling_rate):
        """
        PSU  set sampling rate

        In this project we can set the rate to 20Hzï½?50Hz,because we just use it to measure dc voltage

        :param channel: There Two channels in Hardware
            :type: int(0/1), 0 for voltage, 1 for voltage or resistance
        :param sampling_rate
            :type: int(5/10/20/100/200/1000/5000/10000/25000/50000/125000/250000), adc measure sampling rate), adc measure sampling rate
        :return:"done"
            :rtype: str;

        :example:
                self.set_adc_sampling_rate(0, 10000); 0 for ch0
                self.set_adc_sampling_rate(1, 10000); 1 for ch1
        """
        channel = str(channel).lower()
        assert channel in (DmmDef.CURRENT_CHANNEL, DmmDef.VOLTAGE_CHANNEL)
        assert 5 <= sampling_rate <= 250000
        ch = dmm_function_info.get(channel)["ch"]
        self.ad7175.set_sampling_rate(ch, sampling_rate)
        return DmmDef.RETURN_DONE
    
    def voltage_measure_mv(self):
        """
        ch1 measure voltage once,only for ch1;
        :example:
                volt = self.voltage_measure_mv()
        """
        measure_path = self.get_measure_path()
        if DmmDef.VOLTAGE_CHANNEL not in measure_path:
            raise PRMDMMException('error current channel')
        if measure_path[DmmDef.VOLTAGE_CHANNEL] not in \
                dmm_function_info[DmmDef.VOLTAGE_CHANNEL]:
            raise PRMDMMException("error current scope")
        return self._single_measure(DmmDef.VOLTAGE_CHANNEL)

    def measure(self):
        """
        ch0 measure voltage or current once,only for ch0;
        :example:
        curr = self.measure()
        """
        measure_path = self.get_measure_path()
        if DmmDef.CURRENT_CHANNEL not in measure_path:
            raise PRMDMMException('error current channel')
        if measure_path[DmmDef.CURRENT_CHANNEL] not in \
                dmm_function_info[DmmDef.CURRENT_CHANNEL]:
            raise PRMDMMException("error current scope")
        return self._single_measure(DmmDef.CURRENT_CHANNEL)

    def get_raw_samples(self, channel, points, sample_rate=None):
        """
        continuously sampling

        Args:
            channel: str ch0/ch1, ch0 for voltage channel, ch1 for current channel
            points: 1ï½?512
            sample_rate: int  5/10/20/100/200/500/1000/2500/5000/10000/25000/50000/125000/250000
        Returns:
            list,        the list contains two elements,one is the raw data list,the other is unit
        Examples:
                result = get_raw_samples("ch0",512,10000)
        """
        assert channel in (DmmDef.VOLTAGE_CHANNEL, DmmDef.CURRENT_CHANNEL)
        assert isinstance(points, int) and points >= 1
        assert sample_rate in DmmDef.SAMPLING_CONFIG_TABLE_AD7175.keys()
        if channel == 'ch0':
            channel = 0
        else:
            channel = 1
        target_data = self.ad7175.datalogger(channel, sample_rate, points)
        return target_data

    def read_ad7175_id(self):
        """
        Check battery adc communication via ad7175

        Returns:
            bool True/False
        Examples:
                read_ad7175_id()
        """
        return self.ad7175.is_communication_ok()


