# -*- coding: utf-8 -*-

import sys
if sys.platform == "pyboard":
    from machine import Pin
    import ad717x
import time
from mix.driver.ic.ad7175 import PLAD7175
from mix.driver.module.prm_mix_board import PRMMIXBoard
from mix.driver.ic.cat9555 import PRMCAT9555
from mix.driver.ic.ad56x7r import PRMAD5667R
from mix.driver.ic.ad7175 import PLAD7175
from mix.driver.ic.ads1115 import PRMADS1115
from mix.driver.bus.soft_spi import SoftSPI


__author__ = 'Clark@PRM'
__version__ = 'v1.4'


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
        "cat9555": [0x21],
        "ad5667R": [0x0e, 0x0f],
        "ads1115": [0x48],
    }
    BASE_EXTEND_IIC = {
        "cat24c256": [0x50]
    }

    RATES = [
        8, 16, 32, 64, 128, 250, 475, 860
    ]

    SCOPE_DEFAULT_BITS = [(1, 0), (2, 0), (6, 0), (7, 0), (11, 1)]
    SCOPE_DEFAULT_DELAY = 0.05

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
    },
    PowerBoardDef.BATTERY: {
        PowerBoardDef.BAT_VOLTAGE_OUTPUT_CHANNEL: {
            "ch": 1,
            "coefficient": 1,
            "unit": "mV",
        },
        PowerBoardDef.BAT_CURRENT_OUTPUT_CHANNEL: {
            "ch": 0,
            "coefficient": 5.0,
            "unit": "mA",
        },
        PowerBoardDef.BAT_VOLTAGE_CHANNEL: {
            "ch": 0,
            "500mv": {
                "coefficient": 1,
                "unit": "mV",
            },
            "2500mv": {
                "coefficient": 1,
                "unit": "mV",
            },
            "5000mv": {
                "coefficient": 1,
                "unit": "mV",
            }
        },
        PowerBoardDef.EX_VOLTAGE_CHANNEL: {
            "ch": 1,
            "5mv": {
                "coefficient": 1.0 / 1000,
                "unit": "mV",
                "bits": [(1, 1), (2, 1), (6, 1), (7, 1), (11, 1), (12, 0)],
            },
            "50mv": {
                "coefficient": 1.0 / 100,
                "unit": "mV",
                "bits": [(1, 0), (2, 1), (6, 1), (7, 1), (11, 1), (12, 0)],
            },
            "500mv": {
                "coefficient": 1.0 / 10,
                "unit": "mV",
                "bits": [(1, 1), (2, 0), (6, 1), (7, 1), (11, 1), (12, 0)],
            },
            "5000mv": {
                "coefficient": 1.0,
                "unit": "mV",
                "bits": [(1, 0), (2, 0), (6, 1), (7, 1), (11, 1), (12, 0)],
            }
        },
        PowerBoardDef.BAT_CURRENT_CHANNEL: {
            "ch": 1,
            "1ua": {
                "coefficient": 1.0 / 100 / 24900,
                "unit": "mA",
                "bits": [(1, 0), (2, 1), (6, 0), (7, 1), (11, 1), (12, 1)],
            },
            "10ua": {
                "coefficient": 1.0 / 10 / 24900,
                "unit": "mA",
                "bits": [(1, 1), (2, 0), (6, 0), (7, 1), (11, 1), (12, 1)],
            },
            "100ua": {
                "coefficient": 1.0 / 100 / ((24900 * 500) / (24900 + 500)),
                "unit": "mA",
                "bits": [(1, 0), (2, 1), (6, 0), (7, 1), (11, 1), (12, 0)],
            },
            "1ma": {
                "coefficient": 1.0 / 10 / ((24900 * 500) / (24900 + 500)),
                "unit": "mA",
                "bits": [(1, 1), (2, 0), (6, 0), (7, 1), (11, 1), (12, 0)],
            },
            "5ma": {
                "coefficient": 1.0 / 1000 / 1,
                "unit": "mA",
                "bits": [(1, 1), (2, 1), (6, 1), (7, 0), (11, 1), (12, 0)],
            },
            "50ma": {
                "coefficient": 1.0 / 100 / 1,
                "unit": "mA",
                "bits": [(1, 0), (2, 1), (6, 1), (7, 0), (11, 1), (12, 0)],
            },
            "500ma": {
                "coefficient": 1.0 / 10 / 1,
                "unit": "mA",
                "bits": [(1, 1), (2, 0), (6, 1), (7, 0), (11, 1), (12, 0)],
            },
            "650ma": {
                "coefficient": 1.0 / 1 / 1,
                "unit": "mA",
                "bits": [(1, 0), (2, 0), (6, 1), (7, 0), (11, 1), (12, 0)],
            },
            "5mv": {
                "coefficient": 1.0 / 1000,
                "unit": "mV",
                "bits": [(1, 1), (2, 1), (6, 1), (7, 1), (11, 1), (12, 0)],
            },
            "50mv": {
                "coefficient": 1.0 / 100,
                "unit": "mV",
                "bits": [(1, 0), (2, 1), (6, 1), (7, 1), (11, 1), (12, 0)],
            },
            "500mv": {
                "coefficient": 1.0 / 10,
                "unit": "mV",
                "bits": [(1, 1), (2, 0), (6, 1), (7, 1), (11, 1), (12, 0)],
            },
            "5000mv": {
                "coefficient": 1.0,
                "unit": "mV",
                "bits": [(1, 0), (2, 0), (6, 1), (7, 1), (11, 1), (12, 0)],
            }
        }

    }
}

