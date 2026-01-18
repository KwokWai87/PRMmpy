from mix.driver.bus.soft_i2c import PRMSoftI2CBus
import math
import time
from machine import I2S, Pin, I2C
from mix.driver.bus.tcpClient import TcpClient

WM8978_ADDR = 0X1A
RETURN_DONE = "done"


class WM8978(object):
    WM8978_REGVAL_TBL = [
        0X0000, 0X0000, 0X0000, 0X0000, 0X0050, 0X0000, 0X0140, 0X0000,
        0X0000, 0X0000, 0X0000, 0X00FF, 0X00FF, 0X0000, 0X0100, 0X00FF,
        0X00FF, 0X0000, 0X012C, 0X002C, 0X002C, 0X002C, 0X002C, 0X0000,
        0X0032, 0X0000, 0X0000, 0X0000, 0X0000, 0X0000, 0X0000, 0X0000,
        0X0038, 0X000B, 0X0032, 0X0000, 0X0008, 0X000C, 0X0093, 0X00E9,
        0X0000, 0X0000, 0X0000, 0X0000, 0X0003, 0X0010, 0X0010, 0X0100,
        0X0100, 0X0002, 0X0001, 0X0001, 0X0039, 0X0039, 0X0039, 0X0039,
        0X0001, 0X0001
    ]

    def __init__(self, i2cObj, address):
        self._i2c = i2cObj
        self._address = address

    def WM8978_Init(self):
        res = self.WM8978_Write_Reg(0, 0)
        if (res):
            return 1
        self.WM8978_Write_Reg(1, 0X3B)
        self.WM8978_Write_Reg(2, 0X1B0)
        self.WM8978_Write_Reg(3, 0X6C)
        self.WM8978_Write_Reg(6, 0)
        # self.WM8978_Write_Reg(6, 0x11)
        # self.WM8978_Write_Reg(36, 0x08)
        # self.WM8978_Write_Reg(37, 0x31)
        # self.WM8978_Write_Reg(38, 0x26)
        # self.WM8978_Write_Reg(39, 0xE8)
        self.WM8978_Write_Reg(43, 1 << 4)
        self.WM8978_Write_Reg(47, 1 << 8)
        self.WM8978_Write_Reg(48, 1 << 8)
        self.WM8978_Write_Reg(49, 1 << 1)
        self.WM8978_Write_Reg(49, 1 << 2)
        self.WM8978_Write_Reg(10, 1 << 3)
        self.WM8978_Write_Reg(14, 1 << 3)
        return 0

    def WM8978_Write_Reg(self, reg, val):
        # self._ps_i2c.writeto(addr, bytearray(data))
        # self._i2c.writeto(self._address, bytearray([(reg<<1)|((val>>8)&0X01), val&0XFF]))
        self._i2c.send(self._address, [(reg << 1) | ((val >> 8) & 0X01), val & 0XFF])
        WM8978.WM8978_REGVAL_TBL[reg] = val

    def WM8978_Read_Reg(self, reg):
        return WM8978.WM8978_REGVAL_TBL[reg]

    def WM8978_ADDA_Cfg(self, dacen, adcen):
        regval = self.WM8978_Read_Reg(3)
        if (dacen):
            regval |= 3 << 0
        else:
            regval &= ~(3 << 0)
        self.WM8978_Write_Reg(3, regval)
        regval = self.WM8978_Read_Reg(2)
        if (adcen):
            regval |= 3 << 0
        else:
            regval &= ~(3 << 0)
        self.WM8978_Write_Reg(2, regval)

    def WM8978_Input_Cfg(self, micen, lineinen, auxen):
        regval = self.WM8978_Read_Reg(2)
        if (micen):
            regval |= 3 << 2
        else:
            regval &= ~(3 << 2)
        self.WM8978_Write_Reg(2, regval)

        regval = self.WM8978_Read_Reg(44)
        if (micen):
            regval |= 3 << 4 | 3 << 0
        else:
            regval &= ~(3 << 4 | 3 << 0)
        self.WM8978_Write_Reg(44, regval)

        if (lineinen):
            self.WM8978_LINEIN_Gain(5)
        else:
            self.WM8978_LINEIN_Gain(0)
        if (auxen):
            self.WM8978_AUX_Gain(7)
        else:
            self.WM8978_AUX_Gain(0)

    def WM8978_Output_Cfg(self, dacen, bpsen):
        regval = 0
        if (dacen):
            regval |= 1 << 0
        if (bpsen):
            regval |= 1 << 1
            regval |= 5 << 2
        self.WM8978_Write_Reg(50, regval)
        self.WM8978_Write_Reg(51, regval)

    def WM8978_MIC_Gain(self, gain):
        gain &= 0X3F
        self.WM8978_Write_Reg(45, gain)
        self.WM8978_Write_Reg(46, gain | 1 << 8)

    def WM8978_LINEIN_Gain(self, gain):
        gain &= 0X07
        regval = self.WM8978_Read_Reg(47)
        regval &= ~(7 << 4)
        self.WM8978_Write_Reg(47, regval | gain << 4)
        regval = self.WM8978_Read_Reg(48)
        regval &= ~(7 << 4)
        self.WM8978_Write_Reg(48, regval | gain << 4)

    def WM8978_AUX_Gain(self, gain):
        gain &= 0X07
        regval = self.WM8978_Read_Reg(47)
        regval &= ~(7 << 0)
        self.WM8978_Write_Reg(47, regval | gain << 0)
        regval = self.WM8978_Read_Reg(48)
        regval &= ~(7 << 0)
        self.WM8978_Write_Reg(48, regval | gain << 0)

    def WM8978_I2S_Cfg(self, fmt, len):
        fmt &= 0X03
        len &= 0X03
        self.WM8978_Write_Reg(4, (fmt << 3) | (len << 5))

    def WM8978_HPvol_Set(self, voll, volr):

        voll &= 0X3F
        volr &= 0X3F
        if (voll == 0):
            voll |= 1 << 6
        if (volr == 0):
            volr |= 1 << 6
        self.WM8978_Write_Reg(52, voll)
        self.WM8978_Write_Reg(53, volr | (1 << 8))

    def WM8978_SPKvol_Set(self, volx):

        volx &= 0X3F
        if (volx == 0):
            volx |= 1 << 6
        self.WM8978_Write_Reg(54, volx)
        self.WM8978_Write_Reg(55, volx | (1 << 8))

    def WM8978_3D_Set(self, depth):
        depth &= 0XF
        self.WM8978_Write_Reg(41, depth)

    def WM8978_EQ_3D_Dir(self, dir):
        regval = self.WM8978_Read_Reg(0X12)
        if (dir):
            regval |= 1 << 8
        else:
            regval &= ~(1 << 8)
        self.WM8978_Write_Reg(18, regval)

    def WM8978_EQ1_Set(self, cfreq, gain):
        cfreq &= 0X3
        if (gain > 24):
            gain = 24
        gain = 24 - gain
        regval = self.WM8978_Read_Reg(18)
        regval &= 0X100
        regval |= cfreq << 5
        regval |= gain
        self.WM8978_Write_Reg(18, regval)

    def WM8978_EQ2_Set(self, cfreq, gain):

        cfreq &= 0X3
        if (gain > 24):
            gain = 24
        gain = 24 - gain
        regval |= cfreq << 5
        regval |= gain
        self.WM8978_Write_Reg(19, regval)

    def WM8978_EQ3_Set(self, cfreq, gain):

        cfreq &= 0X3
        if (gain > 24):
            gain = 24
        gain = 24 - gain
        regval |= cfreq << 5
        regval |= gain
        self.WM8978_Write_Reg(20, regval)

    def WM8978_EQ4_Set(self, cfreq, gain):

        cfreq &= 0X3
        if (gain > 24):
            gain = 24
        gain = 24 - gain
        regval |= cfreq << 5
        regval |= gain
        self.WM8978_Write_Reg(21, regval)

    def WM8978_EQ5_Set(self, cfreq, gain):
        cfreq &= 0X3
        if (gain > 24):
            gain = 24
        gain = 24 - gain
        regval |= cfreq << 5
        regval |= gain
        self.WM8978_Write_Reg(22, regval)


