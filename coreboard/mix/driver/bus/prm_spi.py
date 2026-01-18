import sys
if sys.platform == "pyboard":
    from machine import SPI, Pin


__author__ = 'Clark@Prm'
__version__ = '0.1'

class PRMSPI(object):
    '''
    pins(CLK, MOSI, MISO)
    '''
    rpc_public_api = [
        "read", "write", "write_read", "cs_low", "cs_high"
    ]
    def __init__(self, spi_num, cs_pin, polarity=1, phase=0, baudrate=1000000, bits=8,firstbit=SPI.MSB):
        self.spi = SPI(spi_num, SPI.MASTER, polarity=polarity, phase=phase, 
                        baudrate=baudrate, bits=bits, firstbit=firstbit)
        self.cs = Pin(cs_pin, Pin.OUT_PP)

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
        return self.spi.recv(length)

    def write(self, buf):
        '''

        :param buf:
        :return:
        '''
        self.spi.send(bytearray(buf))

    def write_read(self, write_buf):
        '''

        :param write_buf:
        :return:
        '''
        read_buf = bytearray(len(write_buf))
        self.spi.send_recv(bytearray(write_buf), read_buf)
        return read_buf
    
    def cs_low(self):
        self.cs.value(0)

    def cs_high(self):
        self.cs.value(1)