power_board_calibration_info = {
    PowerBoardDef.CHARGE: {
        PowerBoardDef.PS_VOLTAGE_OUTPUT_CHANNEL: {
            "7500mv": {
                "level1": {"limit": [100.0, "mV"], "unit_index": 21},
                "level2": {"limit": [1000.0, "mV"], "unit_index": 22},
                "level3": {"limit": [7500.0, "mV"], "unit_index": 23}
            }
        },
        PowerBoardDef.PS_CURRENT_OUTPUT_CHANNEL: {
            "level1": {"limit": [50.0, "mA"], "unit_index": 48},
            "level2": {"limit": [500.0, "mA"], "unit_index": 31}
        },
        PowerBoardDef.PS_VOLTAGE_CHANNEL: {
            "7500mv": {
                "level1": {"limit": [100.0, "mV"], "unit_index": 24},
                "level2": {"limit": [500.0, "mV"], "unit_index": 25},
                "level3": {"limit": [7500.0, "mV"], "unit_index": 26}
            }
        },
        PowerBoardDef.PS_CURRENT_CHANNEL: {
            "1000ma": {
                "level1": {"limit": [10.0, "mA"], "unit_index": 27},
                "level2": {"limit": [50.0, "mA"], "unit_index": 28},
                "level3": {"limit": [200.0, "mA"], "unit_index": 29},
                "level4": {"limit": [1000.0, "mA"], "unit_index": 30}
            }
        }
    },
    PowerBoardDef.BATTERY: {
        PowerBoardDef.BAT_CURRENT_CHANNEL: {
            "1ua": {
                "level1": {"limit": [-0.001, "mA"], "unit_index": 45},
                "level2": {"limit": [0.001, "mA"], "unit_index": 46},
            },
            "10ua": {
                "level1": {"limit": [-0.01, "mA"], "unit_index": 11},
                "level2": {"limit": [0.01, "mA"], "unit_index": 4},

            },
            "100ua": {
                "level1": {"limit": [-0.1, "mA"], "unit_index": 12},
                "level2": {"limit": [0.1, "mA"], "unit_index": 5}
            },
            "1ma": {
                "level1": {"limit": [-0.5, "mA"], "unit_index": 40},
                "level2": {"limit": [-1, "mA"], "unit_index": 13},
                "level3": {"limit": [0.5, "mA"], "unit_index": 39},
                "level4": {"limit": [1, "mA"], "unit_index": 6}
            },
            "5ma": {
                "level1": {"limit": [-2, "mA"], "unit_index": 47},
                "level2": {"limit": [-5.0, "mA"], "unit_index": 14},
                "level3": {"limit": [2, "mA"], "unit_index": 32},
                "level4": {"limit": [5.0, "mA"], "unit_index": 7}
            },
            "50ma": {
                "level1": {"limit": [-10.0, "mA"], "unit_index": 42},
                "level2": {"limit": [-50.0, "mA"], "unit_index": 15},
                "level3": {"limit": [10.0, "mA"], "unit_index": 41},
                "level4": {"limit": [50.0, "mA"], "unit_index": 8}
            },
            "500ma": {
                "level1": {"limit": [-500.0, "mA"], "unit_index": 16},
                "level2": {"limit": [-100.0, "mA"], "unit_index": 44},
                "level3": {"limit": [100.0, "mA"], "unit_index": 43},
                "level4": {"limit": [500.0, "mA"], "unit_index": 9}
            },
            "650ma": {
                "level1": {"limit": [-650.0, "mA"], "unit_index": 17},
                "level2": {"limit": [650.0, "mA"], "unit_index": 10}
            }},
        "ex_voltage": {
            "5mv": {
                "level1": {"limit": [5.0, "mV"], "unit_index": 33},
            },
            "50mv": {
                "level1": {"limit": [50.0, "mV"], "unit_index": 34},
            },
            "500mv": {
                "level1": {"limit": [500.0, "mV"], "unit_index": 35},
            },
            "5000mv": {
                "level1": {"limit": [5000.0, "mV"], "unit_index": 36},
            }
        },
        PowerBoardDef.BAT_CURRENT_OUTPUT_CHANNEL: {
            "level1": {"limit": [50.0, "mA"], "unit_index": 18},
            "level2": {"limit": [100.0, "mA"], "unit_index": 19},
            "level3": {"limit": [500.0, "mA"], "unit_index": 20}
        },
        PowerBoardDef.BAT_VOLTAGE_OUTPUT_CHANNEL: {
            "5000mv": {
                "level1": {"limit": [500.0, "mV"], "unit_index": 0},
                "level2": {"limit": [2500.0, "mV"], "unit_index": 37},
                "level3": {"limit": [5000.0, "mV"], "unit_index": 1}
            }
        },
        PowerBoardDef.BAT_VOLTAGE_CHANNEL: {
            "500mv": {
                "level1": {"limit": [500.0, "mV"], "unit_index": 2},
            },
            "2500mv": {
                "level1": {"limit": [2500.0, "mV"], "unit_index": 38},
            },
            "5000mv": {
                "level1": {"limit": [5000.0, "mV"], "unit_index": 3}
            }
        }
    }
}


