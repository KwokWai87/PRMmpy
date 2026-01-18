/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
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
#include <stdbool.h>
#include <string.h>
#include "py/runtime.h"
#include "py/mphal.h"
#include "sram.h"

#ifdef MICROPY_HW_SRAM_BANK


#define MEM_1K         (1024)
#define MEM_SIZE_256K  ((256U << 0U) * MEM_1K)
#define MEM_SIZE_512K  ((256U << 1U) * MEM_1K)
#define MEM_SIZE_1M    ((256U << 2U) * MEM_1K)
#define MEM_SIZE_2M    ((256U << 3U) * MEM_1K)
#define MEM_SIZE_4M    ((256U << 4U) * MEM_1K)
#define MEM_SIZE_8M    ((256U << 5U) * MEM_1K)
#define MEM_SIZE_16M   ((256U << 6U) * MEM_1K)
#define MEM_SIZE_32M   ((256U << 7U) * MEM_1K)
#define MEM_SIZE_64M   ((256U << 8U) * MEM_1K)


#define SRAM_FSMC_BCR  (0x00001011U) /* control register, [ WREN=1, MWID=16bit, MBKEN=1]*/
#define SRAM_FSMC_BTR  (((MICROPY_HW_SRAM_TIMING_DATAST & 0xffU) << 8U) | \
                        ((MICROPY_HW_SRAM_TIMING_ADDHLD & 0x0fU) << 4U) | \
                        ((MICROPY_HW_SRAM_TIMING_ADDSET & 0x0fU) << 0U) ) /* timing register, [DATAST, ADDHLD, ADDSET] */

#define PCFG_OFFSET(n)  (((n)%8U) * 4U )
#define PIN_ALT_CFG(n)  (0x0BU << PCFG_OFFSET(n))  /* Alternate Output with push-pull, max speed */
#define PIN_MASK(n)     (0x0FU << PCFG_OFFSET(n))

bool __attribute__((optimize("O0"))) sram_init(void) {
    SRAM_HandleTypeDef SRAM_Handler;    //SRAM句柄
    FSMC_NORSRAM_TimingTypeDef FSMC_ReadWriteTim;
    GPIO_InitTypeDef GPIO_Initure;
    
    // // //Enable FSMC RCC CLK
    //  RCC->AHB3ENR = 0x1;
    // // //ENABLE GPIOD/GPIOE/GPIOF/GPIOG RCC CLK
    // MODIFY_REG(RCC->AHB1ENR, 3, 1);
    // MODIFY_REG(RCC->AHB1ENR, 4, 1);
    // MODIFY_REG(RCC->AHB1ENR, 5, 1);
    // MODIFY_REG(RCC->AHB1ENR, 6, 1);

    // #pragma GCC push_options
    // #pragma GCC optimize (0)
    __HAL_RCC_FSMC_CLK_ENABLE();                //使能FSMC时钟
    // RCC->AHB1ENR = 0x001001ff;
    __HAL_RCC_GPIOD_CLK_ENABLE();               //使能GPIOD时钟
    __HAL_RCC_GPIOE_CLK_ENABLE();               //使能GPIOE时钟
    __HAL_RCC_GPIOF_CLK_ENABLE();               //使能GPIOF时钟
    __HAL_RCC_GPIOG_CLK_ENABLE();               //使能GPIOG时钟
    
	//PD0,1,4,5,8~15
    GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_7|GPIO_PIN_8|\
					 GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|\
					 GPIO_PIN_14|GPIO_PIN_15;              
	GPIO_Initure.Mode=GPIO_MODE_AF_PP;          //推挽复用
    GPIO_Initure.Pull=GPIO_PULLUP;              //上拉
    GPIO_Initure.Speed=GPIO_SPEED_HIGH;         //高速
    GPIO_Initure.Alternate=GPIO_AF12_FSMC;     	//复用为FSMC    
	HAL_GPIO_Init(GPIOD,&GPIO_Initure);     	
    
	//PE0,1,7~15
    GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_3|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|\
					 GPIO_PIN_10| GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|\
					 GPIO_PIN_15;              
    HAL_GPIO_Init(GPIOE,&GPIO_Initure);    
    
	//PF0~5FSMC_A0:A5,12~15:FSMC_A6~A9
    GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|\
					 GPIO_PIN_5|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;              
    HAL_GPIO_Init(GPIOF,&GPIO_Initure);     
    
	//PG0~5,10
    GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5;              
    HAL_GPIO_Init(GPIOG,&GPIO_Initure);      
	
	SRAM_Handler.Instance=FSMC_NORSRAM_DEVICE;                
	SRAM_Handler.Extended=FSMC_NORSRAM_EXTENDED_DEVICE;    
    
	SRAM_Handler.Init.NSBank=FSMC_NORSRAM_BANK1;     					//使用NE1
	SRAM_Handler.Init.DataAddressMux=FSMC_DATA_ADDRESS_MUX_DISABLE; 	//地址/数据线不复用
	SRAM_Handler.Init.MemoryType=FSMC_MEMORY_TYPE_SRAM;   				//SRAM
	SRAM_Handler.Init.MemoryDataWidth=FSMC_NORSRAM_MEM_BUS_WIDTH_16; 	//16位数据宽度
	SRAM_Handler.Init.BurstAccessMode=FSMC_BURST_ACCESS_MODE_DISABLE; 	//是否使能突发访问,仅对同步突发存储器有效,此处未用到
	SRAM_Handler.Init.WaitSignalPolarity=FSMC_WAIT_SIGNAL_POLARITY_LOW;	//等待信号的极性,仅在突发模式访问下有用
	SRAM_Handler.Init.WaitSignalActive=FSMC_WAIT_TIMING_BEFORE_WS;   	//存储器是在等待周期之前的一个时钟周期还是等待周期期间使能NWAIT
	SRAM_Handler.Init.WriteOperation=FSMC_WRITE_OPERATION_ENABLE;    	//存储器写使能
	SRAM_Handler.Init.WaitSignal=FSMC_WAIT_SIGNAL_DISABLE;           	//等待使能位,此处未用到
	SRAM_Handler.Init.ExtendedMode=FSMC_EXTENDED_MODE_DISABLE;        	//读写使用相同的时序
	SRAM_Handler.Init.AsynchronousWait=FSMC_ASYNCHRONOUS_WAIT_DISABLE;	//是否使能同步传输模式下的等待信号,此处未用到
	SRAM_Handler.Init.WriteBurst=FSMC_WRITE_BURST_DISABLE;           	//禁止突发写
	SRAM_Handler.Init.ContinuousClock=FSMC_CONTINUOUS_CLOCK_SYNC_ASYNC;
    
	//FMC读时序控制寄存器
	FSMC_ReadWriteTim.AddressSetupTime=0x00;       	//地址建立时间（ADDSET）为1个HCLK 1/168M=6ns*16=96ns
	FSMC_ReadWriteTim.AddressHoldTime=0x00;			//地址保持时间（ADDHLD）模式A未用到
	FSMC_ReadWriteTim.DataSetupTime=0x6;			//数据保存时间为8个HCLK	=6*1=6ns
	FSMC_ReadWriteTim.BusTurnAroundDuration=0X00;
	FSMC_ReadWriteTim.AccessMode=FSMC_ACCESS_MODE_A;//模式A
	HAL_SRAM_Init(&SRAM_Handler,&FSMC_ReadWriteTim,&FSMC_ReadWriteTim);	

    return true;
}

