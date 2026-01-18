# -*- coding: utf-8 -*-

__author__ = 'Ming@PRM'
__version__ = '0.1'

class LP503XDef:

    DEVICE_CONFIG0 = 0x00
    DEVICE_CONFIG1 = 0x01
    LED_CONFIG0 = 0x02
    LED_CONFIG1 = 0x03
    BANK_BRIGHTNESS = 0x04
    BANK_A_COLOR = 0x05
    BANK_B_COLOR = 0x06
    BANK_C_COLOR = 0x07
    RESET_CONFIG = 0x38

class LP503XException(Exception):

    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason

class PRMLP503X(object):
    '''
    LP503X function class, this is a led controller driver

    :param      dev_addr:   hex,          I2C device address of AD56X7R
    :param      i2c_bus:    instance/None Class instance of I2C bus
    .. code-block:: python

        i2c = MPYSoftI2CBus(scl="PB8", sda="PB9", freq=100000)
        lp503x = LP503X(0x30, i2c)

        # first need init ic driver(we can call ic_init)
        lp503x.ic_init()

        # open/close of all bank of led, 1 means open 0 means close,
        # (0,1) can change the brightness
        lp503x.set_brightness(1)
        lp503x.set_brightness(0)

        # set the rgb color of all bank led
        # 1, 1, 1 means white; 0, 0, 0 means black
        # you can change the color by duty(0~1)
        lp503x.set_red(1)
        lp503x.set_green(1)
        lp503x.set_blue(1)

        lp503x.set_red(0)
        lp503x.set_green(0)
        lp503x.set_blue(0)
    '''
    rpc_public_api = ['reset','ic_init','set_brightness','set_red','set_green','set_blue',
                      '_set_percent_by_reg','read_register','write_register'
                      ]

    def __init__(self, dev_addr, i2c_bus=None):
        # 7-bit slave address. The two LSBs are variable
        assert (dev_addr & (~0x03)) == 0x30
        self.dev_addr = dev_addr
        self.i2c_bus = i2c_bus

    def reset(self):
        '''
        LP503X reset chip

        :return None
        '''
        self.write_register(LP503XDef.RESET_CONFIG, [0xff])

    def ic_init(self):
        '''
        Init LP503x register to make this driver work

        :return: None
        '''
        self.write_register(LP503XDef.DEVICE_CONFIG0, [0x40])
        self.write_register(LP503XDef.DEVICE_CONFIG1, [0x3c])
        self.write_register(LP503XDef.LED_CONFIG0, [0xff])
        self.write_register(LP503XDef.LED_CONFIG1, [0x0f])

    def set_brightness(self, duty):
        '''
        Set the brightness of all bank led, 0 means close 1 means open
        0.5 means 50% percent of brightness

        :param duty: float(0~1)
        :return: None
        '''
        self._set_percent_by_reg(LP503XDef.BANK_BRIGHTNESS, duty)

    def set_red(self, duty):
        '''
        Set RGB(R) 0 means not Red, 1 means extremely Red

        :param duty: float(0~1)
        :return: None
        '''
        self._set_percent_by_reg(LP503XDef.BANK_A_COLOR, duty)

    def set_green(self, duty):
        '''
        Set RGB(G) 0 means not Green, 1 means extremely Green

        :param duty: float(0~1)
        :return: None
        '''
        self._set_percent_by_reg(LP503XDef.BANK_B_COLOR, duty)

    def set_blue(self, duty):
        '''
        Set RGB(B) 0 means not Blue, 1 means extremely Blue

        :param duty: float(0~1)
        :return: None
        '''
        self._set_percent_by_reg(LP503XDef.BANK_C_COLOR, duty)

    def _set_percent_by_reg(self, mem_reg, duty=1):
        '''
        Set duty to register, all the other function is called this function

        :param mem_reg: int   register address
        :param duty: float(0~1)
        :return: None
        '''
        assert 0 <= duty <= 1
        per = int(duty*255)
        self.write_register(mem_reg, [per])

    def read_register(self, reg_addr, rd_len):
        '''
        LP503X read specific length datas from address

        :param    reg_addr:   hexmial(0-0xFF), Read datas from this address
        :param    rd_len:     int(0-1024),     Length to read
        :returns:  list
        '''
        result = self.i2c_bus.write_and_read(self.dev_addr, [reg_addr], rd_len)
        return result

    def write_register(self, reg_addr, write_data):
        '''
        LP503X write datas to address, support cross pages writing operation

        :param    reg_addr:    int(0-1024), Write data to this address
        :param    write_data:  list,        Data to write
        :returns:  None
        '''
        wr_data = []
        wr_data.append(reg_addr)
        wr_data.extend(write_data)
        self.i2c_bus.write(self.dev_addr, wr_data)