class PowerBoardException(Exception):
    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason


class Odin(PRMMIXBoard):
    """
    Odin function class is charger and battery emulation module driver，internal ADC resolution is 24 bit.24


    compatible = ["H3J-P128-1-102"]

    It can be used as high performace PowerSupply and battery emulator

    :param   power_iic:  Instance(I2C),         if None, invoke I2CBus emulator.
    :param   power_spi:  Instance(MIXDAQT1),    if None, invoke MIXDAQT1 emulator.
    :param   eeprom:     Instance(CAT24C256),   if None, invoke CAT24C256 emulator.


    Examples:
        # normal init
        power_iic = I2C('/dev/i2c-2')
        axi4_bus = AXI4LiteBus(/dev/MIX_DAQT1_0, 65535)
        ad7175 = PLAD7175(axi4_bus='/dev/MIX_AD717X_0', mvref=5000, clock="internal")
        iic_eeprom = I2C(/dev/i2c-10)
        eeprom = CAT24C256(80, iic_eeprom)
        odin = Odin(power_iic, ad7175, eeprom)
        odin.module_init()

    """
    rpc_public_api = ['reset', 'enable_battery_output', 'disable_battery_output', 'ex_voltage_measure',
                      'enable_charger_output', 'disable_charger_output', 'set_sample_rate', 'get_sample_rate',
                      'set_measure_path', 'get_measure_path', 'get_raw_samples', 'set_reference_mode',
                      'get_reference_mode', 'set_current_limit', 'get_current_limit', 'voltage_measure',
                      'current_measure', 'voltage_sample', 'current_sample', 'set_measure_path_to_default',
                      'read_ad7175_id', 'ps_volt_output', 'ps_curr_output', 'bat_volt_output', 'bat_curr_output',
                      'enable_sense', 'disable_sense', 'multi_bat_measure'
                      ] + PRMMIXBoard.rpc_public_api

    def __init__(self, power_iic=None, eeprom=None, ad7175=None):
        super(Odin, self).__init__(eeprom)
        self.cat9555 = PRMCAT9555(PowerBoardDef.PWR_IIC_ADDR.get("cat9555")[0], power_iic)
        self.bat_dac = PRMAD5667R(PowerBoardDef.PWR_IIC_ADDR.get("ad5667R")[0], power_iic, "INTERNAL", 2500.0)
        self.ps_dac = PRMAD5667R(PowerBoardDef.PWR_IIC_ADDR.get("ad5667R")[1], power_iic, "INTERNAL", 2500.0)
        self.ads1115 = PRMADS1115(PowerBoardDef.PWR_IIC_ADDR.get("ads1115")[0], power_iic, "fs1")
        if isinstance(ad7175, dict) and ad7175.get('spi') == "HWSPI":
            self.ad7175 = ad717x(ad7175.get('bus'), Pin(ad7175.get('cs')), Pin(ad7175.get('io')), ad7175.get('freq'))
        elif ad7175:
            self.ad7175 = ad7175 # PLAD7175(SoftSPI(("PB13", "PB15", "PB14", "PF10"), 1, 1, baudrate=500000))
        self.measure_path = dict()
        self.current_limit = dict()
        self.continue_sample_mode = None
        self.dam_init_flag = False
        self.enable_continuous_measure_flag = False

    def reset(self):
        """
        reset the module, the same function like  post_power_on_init
        :param timeout:
            int 0
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
        if self.enable_continuous_measure_flag:
            self._disable_continuous_measure('ch0')
            self._disable_continuous_measure('ch1')
        self.ps_dac.select_work_mode(2)
        self.bat_dac.select_work_mode(2)
        self.cat9555.set_pins_dir([0x00, 0x00])
        self.cat9555.set_ports([0x00, 0x00])
        self.bat_dac.set_reference("INTERNAL")
        self.ps_dac.set_reference("INTERNAL")
        self.set_sample_rate(PowerBoardDef.BATTERY, 5)
        self.set_sample_rate(PowerBoardDef.CHARGE, 8)
        self.bat_dac.output_volt_dc(2, 0)
        self.ps_dac.output_volt_dc(2, 0)
        if hasattr(self.ad7175, 'ic_init'):
            self.ad7175.ic_init()
        # todo hwspi ad7175 auto set_setup_register ?
        # self.ad7175.set_setup_register("ch0", "bipolar", "extern", "enable")
        # self.ad7175.set_setup_register("ch1", "bipolar", "extern", "enable")
        self.set_calibration_mode('cal')
        return PowerBoardDef.RETURN_DONE

    def get_driver_version(self):
        """
        Odin version
        :return:
            str 'v1.4'
        """
        return __version__

    def enable_battery_output(self, voltage, sense_flag=True):
        """
        Enable battery output

        Args: voltage: int   0~4500  unit is mV
        Returns: done
        Examples:
                enable_battery_output(3800)
        """
        if sense_flag:
            self._set_io_switch(PowerBoardDef.BAT_SENSE_ADD.get("enable"))
        self._set_io_switch(PowerBoardDef.BAT_OUTPUT_ENABLE_PIN.get("enable"))
        time.sleep(PowerBoardDef.RELAY_DELAY_S)
        self.bat_volt_output(voltage)
        return PowerBoardDef.RETURN_DONE

    def disable_battery_output(self):
        """
        Disable battery output

        Returns:
            done
        Examples:
                disable_battery_output()
        """
        self.bat_volt_output(0)
        time.sleep(PowerBoardDef.RELAY_DELAY_S)
        self._set_io_switch(PowerBoardDef.BAT_SENSE_ADD.get("disable"))
        self._set_io_switch(PowerBoardDef.BAT_OUTPUT_ENABLE_PIN.get("disable"))
        return PowerBoardDef.RETURN_DONE


    def enable_charger_output(self, voltage):
        """
        Enable charger output

        Args:
            voltage: int   0~7500  unit is mV
        Returns:
            done
        Examples:
                enable_charger_output(5000)
        """
        self._set_io_switch(PowerBoardDef.PS_SENSE_ENABLE_PIN.get("enable"))
        self._set_io_switch(PowerBoardDef.PS_OUTPUT_ENABLE_PIN.get("enable"))
        time.sleep(PowerBoardDef.RELAY_DELAY_S)
        self.ps_volt_output(voltage)
        return PowerBoardDef.RETURN_DONE

    def disable_charger_output(self):
        """
        Disable charger output

        Returns:
            done
        Examples:
                disable_charger_output()
        """
        self.ps_volt_output(0)
        time.sleep(PowerBoardDef.RELAY_DELAY_S)
        self._set_io_switch(PowerBoardDef.PS_SENSE_ENABLE_PIN.get("disable"))
        self._set_io_switch(PowerBoardDef.PS_OUTPUT_ENABLE_PIN.get("disable"))
        return PowerBoardDef.RETURN_DONE

    def enable_sense(self, module):
        """
        Enable sense

        Args: module: battery/charger
        Returns: done
        Examples:
                enable_sense(battery)
        """
        assert module in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if module == PowerBoardDef.BATTERY:
            self._set_io_switch(PowerBoardDef.BAT_SENSE_ADD.get("enable"))
        else:
            self._set_io_switch(PowerBoardDef.PS_SENSE_ENABLE_PIN.get("enable"))
        return PowerBoardDef.RETURN_DONE

    def disable_sense(self, module):
        """
        Disable sense

        Args: module: battery/charger
        Returns: done
        Examples:
                disable_sense(battery)
        """
        assert module in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if module == PowerBoardDef.BATTERY:
            self._set_io_switch(PowerBoardDef.BAT_SENSE_ADD.get("disable"))
        else:
            self._set_io_switch(PowerBoardDef.PS_SENSE_ENABLE_PIN.get("disable"))
        return PowerBoardDef.RETURN_DONE

    def set_sample_rate(self, ch_type, sample_rate):
        """
        Set sampling rate

        Args:  ch_type: str   battery/charger
               sample_rate: int (battery:5/10/20/100/200/500/1000/2500/5000/10000/25000/50000/125000/250000
                                  charger:8/16/32/64/128/250/475/860)
        Returns:
               done
        Examples:
                set_sample_rate("battery", 1000)
                set_sample_rate("chagger", 16)
        """
        assert ch_type in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if ch_type == PowerBoardDef.BATTERY:
            assert sample_rate in PowerBoardDef.SAMPLING_CONFIG_TABLE_AD7175.keys()
            self.ad7175.set_sampling_rate(0, sample_rate)
            self.ad7175.set_sampling_rate(1, sample_rate)
        else:
            assert sample_rate in PowerBoardDef.RATES
            self.ads1115.set_sampling_rate(0, sample_rate)
        return PowerBoardDef.RETURN_DONE

    def get_sample_rate(self, ch_type):
        """
        Get power_supply sampling rate

        Args:
            ch_type: str   battery/charger
        Returns:
            int
        Examples:
                sample_rate = get_sample_rate("battery")
                sample_rate = get_sample_rate("charger")
        """
        rate = 0
        assert ch_type in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if ch_type == PowerBoardDef.BATTERY:
            rate = self.ad7175.get_sampling_rate(0)
        else:
            rate = self.ads1115.get_sampling_rate(0)
        return rate

    def set_measure_path(self, ch_type, channel, scope):
        """
        Battery set measure path

        :param ch_type: str   battery/charger/ex_voltage
        :param channel: str   ch0/ch1/ex_voltage, ch0 for voltage channel, ch1 for current channel
        :param scope: str (50ua/500ua/5ma/50ma/500ma/650ma/5mv/50mv/500mv/5000mv)
        :return: done
        :example:
                set_measure_path("battery","ch0","5000mv")
                set_measure_path("battery","ch1","500ma")
        """
        assert ch_type in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if ch_type == PowerBoardDef.BATTERY:
            assert channel in (PowerBoardDef.BAT_CURRENT_CHANNEL, PowerBoardDef.BAT_VOLTAGE_CHANNEL,
                               PowerBoardDef.EX_VOLTAGE_CHANNEL)
            scope = str(scope).lower()
            battery_info = power_board_function_info.get("battery")
            curr_info = battery_info.get(channel)
            assert scope in curr_info
            bits = curr_info[scope].get("bits")
            if bits:
                if not self._set_io_switch(bits):
                    return False
                time.sleep(PowerBoardDef.RELAY_DELAY_S)
            self.measure_path.clear()
            self.measure_path[channel] = scope
        return PowerBoardDef.RETURN_DONE

    def get_measure_path(self, ch_type):
        """
        Battery get measure path.

        Args:
               ch_type: str   battery
        returns:
               dict, the key is channel, value is scope
        Examples:
                m_path = get_measure_path("battery")
        """
        assert ch_type in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        m_path = dict()
        if ch_type == PowerBoardDef.BATTERY:
            m_path = self.measure_path
        return m_path

    def get_raw_samples(self, channel, points, sample_rate=None):
        """
        Only battery support continuously sampling

        Args:
            channel: str ch0/ch1, ch0 for voltage channel, ch1 for current channel
            points: 1~512
            sample_rate: int  5/10/20/100/200/500/1000/2500/5000/10000/25000/50000/125000/250000
        Returns:
            list,        the list contains two elements,one is the raw data list,the other is unit
        Examples:
                result = get_raw_samples("ch0",512,10000)
        """
        module = PowerBoardDef.BATTERY
        channel = str(channel).lower()
        assert channel in (PowerBoardDef.BAT_CURRENT_CHANNEL, PowerBoardDef.BAT_VOLTAGE_CHANNEL)
        assert isinstance(points, int) and points >= 1
        assert sample_rate in PowerBoardDef.SAMPLING_CONFIG_TABLE_AD7175.keys()
        if channel == 'ch0':
            channel = 0
        else:
            channel = 1
        target_data = self.ad7175.datalogger(channel, sample_rate, points)
        return target_data

    def set_reference_mode(self, dac_name, mode="EXTERN"):
        """
        Odin set reference mode

        Args:
            dac_name: str   battery/charger
            mode: str   EXTERN/INTERNAL
        Returns:
            done
        Examples:
                set_reference_mode("battery","EXTERN")
        """
        assert dac_name in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        assert mode in ["EXTERN", "INTERNAL"]
        if dac_name == PowerBoardDef.BATTERY:
            self.bat_dac.set_reference(mode)
        else:
            self.ps_dac.set_reference(mode)
        return PowerBoardDef.RETURN_DONE

    def get_reference_mode(self, dac_name):
        """
        Odin get reference mode

        Args:
            dac_name: str   battery/charger
        Returns:
            str EXTERN/INTERNAL
        Examples:
                mode = get_reference_mode("battery")
        """
        assert dac_name in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if dac_name == PowerBoardDef.BATTERY:
            mode = self.bat_dac.ref_mode
        else:
            mode = self.ps_dac.ref_mode
        return mode

    def set_current_limit(self, dac_name, threshold):
        """
        Odin current limit set

        Args:
            dac_name: str   battery/charger
            threshold: int  0~1000(for battery) 0~600(for charger)  unit is mA
        Returns:
            done
        Examples:
                set_current_limit("battery",500)
        """
        assert dac_name in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        self.current_limit.clear()
        if dac_name == PowerBoardDef.BATTERY:
            self.bat_curr_output(threshold)
            self.current_limit.setdefault(PowerBoardDef.BATTERY, threshold)
        else:
            self.ps_curr_output(threshold)
            self.current_limit.setdefault(PowerBoardDef.CHARGE, threshold)
        return PowerBoardDef.RETURN_DONE

    def get_current_limit(self, dac_name):
        """
        Odin current limit get

        Args:
            dac_name: str   battery/charger
        Returns:
            int
        Examples:
                limit = get_current_limit("battery")
        """
        assert dac_name in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        limit = self.current_limit.get(dac_name)
        return limit if limit else 0

    def voltage_measure(self, ch_type):
        """
        Odin voltage measure

        Args:
            ch_type: str   battery/charger
        Returns:
            float
        Examples:
                voltage,unit = voltage_measure("battery")
        """
        assert ch_type in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if ch_type == PowerBoardDef.BATTERY:
            return self.single_bat_voltage_measure()
        else:
            return self.ps_volt_measure_mv()

    def current_measure(self, ch_type):
        """
        Odin current measure

        Args:
            ch_type: str   battery/charger
        Returns:
            float
        Examples:
                current,unit = current_measure("battery")
        """
        assert ch_type in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        if ch_type == PowerBoardDef.BATTERY:
            return self.single_bat_current_measure()
        else:
            return self.ps_curr_measure_ma()

    def voltage_sample(self, points, raw=0, sample_rate=None):
        """
        Battery get continuous voltage measure result

        Args:
            points: int (1~512)
            raw: bool True/False
            sample_rate: int 5/10/20/100/200/500/1000/2500/5000/10000/25000/50000/125000/250000
        Returns:
            dict   the dict contains rms,avr,max,min,vpp,result
        Examples:
                result = voltage_sample(512,True,10000)
        """
        channel = PowerBoardDef.BAT_VOLTAGE_CHANNEL
        result = self._measure_continues(channel, points, raw, sample_rate)
        return result

    def current_sample(self, points, raw=0, sample_rate=None):
        """
        Battery get continuous current measure result

        Args:
            points: int (1~512)
            raw: bool True/False
            sample_rate: int 5/10/20/100/200/500/1000/2500/5000/10000/25000/50000/125000/250000
        Returns:
            dict   the dict contains rms,avr,max,min,vpp,result
        Examples:
                result = current_sample(512,True,10000)
        """
        channel = PowerBoardDef.BAT_CURRENT_CHANNEL
        result = self._measure_continues(channel, points, raw, sample_rate)
        return result

    def set_measure_path_to_default(self):
        """
        Odin set measure path to default

        Returns:
            bool True/False
        Examples:
                set_measure_path_to_default()
        """
        return self._set_io_switch(PowerBoardDef.SCOPE_DEFAULT_BITS)

    def read_ad7175_id(self):
        """
        Check battery adc communication via ad7175

        Returns:
            bool True/False
        Examples:
                read_ad7175_id()
        """
        return self.ad7175.is_communication_ok()

    def _set_io_switch(self, io_list):
        """
        switch cat9555 io
        set io switch

        Args:
            io_list:     list,[[9,1],[10,0],[12,1]]
        Returns:
            bool True/False;
        Examples:
                self.set_io_switch([[9,1],[10,1],[11,0],[12,1]])
                self.set_io_switch([[9,0]])
        """
        result = True
        for item in io_list:
            # assert isinstance(item, tuple)
            io, level = item
            assert io >= PowerBoardDef.IO_OFFSET
            assert level in (0, 1)
            index, pin = divmod(io - PowerBoardDef.IO_OFFSET, PowerBoardDef.IO_PINS)
            self.cat9555.set_pin(pin, level)
            bit_level = self.cat9555.get_pin_state(pin)
            if bit_level != level:
                result = False
        return result

    def _measure_continues(self, channel, count, raw=0, sample_rate=None):
        # AD717XDef.SAMPLING_CONFIG_TABLE_AD7175
        if sample_rate:
            assert sample_rate in PowerBoardDef.SAMPLING_CONFIG_TABLE_AD7175.keys()
            rate = sample_rate
        else:
            rate = self.get_sample_rate(PowerBoardDef.BATTERY)

        target_data = self.multi_bat_measure(channel, count, raw, sample_rate)

        index_list = list()
        last_value = target_data[0][0]
        for i in range(len(target_data[0]))[1:-1]:
            if target_data[0][i] > last_value and target_data[0][i] > target_data[0][i + 1]:
                index_list.append(i)
            else:
                last_value = target_data[0][i]

        if len(index_list) < 2:
            return {"result": False}
        data_deal = target_data[0][index_list[0]:index_list[-1]]

        min_data = min(data_deal)
        max_data = max(data_deal)
        sum_Data = sum(data_deal)
        avg_data = sum_Data / len(data_deal)
        square_sum_data = sum([x ** 2 for x in data_deal])
        rms_data = math.sqrt(square_sum_data / len(data_deal))

        unit = target_data[1]
        result = dict()
        result['rms'] = (rms_data, unit + 'rms')
        result['avg'] = (avg_data, unit)
        result['max'] = (max_data, unit)
        result['min'] = (min_data, unit)
        result['vpp'] = (max_data - min_data, unit)
        result['result'] = True
        return result

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
        """
        PowerSupply get target unit value (power_board_function_info) from measured voltage

        Args:
            channel:    string,  (m_volt/m_curr/volt_output/curr_output)
            volt:       float,   the measured voltage by ad7175
            module:     string,   (ps/battery)
        :returns:
            string, 'done'
        Examples:
                        inner function
        """
        assert module in (PowerBoardDef.BATTERY, PowerBoardDef.CHARGE)
        dt_info = power_board_function_info.get(module)
        assert channel in dt_info
        return volt * dt_info[channel]['coefficient']

    def ps_volt_measure_mv(self):
        """
        powersupply measure voltage

        Returns:
            list [value, unit]
        Examples:
                voltage, unit = ps_volt_measure_mv()
        """
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
        """
        powersupply measure voltage

        Returns:
            list [value, unit]
        Examples:
                current, unit = ps_curr_measure_ma()
        """
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
        """
        powersupply set voltage output

        Args:
            volt: float  [0~7500] mv
        Returns:
            bool True
        Examples:
                ps_volt_output(5000)
        """
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
        """
        powersupply set current output

        Args:
            volt: float  [0~600] ma
        Returns:
            bool True
        Examples:
                ps_curr_output(500)
        """
        assert 0 <= current <= 600
        module = PowerBoardDef.CHARGE
        ps_info = power_board_function_info.get(module)
        channel = PowerBoardDef.PS_CURRENT_OUTPUT_CHANNEL
        ch = ps_info.get(channel)["ch"]
        target_value, unit = self._get_output(current, channel, module)
        if target_value < 0:
            target_value = 0
        self.ps_dac.output_volt_dc(ch, target_value)
        return True

    def bat_volt_output(self, volt):
        """
        set battery output voltage

        Args:
            volt:     float/int(0~5000), unit is mV
        Returns:
            bool True
        Examples:
                      bat_volt_output(1000)
        """
        assert 0 <= volt <= 5000
        module = PowerBoardDef.BATTERY
        battery_info = power_board_function_info.get(module)

        channel = PowerBoardDef.BAT_VOLTAGE_OUTPUT_CHANNEL
        ch = battery_info.get(channel)["ch"]
        target_value = volt
        if self.is_use_cal_data():
            cal_infor = power_board_calibration_info.get(module)[PowerBoardDef.BAT_VOLTAGE_OUTPUT_CHANNEL]["5000mv"]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        target_value = self._volt_to_target_unit(channel, target_value, module)
        if target_value < 0:
            target_value = 0
        self.bat_dac.output_volt_dc(ch, target_value)
        return True

    def bat_curr_output(self, current):
        """
        set battery output current

        Args:
            volt:     float/int(0~1000), unit is ma
        Returns:
            bool True
        Examples:
                      bat_curr_output(500)
        """
        assert 0 <= current <= 1000
        module = PowerBoardDef.BATTERY
        battery_info = power_board_function_info.get(module)
        channel = PowerBoardDef.BAT_CURRENT_OUTPUT_CHANNEL
        ch = battery_info.get(channel)["ch"]
        target_value, unit = self._get_output(current, channel, module)
        if target_value < 0:
            target_value = 0
        self.bat_dac.output_volt_dc(ch, target_value)
        return True

    def single_bat_current_measure(self):
        """
        Measure current once; if want to measure res,must use channel 1 (R = U/I),
        only ch1 can measure current

        Returns:
            list [value, unit]
        Examples:
                current, unit = single_current_measure()
        """
        module = PowerBoardDef.BATTERY
        measure_path = self.get_measure_path(module)
        curr_info = power_board_function_info[module][PowerBoardDef.BAT_CURRENT_CHANNEL]
        if measure_path[PowerBoardDef.BAT_CURRENT_CHANNEL] not in curr_info:
            raise PowerBoardException('error voltage scope')

        cal_info = power_board_calibration_info.get(module)
        ch = curr_info["ch"]
        target_value = self.ad7175.read_volt(ch)
        scope = measure_path[PowerBoardDef.BAT_CURRENT_CHANNEL]
        gain = curr_info[scope]["coefficient"]
        target_value = target_value * gain

        if self.is_use_cal_data():
            cal_infor = cal_info.get(PowerBoardDef.BAT_CURRENT_CHANNEL)[scope]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)

        unit = curr_info[scope]["unit"]
        return [target_value, unit]

    def single_bat_voltage_measure(self):
        """
        Battery module measure voltage once

        Returns:
            list [value, unit]
        Examples:
                volt, unit= single_bat_voltage_measure()
        """
        module = PowerBoardDef.BATTERY
        measure_path = self.get_measure_path(module)
        curr_info = power_board_function_info[module][PowerBoardDef.BAT_VOLTAGE_CHANNEL]
        if measure_path[PowerBoardDef.BAT_VOLTAGE_CHANNEL] not in curr_info:
            raise PowerBoardException('error voltage scope')
        cal_info = power_board_calibration_info.get(module)
        ch = curr_info["ch"]
        target_value = self.ad7175.read_volt(ch)

        scope = measure_path[PowerBoardDef.BAT_VOLTAGE_CHANNEL]
        gain = curr_info[scope]["coefficient"]
        target_value = target_value * gain

        if self.is_use_cal_data():
            cal_infor = cal_info.get(PowerBoardDef.BAT_VOLTAGE_CHANNEL)[scope]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        unit = curr_info[scope]["unit"]

        return [target_value, unit]

    def _bat_volt_to_target_unit(self, channel, scope, volt):
        """
        Get actual value of unit

        Args:
            channel: voltage/current
            scope: str �?50ua, 5ma, 50ma....�?
            volt: float
        Returns:
            float
        """

        module = PowerBoardDef.BATTERY
        dt_info = power_board_function_info[module].get(channel)
        assert scope in dt_info
        return volt * dt_info[scope]['coefficient']

    def multi_bat_measure(self, channel, count, raw=0, sample_rate=None):
        """
        Get multi battery measure

        Args:
            channel: ch0/ch1,ch0 for voltage channel, ch1 for current channel
            count: int  1~512
            raw: bool True/False
            sample_rate: int 5/10/20/100/200/500/1000/2500/5000/10000/25000/50000/125000/250000
        Returns:
            list    [100.1, 100.2, 100.3, 100.4 , mv]
        Examples:
                result= multi_bat_measure("ch0",512,True,10000)
        """
        adc_volt = self.get_raw_samples(channel, count, sample_rate)
        # with open("tmp/123.csv", "w") as f:
        #     f.write(",".join([str(i) for i in adc_volt]))
        return "done"

    def ex_voltage_measure(self):
        """
        Get ex_voltage measure

        Returns:
            list
        Examples:
            result = ex_voltage_measure()
        """
        module = "battery"
        measure_path = self.get_measure_path(module)
        curr_info = power_board_function_info[module][PowerBoardDef.EX_VOLTAGE_CHANNEL]
        if measure_path[PowerBoardDef.EX_VOLTAGE_CHANNEL] not in curr_info:
            raise PowerBoardException('error voltage scope')
        cal_info = power_board_calibration_info.get(module)
        ch = curr_info["ch"]
        target_value = self.ad7175.read_volt(ch)

        scope = measure_path[PowerBoardDef.EX_VOLTAGE_CHANNEL]
        gain = curr_info[scope]["coefficient"]
        target_value = target_value * gain

        if self.is_use_cal_data():
            cal_infor = cal_info.get(PowerBoardDef.EX_VOLTAGE_CHANNEL)[scope]
            if cal_infor:
                target_value = self.cal_pipe(cal_infor, target_value)
        unit = curr_info[scope]["unit"]
        return [target_value, unit]
