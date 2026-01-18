# -*- coding: utf-8 -*-
import sys
if sys.platform == "pyboard":
    import pyb
    import time

__author__ = 'Ming@PRM'
__version__ = '0.1'

class TMP103Def:
    TMP_REG = 0x00
    TMP_CFG = 0x01
    TMP_REG_L = 0x02
    TMP_REG_H = 0x03



class TMP103(object):
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
    rpc_public_api = [
                      ]

    def __init__(self, dev_addr, i2c_bus=None):
        # 7-bit slave address. The two LSBs are variable
        # assert (dev_addr & (~0x03)) == 0x30
        self.dev_addr = dev_addr
        self.i2c_bus = i2c_bus


    # def one_shot_read(self, rate=8):
    #     rate_table = {
    #         0.25 : 0,
    #         1 : 1,
    #         4 : 2,
    #         8 : 3
    #     }
    #     assert rate in rate_table
    #     value = self.read_register(TMP103Def.TMP_CFG, 1)
    #     value = int.from_bytes(value, "big")  #big or little
    #     #set sample rate
    #     value = (value & 0x9f) | (rate_table[rate] << 5)
    #     value = (value & 0xfc) | 0x01
    #     self.write_register([TMP103Def.TMP_CFG, value])
    #     time.sleep(1.0/rate)
    #     #read tmpregister
    #     value = self.read_register(TMP103Def.TMP_REG, 1)
    #     value = int.from_bytes(value, "big")  #big or little
    #
    #     value = self.read_register(TMP103Def.TMP_CFG, 1)
    #     value = int.from_bytes(value, "big")  #big or little
    #     return 0xff - value + 1 if (value&0x80) else value

    def one_shot_read(self, rate=8):
        rate_table = {
            0.25: 0,
            1: 1,
            4: 2,
            8: 3
        }
        assert rate in rate_table
        value = self.read_register(TMP103Def.TMP_CFG, 1)
        value = int.from_bytes(bytes(value), "big")  # big or little
        # set sample rate
        value = (value & 0x9f) | (rate_table[rate] << 5)
        value = (value & 0xfc) | 0x01
        self.write_register([TMP103Def.TMP_CFG, value])
        time.sleep(1.0 / rate)
        # read tmpregister
        value = self.read_register(TMP103Def.TMP_REG, 1)
        value = int.from_bytes(bytes(value), "big")  # big or little

        # value = self.read_register(TMP103Def.TMP_CFG, 1)
        # value = int.from_bytes(bytes(value), "big")  #big or little
        return 0xff - value + 1 if (value & 0x80) else value

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
        self.i2c_bus.send(self.dev_addr, [reg_addr])
        result = self.i2c_bus.recv(self.dev_addr, rd_len)
        return result

    def write_register(self, reg_addr):
        '''

        :param cmd_data:
        :return:
        '''
        assert isinstance(reg_addr, list)
        self.i2c_bus.send(self.dev_addr, reg_addr)
