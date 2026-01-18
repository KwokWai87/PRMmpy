/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "py/mperrno.h"
#include "py/mphal.h"
#include "py/runtime.h"
#include "myi2c.h"


typedef my_soft_i2c_obj_t my_i2c_obj_t;

STATIC void my_i2c_delay(my_i2c_obj_t *self) {
    // We need to use an accurate delay to get acceptable I2C
    // speeds (eg 1us should be not much more than 1us).
    mp_hal_delay_us_fast(self->us_delay);
}

STATIC void my_i2c_scl_low(my_i2c_obj_t *self) {
    mp_hal_pin_od_low(self->scl);
}

STATIC int my_i2c_scl_release(my_i2c_obj_t *self) {
    uint32_t count = self->us_timeout;

    mp_hal_pin_od_high(self->scl);
    my_i2c_delay(self);
    // For clock stretching, wait for the SCL pin to be released, with timeout.
    for (; mp_hal_pin_read(self->scl) == 0 && count; --count) {
        mp_hal_delay_us_fast(1);
    }
    if (count == 0) {
        return -MP_ETIMEDOUT;
    }
    return 0; // success
}

STATIC void my_i2c_sda_low(my_i2c_obj_t *self) {
    mp_hal_pin_od_low(self->sda);
}

STATIC void my_i2c_sda_release(my_i2c_obj_t *self) {
    mp_hal_pin_od_high(self->sda);
}

STATIC int my_i2c_sda_read(my_i2c_obj_t *self) {
    return mp_hal_pin_read(self->sda);
}

STATIC int my_i2c_start(my_i2c_obj_t *self) {
    my_i2c_sda_release(self);
    my_i2c_delay(self);
    int ret = my_i2c_scl_release(self);
    if (ret != 0) {
        return ret;
    }
    my_i2c_sda_low(self);
    my_i2c_delay(self);
    return 0; // success
}

STATIC int my_i2c_stop(my_i2c_obj_t *self) {
    my_i2c_delay(self);
    my_i2c_sda_low(self);
    my_i2c_delay(self);
    int ret = my_i2c_scl_release(self);
    my_i2c_sda_release(self);
    my_i2c_delay(self);
    return ret;
}

STATIC void my_i2c_init(my_i2c_obj_t *self, uint32_t freq) {
    self->us_delay = 500000 / freq;
    if (self->us_delay == 0) {
        self->us_delay = 1;
    }
    mp_hal_pin_open_drain(self->scl);
    mp_hal_pin_open_drain(self->sda);
    my_i2c_stop(self); // ignore error
}

// return value:
//    0 - byte written and ack received
//    1 - byte written and nack received
//   <0 - error, with errno being the negative of the return value
STATIC int my_i2c_write_byte(my_i2c_obj_t *self, uint8_t val) {
    my_i2c_delay(self);
    my_i2c_scl_low(self);

    for (int i = 7; i >= 0; i--) {
        if ((val >> i) & 1) {
            my_i2c_sda_release(self);
        } else {
            my_i2c_sda_low(self);
        }
        my_i2c_delay(self);
        int ret = my_i2c_scl_release(self);
        if (ret != 0) {
            my_i2c_sda_release(self);
            return ret;
        }
        my_i2c_scl_low(self);
    }

    my_i2c_sda_release(self);
    my_i2c_delay(self);
    int ret = my_i2c_scl_release(self);
    if (ret != 0) {
        return ret;
    }

    int ack = my_i2c_sda_read(self);
    my_i2c_delay(self);
    my_i2c_scl_low(self);

    return ack;
}

// return value:
//    0 - success
//   <0 - error, with errno being the negative of the return value
STATIC int my_i2c_read_byte(my_i2c_obj_t *self, uint8_t *val, int nack) {
    my_i2c_delay(self);
    my_i2c_scl_low(self);
    my_i2c_delay(self);

    uint8_t data = 0;
    for (int i = 7; i >= 0; i--) {
        int ret = my_i2c_scl_release(self);
        if (ret != 0) {
            return ret;
        }
        data = (data << 1) | my_i2c_sda_read(self);
        my_i2c_scl_low(self);
        my_i2c_delay(self);
    }
    *val = data;

    // send ack/nack bit
    if (!nack) {
        my_i2c_sda_low(self);
    }
    my_i2c_delay(self);
    int ret = my_i2c_scl_release(self);
    if (ret != 0) {
        my_i2c_sda_release(self);
        return ret;
    }
    my_i2c_scl_low(self);
    my_i2c_sda_release(self);

    return 0; // success
}

