# -*- coding: utf-8 -*-
from mix.driver.module.prm_mix_board import PRMMIXBoard
from mix.driver.ic.cat9555 import PRMCAT9555
from mix.driver.ic.cat24cxx import PRMCAT24C256
from mix.driver.ic.ad56x7r import PRMAD5667R
from mix.driver.ic.tmp1117 import PRMTMP117

import counter
import freq
import time
from machine import Pin
from pyb import UART



#instrument_iic
#cat9555 : 0x20, 0x21, 0x22
#eeprom : 0x50


#base_iic
#cat9555: 0x23
#tmp103: 0x70


class BaseDef:
    IO_OFFSET = 0
    IO_PINS = 16
    RATES = [
        8, 16, 32, 64, 128, 250, 475, 860
    ]
    RETURN_DONE = "done"
    RETURN_ERROR = False
    DEFAULT_DELAY_S = 0.005

    SIB_IIC_ADDR = {
        "cat9555": [0x20, 0x21],
        "eeprom": [0x50],
        "ad5667r": [0x0c]
    }

    BASE_IIC_ADDR = {
        "cat9555": [0x20],
        "eeprom": [0x50]
    }

    WIB_IIC_ADDR = {
        "cat9555": [0x20],
        "tmp1117": [0x48]
    }



class BoardArgCheckError(Exception):
    '''Check parameter results do not conform to the function afferent specification, use this raise
    '''
    def __init__(self, err):
        Exception.__init__(
            self, "[BASEBoard arg check exception] %s" % (err))


