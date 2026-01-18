/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-06-19     Administrator       the first version
 */
#include "myspi.h"


// typedef struct _spi_proto_cfg_t {
//     const spi_t *spi;
//     uint32_t baudrate;
//     uint8_t polarity;
//     uint8_t phase;
//     uint8_t bits;
//     uint8_t firstbit;
// } spi_proto_cfg_t;

// spi init first

void hw_spi_init(spi_proto_cfg_t *self, int32_t id, int32_t baudrate, uint8_t polarity, uint8_t phase)
{
    // mp_hal_pin_output(self->cs);
    // self->spi = (spi_t *) malloc(sizeof(spi_t));
    self->spi = m_new_obj(spi_t);
    self->spi = &spi_obj[id - 1];
    // printf("self->spi address : %x", self->spi);
    // printf("&spi_obj[id - 1] : %x", &spi_obj[id - 1]);
    // set the SPI configuration values
    self->baudrate = baudrate;
    self->polarity = polarity;
    self->phase = phase;
    self->bits = 8;
    self->firstbit = SPI_FIRSTBIT_MSB;
    spi_proto.ioctl(self, MP_SPI_IOCTL_INIT);
}

void hw_spi_send(spi_proto_cfg_t *self, const uint8_t *src, size_t len)
{
    // printf("hw_spi_send-->self->spi : %x", self->spi);
    spi_proto.transfer(self, len, src, NULL);
}

void hw_spi_read(spi_proto_cfg_t *self, uint8_t *dest, size_t len)
{
    spi_proto.transfer(self, len, NULL, dest);
}