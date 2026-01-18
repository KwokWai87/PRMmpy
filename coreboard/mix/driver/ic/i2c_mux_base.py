# -*- coding: UTF-8 -*-
from mix.driver.bus.i2c_ds_bus import PRMI2CDownstreamBus


class I2CMUXBase(object):
    '''
    Base Class for all I2C Mux devices like TCA9548.

    :param i2c_bus: instance, i2c instance of upstream i2c bus.
                              Could be real i2c or emulator.
    '''
    def __init__(self, i2c_bus):
        self._i2c_bus = i2c_bus
        # list of downstream buses created.
        self.downstream_buses = {}

    def __getitem__(self, index):
        return self.i2c(index)

    def i2c(self, channel):
        '''
        Return a I2CDownstreamBus instance;
        Create one of not created for the channel before;
        Reuse exsiting one if already created.
        '''
        assert type(channel) is int
        assert channel >= 0

        if channel not in self.downstream_buses:
            ds_bus = PRMI2CDownstreamBus(self, channel)
            self.downstream_buses[channel] = ds_bus

        return self.downstream_buses[channel]

    def set_channel_state(self, channel):
        '''
        To be overriden by sub class.
        '''
        raise NotImplementedError('Function not defined in IC driver.')

    def get_channel_state(self, channel):
        '''
        To be overriden by sub class.
        '''
        raise NotImplementedError('Function not defined in IC driver.')

