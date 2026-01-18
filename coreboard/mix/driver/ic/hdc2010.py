# -*- coding: utf-8 -*-
import sys
if sys.platform == "pyboard":
    import pyb

__author__ = 'Ming@PRM'
__version__ = '0.1'

class HDCDef:

    TEMPERATURE_LOW = 0x00
    TEMPERATURE_HIGH = 0x01
    HUMIDITY_LOW = 0x02
    HUMIDITY_HIGH = 0x03
    INTERRUPT_DRDY = 0x04
    TEMPERATURE_MAX = 0x05
    HUMIDITY_MAX = 0x06
    INTERRUPT_ENABLE = 0x07
    TEMP_OFFSET_ADJUST = 0x08
    HUM_OFFSET_ADJUST = 0x09
    RESET_DRDY_INT_CONFIG = 0x0E
    MEASUREMENT_CONFIGURATION = 0x0F
    MANUFACTURE_ID_LOW = 0xFC
    MANUFACTURE_ID_HIGH = 0xFD
    DEVICE_ID_LOW = 0xFE
    DEVICE_ID_HIGH = 0xFF

    TEMP_GAIN = 1.0/(2**16)*165
    TEMP_OFFSET = -40.0
    HUMIDITY_GAIN = 1.0/(2**16)*100
    HUMIDITY_OFFSET = 0

    DEFAULT_TIMEOUT_TIME_MS = 1500

    MEASUREMENT_MODE = ("TEMP_ONLY", "HUMIDITY_ONLY", "BOTH")

    RESOLUTION = {
        0: 14,
        1: 11,
        2: 9
    }


class HDCException(Exception):

    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason

class PRMHDC2010(object):
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
    rpc_public_api = ["is_conversioned", "set_measurement_mode", "get_one_value", "read_register", "write_register"
                      ]

    def __init__(self, dev_addr, i2c_bus=None, mode="BOTH", resolution=0):
        # 7-bit slave address. The two LSBs are variable
        # assert (dev_addr & (~0x03)) == 0x30
        self.dev_addr = dev_addr
        self.i2c_bus = i2c_bus
        self._measurement_reg = 0x01
        self._mode = mode
        self._resolution = resolution
        self.set_measurement_mode(self._mode, self._resolution)

    def is_conversioned(self):
        '''
        Check the conversion is finished, and the time out time is 1 second
        :return:
        '''
        start_time = pyb.millis()
        while True:
            if pyb.elapsed_millis(start_time) < HDCDef.DEFAULT_TIMEOUT_TIME_MS:
                return False
            drdy = self.read_register(HDCDef.INTERRUPT_DRDY, 1)
            # print("drdy is: {}".format(drdy))
            if (drdy[0]&0x80):
                return True
            pyb.delay(100)

    def set_measurement_mode(self, mode, resolution=0):
        """
        Set mode first
        :param mode:
        :param resolution:
        :return:
        """
        self._mode = None
        self._resolution = None
        self._measurement_reg = 0x01
        self._mode = mode
        self._resolution = resolution
        assert mode in HDCDef.MEASUREMENT_MODE
        assert resolution in (0, 1, 2)
        if mode == HDCDef.MEASUREMENT_MODE[0]:
            self._measurement_reg = self._measurement_reg | (resolution << 6)
            self._measurement_reg = self._measurement_reg | (1 << 1)
        elif mode == HDCDef.MEASUREMENT_MODE[1]:
            self._measurement_reg = self._measurement_reg | (resolution << 4)
            self._measurement_reg = self._measurement_reg | (2 << 1)
        elif mode == HDCDef.MEASUREMENT_MODE[2]:
            self._measurement_reg = self._measurement_reg | (resolution << 6)
            self._measurement_reg = self._measurement_reg | (resolution << 4)
            self._measurement_reg = self._measurement_reg | (0 << 1)
        return self._measurement_reg

    def get_one_value(self):
        '''
        :return:
        '''
        result = dict()
        self.write_register(HDCDef.MEASUREMENT_CONFIGURATION, [self._measurement_reg])
        if self.is_conversioned():
            if self._mode == HDCDef.MEASUREMENT_MODE[0]:
                high = self.read_register(HDCDef.TEMPERATURE_HIGH, 1)
                low = self.read_register(HDCDef.TEMPERATURE_LOW, 1)
                temp = high[0]<<8|low[0]
                result.setdefault("temp", temp*HDCDef.TEMP_GAIN + HDCDef.TEMP_OFFSET)
            elif self._mode == HDCDef.MEASUREMENT_MODE[1]:
                high = self.read_register(HDCDef.HUMIDITY_HIGH, 1)
                low = self.read_register(HDCDef.HUMIDITY_LOW, 1)
                hum = high[0]<<8|low[0]
                result.setdefault("humidity", hum * HDCDef.HUMIDITY_GAIN + HDCDef.HUMIDITY_OFFSET)
            elif self._mode == HDCDef.MEASUREMENT_MODE[2]:
                high = self.read_register(HDCDef.TEMPERATURE_HIGH, 1)
                low = self.read_register(HDCDef.TEMPERATURE_LOW, 1)
                temp = high[0]<<8|low[0]
                result.setdefault("temp", temp * HDCDef.TEMP_GAIN + HDCDef.TEMP_OFFSET)
                high = self.read_register(HDCDef.HUMIDITY_HIGH, 1)
                low = self.read_register(HDCDef.HUMIDITY_LOW, 1)
                hum = high[0]<<8|low[0]
                result.setdefault("humidity", hum * HDCDef.HUMIDITY_GAIN + HDCDef.HUMIDITY_OFFSET)
        return result

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
        result = self.i2c_bus.write_and_read(self.dev_addr, [reg_addr], rd_len)
        return result

    def write_register(self, reg_addr, write_data):
        '''
        :param cmd_data:
        :return:
        '''
        wr_data = []
        wr_data.append(reg_addr)
        wr_data.extend(write_data)
        self.i2c_bus.write(self.dev_addr, wr_data)