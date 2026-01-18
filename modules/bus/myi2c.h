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
#ifndef __MYSPI_H__
#define __MYSPI_H__


#include "py/obj.h"
#include "py/mphal.h"


#define MY_I2C_FLAG_READ (0x01) // if not set then it's a write
#define MY_I2C_FLAG_STOP (0x02)

typedef struct _my_i2c_buf_t {
    size_t len;
    uint8_t *buf;
} my_i2c_buf_t;

typedef struct _my_soft_i2c_obj_t {
    uint32_t us_delay;
    uint32_t us_timeout;
    mp_hal_pin_obj_t scl;
    mp_hal_pin_obj_t sda;
} my_soft_i2c_obj_t;

// I2C protocol
// - init must be non-NULL
// - start/stop/read/write can be NULL, meaning operation is not supported
// - transfer must be non-NULL
// - transfer_single only needs to be set if transfer=mp_machine_i2c_transfer_adaptor

typedef struct _my_i2c_p_t {
    void (*init)(my_soft_i2c_obj_t* self, mp_hal_pin_obj_t scl, mp_hal_pin_obj_t sda, uint32_t freq);
    int (*read)(my_soft_i2c_obj_t *obj, uint8_t *dest, size_t len, bool nack);
    int (*write)(my_soft_i2c_obj_t *obj, const uint8_t *src, size_t len);
    int (*transfer)(my_soft_i2c_obj_t *obj, uint16_t addr, size_t n, my_i2c_buf_t *bufs, unsigned int flags);
    int (*readfrom)(my_soft_i2c_obj_t *obj, uint16_t addr, uint8_t *dest, size_t len, bool stop);
    int (*writeto)(my_soft_i2c_obj_t *obj, uint16_t addr, const uint8_t *src, size_t len, bool stop);
} my_i2c_p_t;




extern const my_i2c_p_t my_soft_i2c_p;
#endif // MICROPY_INCLUDED_EXTMOD_MACHINE_I2C_H
