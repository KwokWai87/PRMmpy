#define MICROPY_HW_BOARD_NAME       "F4DISC"
#define MICROPY_HW_MCU_NAME         "STM32F407"



#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SRAM      (1)
#define MICROPY_HW_I2S1             (1)





// use external SPI flash for storage

#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (0)
#define MICROPY_HW_SPIFLASH_SIZE_BITS (128 * 1024 * 1024)
#define MICROPY_HW_SPIFLASH_CS      (pin_B4)
#define MICROPY_HW_SPIFLASH_SCK     (pin_G9)
#define MICROPY_HW_SPIFLASH_MOSI    (pin_G10)
#define MICROPY_HW_SPIFLASH_MISO    (pin_G12)


#define MICROPY_BOARD_EARLY_INIT board_early_init
void board_early_init(void);

extern const struct _mp_spiflash_config_t spiflash_config;
extern struct _spi_bdev_t spi_bdev;
#define MICROPY_HW_SPIFLASH_ENABLE_CACHE (1)
#define MICROPY_HW_BDEV_IOCTL(op, arg) ( \
    (op) == BDEV_IOCTL_NUM_BLOCKS ? (MICROPY_HW_SPIFLASH_SIZE_BITS / 8 / FLASH_BLOCK_SIZE) : \
    (op) == BDEV_IOCTL_INIT ? spi_bdev_ioctl(&spi_bdev, (op), (uint32_t)&spiflash_config) : \
    spi_bdev_ioctl(&spi_bdev, (op), (arg)) \
)
#define MICROPY_HW_BDEV_READBLOCKS(dest, bl, n) spi_bdev_readblocks(&spi_bdev, (dest), (bl), (n))
#define MICROPY_HW_BDEV_WRITEBLOCKS(src, bl, n) spi_bdev_writeblocks(&spi_bdev, (src), (bl), (n))
#define MICROPY_HW_BDEV_SPIFLASH_EXTENDED (&spi_bdev) // for extended block protocol




// HSE is 25MHz
#define MICROPY_HW_CLK_PLLM (25)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)

// UART config
#if 0
// A9 is used for USB VBUS detect, and A10 is used for USB_FS_ID.
// UART1 is also on PB6/7 but PB6 is tied to the Audio SCL line.
// Without board modifications, this makes UART1 unusable on this board.
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)
#endif
#if 0
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)
#define MICROPY_HW_UART2_RTS    (pin_A1)
#define MICROPY_HW_UART2_CTS    (pin_A0)
#define MICROPY_HW_UART3_TX     (pin_B11)
#define MICROPY_HW_UART3_RX     (pin_C10)
#if MICROPY_HW_HAS_SWITCH == 0
// NOTE: A0 also connects to the user switch. To use UART4 you should
//       set MICROPY_HW_HAS_SWITCH to 0, and also remove SB20 (on the back
//       of the board near the USER switch).
#define MICROPY_HW_UART4_TX     (pin_A0)
#define MICROPY_HW_UART4_RX     (pin_A1)
#endif
#endif

// NOTE: PC7 is connected to MCLK on the Audio chip. This is an input signal
//       so I think as long as you're not using the audio chip then it should
//       be fine to use as a UART pin.
#define MICROPY_HW_UART3_TX     (pin_C10)
#define MICROPY_HW_UART3_RX     (pin_B11)


#if 0
// I2C buses
#define MICROPY_HW_I2C1_SCL (pin_B8)
#define MICROPY_HW_I2C1_SDA (pin_B9)
//#define MICROPY_HW_I2C2_SCL (pin_B10)
//#define MICROPY_HW_I2C2_SDA (pin_B11)
#endif
// SPI buses
#if 1
#define MICROPY_HW_SPI1_NSS  (pin_F8)
#define MICROPY_HW_SPI1_SCK  (pin_A5)
#define MICROPY_HW_SPI1_MISO (pin_A6)
#define MICROPY_HW_SPI1_MOSI (pin_B5)

#define MICROPY_HW_SPI2_NSS  (pin_F10)
#define MICROPY_HW_SPI2_SCK  (pin_B13)
#define MICROPY_HW_SPI2_MISO (pin_B14)
#define MICROPY_HW_SPI2_MOSI (pin_B15)

#define MICROPY_HW_SPI3_NSS  (pin_E4)
#define MICROPY_HW_SPI3_SCK  (pin_B3)
#define MICROPY_HW_SPI3_MISO (pin_C11)
#define MICROPY_HW_SPI3_MOSI (pin_C12)


#endif


// CAN buses
//#define MICROPY_HW_CAN1_TX (pin_B9)
//#define MICROPY_HW_CAN1_RX (pin_B8)
// #define MICROPY_HW_CAN2_TX (pin_B13)
// #define MICROPY_HW_CAN2_RX (pin_B12)

// USRSW is pulled low. Pressing the button makes the input go high.
// #define MICROPY_HW_USRSW_PIN        (pin_A0)
// #define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
// #define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
// #define MICROPY_HW_USRSW_PRESSED    (1)

// // LEDs
// #define MICROPY_HW_LED1             (pin_D14) // red
// #define MICROPY_HW_LED2             (pin_D12) // green
// #define MICROPY_HW_LED3             (pin_D13) // orange
// #define MICROPY_HW_LED4             (pin_D15) // blue
// #define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
// #define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS              (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

// SRAM

#if MICROPY_HW_ENABLE_SRAM
#define MICROPY_HW_SRAM_SIZE                (16 / 8 * 1024 * 1024)  // 16 Mbit
#define MICROPY_HW_SRAM_STARTUP_TEST        (1)
#define MICROPY_HEAP_START                  sram_start()
#define MICROPY_HEAP_END                    sram_end()

#define MICROPY_HW_SRAM_BANK                (NOR_MEMORY_ADRESS1)
#define MICROPY_HW_SRAM_TIMING_ADDSET       (0)
#define MICROPY_HW_SRAM_TIMING_ADDHLD       (0)
#define MICROPY_HW_SRAM_TIMING_DATAST       (2)
#endif

