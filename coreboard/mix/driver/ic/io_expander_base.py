# -*- coding: UTF-8 -*-
from ..bus.pin import Pin


class IOExpanderBase(object):
    '''
    Base Class for all IO Expander like CAT9555.

    :param i2c_bus: instance, i2c instance of upstream i2c bus.
                              Could be real i2c or emulator.
    '''
    rpc_public_api = ["pin"]
    def __init__(self):
        # list of downstream buses created.
        self.ports = {}

    def __getitem__(self, index):
        '''
        Support cat9555[1] --> Pin(cat9555, 1)
        '''
        return self.pin(index)

    def pin(self, port):
        '''
        Return a Pin instance for given port;
        Create one of not created for the port before;
        Reuse exsiting one if already created.
        '''
        assert type(port) is int
        assert port >= 0

        if port not in self.ports:
            pin = Pin(self, port)
            self.ports[port] = pin

        return self.ports[port]