class Codex(WM8978):

    def __init__(self, i2cObj, address):
        super(Codex, self).__init__(i2cObj, address)

    def audio_recode_init(self, gain=0):
        assert 0 <= gain <= 63
        self.WM8978_Init()
        self.WM8978_HPvol_Set(40, 40)
        self.WM8978_SPKvol_Set(30)
        self.WM8978_ADDA_Cfg(0, 1)
        self.WM8978_Input_Cfg(1, 1, 0)
        self.WM8978_Output_Cfg(0, 1)
        self.WM8978_MIC_Gain(gain)  # set mic Gain
        self.WM8978_SPKvol_Set(0)
        self.WM8978_I2S_Cfg(2, 0)  # 16bit fei lipu
        return "done"

    def audio_play_init(self):
        self.WM8978_Init()
        self.WM8978_HPvol_Set(63, 63)
        self.WM8978_SPKvol_Set(40)
        self.WM8978_ADDA_Cfg(1, 0);
        self.WM8978_Input_Cfg(0, 0, 0)
        self.WM8978_Output_Cfg(1, 0)
        self.WM8978_I2S_Cfg(2, 0)  # 16bit fei lipu
        return "done"
    # WM8978_I2S_Cfg(2,2) # 32bit fei lipu


# class Player(Codex):

# 	SIZE = 2048

# 	def __init__(self, audio_in, client, i2cObj, address):
# 		super(Player, self).__init__(i2cObj, address)
# 		self._ain = audio_in
# 		self._totalNum = 0
# 		self._currNum = 0
# 		self._flag = 0
# 		self._client= client
# 		self._mv1 = memoryview(bytearray(self.SIZE))
# 		self._mv2 = memoryview(bytearray(self.SIZE))
# 		# self._finished = False

