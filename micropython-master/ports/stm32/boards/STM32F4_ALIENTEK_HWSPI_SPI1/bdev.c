#include "py/obj.h"
#include "storage.h"
#include "spi.h"

#if !MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE

// #define CMD_EXIT_4_BYTE_ADDRESS_MODE (0xE9)
// External SPI flash uses standard SPI interface

// STATIC const mp_soft_spi_obj_t soft_spi_bus = {
//     .delay_half = MICROPY_HW_SOFTSPI_MIN_DELAY,
//     .polarity = 0,
//     .phase = 0,
//     .sck = MICROPY_HW_SPIFLASH_SCK,
//     .mosi = MICROPY_HW_SPIFLASH_MOSI,
//     .miso = MICROPY_HW_SPIFLASH_MISO,
// };

// const mp_spiflash_config_t spiflash_config = {
//     .bus_kind = MP_SPIFLASH_BUS_SPI,
//     .bus.u_spi.cs = MICROPY_HW_SPIFLASH_CS,
//     .bus.u_spi.data = (void*)&soft_spi_bus,
//     .bus.u_spi.proto = &mp_soft_spi_proto,
//     .cache = &spi_bdev_cache,
// };

STATIC const spi_proto_cfg_t spi_bus = {
    .spi = &spi_obj[0], // SPI1 hardware peripheral
    .baudrate = 10000000,
    .polarity = 0,
    .phase = 0,
    .bits = 8,
    .firstbit = SPI_FIRSTBIT_MSB,
};

STATIC mp_spiflash_cache_t spi_bdev_cache;

const mp_spiflash_config_t spiflash_config = {
    .bus_kind = MP_SPIFLASH_BUS_SPI,
    .bus.u_spi.cs = MICROPY_HW_SPIFLASH_CS,
    .bus.u_spi.data = (void *)&spi_bus,
    .bus.u_spi.proto = &spi_proto,
    .cache = &spi_bdev_cache,
};


spi_bdev_t spi_bdev;

// int32_t board_bdev_ioctl(void) {
//     int32_t ret = spi_bdev_ioctl(&spi_bdev, BDEV_IOCTL_INIT, (uint32_t)&spiflash_config);

//     // Exit 4-byte address mode
//     uint8_t cmd = CMD_EXIT_4_BYTE_ADDRESS_MODE;
//     mp_hal_pin_write(MICROPY_HW_SPIFLASH_CS, 0);
//     spi_proto.transfer(MP_OBJ_FROM_PTR(&spi_bus), 1, &cmd, NULL);
//     mp_hal_pin_write(MICROPY_HW_SPIFLASH_CS, 1);

//     return ret;
// }

#endif





// STATIC const spi_proto_cfg_t spi_bus = {
//     .spi = &spi_obj[1], // SPI2 hardware peripheral
//     .baudrate = 25000000,
//     .polarity = 0,
//     .phase = 0,
//     .bits = 8,
//     .firstbit = SPI_FIRSTBIT_MSB,
// };

// STATIC mp_spiflash_cache_t spi_bdev_cache;

// const mp_spiflash_config_t spiflash_config = {
//     .bus_kind = MP_SPIFLASH_BUS_SPI,
//     .bus.u_spi.cs = MICROPY_HW_SPIFLASH_CS,
//     .bus.u_spi.data = (void *)&spi_bus,
//     .bus.u_spi.proto = &spi_proto,
//     .cache = &spi_bdev_cache,
// };