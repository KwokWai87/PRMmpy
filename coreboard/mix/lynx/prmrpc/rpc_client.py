from datetime import datetime
from .protocols.jsonrpc import JSONRPCProtocol, JSONRPCServerError
from .transports.transport import PRMClientTransport
from .client import RPCClient
import traceback

class RPCClientWrapper:
    def __init__(self, uart, publisher=None):
        self.transport = PRMClientTransport(uart)

        self.protocol = JSONRPCProtocol()
        self.publisher = publisher
        self.transport.publisher = publisher

        self.rpc_client = RPCClient(self.protocol, self.transport, self.publisher, retries=3)

    def _get_proxy(self, prefix=''):
        return self.rpc_client.get_proxy(prefix)


    def call(self, method, *args, **kwargs):
        try:
            if self.publisher:
                self.publisher.publish(str(datetime.now()) + ' '*3+ 'method:{} args:{} kwargs:{} \n'.format(method,args,kwargs))
            response = getattr(self._get_proxy(), method)(*args, **kwargs)
            response = response.serialize()
            # print(type(response), dir(response))
            if self.publisher:
                self.publisher.publish(str(datetime.now())+ ' '*3+'recevice:{}'.format(response))
            if response is None:
                raise JSONRPCServerError('Timed out waiting for response from test engine in test: ' + str(method))
            if hasattr(response, 'error'):
                raise JSONRPCServerError('Test Engine error: ' + str(response._jsonrpc_error_code) + ':' + response.error)
        except Exception as e:
            raise e
            # response.error
        return response
