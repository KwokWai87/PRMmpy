# -*- coding: utf-8 -*-
import time

__author__ = 'Caspar@PRM'
__version__ = '0.1'

BLOCK_READ_CMD = 0xA1
BLOCK_WRITE_CMD = 0xA0
ADDR_POINTER_CMD = 0xB0
AD59XX_ADDR = 0x0D
CONTROL_REG1 = 0x80
CONTROL_REG2 = 0x81
START_FREQ_REG = 0x82
INCREMENT_FREQ_REG = 0x85
INCREMENT_NUM_REG = 0x88
TIME_CYCLE_NUM_REG = 0x8A
STATUS_REG = 0x8F
GAIN = {"GAIN1": 1, "GAIN5": 0}
SWEEP_VOL = {"2V": 0x00, "200mV": 0x02, "400mV": 0x04, "1V": 0x06}
CLK_SOURCE = {"EXT_CLK": 0x08, "INT_CLK": 0x00}
CONTROL_MAP = {
    "AD59XX_NO_OPERATION1": 0x00,
    "AD59XX_START_FREQ_INIT": 0x10,
    "AD59XX_START_FREQ_SCAN": 0x20,
    "AD59XX_INCREMENT_FREQ": 0x30,
    "AD59XX_REPEAT_FREQ": 0x40,
    "AD59XX_NO_OPERATION2": 0x50,
    "AD59XX_NO_OPERATION3": 0x60,
    "AD59XX_NO_OPERATION4": 0x70,
    "AD59XX_NO_OPERATION5": 0x80,
    "AD59XX_MEAS_TEMPERATURE": 0x90,
    "AD59XX_POWER_DOWN": 0xA0,
    "AD59XX_STANDBY_MODE": 0xB0,
    "AD59XX_NO_OPERATION6": 0xC0,
    "AD59XX_NO_OPERATION7": 0xD0,
    "AD59XX_NO_OPERATION8": 0xE0,
    "AD59XX_NO_OPERATION9": 0xF0
    }
AD59XX_MCLK = 16776000
TRANSFORM_RATIO = 32.00232


