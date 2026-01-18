# -*- coding: UTF-8 -*-

import time
import math


class AD527xDef:
    """
    AD527xDef shows the registers address of AD527x
    AD5272 resolution is 10 bits, AD5274 resolution is 8 bits.
    """
    NOP_OPERATION = 0x00
    WRITE_TO_RDAC = 0x01
    READ_FROM_RDAC = 0x02
    STORE_RDAC = 0x03
    SOFTWARE_RESET = 0x04
    READ_SDO_OUTPUT = 0x05
    READ_50TP_ADDRESS = 0x06
    WRITE_TO_CONTROL = 0x07
    READ_FROM_CONTROL = 0x08
    SOFTWARE_SHUTDOWN = 0x09

    EN_RDAC_CMD = 0x02
    EN_50_TP_CMD = 0x03
    SET_50_TP_DELAY_S = 0.5
    RES_WORK_MODE = 'normal'
    RES_SHUTDOWN_MODE = 'shutdown'


class AD527xException(Exception):
    def __init__(self, err_str):
        self._err_reason = '%s.' % (err_str)

    def __str__(self):
        return self._err_reason


class AD527x(object):
    """
    AD527x digital rheostat function class

    ClassType = ADC

    Args:
        dev_addr:    hexmial, I2C device address of AD527x.
        i2c_bus:     instance(I2C)/None, Class instance of I2C bus, if not using this parameter, will create Emulator.

    Examples:
        i2c = PRMSoftI2CBus()
        AD527x = AD527x(0x50, i2c)
    """
    rpc_public_api = [
        "set_resistor", "get_resistor", "set_work_mode", "set_control_register", "get_control_register",
        "set_50tp_resistor", "read_50tp_address", "read_sdo_output", "software_reset"
    ]

    def __init__(self, dev_addr, i2c_bus=None, resistor_wa=100000):
        # the ad527x i2c address is seven bits, but high five bits is 0b101100
        assert (dev_addr & (~0xD3)) == 0x2c
        self.dev_addr = dev_addr
        self.resolution = 10
        self.i2c_bus = i2c_bus
        self.resistor_wa = resistor_wa

    def write_command(self, command, data):
        """
        AD527x write data to AD527X through the commands,
        these commands are similar to register address.

        Args:
            command:    hexmial, [0~0xF], Write datas to this address.
            data:       hexmial, [0~0x3FF], Data for register.

        Examples:
            # Need to send the 0x2 to allow update of
            # wiper position through a digital interface
            AD527x.write_command(0x00, 0x2)

        """
        assert type(data) is int and command in range(0xF)

        if command == 0x7 or command == 0x9:
            write_data = [command << 2, data & 0xf]
        else:
            if self.resolution == 10:
                write_data = [command << 2 | (data >> 8 & 0x3), data & 0xff]
            else:
                write_data = [(command << 2) | ((data >> 6) & 0x3), (data & 0x3f) << 2]
        self.i2c_bus.write(self.dev_addr, write_data)

    def read_command(self, command):
        """
        AD527x read data through the commands,
        these commands are similar to register address.

        Args:
            command:    hexmial, [0~0xF], Write datas to this address.

        Returns:
            list.

        Examples:
            recv_byte = AD527x.read_command(0x00)
            print (recv_byte)

        """
        # tell AD527x that I'm going to read
        assert command in range(0xF)
        self.write_command(command, 0x00)
        # read 2 bytes from AD527x
        recv_byte = self.i2c_bus.recv(self.dev_addr, 2)
        return recv_byte

    def get_resistor(self):
        """
        AD527x get the resistor data from RDAC wiper register.

        Returns:
            float, value, unit ohm.

        Examples:
            resistor = AD527x.get_resistor()

        """
        reg = self.read_command(AD527xDef.READ_FROM_RDAC)
        read_data = (reg[0] << 8) | reg[1]
        # default 100KΩ, general formula is use the resolution and nominal
        # resistance to calculate
        if self.resolution == 10:
            resistor = (read_data & 0x3FF) / math.pow(2, self.resolution) * self.resistor_wa
        else:
            resistor = ((read_data & 0x3FF) >> 2) / math.pow(2, self.resolution) * self.resistor_wa
        return resistor  # unit: ohm

    def set_resistor(self, resistor):
        """
        AD527x set the resistor data to RDAC.
        If the resistor data is a multiple of (max output of resistor / 2^resolution),
        the actual resistor of AD527X is less then resistor data that you set.
        eg:
            The max output resistor of AD5272 is 100Khom,and the resolution is 10,
            so the step value is 100Kohm / 2^10 = 97.65625 ohm
            if the resistor you want to output is 2000 ohm, the
            actual output of resistor is 1953.125 ohm(20 times of 97.65625 ohm)

        Args:
            resistor:   float, [0~100000], unit ohm,  resistor data.

        Examples:
            AD527x.set_resistor(4583.9)

        """
        # default 100KΩ, against general formula can get the resistor
        assert 0 <= resistor <= self.resistor_wa
        data = int(float(resistor) / self.resistor_wa * math.pow(2, self.resolution))
        # send 0x1 command to write contents of serial register data to RDAC
        self.write_command(AD527xDef.WRITE_TO_RDAC, data)
        return 'done'

    def set_50tp_resistor(self, resistor):
        """
        only have 50 times setting, 50 TP address [0x00,0x32]
        """
        self.write_command(AD527xDef.WRITE_TO_CONTROL, AD527xDef.EN_50_TP_CMD)
        self.set_resistor(resistor)
        self.write_command(AD527xDef.STORE_RDAC, 0x00)
        # wait for 50 TP write done, about 350ms
        time.sleep(AD527xDef.SET_50_TP_DELAY_S)
        # return last 50 TP register addrss
        return self.read_command(AD527xDef.READ_50TP_ADDRESS)

    def read_50tp_address(self):
        return self.read_command(AD527xDef.READ_50TP_ADDRESS)

    def read_sdo_output(self):
        return self.read_command(AD527xDef.READ_SDO_OUTPUT)

    def software_reset(self):
        self.write_command(AD527xDef.SOFTWARE_SHUTDOWN, 0x00)
        return 'done'

    def set_work_mode(self, work_mode):
        """
        AD527x software shutdown.

        Args:
            work_mode:  string, ["normal", "shutdown"], Set the mode.

        Examples:
            AD527x.set_resistor("shutdown")

        """
        assert work_mode in ['normal', 'shutdown']
        data = 0x0
        if 'normal' == work_mode:
            data = 0x0
        elif 'shutdown' == work_mode:
            data = 0x1
        # set AD527x work mode
        self.write_command(AD527xDef.SOFTWARE_SHUTDOWN, data)

    def set_control_register(self, reg_data):
        """
        AD527x set the control data to control register.

        Args:
            reg_data:     int, [0~0x7], Set control register.

        Examples:
            AD527x.set_control_registers(0x6)

        """
        assert type(reg_data) is int and reg_data in range(0x7)
        # send 0x7 command to write contents of the serial register data
        # to the control register.
        self.write_command(AD527xDef.WRITE_TO_CONTROL, reg_data)

    def get_control_register(self):
        """
        AD527x get the control data from  control register.

        Returns:
            int, value.

        Examples:
            reg_data = AD527x.get_control_register()
            print(reg_data)

        """
        # send 0x8 command to read contents of the control register.
        reg_data = self.read_command(AD527xDef.READ_FROM_CONTROL)
        # only last four bit valid
        return reg_data[1] & 0xF


class AD5274(AD527x):
    """
    AD5274 digital rheostat function class, its resolution is 8

    ClassType = ADC

    Args:
        dev_addr:    hexmial, I2C device address of AD527x.
        i2c_bus:     instance(I2C)/None, Class instance of I2C bus, if not using this parameter, will create Emulator.

    Examples:
        i2c = PRMSoftI2CBus(axi)
        AD5274 = AD5274(0x50, i2c)

    """

    def __init__(self, dev_addr, i2c_bus=None, resistor_wa=20000):
        super(AD5274, self).__init__(dev_addr, i2c_bus, resistor_wa)
        self.resolution = 8


class AD5272(AD527x):
    """
    AD5272 digital rheostat function class, its resolution is 10

    ClassType = ADC

    Args:
        dev_addr:    hexmial, I2C device address of AD527x.
        i2c_bus:     instance(I2C)/None, Class instance of I2C bus, if not using this parameter, will create Emulator.

    Examples:
        i2c = PRMSoftI2CBus(axi)
        AD5272 = AD5272(0x50, i2c)

    """

    def __init__(self, dev_addr, i2c_bus=None, resistor_wa=100000):
        super(AD5272, self).__init__(dev_addr, i2c_bus, resistor_wa)
        self.resolution = 10