void *sram_start(void) {
    return (void*)MICROPY_HW_SRAM_BANK;
}

void *sram_end(void) {
    return (void*)(MICROPY_HW_SRAM_BANK + MICROPY_HW_SRAM_SIZE);
}


bool __attribute__((optimize("O0"))) sram_test(bool fast) {
    uint8_t const pattern = 0xaa;
    uint8_t const antipattern = 0x55;
    uint8_t *const mem_base = (uint8_t*)sram_start();
    uint16_t *const mem16_base = (uint16_t*)sram_start();

    /* test data bus */
    for (uint16_t i = 1; i; i <<= 1) {
        *mem16_base = i;
        __DSB();
        if (*mem16_base != i) {
            printf("data bus lines test failed! data (%d)\n", i);
            __asm__ volatile ("BKPT");
        }
    }

    /* test address bus */
    /* Check individual address lines */
    for (uint32_t i = 1; i < MICROPY_HW_SRAM_SIZE; i <<= 1) {
        mem_base[i] = pattern;
        __DSB();
        if (mem_base[i] != pattern) {
            printf("address bus lines test failed! address (%p)\n", &mem_base[i]);
            __asm__ volatile ("BKPT");
        }
    }

    /* Check for aliasing (overlaping addresses) */
    mem_base[0] = antipattern;
    for (uint32_t i = 1; i < MICROPY_HW_SRAM_SIZE; i <<= 1) {
        if (mem_base[i] != pattern) {
            printf("address bus overlap %p\n", &mem_base[i]);
            __asm__ volatile ("BKPT");
        }
    }

    /* test all ram cells */
    if (!fast) {
        for (uint32_t i = 0; i < MICROPY_HW_SRAM_SIZE; ++i) {
            mem_base[i] = pattern;
            __DSB();
            if (mem_base[i] != pattern) {
                printf("address bus test failed! address (%p)\n", &mem_base[i]);
                __asm__ volatile ("BKPT");
            }
        }
    } else {
        memset(mem_base, pattern, MICROPY_HW_SRAM_SIZE);
    }

    return true;
}
#endif