class AD59XX(object):
    """
    CAT9555 is a io expansion chip with 16bit port expansion

    :param     SoftSPI:     instance/None,  Class instance of SoftSPI bus,
                                             If not using this parameter, will create Emulator
    :example:
                ad75019 = PRMAD75019(_spi)
    """

    rpc_public_api = [
        "constant_output", "stop_output", "read_register"
    ]

    def __init__(self,  i2c_bus=None, mclk=16.776, clk_source="EXT_CLK"):
        self.i2c_bus = i2c_bus
        self.mclk = mclk
        self.clk_source = clk_source
        self.debug = False

    def ic_init(self, start_freq, increment_freq, sweep_vol, gain_val, increment_num=511, time_cycles=2044):
        self.set_start_freq(start_freq)
        self.set_increment_freq(increment_freq)
        self.set_increment_num(increment_num)
        self.set_time_cycles(time_cycles)
        self.write_register(CONTROL_REG1, [CONTROL_MAP["AD59XX_STANDBY_MODE"] | sweep_vol | gain_val])
        self.write_register(CONTROL_REG2, [CLK_SOURCE[self.clk_source]])
        self.write_register(CONTROL_REG1, [CONTROL_MAP["AD59XX_START_FREQ_INIT"] | sweep_vol | gain_val])

    def set_address_pointer(self, reg_addr):
        wr_data = [ADDR_POINTER_CMD, reg_addr]
        self.i2c_bus.write(AD59XX_ADDR, wr_data)

    def read_register(self, reg_addr):
        """
        AD5933 read specific length datas from address

        :param    reg_addr:   hexmial(0-0xFF), Read datas from this address
        :param    rd_len:     int(0-1024),     Length to read
        :returns:  type is list
        :example:
                   rd_data = ad5933.read_register(0x00, 10)
                   print(rd_data)
        """
        self.set_address_pointer(reg_addr)

        result = self.i2c_bus.recv(AD59XX_ADDR, 1)
        return result

    def write_register(self, reg_addr, write_data):
        """
        AD5933 write datas to address, support cross pages writing operation

        :param    reg_addr:    int(0-1024), Write data to this address
        :param    write_data:  list,        Data to write
        :example:
                   wr_data = [0x01, 0x02, 0x03, 0x04]
                   ad5933.write_register(0x00, wr_data)
        """
        wr_data = []
        wr_data.append(reg_addr)
        wr_data.extend(write_data)
        self.i2c_bus.write(AD59XX_ADDR, wr_data)

    def read_block(self, reg_addr, rd_len):
        """
        AD5933 read specific length datas from address

        :param    reg_addr:   hexmial(0-0xFF), Read datas from this address
        :param    rd_len:     int(0-1024),     Length to read
        :returns:  type is list
        :example:
                   rd_data = ad5933.read_register(0x00, 10)
                   print(rd_data)
        """
        self.set_address_pointer(reg_addr)
        time.sleep(0.005)
        wr_data = []
        wr_data.append(BLOCK_READ_CMD)
        wr_data.append(rd_len)
        result = self.i2c_bus.write_and_read(AD59XX_ADDR, wr_data, rd_len)
        return result

    def write_block(self, reg_addr, write_data):
        """
        AD5933 write datas to address, support cross pages writing operation

        :param    reg_addr:    int(0-1024), Write data to this address
        :param    write_data:  list,        Data to write
        :example:
                   wr_data = [0x01, 0x02, 0x03, 0x04]
                   ad5933.write_register(0x00, wr_data)
        """
        self.set_address_pointer(reg_addr)
        time.sleep(0.005)
        wr_data = []
        wr_data.append(BLOCK_WRITE_CMD)
        wr_data.append(len(write_data))
        wr_data.extend(write_data)

        self.i2c_bus.write(AD59XX_ADDR, wr_data)

    def set_start_freq(self, freq):
        start_freq = int(freq * self.transform_ratio)

        reg1 = (start_freq >> 16) & 0xff
        reg2 = (start_freq >> 8) & 0xff
        reg3 = (start_freq) & 0xff
        wr_data = [reg1, reg2, reg3]
        print("wr_data:",wr_data)
        self.write_block(START_FREQ_REG, wr_data)

    def set_increment_freq(self, freq):
        increment_freq = int(freq * self.transform_ratio)

        reg1 = (increment_freq >> 16) & 0xff
        reg2 = (increment_freq >> 8) & 0xff
        reg3 = (increment_freq) & 0xff
        wr_data = [reg1, reg2, reg3]

        self.write_block(INCREMENT_FREQ_REG, wr_data)

    def set_increment_num(self, num):
        reg1 = (num >> 8) & 0x01
        reg2 = num & 0xff
        wr_data = [reg1, reg2]
        self.write_block(INCREMENT_NUM_REG, wr_data)

    def set_time_cycles(self, cycle_num):
        if cycle_num < 512:
            reg1 = (cycle_num >> 8) & 0x01
            reg2 = cycle_num & 0xff
        elif (cycle_num >= 512) and (cycle_num < 2045):
            cycle_num >>= 1
            if cycle_num < 512:
                reg1 = ((cycle_num >> 8) & 0x01) | 0x02
                reg2 = cycle_num & 0xff
            else:
                cycle_num >>= 1
                reg1 = ((cycle_num >> 8) & 0x01) | 0x03
                reg2 = cycle_num & 0xff
        else:
            cycle_num = 2044
            reg1 = 0x07
            reg2 = 0xff
        wr_data = [reg1, reg2]
        self.write_block(TIME_CYCLE_NUM_REG, wr_data)
        
    def sweep(self, start_freq, increment_freq, sweep_vol, gain_val):
        self.ic_init(start_freq, increment_freq, sweep_vol, gain_val)
        time.sleep(0.5)
        self.write_register(CONTROL_REG1,[CONTROL_MAP["AD59XX_START_FREQ_SCAN"] | sweep_vol | gain_val])
        while True:
            status_reg = self.read_register(STATUS_REG)
            if int.from_bytes(status_reg, 'big') & 0x02:
                if (int.from_bytes(status_reg, 'big') & 0x04) == 0x00:
                    self.read_register(0x94)
                    self.read_register(0x95)
                    self.read_register(0x96)
                    self.read_register(0x97)
                    self.write_register(CONTROL_REG1, [CONTROL_MAP["AD59XX_INCREMENT_FREQ"] | sweep_vol | gain_val])
                else:
                    break
        self.write_register(CONTROL_REG1,[CONTROL_MAP["AD59XX_STANDBY_MODE"] | sweep_vol | gain_val])

    def constant_output(self, start_freq, sweep_pp, pga_gain = "GAIN1"):
        assert sweep_pp in SWEEP_VOL.keys()
        sweep_vol = SWEEP_VOL[sweep_pp]
        assert pga_gain in GAIN.keys()
        self.write_register(CONTROL_REG1, [CONTROL_MAP["AD59XX_POWER_DOWN"] | sweep_vol | GAIN[pga_gain]])
        self.ic_init(start_freq, 0, sweep_vol, 1, 511, 2044)
        time.sleep(0.005)
        self.write_register(CONTROL_REG1, [CONTROL_MAP["AD59XX_START_FREQ_SCAN"] | sweep_vol | GAIN[pga_gain]])
        return "done"

    def stop_output(self):
        self.write_register(CONTROL_REG1, [CONTROL_MAP["AD59XX_POWER_DOWN"] | 0x03])
        return "done"
                    

class AD5933(AD59XX):
    def __init__(self, i2c_bus=None, mclk=16.776, clk_source="EXT_CLK"):
        self.transform_ratio = 536.870912 / mclk
        super(AD5933, self).__init__(i2c_bus, mclk, clk_source)


class AD5934(AD59XX):
    def __init__(self, i2c_bus=None, mclk=16.776, clk_source="EXT_CLK"):
        self.transform_ratio = 4 * 536.870912 / mclk
        super(AD5934, self).__init__(i2c_bus, mclk, clk_source)
