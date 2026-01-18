# -*- coding: utf-8 -*-
import sys
if sys.platform == "pyboard":
    from machine import I2C

__author__ = 'Clark@Prm'
__version__ = '0.1'

class MPYI2CBusException(Exception):
    def __init__(self,dev_name,err_str):
        self._err_resason = '[%s]: %s.' % (dev_name, err_str)

    def __str__(self):
        return self._err_resason

class MPYI2CBus(object):
    '''
    MPYI2CBus(HW) function class which provide function to control
    i2c slave device.

    :param dev_name:  int(1~3),             i2c master number
    :param baudrate:  int(100000~400000),   i2c baud rate default is 100k

    .. code-block:: python

        address = 0x20
        i2c = MPYI2CBus(1, 100000)

        # read data from i2c device
        buf = i2c.read(address, [0x00], 1)
        print("register date: {}".format(buf[0]))
        buf = i2c.recv(address, 2)
        print("the 16 byte date is {}".format(buf[0]<<8|buf[1]))

        # write data to i2c device
        i2c.write(address, [0x00])
        i2c.write(address, [0x00, 0x01])
        i2c.send(address, [0x00, 0x25])

        # scan i2c address from i2c bus and check i2c device is ready
        address_list = i2c.scan()
        bool = i2c.is_ready(address)
        print("there are {} slave device on current i2c bus".format(address_list))
        print("current i2c device is ready?{}".format(bool))
    '''
    rpc_public_api = [
        "read", "write", "recv", "send", "write_and_read", "scan", "is_ready"
    ]
    def __init__(self, dev_name, baud_rate=100000):
        self._dev_name = dev_name
        self._baud_rate = baud_rate
        self._ps_i2c = None
        self.open()

    def __del__(self):
        self.close()

    def open(self):
        '''
        Instance a new I2C class

        :return: None
        '''
        self._ps_i2c = I2C(int(self._dev_name), I2C.MASTER, baudrate=self._baud_rate)
        if not self._ps_i2c:
            raise OSError('Open I2C device {} failure.'.format(self._dev_name))

    def close(self):
        '''
        Deinit i2c device

        :return: None
        '''
        self._ps_i2c.deinit()

    def read(self, addr, rd_data, length, addrsize=8):
        '''
        Read value from i2c slave

        :param addr: int(0x00~0xff), i2c slave address
        :param rd_data: list, register address
        :param length: int, length of data you want to read
        :return: list
        '''
        assert 0 <= addr <= 0xFF
        assert length > 0
        buffer = self._ps_i2c.mem_read(length, addr, rd_data, addr_size=addrsize)
        return list(buffer)

    def write(self, addr, data, addrsize=8):
        '''
        Write data to i2c slave device

        :param addr: int(0x00~0xff), i2c slave address
        :param data: list, if specify reg then the first is reg address
        :return: None
        '''
        assert 0 <= addr <= 0xFF
        assert len(data) > 0
        if len(data) > 1:
            wr_data = bytearray(data[1::])
            mem_addr = data[0]
            self._ps_i2c.mem_write(wr_data, addr, mem_addr, addr_size=addrsize)
        else:
            self._ps_i2c.send(bytearray(data), addr)

    def recv(self, addr, length):
        '''
        Read value from i2c slave
        :param addr: int(0x00~0xff), i2c slave address
        :param length: int, length of data you want to read
        :return: list
        '''
        assert 0 <= addr <= 0xFF
        assert length > 0
        return self._ps_i2c.recv(length, addr)

    def send(self, addr, data):
        '''
        Send data to i2c slave device

        :param addr: int(0x00~0xff), i2c slave address
        :param data: list, if specify reg then the first is reg address
        :return: None
        '''
        assert 0 <= addr <= 0xFF
        assert isinstance(data, list)
        self._ps_i2c.send(bytearray(data), addr)

    def write_and_read(self, addr, wr_data, length, addrsize=8):
        '''
        Write data to register and then read data from it

        :param addr:  int(0x00~0xff), i2c slave address
        :param wr_data: list, if specify reg then the first is reg address
        :param length: int, length of data you want to read
        :return: list
        '''
        assert 0 <= addr <= 0xFF
        assert len(wr_data) > 0
        assert length > 0
        mem_addr = wr_data[0]
        data = bytearray(wr_data[1::])
        if data:
            self._ps_i2c.mem_write(data, addr, mem_addr, addr_size=addrsize)
        return self.read(addr, mem_addr, length, addrsize)

    def scan(self):
        '''
        Scan the slave address of i2c bus

        :return: list, all the device address are in it
        '''
        return self._ps_i2c.scan()

    def is_ready(self, addr):
        '''
        Check if addr is ready to control

        :return: bool, is ready if True else not ready
        '''
        return self._ps_i2c.is_ready(addr)
