# Roma_mpy_fw_repo

```
cd rootpath/ports/stm32
make BOARD=STM32F4CW_SRAM MICROPY_MARCO_DSP=1 USER_C_MODULES=../../../modules

```
CC ../../../modules/ic/AD7175.c
CC ../../../modules/module/odin.c
CC ../../lib/oofatfs/ff.c
CC ../../lib/oofatfs/ffunicode.c
CC build-STM32F4CW_SRAM/pins_STM32F4CW_SRAM.c
LINK build-STM32F4CW_SRAM/firmware.elf
   text	   data	    bss	    dec	    hex	filename
 420972	    516	  43472	 464960	  71840	build-STM32F4CW_SRAM/firmware.elf
GEN build-STM32F4CW_SRAM/firmware0.bin
GEN build-STM32F4CW_SRAM/firmware1.bin
GEN build-STM32F4CW_SRAM/firmware.dfu
GEN build-STM32F4CW_SRAM/firmware.hex

```
#sudo dfu-util -d 0483:df11  -a 0 -D + xxxx.dfu

cd rootpath/ports/stm32
sudo dfu-util -d 0483:df11  -a 0 -D ./build-STM32F4CW_SRAM/firmware.dfu
```

```
# if compile w5500

make BOARD=STM32F4CW_SRAM MICROPY_MARCO_DSP=1 USER_C_MODULES=../../../modules MICROPY_PY_WIZNET5K=5500

make BOARD=CoreBoardV1 MICROPY_MARCO_DSP=1 USER_C_MODULES=../../../modules MICROPY_PY_WIZNET5K=5500

make BOARD=CoreBoardV2 MICROPY_MARCO_DSP=1 USER_C_MODULES=../../../modules MICROPY_PY_WIZNET5K=5500

make BOARD=CoreBoardV2 MICROPY_MARCO_DSP=1 USER_C_MODULES=../../../modules MICROPY_PY_WIZNET5K=5500 MICROPY_PY_USSL=1 MICROPY_SSL_MBEDTLS=1


make BOARD=STM32F4_ALIENTEK_HWSPI_SPI1 MICROPY_MARCO_DSP=1 USER_C_MODULES=../../../modules MICROPY_PY_USSL=1 MICROPY_SSL_MBEDTLS=1 MICROPY_PY_WIZNET5K=5500


make BOARD=STM32F4_ALIENTEK_SDCard MICROPY_MARCO_DSP=1 USER_C_MODULES=../../../modules MICROPY_PY_USSL=1 MICROPY_SSL_MBEDTLS=1 MICROPY_PY_WIZNET5K=5500

```