# 	def i2s_callback(self, audio_in):
# 		if self._currNum < self._totalNum:
# 			audio_in.readinto(self._mv2) if self._flag else audio_in.readinto(self._mv1)
# 			self._client.send(self._mv2) if self._flag else self._client.send(self._mv1)
# 			self._currNum += self.SIZE
# 			self._flag = ~self._flag
# 		else:
# 			# self._finished = True
# 			self._client.shutdown()
# 			print("done\n")

# 	def recode(self, num = 1024*400,sample_rate=48000):
# 		self._totalNum = num
# 		self._currNum = 0
# 		self._flag = 0
# 		# self._client.send("asdasdasdas")
# 		self._ain.set_sample(sample_rate)
# 		self._ain.irq(self.i2s_callback)
# 		self._ain.readinto(self._mv2) if self._flag else self._ain.readinto(self._mv1)
# 		self._flag = ~self._flag


class Player(Codex):
    SIZE = 2048

    rpc_public_api = [
        "recode", "recode_block"
    ]

    def __init__(self, sck_pin="PB13", ws_pin="PB12", sd_pin="PC3", mclk_pin="PC6", i2c_sck="PB8", i2c_sda="PB9",
                 address=WM8978_ADDR):
        self._objI2c = PRMSoftI2CBus(i2c_sck, i2c_sda, 100000)
        super(Player, self).__init__(self._objI2c, address)
        self._ain = None
        self._sck_pin = Pin(sck_pin)
        self._ws_pin = Pin(ws_pin)
        self._sd_pin = Pin(sd_pin)
        self._mclk_pin = Pin(mclk_pin)
        self._totalNum = 0
        self._currNum = 0
        self._flag = 0
        self._duration = 0
        self._t = 0
        self._client = None
        self.callflag = False
        self._mv1 = bytearray(self.SIZE)
        self._mv2 = bytearray(self.SIZE)
        self._config = {
            "bits": 16,
            "sample_rate": 48000,
            "format": I2S.MONO,
            "ibuf": 1024 * 10
        }

    def i2s_callback(self, audio_in):
        try:
            if self._currNum < self._totalNum:
                print("if branch currNum:",self._currNum)
                audio_in.readinto(self._mv2) if self._flag else audio_in.readinto(self._mv1)
                if self._flag:
                    self._client.send(self._mv2)
                else:
                    self._client.send(self._mv1)
                self._currNum += self.SIZE
                self._flag = ~self._flag
            else:
                print("else branch currNum:", self._currNum)
                # self._finished = True
                audio_in.irq(None)
                self._client.shutdown()
                self.callflag = False
                print("Client_shutdown_success")
                print("done\n")
        except Exception as e:
            print("i2s_callback_errinfo:{}".format(e))
            audio_in.irq(None)

    def recode(self, ip, port, num=1024 * 10):
        try:
            self._client = TcpClient(ip, port)
            print("create_connect")
            self._client.connect()
        except:
            return False
        self.callflag = False
        if not self.callflag:
            self.callflag = True
        else:
            return False
        print("audio_recode_init")
        self.audio_recode_init()
        self._ain = I2S(2, sck=self._sck_pin, ws=self._ws_pin, sd=self._sd_pin, mclk=self._mclk_pin, mode=I2S.RX,
                        bits=self._config["bits"], format=self._config["format"], rate=self._config["sample_rate"],
                        ibuf=self._config["ibuf"])
        self._ain.set_sample(self._config["sample_rate"])
        self._totalNum = num
        self._currNum = 0
        self._flag = 0
        self._ain.irq(self.i2s_callback)
        self._ain.readinto(self._mv2) if self._flag else self._ain.readinto(self._mv1)
        self._flag = ~self._flag
        return True

    def recode_block(self, num=1024 * 400, bits=16, sample_rate=48000, format=I2S.MONO, ibuf=1024 * 10,
                     file_name="123.wav"):
        if self._client == None and file_name == None:
            return False
        self.callflag = False
        if not self.callflag:
            self.callflag = True
        else:
            return False
        import wave
        self.audio_recode_init()
        self._ain = I2S(2, sck=self._sck_pin, ws=self._ws_pin, sd=self._sd_pin, mclk=self._mclk_pin, mode=I2S.RX,
                        bits=bits, format=format, rate=sample_rate, ibuf=ibuf)
        self._ain.set_sample(sample_rate)
        self.f = wave.open(file_name, "wb")
        self.f.setnchannels(1 if format == I2S.MONO else 2)
        self.f.setsampwidth(2 if bits == 16 else 4)
        self.f.setframerate(sample_rate)
        # self._ain.irq(self.i2s_callback)
        buf = bytearray(num)
        self._ain.readinto(buf)
        self.f.writeframes(buf)
        self.f.close()
        print("done")
