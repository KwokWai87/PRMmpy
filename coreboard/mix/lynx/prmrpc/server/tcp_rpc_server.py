import ospath
import time
import logging
from ..exc import RPCError

from ..protocols.jsonrpc import JSONRPCServerError, JSONRPCInvalidRequestError
from ..transports.tcptransport import TcpServerTransport

try:
    import asyncio
except:
    import uasyncio as asyncio
from pyb import UART



class TCPRPCServer(object):

    def __init__(self, protocol, dispatcher, host='127.0.0.1', port=7801):
        super(TCPRPCServer, self).__init__()
        self.protocol = protocol
        self.dispatcher = dispatcher
        self.host = host
        self.port = port
        # lock to protect shared tasks object among threads
        self.lock = asyncio.Lock()
        self.tasks = {}
        self.server = None
        self.transport = None
        self.serving = True
        # logger: use global default as initial
        self.logger = logging.getLogger()
        self.__socket = dict()
        self.__uart = UART(3, 115200)
        self.__isEnable = True
        self.__uart.init(115200, bits=8, parity=None, stop=1)

    async def run(self):
        self.logger.info('Awaiting client connection.')
        # asyncio.create_task(heartbeat(100))
        self.server = await asyncio.start_server(self.process_one_message, self.host, self.port, 8)
        while self.serving:
            await asyncio.sleep(100)

    async def process_one_message(self, sreader, swriter):
        request = None
        # print('start process_one_message')
        if self.__isEnable:
            self.__uart.write('start process_one_message')
        addr = sreader.get_extra_info('peername')
        start_time = time.ticks_ms()
        message = await sreader.readline()
        if self.__isEnable:
            self.__uart.write("0000000000000000000000000000000_{}".format(addr[-1]))
            self.__uart.write("message: {}".format(message))
        if message:
            try:
                message.strip()
                request = self.protocol.parse_request(message)
                if self.__isEnable:
                    self.__uart.write("request: {}, {}".format(request, addr[-1]))
                response = self.dispatcher.dispatch(request)
            except Exception as e:
                if self.__isEnable:
                    self.__uart.write("handle_message: Exception{}".format(e))
                response = self.protocol.error_respond(e, request)
            reply = response.serialize()
            if self.__isEnable:
                self.__uart.write("response: {}, type: {}".format(reply, type(reply)))
                self.__uart.write("2222222222222222222222222222_{}".format(addr[-1]))
                self.__uart.write("end time: {}".format(time.ticks_ms() - start_time))
            reply += "\r\n"
            swriter.write(reply)
            if "recode" in str(message):
                if self.__isEnable:
                    self.__uart.write("inside recode")
                time.sleep(1.5)
            if self.__isEnable:
                self.__uart.write("3333333333333333333333333333_{}".format(addr[-1]))
            await swriter.drain()  # Echo back
            await swriter.wait_closed()
            if self.__isEnable:
                self.__uart.write("44444444444444444444444_closed{}".format(addr[-1]))

    # async def process_one_message(self, sreader, swriter):
    #     print('start process_one_message')
    #     addr = sreader.get_extra_info('peername')
    #     if not self.transport:
    #         self.transport = TcpServerTransport(sreader, swriter)
    #         self.__socket[addr[-1]] = self.transport.sreader
    #     else:
    #         old_stream = self.__socket.get(addr[-1], None)
    #         if old_stream:
    #             await self.transport.sreader.wait_closed()
    #         self.transport.sreader = sreader
    #         self.transport.swriter = swriter
    #         self.__socket[addr[-1]] = self.transport.sreader
    #     while self.serving:
    #         try:
    #             message = await self.transport.receive_message()
    #         except Exception as e:
    #             continue
    #         if message:
    #             # print('Cobra Receive:{}'.format(message))
    #             await self.handle_message(message)
    #     await self.transport.sreader.wait_closed()
    #     # await swriter.wait_closed()

    def handle_message(self, msg, need_reply=True):
        request = None
        try:
            request = self.protocol.parse_request(msg)

            response = self.dispatcher.dispatch(request)
        except Exception as e:
            print("handle_message: Exception{}".format(e))
            print("Exception type: {}".format(type(e)))
            # response = self.protocol.error_respond(JSONRPCInvalidRequestError(e), request)
            response = self.protocol.error_respond(e, request)
        s_rep = response.serialize()
        # if need_reply:
        #     # await self.transport.send_reply_with_lock(s_rep)
        #     await self.transport.send_reply(s_rep)
        # return response
        return s_rep

    async def set_logger(self, logger):
        self.logger = logger
        self.transport.logger = logger
        # self.protocol.logger = logger
        # self.dispatcher.logger = logger

    async def shutdown(self):
        self.logger.info('Closing server')
        self.serving = False
        await self.server.close()
        await self.server.wait_closed()
        self.logger.info('Server closed.')

