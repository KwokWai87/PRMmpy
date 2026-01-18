
from _thread import allocate_lock
# import _thread
'''
I2C Downstream bus driver.
'''


def lock_i2c_mux(f):
    '''
    decorator to add lock and i2c-mux switch around wrapped function
    '''
    def wrapper(self, *args, **kwargs):
        with self.mux.mux_lock:
            self.mux.set_channel_state([[self.channel, 1]])
            try:
                ret = f(self, *args, **kwargs)
            finally:
                self.mux.set_channel_state([[self.channel, 0]])
        return ret

    return wrapper


class PRMI2CDownstreamBus(object):
    '''
    I2C Downstream bus driver.

    I2C Downstream bus is the i2c bus coming from a i2c_mux's downstream channel.
    I2C master/root cannot directly talk to devices connecting to i2c downstream bus;
    A i2c mux switch is required to enable the bus beforehands.

    This driver is intended to work as a i2c bus driver but wrap mux switching action inside.
    For example, if we have a cat9555 connecting to channel 0 of i2c-mux (tca9548) on i2c bus 0,
    To read from cat9555, user software needs to do this:
        0. Create instance:
            i2c = I2C('/dev/i2c-0')
            mux = TCA9548(mux_addr, i2c)
            io_exp = CAT9555(i2c, io_exp_addr)

        1. tca9548 channel 0 enable:
            mux.enable_channel(0)
        2. read cat9555 pin:
            io_exp.get_pin(0)
        3. tca9548 channel 0 disable
            mux.disable_channel(0)
    Step 3 is required for avoid address conflict on different i2c-mux channels.

    With this driver, this could be done by less steps:
        0. Create instance:
            i2c = I2C('/dev/i2c-0')
            mux = TCA9548(mux_addr, i2c)
            i2c_ds = I2CDownStreamBus(mux, 0)
            io_exp = CAT9555(i2c_ds, io_exp_addr)
        1. read cat9555 pin:
            io_exp.get_pin(0)

    i2c-mux cascading is supported by passing a i2c-ds-bus as 1st argument of __init__().

    :param mux: instance/None, a i2c mux instance that has a lock and set channel action.
                               Could be a I2CDownstreamBus instance if it is a cascading
                               i2c-mux: mux connecting to another i2c-mux's downstream channel.

    :param channel: int(>0), channel number of i2c mux that this bus is coming from.

    :example:
            # creating instance
            i2c = I2C('/dev/i2c-0')
            mux = TCA9548(mux_addr, i2c)
            i2c_ds = I2CDownStreamBus(mux, 0)

            # use i2c_ds to initiate devices
            io_exp = CAT9555(i2c_ds, io_exp_addr)

            # read cat9555 pin:
            io_exp.get_pin(0)
    '''
    # class lock to control lock creating action for i2c_mux;
    LOCK = allocate_lock()
    rpc_public_api = ['close','read','write','write_and_read'
                      ]

    def __init__(self, mux=None, channel=None):
        # channel must be specified int and >= 0.
        assert type(channel) is int
        assert channel >= 0
        self.mux = mux
        # existing tca9548 has _i2c_bus instance.
        self.i2c = self.mux._i2c_bus
        self.channel = channel

        # mux instance may not have a lock; create one if not.
        # use LOCK here to ensure only 1 lock created for the same mux.
        with PRMI2CDownstreamBus.LOCK:
            if not hasattr(mux, 'mux_lock'):
                self.mux.mux_lock = allocate_lock()
            else:
                # already has a lock; just use it.
                pass

    # no open() because open() is called once during i2c init.
    def close(self):
        '''
        I2C bus close; will close the root bus device.
        '''
        self.i2c.close()

    @lock_i2c_mux
    def read(self, addr, rd_data, length, addrsize=8):
        '''
        I2C bus read with i2c mux switching.
        Input argument is checked in bus driver so not needed here.
        '''
        return self.i2c.read(addr, rd_data, length, addrsize)

    @lock_i2c_mux
    def write(self, addr, data, addrsize=8):
        '''
        I2C bus write with i2c mux switching.
        Input argument is checked in bus driver so not needed here.
        '''
        return self.i2c.write(addr, data, addrsize)

    @lock_i2c_mux
    def write_and_read(self, addr, wr_data, rd_len, addrsize=8):
        '''
        I2C bus write and read with i2c mux switching.
        Input argument is checked in bus driver so not needed here.
        '''
        return self.i2c.write_and_read(addr, wr_data, rd_len, addrsize)

