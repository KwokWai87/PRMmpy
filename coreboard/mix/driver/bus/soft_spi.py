import sys
if sys.platform == "pyboard":
    from machine import SPI, Pin


__author__ = 'Clark@Prm'
__version__ = '0.1'

class SoftSPI(object):
    '''
    pins(CLK, MOSI, MISO)
    '''
    rpc_public_api = [
        "read", "write", "write_read", "cs_low", "cs_high"
    ]
    def __init__(self, pins, polarity=1, phase=0, bits=8, baudrate=1000000, firstbit=SPI.MSB):
        clk, mosi, miso, cs = pins
        self.spi = SPI(-1, baudrate=baudrate, polarity=polarity, phase=phase, bits=bits, 
                        firstbit=firstbit, sck=Pin(clk), mosi=Pin(mosi), miso=Pin(miso))
        self.cs = Pin(cs, Pin.OUT_PP)

    def __del__(self):
        self.close()

    def close(self):
        '''
        Deinit i2c device

        :return: None
        '''
        self.spi.deinit()

    def read(self, length):
        '''
        :param length:
        :return:
        '''
        return self.spi.read(length)

    def write(self, buf):
        '''

        :param buf:
        :return:
        '''
        self.spi.write(bytearray(buf))

    def write_read(self, write_buf):
        '''

        :param write_buf:
        :return:
        '''
        read_buf = bytearray(len(write_buf))
        self.spi.write_readinto(bytearray(write_buf), read_buf)
        return read_buf
    
    def cs_low(self):
        self.cs.value(0)

    def cs_high(self):
        self.cs.value(1)