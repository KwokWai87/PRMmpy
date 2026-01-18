# Location of top-level MicroPython directory
MPY_DIR = ../micropython-master

# Name of module (different to built-in btree so it can coexist)
MOD = i2s_$(ARCH)


CROSS_COMPILE ?= arm-none-eabi-

# Source files (.c or .py)
SRC = i2s.c

# Architecture to build for (x86, x64, armv7m, xtensa, xtensawin)
ARCH = armv7emsp

STM32LIB_DIR = $(MPY_DIR)/lib/stm32lib
STM32LIB_SRC_DIR = $(STM32LIB_DIR)/STM32F4xx_HAL_Driver/Src
# BTREE_DEFS = -D__DBINTERFACE_PRIVATE=1 -Dmpool_error="(void)" -Dabort=abort_ "-Dvirt_fd_t=void*" $(BTREE_DEFS_EXTRA)
CFLAGS += -I$(STM32LIB_DIR)/STM32F4xx_HAL_Driver/Inc
CFLAGS += -I$(MPY_DIR)/lib/cmsis/inc
CFLAGS += -I$(STM32LIB_DIR)/CMSIS/STM32F4xx/Include
CFLAGS += -Wno-old-style-definition -Wno-sign-compare -Wno-unused-parameter $(BTREE_DEFS)

SRC += $(addprefix $(realpath $(STM32LIB_SRC_DIR))/,\
	stm32f4xx_ll_dma.c \
	stm32f4xx_hal_i2s_ex.c \
	stm32f4xx_hal_i2s.c \
	stm32f4xx_hal_rcc_ex.c \
	)

include $(MPY_DIR)/py/dynruntime.mk

# btree needs gnu99 defined
CFLAGS += -std=gnu99
