# -*- coding: utf-8 -*-
import sys


__author__ = 'Ming@PRM'
__version__ = '0.1'
import time

class CONSTANT:
    R_TEMP_RESULT = 0x00
    R_CONFIGURATION = 0x01
    R_THIGH_LIMIT = 0x02
    R_TLOW_LIMIT = 0x30
    R_EEPROM_UL = 0x04
    R_EEPROM1 = 0x05
    R_EEPROM2 = 0x06
    R_TEMP_OFFSET = 0x07
    R_EEPROM3 = 0x08
    R_DEVICE_ID = 0x0f
    DEVICE_ID = 0x0117
    TEMP_RESOLUTION = 0.0078125

class PException(Exception):

    def __init__(self, err_str):
        self.err_reason = '%s.' % (err_str)

    def __str__(self):
        return self.err_reason

class PRMTMP117(object):
    '''
    AD56X7R function class

    :param      dev_addr:   hex,          I2C device address of AD56X7R
    :param      i2c_bus:    instance/None Class instance of I2C bus,If not using this parameter,will create Emulator
    :example:
                 axi = AXI4LiteBus('/dev/AXI4_DUT1_I2C_1', 256)
                 i2c = PLI2CBus(axi)
                 ad56x7r = AD56X7R(0x50, i2c)
    '''

    rpc_public_api = [
        "readID", "osRead", "osRead_with_retry"
    ]

    def __init__(self, dev_addr, i2c_bus=None):
        # 7-bit slave address. The two LSBs are variable
        # assert (dev_addr & (~0x03)) == 0x30
        self.dev_addr = dev_addr
        self.i2c_bus = i2c_bus
        self.debug = False


    def read16(self, reg): #read 2x bytes
        '''
        CAT9555 read specific length datas from address

        :param    reg_addr:   hexmial(0-0xFF), Read datas from this address
        :param    rd_len:     int(0-1024),     Length to read
        :returns:  type is list
        :example:
                   rd_data = cat9555.read_register(0x00, 10)
                   print(rd_data)
        '''
        assert 0 <= reg <= 255
        reg &= 0x0f
        self.i2c_bus.write(self.dev_addr, [reg])
        data = self.i2c_bus.write_and_read(self.dev_addr,[reg], 2)
        data = (data[0]<<8) + data[1]
        if self.debug:
            print("Register read %s, data %s" %(hex(reg), hex(data)))
        return data #return 16bits data

    def write16(self, reg, data): # write 16bits data
        '''
        :param cmd_data:
        :return:
        '''
        assert 0 <= reg <= 255
        reg &= 0x0f
        dataM = data & 0xff
        dataL = (data>>8) & 0xff
        return self.i2c_bus.write(self.dev_addr, [reg, dataL, dataM])
    

        # check = self.read16(reg)
        # if (check != data):
        #     print("Data write to register failed")
        # if self.debug:
        #     print("Register write %s, data %s, return %s" %(hex(reg), hex(data), hex(check)))
        # return [reg, data]

    def readID(self):
        '''
        Read tmp117
        '''
        data = self.read16(CONSTANT.R_DEVICE_ID)
        #if data == CONSTANT.DEVICE_ID:
        return data

    def osRead(self, conv = 0, avg = 0):
        '''
        MOD[1:0]
        Set conversion mode.
        00: Continuous conversion (CC)
        01: Shutdown (SD)
        10: Continuous conversion (CC), Same as 00 (reads back = 00) 11: One-shot conversion (OS)

        | CONV[2:0] | AVG[1:0] = 00 | AVG[1:0] = 01 | AVG[1:0] = 10 | AVG[1:0] = 11 | 
        |    000    |     15.5ms    |     125 ms    |     500 ms    |      1s       |
        |    001    |     125 ms    |     125 ms    |     500 ms    |      1s       |
        |    010    |     250 ms    |     250 ms    |     500 ms    |      1s       |
        |    011    |     500 ms    |     500 ms    |     500 ms    |      1s       |
        |    100    |       1s      |      1s       |      1s       |      1s       |
        |    101    |       4s      |      4s       |      4s       |      4s       |
        |    110    |       8s      |      8s       |      8s       |      8s       |
        |    111    |       16s     |      16s      |      16s      |      16s      |
        '''
        assert avg in (0, 1, 2, 3)
        assert conv in (0, 1, 2, 3, 4, 5, 6, 7)
        bTimeout = False
        #read CONFIGURATION first
        data = self.read16(CONSTANT.R_CONFIGURATION)
        #set MOD[1:0] 11
        data |= 3 << 10
        #CONV
        data |= conv << 7
        #AVG
        data |= avg << 5
        self.write16(CONSTANT.R_CONFIGURATION, data)
        time.sleep(0.01)
        # reg_data = self.read16(CONSTANT.R_CONFIGURATION)
        # Data_Ready = reg_data & 0x2000
        # if Data_Ready:
        #     temp_reg = self.read16(CONSTANT.R_TEMP_RESULT)
        # else:
        start_time = time.time()
        while True:
            reg_data = self.read16(CONSTANT.R_CONFIGURATION)
            Data_Ready = reg_data & 0x2000
            if Data_Ready:
                break
            else:
                time.sleep(0.01)
            if time.time() - start_time > 1:
                bTimeout = True
                break
        if bTimeout:
            raise PException("read CONFIGURATION time out")
        temp_reg = self.read16(CONSTANT.R_TEMP_RESULT)
        if (temp_reg & 0x8000): # negetive temp
            temp_reg = (0xFFFF - temp_reg) * CONSTANT.TEMP_RESOLUTION
        else:# positive temp
            temp_reg *= CONSTANT.TEMP_RESOLUTION
        return temp_reg

    def osRead_with_retry(self, retry_num=3):
        result = None
        for i in range(retry_num):
            try:
                result = self.osRead()
            except Exception as e:
                pass
            finally:
                if result:
                    return result
        return False
        