// return value:
//  >=0 - success; for read it's 0, for write it's number of acks received
//   <0 - error, with errno being the negative of the return value
STATIC int my_soft_i2c_transfer(my_soft_i2c_obj_t *self, uint16_t addr, size_t n, my_i2c_buf_t *bufs, unsigned int flags) {

    // start the I2C transaction
    int ret = my_i2c_start(self);
    if (ret != 0) {
        return ret;
    }

    // write the slave address
    ret = my_i2c_write_byte(self, (addr << 1) | (flags & MY_I2C_FLAG_READ));
    if (ret < 0) {
        return ret;
    } else if (ret != 0) {
        // nack received, release the bus cleanly
        my_i2c_stop(self);
        return -MP_ENODEV;
    }

    int transfer_ret = 0;
    for (; n--; ++bufs) {
        size_t len = bufs->len;
        uint8_t *buf = bufs->buf;
        if (flags & MY_I2C_FLAG_READ) {
            // read bytes from the slave into the given buffer(s)
            while (len--) {
                ret = my_i2c_read_byte(self, buf++, (n | len) == 0);
                if (ret != 0) {
                    return ret;
                }
            }
        } else {
            // write bytes from the given buffer(s) to the slave
            while (len--) {
                ret = my_i2c_write_byte(self, *buf++);
                if (ret < 0) {
                    return ret;
                } else if (ret != 0) {
                    // nack received, stop sending
                    n = 0;
                    break;
                }
                ++transfer_ret; // count the number of acks
            }
        }
    }

    // finish the I2C transaction
    if (flags & MY_I2C_FLAG_STOP) {
        ret = my_i2c_stop(self);
        if (ret != 0) {
            return ret;
        }
    }

    return transfer_ret;
}


STATIC int my_i2c_readfrom(my_soft_i2c_obj_t *self, uint16_t addr, uint8_t *dest, size_t len, bool stop) {
    my_i2c_buf_t buf = {.len = len, .buf = dest};
    unsigned int flags = MY_I2C_FLAG_READ | (stop ? MY_I2C_FLAG_STOP : 0);
    return my_soft_i2c_transfer(self, addr, 1, &buf, flags);
}

STATIC int my_i2c_writeto(my_soft_i2c_obj_t *self, uint16_t addr, const uint8_t *src, size_t len, bool stop) {
    my_i2c_buf_t buf = {.len = len, .buf = (uint8_t *)src};
    unsigned int flags = stop ? MY_I2C_FLAG_STOP : 0;
    return my_soft_i2c_transfer(self, addr, 1, &buf, flags);
}


int my_soft_i2c_read(my_soft_i2c_obj_t *self, uint8_t *dest, size_t len, bool nack) {
    while (len--) {
        int ret = my_i2c_read_byte(self, dest++, nack && (len == 0));
        if (ret != 0) {
            return ret;
        }
    }
    return 0; // success
}

int my_soft_i2c_write(my_soft_i2c_obj_t *self, const uint8_t *src, size_t len) {
    int num_acks = 0;
    while (len--) {
        int ret = my_i2c_write_byte(self, *src++);
        if (ret < 0) {
            return ret;
        } else if (ret != 0) {
            // nack received, stop sending
            break;
        }
        ++num_acks;
    }
    return num_acks;
}

STATIC void my_soft_i2c_init(my_soft_i2c_obj_t* self, mp_hal_pin_obj_t scl, mp_hal_pin_obj_t sda, uint32_t freq)
{
    self->us_timeout = 255;
    self->scl = scl;
    self->sda = sda;
    my_i2c_init(self, freq);
}


const my_i2c_p_t my_soft_i2c_p = {
    .init = my_soft_i2c_init,
    .read = my_soft_i2c_read,
    .write = my_soft_i2c_write,
    .transfer = my_soft_i2c_transfer,
    .readfrom = my_i2c_readfrom,
    .writeto = my_i2c_writeto,
};


