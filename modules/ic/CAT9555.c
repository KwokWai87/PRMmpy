/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-06-19     Administrator       the first version
 */
#include "py/mphal.h"
#include "py/runtime.h"
#include "CAT9555.h"



STATIC void init(cat9555_t *self, uint8_t addr)
{
    self->addr = addr;
}


int (*readfrom)(my_soft_i2c_obj_t *obj, uint16_t addr, uint8_t *dest, size_t len, bool stop);
    int (*writeto)(my_soft_i2c_obj_t *obj, uint16_t addr, const uint8_t *src, size_t len, bool stop);



STATIC void write_register(cat9555_t *self, st_reg reg, )
{
    if (reg.addr == 0x00 || reg.addr == 0x01){
        //如果是input寄存器，是只读寄存器
        return;
    }
    my_soft_i2c_p.writeto(self->i2c, )

    // my_soft_i2c_p.my_i2c_readfrom


}

STATIC void read_register()
{

}