class BaseBoard(PRMMIXBoard):
    """
    BaseBoard function class
    :param      tca9548:       instance/None,  Class instance of TCA9548, if not using this parameter, will create emulator
    :param      io_exp0:       instance/None,  Class instance of CAT9555, if not using this parameter, will create emulator

    :example:
            axi = AXI4LiteBus('/dev/MIX_I2C_4', 256)
            i2c = PLI2CBus(axi)
            tca9548 = TCA9548(0x70,i2c)
            ad5627 = AD5627(0x50, i2c)
            io_exp0 = CAT9555(0x20,i2c)

    """
    rpc_public_api = [
                        "module_init", "set_io_switch","get_io", "get_io_dir", "set_iolist_dir", "get_iolist_status",
                         "dac_output_volt_dc","dac_read_volt","counter_pa0_trigger","freq_pa15_measure_freq","tmp1117_osRead",
                         "tmp1117_osRead_with_retry","temp_wib_iic_scan","counter_pa0_trigger_1"
                     ] + PRMMIXBoard.rpc_public_api

    def __init__(self, sib_iic, base_iic, wib_iic):

        eeprom = PRMCAT24C256(BaseDef.SIB_IIC_ADDR["eeprom"][0], sib_iic)
        super(BaseBoard, self).__init__(eeprom)

        self.io_chips = []
        for i in BaseDef.SIB_IIC_ADDR.get('cat9555'):
            io_exp = PRMCAT9555(i, sib_iic)
            self.io_chips.append(io_exp)
        for i in BaseDef.BASE_IIC_ADDR.get('cat9555'):
            io_exp = PRMCAT9555(i, base_iic)
            self.io_chips.append(io_exp)
        for i in BaseDef.WIB_IIC_ADDR.get('cat9555'):
            io_exp = PRMCAT9555(i, wib_iic)

            self.io_chips.append(io_exp)
        self.dac = PRMAD5667R(BaseDef.SIB_IIC_ADDR.get('ad5667r')[0] ,sib_iic)
        # dev_addr, i2c_bus = None
        self.tmp1117 = PRMTMP117(BaseDef.WIB_IIC_ADDR.get("tmp1117")[0],wib_iic)
        self.c = counter()
        self.f = freq()
        self.wbi_iic = wib_iic
        self.__uart = UART(3, 115200)
        self.__isEnable = True
        self.__uart.init(115200, bits=8, parity=None, stop=1)


    def module_init(self):
        """
        Translation Board Init cat9555 output mode
        :return: str "done"/"error";
        :example:
                self.init_baseboard_device()
        """

        # init cat9555
        if self.__isEnable:
            self.__uart.write("module_init")
        for cat9555 in self.io_chips:
            cat9555.set_pins_dir([0x00, 0x00])
            cat9555.set_ports([0x00, 0x00])

        # adc init
        self.dac.set_reference(ref_mode="INTERNAL")
        self.dac.select_work_mode(0, mode="NORMAL")
        self.dac.select_work_mode(1, mode="NORMAL")
        if self.__isEnable:
            self.__uart.write("done")
        # tmp1117 init
        # user code

        return BaseDef.RETURN_DONE

    def temp_wib_iic_scan(self):
        return self.wbi_iic.scan()

    def tmp1117_osRead(self):
        return self.tmp1117.osRead()

    def tmp1117_osRead_with_retry(self):
        return self.tmp1117.osRead_with_retry()


    def counter_pa0_trigger(self):
        # return counter().trigger()
        return self.c.trigger()

    def counter_pa0_trigger_1(self):
        return counter().trigger()
        # return self.c.trigger()

    def freq_pa15_measure_freq(self,time=100, ch=0):
        return self.f.measure_freq(time, ch)

    def dac_output_volt_dc(self, channel, volt):
        self.dac.output_volt_dc(channel, volt)
        return BaseDef.RETURN_DONE

    def dac_read_volt(self,channel):
        return self.dac.read_volt(channel)

    def set_io_switch(self, io_list):
        """
        switch 3 cat9555 io;check i2c_channel is 0
        set io switch
        :param io_list:     list,[[9,1],[10,0],[12,1]]
        :return: str "done"/"error";
        :example:
                self.set_io_switch([[9,1],[10,1],[11,0],[12,1]])
                self.set_io_switch([[9,0]])
        """
        if self.__isEnable:
            self.__uart.write("set_io_switch")
        result = True
        for item in io_list:
            assert isinstance(item, list)
            io, level = item
            assert io >= BaseDef.IO_OFFSET
            assert level in (0, 1)
            index, pin = divmod(io - BaseDef.IO_OFFSET, BaseDef.IO_PINS)
            cat9555 = self.io_chips[index]
            if self.__isEnable:
                self.__uart.write("CAT9555 set_PIN: {pin},index: {index} level: {level}")
            cat9555.set_pin(pin, level)
            bit_level = cat9555.get_pin_state(pin)
            if self.__isEnable:
                self.__uart.write("bit_level: {}  level: {}".foramt(bit_level, level))
            if bit_level != level:
                result = False
        if self.__isEnable:
            self.__uart.write("result: {}".format(result))
        return result

    def get_io(self, io_list):
        io_map = []
        for item in io_list:
            assert isinstance(item, list)
            io, level = item
            assert io >= BaseDef.IO_OFFSET
            assert level in (0, 1)
            index, pin = divmod(io - BaseDef.IO_OFFSET, BaseDef.IO_PINS)
            cat9555 = self.io_chips[index]
            bit_level = cat9555.get_pin_state(pin)
            io_map.extend([pin, bit_level])
        return io_map

    def get_io_dir(self, io):
        """
        get cat9555 io input/output mode
        :param io:   int, 9
        :return: str,  input/output
        """
        assert isinstance(io, int) and io >= 0
        index, pin = divmod(io - BaseDef.IO_OFFSET, BaseDef.IO_PINS)
        cat9555 = self.io_chips[index]
        return cat9555.get_pin_dir(pin)

    def set_iolist_dir(self, io_list, dir):
        """
        switch cat9555 io input/output mode
        :param io_list:     list, [9,10,11]
        :param dir: input/output
        :return: str,  done
        """
        assert isinstance(io_list, list)
        assert dir in ("input", "output")
        for io in io_list:
            index, pin = divmod(io - BaseDef.IO_OFFSET, BaseDef.IO_PINS)
            cat9555 = self.io_chips[index]
            cat9555.set_pin_dir(pin, dir)
        return BaseDef.RETURN_DONE

    def get_iolist_status(self, io_list):
        """
        get cat9555 io high/low status
        :param io_list:     list,  [9,10,11]
        :return: dict {9:0,10:1,11:1}
        :example:
                self.get_iolist_status([9,10,11])
                self.get_iolist_status([9])
        """
        assert isinstance(io_list, list)
        result = dict()
        for io in io_list:
            index, pin = divmod(io - BaseDef.IO_OFFSET, BaseDef.IO_PINS)
            cat9555 = self.io_chips[index]
            result.setdefault(io, cat9555.get_pin_state(pin))
        return result

    