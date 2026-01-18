__Author__ = "Minghui.Wang"

import time
import socket


class TcpClient(object):

    SIZE = 1024
    def __init__(self, ip, port):
        self._net_config = (ip, port)
        self.__socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        # self.__socket.setsockopt(socket.SOL_SOCKET, socket.SO_KEEPALIVE, 1)
        # self.__socket.settimeout(2)
        self.connect()

    def connect(self):
        try:            
            self.__socket.connect(self._net_config)
        except Exception as e:
            raise e

    def shutdown(self):
        if self.__socket:
            self.__socket.close()
            del self.__socket
            self.__socket = None

    def send(self, cmd):
        try:
            # cmd = re.sub('\[\]', '[{}]'.format(self._counter), cmd)
            # cmd += "\r\n"
            return self.__socket.send(cmd)
        except Exception as e:
            raise RuntimeError("cmd send error: ", e)

    def read(self, size=1024):
        # if timeout/1000.0 != self._session.gettimeout():
        #     self._session.settimeout(timeout/1000.0)
        try:
            line = self.__socket.recv(size)
        except socket.timeout:
            line = None
        return line

    def readUntil(self, timeout=2000, terminator='}'):
        if timeout / 1000.0 > self.__socket.gettimeout():
            self.__socket.settimeout(timeout / 1000.0)
        timeout_happen = False
        line = str()
        while True:
            try:
                c = self.__socket.recv(self.SIZE)
                if c:
                    line += c
                    if line.rfind(terminator) > 0:
                        break
            except socket.timeout:
                timeout_happen = True
                break
        return line if not timeout_happen else None

    def send_read(self, cmd, terminator="\n", timeout=2000):
        self.send(cmd)
        return self.readUntil(timeout, terminator)



#
# s = TcpClient("169.254.1.32", 7801)
#
# for i in range(100):
#     print s.sendRead("asdasdasd")
# s.shutdown()

import wave
import gc
def test(wavtempfile="tmp/test.wav", port=7901):
    start1_time = time.ticks_ms()
    client=TcpClient("169.254.1.99", port)
    # time.sleep_ms(200)
    wav = open(wavtempfile, 'rb')
    # pos = wav.seek(44)
    wav_samples = bytearray(2048)
    wav_samples_mv = memoryview(wav_samples)
    print("init: {}ms".format(time.ticks_ms()-start1_time))
    start_time = time.ticks_ms()
    size = 0
    while True:
        try:
            num_read = wav.readinto(wav_samples_mv)
            size += num_read
            num_written = 0
            if num_read == 0:
                break
            while num_written < num_read:
                # print(type(wav_samples_mv[num_written:num_read]))
                num_written += client.send(wav_samples_mv[num_written:num_read])
                # time.sleep_ms(5)
        except Exception as e:
            raise e
    client.shutdown()
    print("total: {}ms".format(time.ticks_ms() - start_time))
    print("size: {}".format(size))
    return "done"




