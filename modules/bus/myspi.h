#ifndef __MYSPI_H__
#define __MYSPI_H__

#include <stdio.h>
// #include <stdlib.h>
#include "py/mphal.h"
#include "py/runtime.h"
#include "spi.h"
#include "pin.h"


void hw_spi_init(spi_proto_cfg_t *self, int32_t id, int32_t baudrate, uint8_t polarity, uint8_t phase);
void hw_spi_send(spi_proto_cfg_t *self, const uint8_t *src, size_t len);
void hw_spi_read(spi_proto_cfg_t *self, uint8_t *dest, size_t len);
// void hw_cs_high(spi_proto_cfg_t *self);
// void hw_cs_low(spi_proto_cfg_t *self);
#endif
