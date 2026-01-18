# -*- coding: utf-8 -*-
import time
import json
import ospath


class CoreDef:
    RETURN_DONE = True
    RETURN_ERROR = False
    DEFAULT_DELAY_S = 0.05
    IO_MAP_PATH = "mix/addon/test_function/io_map.json"
    SAMPLING_AD7175 = [
        5, 10, 16.66, 20, 49.96, 59.92, 100, 200, 397.5,
        500, 1000, 2500, 5000, 10000, 15625, 25000, 31250,
        50000, 62500, 125000, 250000
    ]


class WPCoreError(Exception):
    def __init__(self, err_str):
        self.err_reason = str(err_str)

    def __str__(self):
        return self.err_reason


class MixDevice:
    """
    Wrapper Coreboard function class
    :param  xObjects: all instance class will in xObjects

    :example:
    """
    rpc_public_api = [
        'reset', 'fw_version', 'relay', 'impedance_to_gnd', 'power_on_12v', 'power_off_12v',
        'discharge_pwr_12v', 'measure_current_12v', 'measure_voltage', 'connect_psu_i2c3_slave', 'disconnect_psu_i2c3_slave',
        'enable_uart4_to_usb', 'disable_uart4_to_usb', 'led_test', 'fixture_eeprom_write', 'fixture_eeprom_read'
        ]

    def __init__(self, xObjects):
        self._xObjects = dict()
        self._xObjects['baseboard'] = xObjects.get('baseboard', None)
        self._xObjects['dmm'] = xObjects.get('dmm', None)
        self.dac = self.baseboard.dac
        self._dictIOMap = None
        self.loadIoMap()

    def __getattr__(self, item):
        assert item in self._xObjects.keys()
        return self._xObjects[item]

    def reset(self):
        """
        reset the module, the same function like  post_power_on_init
        :return: done
        """
        self.baseboard.reset()
        self.dmm.reset()
        self.dmm.set_measure_path("5V")
        return CoreDef.RETURN_DONE

    def loadIoMap(self):
        assert ospath.exists(CoreDef.IO_MAP_PATH)
        with open(CoreDef.IO_MAP_PATH, 'r') as f:
            self._dictIOMap = json.load(f)

    def fw_version(self):
        """
        return: dict "MIX_FW_PACKAGE":"xxx",
        """
        return self._dictIOMap.get("Version", "v0.0.1")

    def relay(self, net, switch='CONNECT', duration=25):
        """
        set io bit by iomap
        org:
            relay(self, net, switch="CONNECT")
        Args:
            net:         string; net of io table.
            switch:      string; switch name; CONNECT/DISCONNECT
            duration:    float; delay for millisecond
        Returns:    
            bool;        True/False
        Examples:
                mixdevice.relay("I2C_PMU_TO_XAVIER","CONNECT")
        """
        ioList = self._dictIOMap.get(net, {}).get(switch, None)
        if not ioList:
            return "%s@%s <-<< %s" % (net, switch, False)
        ret = self.baseboard.set_io_switch(ioList)
        time.sleep(duration / 1000.0)
        return "%s <-<< %s" % (ioList, ret)

    def impedance_to_gnd(self, netName, current, voltage):
        """
        Measure TestPoint to GND impedance
        :param netName     test point
        :param current    [1~10000] uA
        :param voltage    [100~2500] mV
        """
        assert 1 <= current <= 10000
        assert 100 <= voltage <= 2500

        measureNet = "10K" if 1 <= current <= 100 else "99R"
        r1 = 10000 if 1 <= current <= 100 else 99

        if 1 <= current <= 10:
            outputNet, r2 = "100K", 100000
        elif 10 < current <= 100:
            outputNet, r2 = "10K", 10000
        elif 100 < current <= 1000:
            outputNet, r2 = "1K", 1000
        else:
            outputNet, r2 = "100R", 100

        self.relay("EXC_CCS_CURR_MEAS_RANGE_SEL", measureNet)
        self.relay(f"EXC_CCS_CURR_OUTPUT_RANG_SEL@{outputNet}", "CONNECT")
        self.dac.output_volt_dc(1, 2500 - voltage)
        self.dac.output_volt_dc(0, 2500 - current * r2) ## todo: here have some problem, need confirm with EE
        self.relay(f"EXC_CCS_SEL@{netName}", "CONNECT")
        self.dmm.set_measure_path("5VCH2")
        time.sleep(0.05)
        self.relay("DMM_CH2_SEL@CCS_I_M", "CONNECT")
        time.sleep(0.2)
        retCurr = (self.dmm.read_measure_value() - 2500) / r1
        self.relay("DMM_CH2_SEL@CCS_V_M", "CONNECT")
        time.sleep(0.2)
        retVolt = self.dmm.read_measure_value() - 2500
        impedance = retVolt / retCurr

        ## todo: output 0mV or 2500mV, need confirm
        self.dac.output_volt_dc(0, 0)
        self.dac.output_volt_dc(0, 1)
        self.relay("DMM_CH2_SEL@CCS_V_M", "DISCONNECT")
        self.relay(f"EXC_CCS_SEL@{netName}", "DISCONNECT")
        self.relay(f"EXC_CCS_CURR_OUTPUT_RANG_SEL@{outputNet}", "DISCONNECT")
        self.relay("EXC_CCS_CURR_MEAS_RANGE_SEL", "10K")

        return impedance

    def power_on_12v(self):
        """
        power supply to 12V to DUT
        """
        self.relay("RELAY_SYSGND_TO_DUTGND", "CONNECT", 10)
        self.relay("RELAY_PP12V_TO_DUT", "CONNECT", 10)
        self.relay("LDO_ENABLE_PP12V", "CONNECT", 10)
        return CoreDef.RETURN_DONE

    def power_off_12v(self):
        """
        power off to DUT
        """
        self.relay("LDO_ENABLE_PP12V", "CONNECT", 10)
        self.relay("RELAY_PP12V_TO_DUT", "CONNECT", 10)
        self.relay("RELAY_SYSGND_TO_DUTGND", "CONNECT", 10)
        return CoreDef.RETURN_DONE

    def discharge_pwr_12v(self, duration=100):
        """
        discharge on 12v power rail
        """
        self.relay("DUT_CONN_PWR_12V_DISCHARGE", "CONNECT", 10)
        time.sleep(duration / 1000.0)
        self.relay("DUT_CONN_PWR_12V_DISCHARGE", "DISCONNECT", 10)
        return CoreDef.RETURN_DONE

    def measure_current_12v(self, scope="1A"):
        """
        DMM measure system current with PWR 12V
        :param scope  [1mA, 1A] string type
        """
        assert  scope in ("1mA", "1A")
        self.relay("DMM_CH2_DIV", "DIV1")
        scopeNet = "0R1" if scope == "1A" else "100R"
        refResistor = 0.1 if scope == "1A" else 100.0
        try:
            self.relay("MEAS_DUT_CURR_RANGE", scopeNet)
            self.relay("DMM_CH2_SEL@DUT_CURRENT_M", "CONNECT")
            self.dmm.set_measure_path("5VCH2")
            time.sleep(0.05)
            retVal = self.dmm.read_measure_value() / 10.0 / refResistor
        finally:
            self.relay("MEAS_DUT_CURR_RANGE", "0R1")

        return retVal

    def measure_voltage(self, netName, sampling_rate=1000, count=1):
        """
        DMM measure TestPoint voltage
        :param netName        test point
        :param sampling_rate  [5, 10, 16.66, 20, 49.96, 59.92, 100, 200, 397.5,
                               500, 1000, 2500, 5000, 10000, 15625, 25000, 31250,
                               50000, 62500, 125000, 250000]
        :param count          measure times
        Default:
            DMM Channel:     5V(CH1)
            sampling_rate:   1000
            Measure count:   1
        """

        assert isinstance(count, int) and count >= 1
        assert sampling_rate in CoreDef.SAMPLING_AD7175

        self.relay("DMM_CH1_DIV", "DIV3")
        self.relay(f"DMM_CH1_SEL@{netName}", "CONNECT")
        self.dmm.set_measure_path("5V")
        time.sleep(0.05)
        retVal = self.dmm.read_measure_value(sampling_rate, count) * 3
        self.relay(f"DMM_CH1_SEL@{netName}", "DISCONNECT")

        return retVal

    def connect_psu_i2c3_slave(self):
        """
        connect CAT24C256WI-GT3 addr:0x50 to dut PSU_I2C3
        """
        self.relay("IIC_SLAVE_EEPROM", "CONNECT")
        return CoreDef.RETURN_DONE

    def disconnect_psu_i2c3_slave(self):
        """
        disconnect CAT24C256WI-GT3 addr:0x50 to dut PSU_I2C3
        """
        self.relay("IIC_SLAVE_EEPROM", "DISCONNECT")
        return CoreDef.RETURN_DONE

    def enable_uart4_to_usb(self):
        """
        enable dut uart4 transfer usb
        """
        self.relay("FT232_RESET", "DISCONNECT")
        self.relay("UART_FT232_TO_DUT", "CONNECT")
        return CoreDef.RETURN_DONE

    def disable_uart4_to_usb(self):
        """
        disable dut uart4 transfer usb
        """
        self.relay("FT232_RESET", "DISCONNECT")
        self.relay("UART_FT232_TO_DUT", "DISCONNECT")
        return CoreDef.RETURN_DONE

    def led_test(self, ledTypes):
        """
        measure NTC resistor voltage
        :param ledTypes [R,G]
        """
        assert ledTypes in ("R", "G")
        ledNet = "LED_TEST1" if ledTypes == "R" else "LED_TEST2"
        self.relay(f"DMM_CH2_SEL@{ledNet}")
        self.dmm.set_measure_path("5VCH2")
        time.sleep(0.05)
        retVal = self.dmm.read_measure_value()
        return retVal

    def fixture_eeprom_write(self):
        return "Not implement"

    def fixture_eeprom_read(self):
        return "Not implement"
