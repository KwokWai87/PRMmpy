import re
import ospath
import logging
from .protocols.jsonrpc import JSONRPCProtocol
from .transports.transport import PRMServerTransport
from .server.tcp_rpc_server import TCPRPCServer
from .dispatch import RPCDispatcher
try:
    import asyncio
except:
    import uasyncio as asyncio


class TCPServerWrapper:
    """
    TCPServerWrapper
    """
    rpc_public_api = ['reset', 'stop', 'all_methods']

    def __init__(self, host='127.0.0.1', port=7801, log_level=logging.INFO, log_folder_path=None, name=None):
        assert host 
        assert port
        self.protocol = JSONRPCProtocol()
        self.dispatcher =  RPCDispatcher()
        self.rpc_server = TCPRPCServer(self.protocol, self.dispatcher, host, port)
        if name:
            # name should be string.
            err_msg = 'RPC server name ({}) shall be string.'.format(name)
            assert isinstance(name, str), err_msg
            err_msg = 'RPC server name ({}) shall not contain .'.format(name)
            assert '.' not in name, err_msg
            err_msg = 'RPC server name ({}) shall not contain {}'.format(name, ospath.sep)
            assert ospath.sep not in name, err_msg
            logger_name = name
        else:
            # use port as name.
            pattern = 'tcp://(?P<ip>[0-9.*]+):(?P<port>[0-9]+)'
            re_groups = re.match(pattern, self.endpoint)
            logger_name = re_groups.group('port')
        self.logger = logging.getLogger(logger_name)
        self.register_instance({'server': self})

    async def init_server(self):
        # self.register_instance({'server': self})
        asyncio.create_task(self.rpc_server.run())
        

    def register_instance(self, obj={}):
        '''
        Register instance as RPC service provided to the RPC server.

        :param obj: a dictionary with the following format:

            value: instance that provide functions as RPC service

            key: a string as the prefix of all RPC services belongs to the instance in value.

        Example code for client to send "driver1_measure()" RPC to call driver1.measure()
        and driver2_measure() to call driver2.measure() on server:

        .. code-block:: python

            # Driver() class has a public function measure()
            driver1 = Driver()
            driver2 = Driver()
            server.register_instance({'driver1': driver1, 'driver2': driver2})

        '''
        self.rpc_server.dispatcher.register_instance(obj)

    async def reset(self):
        await self.rpc_server.shutdown()
        await self.init_server()
        return True

    async def stop(self):
        await self.rpc_server.shutdown()
        return True
    
    def all_methods(self):
        '''
        Wrapper for dispatcher.all_methods()
        '''
        return self.rpc_server.dispatcher.all_methods()


if __name__ == '__main__':
    pass