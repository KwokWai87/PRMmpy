import math
import time
from machine import I2S, Pin, I2C



# class Player(Codex):

#   SIZE = 2048

#   def __init__(self, audio_in, client, i2cObj, address):
#       super(Player, self).__init__(i2cObj, address)
#       self._ain = audio_in
#       self._totalNum = 0
#       self._currNum = 0
#       self._flag = 0
#       self._client= client
#       self._mv1 = memoryview(bytearray(self.SIZE))
#       self._mv2 = memoryview(bytearray(self.SIZE))
#       # self._finished = False

#   def i2s_callback(self, audio_in):
#       if self._currNum < self._totalNum:
#           audio_in.readinto(self._mv2) if self._flag else audio_in.readinto(self._mv1)
#           self._client.send(self._mv2) if self._flag else self._client.send(self._mv1)
#           self._currNum += self.SIZE
#           self._flag = ~self._flag
#       else:
#           # self._finished = True
#           self._client.shutdown()
#           print("done\n")

#   def recode(self, num = 1024*400,sample_rate=48000):
#       self._totalNum = num
#       self._currNum = 0
#       self._flag = 0
#       # self._client.send("asdasdasdas")
#       self._ain.set_sample(sample_rate)
#       self._ain.irq(self.i2s_callback)
#       self._ain.readinto(self._mv2) if self._flag else self._ain.readinto(self._mv1)
#       self._flag = ~self._flag


class Player(object):
    SIZE = 2048

    rpc_public_api = [
        "recode", "recode_block"
    ]

    def __init__(self, sck_pin="PB13", ws_pin="PB12", sd_pin="PC3", mclk_pin="PC6", i2c_sck="PB8", i2c_sda="PB9"):
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
        self._f = None
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
                audio_in.readinto(self._mv2) if self._flag else audio_in.readinto(self._mv1)
                if self._flag:
                    self.f.writeframes(self._mv2)
                else:
                    self.f.writeframes(self._mv1)
                self._currNum += self.SIZE
                self._flag = ~self._flag
            else:
                print("else branch currNum:", self._currNum)
                # self._finished = True
                self._f.close()
                audio_in.irq(None)
                self.callflag = False
                print("Client_shutdown_success")
                print("done\n")
        except Exception as e:
            print("i2s_callback_errinfo:{}".format(e))
            audio_in.irq(None)

    def recode(self, file_name, num=1024 * 100):
        self._f = open(file_name, "wb")
        self._f.setnchannels(1 if self._config["format"] == I2S.MONO else 2)
        self._f.setsampwidth(2 if self._config["bits"] == 16 else 4)
        self._f.setframerate(self._config["sample_rate"])
        self.callflag = False
        if not self.callflag:
            self.callflag = True
        else:
            return False
        self._ain = I2S(2, sck=self._sck_pin, ws=self._ws_pin, sd=self._sd_pin, mode=I2S.RX,
                        bits=self._config["bits"], format=self._config["format"], rate=self._config["sample_rate"],
                        ibuf=self._config["ibuf"])

        # self._ain.set_sample(self._config["sample_rate"])
        self._totalNum = num
        self._currNum = 0
        self._flag = 0
        self._ain.irq(self.i2s_callback)
        self._ain.readinto(self._mv2) if self._flag else self._ain.readinto(self._mv1)
        self._flag = ~self._flag
        return True

    def recode_block(self, num=1024*400, bits=16,sample_rate=48000, _format=I2S.MONO, ibuf=1024*10, file_name="123.wav"):
        if file_name == None:
            return False
        self.callflag = False
        if not self.callflag:
            self.callflag = True
        else:
            return False
        import wave
        self._ain = I2S(2, sck=self._sck_pin, ws=self._ws_pin, sd=self._sd_pin, mode=I2S.RX, bits=bits, format=_format, rate=sample_rate, ibuf=ibuf)
        # self._ain.set_sample(sample_rate)
        self.f = wave.open(file_name, "wb")
        self.f.setnchannels( 1 if _format==I2S.MONO else 2)
        self.f.setsampwidth( 2 if bits == 16 else 4)
        self.f.setframerate(sample_rate)
        # self._ain.irq(self.i2s_callback)
        buf = bytearray(num)
        self._ain.readinto(buf)
        self.f.writeframes(buf)
        self.f.close()
        print("done")