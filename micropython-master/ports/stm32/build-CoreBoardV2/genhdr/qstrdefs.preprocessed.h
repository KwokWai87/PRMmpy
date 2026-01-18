# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 29 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 62 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 31 "./mpconfigport.h"
# 1 "boards/CoreBoardV2/mpconfigboard.h" 1
# 34 "boards/CoreBoardV2/mpconfigboard.h"
void board_early_init(void);

extern const struct _mp_spiflash_config_t spiflash_config;
extern struct _spi_bdev_t spi_bdev;
# 32 "./mpconfigport.h" 2
# 1 "./mpconfigboard_common.h" 1
# 30 "./mpconfigboard_common.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h" 1
# 48 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h"
# 1 "boards/CoreBoardV2/stm32f4xx_hal_conf.h" 1







# 1 "./boards/stm32f4xx_hal_conf_base.h" 1
# 30 "./boards/stm32f4xx_hal_conf_base.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h" 1
# 47 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_def.h" 1
# 48 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_def.h"
# 1 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f4xx.h" 1
# 151 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f4xx.h"
# 1 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f407xx.h" 1
# 84 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f407xx.h"
typedef enum
{

  NonMaskableInt_IRQn = -14,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  WWDG_IRQn = 0,
  PVD_IRQn = 1,
  TAMP_STAMP_IRQn = 2,
  RTC_WKUP_IRQn = 3,
  FLASH_IRQn = 4,
  RCC_IRQn = 5,
  EXTI0_IRQn = 6,
  EXTI1_IRQn = 7,
  EXTI2_IRQn = 8,
  EXTI3_IRQn = 9,
  EXTI4_IRQn = 10,
  DMA1_Stream0_IRQn = 11,
  DMA1_Stream1_IRQn = 12,
  DMA1_Stream2_IRQn = 13,
  DMA1_Stream3_IRQn = 14,
  DMA1_Stream4_IRQn = 15,
  DMA1_Stream5_IRQn = 16,
  DMA1_Stream6_IRQn = 17,
  ADC_IRQn = 18,
  CAN1_TX_IRQn = 19,
  CAN1_RX0_IRQn = 20,
  CAN1_RX1_IRQn = 21,
  CAN1_SCE_IRQn = 22,
  EXTI9_5_IRQn = 23,
  TIM1_BRK_TIM9_IRQn = 24,
  TIM1_UP_TIM10_IRQn = 25,
  TIM1_TRG_COM_TIM11_IRQn = 26,
  TIM1_CC_IRQn = 27,
  TIM2_IRQn = 28,
  TIM3_IRQn = 29,
  TIM4_IRQn = 30,
  I2C1_EV_IRQn = 31,
  I2C1_ER_IRQn = 32,
  I2C2_EV_IRQn = 33,
  I2C2_ER_IRQn = 34,
  SPI1_IRQn = 35,
  SPI2_IRQn = 36,
  USART1_IRQn = 37,
  USART2_IRQn = 38,
  USART3_IRQn = 39,
  EXTI15_10_IRQn = 40,
  RTC_Alarm_IRQn = 41,
  OTG_FS_WKUP_IRQn = 42,
  TIM8_BRK_TIM12_IRQn = 43,
  TIM8_UP_TIM13_IRQn = 44,
  TIM8_TRG_COM_TIM14_IRQn = 45,
  TIM8_CC_IRQn = 46,
  DMA1_Stream7_IRQn = 47,
  FSMC_IRQn = 48,
  SDIO_IRQn = 49,
  TIM5_IRQn = 50,
  SPI3_IRQn = 51,
  UART4_IRQn = 52,
  UART5_IRQn = 53,
  TIM6_DAC_IRQn = 54,
  TIM7_IRQn = 55,
  DMA2_Stream0_IRQn = 56,
  DMA2_Stream1_IRQn = 57,
  DMA2_Stream2_IRQn = 58,
  DMA2_Stream3_IRQn = 59,
  DMA2_Stream4_IRQn = 60,
  ETH_IRQn = 61,
  ETH_WKUP_IRQn = 62,
  CAN2_TX_IRQn = 63,
  CAN2_RX0_IRQn = 64,
  CAN2_RX1_IRQn = 65,
  CAN2_SCE_IRQn = 66,
  OTG_FS_IRQn = 67,
  DMA2_Stream5_IRQn = 68,
  DMA2_Stream6_IRQn = 69,
  DMA2_Stream7_IRQn = 70,
  USART6_IRQn = 71,
  I2C3_EV_IRQn = 72,
  I2C3_ER_IRQn = 73,
  OTG_HS_EP1_OUT_IRQn = 74,
  OTG_HS_EP1_IN_IRQn = 75,
  OTG_HS_WKUP_IRQn = 76,
  OTG_HS_IRQn = 77,
  DCMI_IRQn = 78,
  HASH_RNG_IRQn = 80,
  FPU_IRQn = 81
} IRQn_Type;





# 1 "../../lib/cmsis/inc/core_cm4.h" 1
# 34 "../../lib/cmsis/inc/core_cm4.h"
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stdint.h" 1 3 4
# 9 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stdint.h" 3 4
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 1 3 4
# 12 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 3 4
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 1 3 4







# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/features.h" 1 3 4
# 28 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/features.h" 3 4
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/_newlib_version.h" 1 3 4
# 29 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/features.h" 2 3 4
# 9 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 2 3 4
# 27 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4

# 27 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 63 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 89 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 168 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 186 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 49 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 201 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 20 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 130 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 3 4
  typedef long long int intmax_t;
# 139 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/stdint.h" 3 4
  typedef long long unsigned int uintmax_t;
# 10 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stdint.h" 2 3 4
# 35 "../../lib/cmsis/inc/core_cm4.h" 2
# 63 "../../lib/cmsis/inc/core_cm4.h"
# 1 "../../lib/cmsis/inc/cmsis_version.h" 1
# 64 "../../lib/cmsis/inc/core_cm4.h" 2
# 162 "../../lib/cmsis/inc/core_cm4.h"
# 1 "../../lib/cmsis/inc/cmsis_compiler.h" 1
# 54 "../../lib/cmsis/inc/cmsis_compiler.h"
# 1 "../../lib/cmsis/inc/cmsis_gcc.h" 1
# 29 "../../lib/cmsis/inc/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "../../lib/cmsis/inc/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  
# 74 "../../lib/cmsis/inc/cmsis_gcc.h"
 struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 129 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 181 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 205 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 277 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 301 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 331 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 382 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 412 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 439 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 491 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 516 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 557 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 766 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 776 "../../lib/cmsis/inc/cmsis_gcc.h"
  uint32_t result;

  __asm volatile ("VMRS %0, fpscr" : "=r" (result) );
  return(result);




}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 802 "../../lib/cmsis/inc/cmsis_gcc.h"
  __asm volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc", "memory");




}
# 866 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 900 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 919 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 934 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 954 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 981 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 1001 "../../lib/cmsis/inc/cmsis_gcc.h"
  return result;
}
# 1011 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 1022 "../../lib/cmsis/inc/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 1040 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 1062 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 1084 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 1101 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1118 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1135 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 1201 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 1216 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint8_t) result);
}
# 1238 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint16_t) result);
}
# 1260 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1275 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1287 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1299 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
# 1554 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1874 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 2087 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}





#pragma GCC diagnostic pop
# 55 "../../lib/cmsis/inc/cmsis_compiler.h" 2
# 163 "../../lib/cmsis/inc/core_cm4.h" 2
# 259 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 298 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 316 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 371 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 406 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RESERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 440 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 719 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 759 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 811 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 899 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1046 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1208 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1304 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
} FPU_Type;
# 1416 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1648 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1679 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1696 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1715 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1734 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1753 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1768 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1785 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1807 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
}
# 1829 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 4U)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 4U)));
  }
}
# 1854 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1881 "../../lib/cmsis/inc/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1904 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  (* (int *) (vectors + ((int32_t)IRQn + 16) * 4)) = vector;
}
# 1919 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return (uint32_t)(* (int *) (vectors + ((int32_t)IRQn + 16) * 4));
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1952 "../../lib/cmsis/inc/core_cm4.h"
# 1 "../../lib/cmsis/inc/mpu_armv7.h" 1
# 183 "../../lib/cmsis/inc/mpu_armv7.h"
typedef struct {
  uint32_t RBAR;
  uint32_t RASR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

  __DSB();
  __ISB();
}



static inline void ARM_MPU_Disable(void)
{
  __DMB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = 0U;
}





static inline void ARM_MPU_SetRegion(uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_SetRegionEx(uint32_t rnr, uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_OrderedMemcpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}





static inline void ARM_MPU_Load(ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  while (cnt > 4U) {
    ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), 4U*rowWordSize);
    table += 4U;
    cnt -= 4U;
  }
  ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), cnt*rowWordSize);
}
# 1953 "../../lib/cmsis/inc/core_cm4.h" 2
# 1973 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2014 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 4U) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2044 "../../lib/cmsis/inc/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 2056 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2077 "../../lib/cmsis/inc/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2097 "../../lib/cmsis/inc/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 184 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f407xx.h" 2
# 1 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/system_stm32f4xx.h" 1
# 76 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/system_stm32f4xx.h"
extern uint32_t SystemCoreClock;

extern const uint8_t AHBPrescTable[16];
extern const uint8_t APBPrescTable[8];
# 105 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/system_stm32f4xx.h"
extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
# 185 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f407xx.h" 2
# 195 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f407xx.h"
typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t JOFR1;
  volatile uint32_t JOFR2;
  volatile uint32_t JOFR3;
  volatile uint32_t JOFR4;
  volatile uint32_t HTR;
  volatile uint32_t LTR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t JSQR;
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  volatile uint32_t DR;
} ADC_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t CCR;
  volatile uint32_t CDR;

} ADC_Common_TypeDef;






typedef struct
{
  volatile uint32_t TIR;
  volatile uint32_t TDTR;
  volatile uint32_t TDLR;
  volatile uint32_t TDHR;
} CAN_TxMailBox_TypeDef;





typedef struct
{
  volatile uint32_t RIR;
  volatile uint32_t RDTR;
  volatile uint32_t RDLR;
  volatile uint32_t RDHR;
} CAN_FIFOMailBox_TypeDef;





typedef struct
{
  volatile uint32_t FR1;
  volatile uint32_t FR2;
} CAN_FilterRegister_TypeDef;





typedef struct
{
  volatile uint32_t MCR;
  volatile uint32_t MSR;
  volatile uint32_t TSR;
  volatile uint32_t RF0R;
  volatile uint32_t RF1R;
  volatile uint32_t IER;
  volatile uint32_t ESR;
  volatile uint32_t BTR;
  uint32_t RESERVED0[88];
  CAN_TxMailBox_TypeDef sTxMailBox[3];
  CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
  uint32_t RESERVED1[12];
  volatile uint32_t FMR;
  volatile uint32_t FM1R;
  uint32_t RESERVED2;
  volatile uint32_t FS1R;
  uint32_t RESERVED3;
  volatile uint32_t FFA1R;
  uint32_t RESERVED4;
  volatile uint32_t FA1R;
  uint32_t RESERVED5[8];
  CAN_FilterRegister_TypeDef sFilterRegister[28];
} CAN_TypeDef;





typedef struct
{
  volatile uint32_t DR;
  volatile uint8_t IDR;
  uint8_t RESERVED0;
  uint16_t RESERVED1;
  volatile uint32_t CR;
} CRC_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SWTRIGR;
  volatile uint32_t DHR12R1;
  volatile uint32_t DHR12L1;
  volatile uint32_t DHR8R1;
  volatile uint32_t DHR12R2;
  volatile uint32_t DHR12L2;
  volatile uint32_t DHR8R2;
  volatile uint32_t DHR12RD;
  volatile uint32_t DHR12LD;
  volatile uint32_t DHR8RD;
  volatile uint32_t DOR1;
  volatile uint32_t DOR2;
  volatile uint32_t SR;
} DAC_TypeDef;





typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
  volatile uint32_t APB1FZ;
  volatile uint32_t APB2FZ;
}DBGMCU_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t RISR;
  volatile uint32_t IER;
  volatile uint32_t MISR;
  volatile uint32_t ICR;
  volatile uint32_t ESCR;
  volatile uint32_t ESUR;
  volatile uint32_t CWSTRTR;
  volatile uint32_t CWSIZER;
  volatile uint32_t DR;
} DCMI_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t NDTR;
  volatile uint32_t PAR;
  volatile uint32_t M0AR;
  volatile uint32_t M1AR;
  volatile uint32_t FCR;
} DMA_Stream_TypeDef;

typedef struct
{
  volatile uint32_t LISR;
  volatile uint32_t HISR;
  volatile uint32_t LIFCR;
  volatile uint32_t HIFCR;
} DMA_TypeDef;





typedef struct
{
  volatile uint32_t MACCR;
  volatile uint32_t MACFFR;
  volatile uint32_t MACHTHR;
  volatile uint32_t MACHTLR;
  volatile uint32_t MACMIIAR;
  volatile uint32_t MACMIIDR;
  volatile uint32_t MACFCR;
  volatile uint32_t MACVLANTR;
  uint32_t RESERVED0[2];
  volatile uint32_t MACRWUFFR;
  volatile uint32_t MACPMTCSR;
  uint32_t RESERVED1;
  volatile uint32_t MACDBGR;
  volatile uint32_t MACSR;
  volatile uint32_t MACIMR;
  volatile uint32_t MACA0HR;
  volatile uint32_t MACA0LR;
  volatile uint32_t MACA1HR;
  volatile uint32_t MACA1LR;
  volatile uint32_t MACA2HR;
  volatile uint32_t MACA2LR;
  volatile uint32_t MACA3HR;
  volatile uint32_t MACA3LR;
  uint32_t RESERVED2[40];
  volatile uint32_t MMCCR;
  volatile uint32_t MMCRIR;
  volatile uint32_t MMCTIR;
  volatile uint32_t MMCRIMR;
  volatile uint32_t MMCTIMR;
  uint32_t RESERVED3[14];
  volatile uint32_t MMCTGFSCCR;
  volatile uint32_t MMCTGFMSCCR;
  uint32_t RESERVED4[5];
  volatile uint32_t MMCTGFCR;
  uint32_t RESERVED5[10];
  volatile uint32_t MMCRFCECR;
  volatile uint32_t MMCRFAECR;
  uint32_t RESERVED6[10];
  volatile uint32_t MMCRGUFCR;
  uint32_t RESERVED7[334];
  volatile uint32_t PTPTSCR;
  volatile uint32_t PTPSSIR;
  volatile uint32_t PTPTSHR;
  volatile uint32_t PTPTSLR;
  volatile uint32_t PTPTSHUR;
  volatile uint32_t PTPTSLUR;
  volatile uint32_t PTPTSAR;
  volatile uint32_t PTPTTHR;
  volatile uint32_t PTPTTLR;
  volatile uint32_t RESERVED8;
  volatile uint32_t PTPTSSR;
  uint32_t RESERVED9[565];
  volatile uint32_t DMABMR;
  volatile uint32_t DMATPDR;
  volatile uint32_t DMARPDR;
  volatile uint32_t DMARDLAR;
  volatile uint32_t DMATDLAR;
  volatile uint32_t DMASR;
  volatile uint32_t DMAOMR;
  volatile uint32_t DMAIER;
  volatile uint32_t DMAMFBOCR;
  volatile uint32_t DMARSWTR;
  uint32_t RESERVED10[8];
  volatile uint32_t DMACHTDR;
  volatile uint32_t DMACHRDR;
  volatile uint32_t DMACHTBAR;
  volatile uint32_t DMACHRBAR;
} ETH_TypeDef;





typedef struct
{
  volatile uint32_t IMR;
  volatile uint32_t EMR;
  volatile uint32_t RTSR;
  volatile uint32_t FTSR;
  volatile uint32_t SWIER;
  volatile uint32_t PR;
} EXTI_TypeDef;





typedef struct
{
  volatile uint32_t ACR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t OPTCR;
  volatile uint32_t OPTCR1;
} FLASH_TypeDef;







typedef struct
{
  volatile uint32_t BTCR[8];
} FSMC_Bank1_TypeDef;





typedef struct
{
  volatile uint32_t BWTR[7];
} FSMC_Bank1E_TypeDef;





typedef struct
{
  volatile uint32_t PCR2;
  volatile uint32_t SR2;
  volatile uint32_t PMEM2;
  volatile uint32_t PATT2;
  uint32_t RESERVED0;
  volatile uint32_t ECCR2;
  uint32_t RESERVED1;
  uint32_t RESERVED2;
  volatile uint32_t PCR3;
  volatile uint32_t SR3;
  volatile uint32_t PMEM3;
  volatile uint32_t PATT3;
  uint32_t RESERVED3;
  volatile uint32_t ECCR3;
} FSMC_Bank2_3_TypeDef;





typedef struct
{
  volatile uint32_t PCR4;
  volatile uint32_t SR4;
  volatile uint32_t PMEM4;
  volatile uint32_t PATT4;
  volatile uint32_t PIO4;
} FSMC_Bank4_TypeDef;





typedef struct
{
  volatile uint32_t MODER;
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t LCKR;
  volatile uint32_t AFR[2];
} GPIO_TypeDef;





typedef struct
{
  volatile uint32_t MEMRMP;
  volatile uint32_t PMC;
  volatile uint32_t EXTICR[4];
  uint32_t RESERVED[2];
  volatile uint32_t CMPCR;
} SYSCFG_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t DR;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t CCR;
  volatile uint32_t TRISE;
} I2C_TypeDef;





typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
} IWDG_TypeDef;






typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CSR;
} PWR_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t PLLCFGR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR;
  volatile uint32_t AHB3RSTR;
  uint32_t RESERVED0;
  volatile uint32_t APB1RSTR;
  volatile uint32_t APB2RSTR;
  uint32_t RESERVED1[2];
  volatile uint32_t AHB1ENR;
  volatile uint32_t AHB2ENR;
  volatile uint32_t AHB3ENR;
  uint32_t RESERVED2;
  volatile uint32_t APB1ENR;
  volatile uint32_t APB2ENR;
  uint32_t RESERVED3[2];
  volatile uint32_t AHB1LPENR;
  volatile uint32_t AHB2LPENR;
  volatile uint32_t AHB3LPENR;
  uint32_t RESERVED4;
  volatile uint32_t APB1LPENR;
  volatile uint32_t APB2LPENR;
  uint32_t RESERVED5[2];
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  uint32_t RESERVED6[2];
  volatile uint32_t SSCGR;
  volatile uint32_t PLLI2SCFGR;
} RCC_TypeDef;





typedef struct
{
  volatile uint32_t TR;
  volatile uint32_t DR;
  volatile uint32_t CR;
  volatile uint32_t ISR;
  volatile uint32_t PRER;
  volatile uint32_t WUTR;
  volatile uint32_t CALIBR;
  volatile uint32_t ALRMAR;
  volatile uint32_t ALRMBR;
  volatile uint32_t WPR;
  volatile uint32_t SSR;
  volatile uint32_t SHIFTR;
  volatile uint32_t TSTR;
  volatile uint32_t TSDR;
  volatile uint32_t TSSSR;
  volatile uint32_t CALR;
  volatile uint32_t TAFCR;
  volatile uint32_t ALRMASSR;
  volatile uint32_t ALRMBSSR;
  uint32_t RESERVED7;
  volatile uint32_t BKP0R;
  volatile uint32_t BKP1R;
  volatile uint32_t BKP2R;
  volatile uint32_t BKP3R;
  volatile uint32_t BKP4R;
  volatile uint32_t BKP5R;
  volatile uint32_t BKP6R;
  volatile uint32_t BKP7R;
  volatile uint32_t BKP8R;
  volatile uint32_t BKP9R;
  volatile uint32_t BKP10R;
  volatile uint32_t BKP11R;
  volatile uint32_t BKP12R;
  volatile uint32_t BKP13R;
  volatile uint32_t BKP14R;
  volatile uint32_t BKP15R;
  volatile uint32_t BKP16R;
  volatile uint32_t BKP17R;
  volatile uint32_t BKP18R;
  volatile uint32_t BKP19R;
} RTC_TypeDef;





typedef struct
{
  volatile uint32_t POWER;
  volatile uint32_t CLKCR;
  volatile uint32_t ARG;
  volatile uint32_t CMD;
  volatile const uint32_t RESPCMD;
  volatile const uint32_t RESP1;
  volatile const uint32_t RESP2;
  volatile const uint32_t RESP3;
  volatile const uint32_t RESP4;
  volatile uint32_t DTIMER;
  volatile uint32_t DLEN;
  volatile uint32_t DCTRL;
  volatile const uint32_t DCOUNT;
  volatile const uint32_t STA;
  volatile uint32_t ICR;
  volatile uint32_t MASK;
  uint32_t RESERVED0[2];
  volatile const uint32_t FIFOCNT;
  uint32_t RESERVED1[13];
  volatile uint32_t FIFO;
} SDIO_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t CRCPR;
  volatile uint32_t RXCRCR;
  volatile uint32_t TXCRCR;
  volatile uint32_t I2SCFGR;
  volatile uint32_t I2SPR;
} SPI_TypeDef;






typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
  volatile uint32_t OR;
} TIM_TypeDef;





typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t BRR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t GTPR;
} USART_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t DR;
} RNG_TypeDef;




typedef struct
{
  volatile uint32_t GOTGCTL;
  volatile uint32_t GOTGINT;
  volatile uint32_t GAHBCFG;
  volatile uint32_t GUSBCFG;
  volatile uint32_t GRSTCTL;
  volatile uint32_t GINTSTS;
  volatile uint32_t GINTMSK;
  volatile uint32_t GRXSTSR;
  volatile uint32_t GRXSTSP;
  volatile uint32_t GRXFSIZ;
  volatile uint32_t DIEPTXF0_HNPTXFSIZ;
  volatile uint32_t HNPTXSTS;
  uint32_t Reserved30[2];
  volatile uint32_t GCCFG;
  volatile uint32_t CID;
  uint32_t Reserved40[48];
  volatile uint32_t HPTXFSIZ;
  volatile uint32_t DIEPTXF[0x0F];
} USB_OTG_GlobalTypeDef;




typedef struct
{
  volatile uint32_t DCFG;
  volatile uint32_t DCTL;
  volatile uint32_t DSTS;
  uint32_t Reserved0C;
  volatile uint32_t DIEPMSK;
  volatile uint32_t DOEPMSK;
  volatile uint32_t DAINT;
  volatile uint32_t DAINTMSK;
  uint32_t Reserved20;
  uint32_t Reserved9;
  volatile uint32_t DVBUSDIS;
  volatile uint32_t DVBUSPULSE;
  volatile uint32_t DTHRCTL;
  volatile uint32_t DIEPEMPMSK;
  volatile uint32_t DEACHINT;
  volatile uint32_t DEACHMSK;
  uint32_t Reserved40;
  volatile uint32_t DINEP1MSK;
  uint32_t Reserved44[15];
  volatile uint32_t DOUTEP1MSK;
} USB_OTG_DeviceTypeDef;




typedef struct
{
  volatile uint32_t DIEPCTL;
  uint32_t Reserved04;
  volatile uint32_t DIEPINT;
  uint32_t Reserved0C;
  volatile uint32_t DIEPTSIZ;
  volatile uint32_t DIEPDMA;
  volatile uint32_t DTXFSTS;
  uint32_t Reserved18;
} USB_OTG_INEndpointTypeDef;




typedef struct
{
  volatile uint32_t DOEPCTL;
  uint32_t Reserved04;
  volatile uint32_t DOEPINT;
  uint32_t Reserved0C;
  volatile uint32_t DOEPTSIZ;
  volatile uint32_t DOEPDMA;
  uint32_t Reserved18[2];
} USB_OTG_OUTEndpointTypeDef;




typedef struct
{
  volatile uint32_t HCFG;
  volatile uint32_t HFIR;
  volatile uint32_t HFNUM;
  uint32_t Reserved40C;
  volatile uint32_t HPTXSTS;
  volatile uint32_t HAINT;
  volatile uint32_t HAINTMSK;
} USB_OTG_HostTypeDef;




typedef struct
{
  volatile uint32_t HCCHAR;
  volatile uint32_t HCSPLT;
  volatile uint32_t HCINT;
  volatile uint32_t HCINTMSK;
  volatile uint32_t HCTSIZ;
  volatile uint32_t HCDMA;
  uint32_t Reserved[2];
} USB_OTG_HostChannelTypeDef;
# 152 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f4xx.h" 2
# 203 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f4xx.h"
typedef enum
{
  RESET = 0U,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0U,
  ENABLE = !DISABLE
} FunctionalState;


typedef enum
{
  ERROR = 0U,
  SUCCESS = !ERROR
} ErrorStatus;
# 49 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_def.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/Legacy/stm32_hal_legacy.h" 1
# 50 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_def.h" 2
# 61 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_def.h"
typedef enum
{
  HAL_OK = 0x00U,
  HAL_ERROR = 0x01U,
  HAL_BUSY = 0x02U,
  HAL_TIMEOUT = 0x03U
} HAL_StatusTypeDef;




typedef enum
{
  HAL_UNLOCKED = 0x00U,
  HAL_LOCKED = 0x01U
} HAL_LockTypeDef;
# 48 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h" 2
# 67 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h"
typedef struct
{
  uint32_t Channel;


  uint32_t Direction;



  uint32_t PeriphInc;


  uint32_t MemInc;


  uint32_t PeriphDataAlignment;


  uint32_t MemDataAlignment;


  uint32_t Mode;




  uint32_t Priority;


  uint32_t FIFOMode;




  uint32_t FIFOThreshold;


  uint32_t MemBurst;





  uint32_t PeriphBurst;




}DMA_InitTypeDef;





typedef enum
{
  HAL_DMA_STATE_RESET = 0x00U,
  HAL_DMA_STATE_READY = 0x01U,
  HAL_DMA_STATE_BUSY = 0x02U,
  HAL_DMA_STATE_TIMEOUT = 0x03U,
  HAL_DMA_STATE_ERROR = 0x04U,
  HAL_DMA_STATE_ABORT = 0x05U,
}HAL_DMA_StateTypeDef;




typedef enum
{
  HAL_DMA_FULL_TRANSFER = 0x00U,
  HAL_DMA_HALF_TRANSFER = 0x01U
}HAL_DMA_LevelCompleteTypeDef;




typedef enum
{
  HAL_DMA_XFER_CPLT_CB_ID = 0x00U,
  HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01U,
  HAL_DMA_XFER_M1CPLT_CB_ID = 0x02U,
  HAL_DMA_XFER_M1HALFCPLT_CB_ID = 0x03U,
  HAL_DMA_XFER_ERROR_CB_ID = 0x04U,
  HAL_DMA_XFER_ABORT_CB_ID = 0x05U,
  HAL_DMA_XFER_ALL_CB_ID = 0x06U
}HAL_DMA_CallbackIDTypeDef;




typedef struct __DMA_HandleTypeDef
{
  DMA_Stream_TypeDef *Instance;

  DMA_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_DMA_StateTypeDef State;

  void *Parent;

  void (* XferCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferHalfCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferM1CpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferM1HalfCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferErrorCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferAbortCallback)( struct __DMA_HandleTypeDef * hdma);

  volatile uint32_t ErrorCode;

  uint32_t StreamBaseAddress;

  uint32_t StreamIndex;

}DMA_HandleTypeDef;
# 658 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma_ex.h" 1
# 66 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma_ex.h"
typedef enum
{
  MEMORY0 = 0x00U,
  MEMORY1 = 0x01U
}HAL_DMA_MemoryTypeDef;
# 88 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMAEx_ChangeMemory(DMA_HandleTypeDef *hdma, uint32_t Address, HAL_DMA_MemoryTypeDef memory);
# 659 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h" 2
# 671 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_DeInit(DMA_HandleTypeDef *hdma);
# 681 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Start (DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, HAL_DMA_LevelCompleteTypeDef CompleteLevel, uint32_t Timeout);
void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_CleanCallbacks(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (* pCallback)(DMA_HandleTypeDef *_hdma));
HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID);
# 699 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dma.h"
HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma);
uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma);
# 31 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h" 1
# 75 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
typedef struct
{
  uint32_t ClockPrescaler;


  uint32_t Resolution;

  uint32_t DataAlign;


  uint32_t ScanConvMode;






  uint32_t EOCSelection;






  uint32_t ContinuousConvMode;


  uint32_t NbrOfConversion;


  uint32_t DiscontinuousConvMode;



  uint32_t NbrOfDiscConversion;


  uint32_t ExternalTrigConv;



  uint32_t ExternalTrigConvEdge;


  uint32_t DMAContinuousRequests;




}ADC_InitTypeDef;
# 133 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
typedef struct
{
  uint32_t Channel;

  uint32_t Rank;

  uint32_t SamplingTime;
# 148 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
  uint32_t Offset;
}ADC_ChannelConfTypeDef;




typedef struct
{
  uint32_t WatchdogMode;

  uint32_t HighThreshold;

  uint32_t LowThreshold;

  uint32_t Channel;


  uint32_t ITMode;


  uint32_t WatchdogNumber;
}ADC_AnalogWDGConfTypeDef;
# 208 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
typedef struct
{
  ADC_TypeDef *Instance;

  ADC_InitTypeDef Init;

  volatile uint32_t NbrOfCurrentConversionRank;

  DMA_HandleTypeDef *DMA_Handle;

  HAL_LockTypeDef Lock;

  volatile uint32_t State;

  volatile uint32_t ErrorCode;
}ADC_HandleTypeDef;
# 521 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc_ex.h" 1
# 74 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc_ex.h"
typedef struct
{
  uint32_t InjectedChannel;


  uint32_t InjectedRank;


  uint32_t InjectedSamplingTime;
# 91 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc_ex.h"
  uint32_t InjectedOffset;



  uint32_t InjectedNbrOfConversion;




  uint32_t InjectedDiscontinuousConvMode;






  uint32_t AutoInjectedConv;







  uint32_t ExternalTrigInjecConv;







  uint32_t ExternalTrigInjecConvEdge;




}ADC_InjectionConfTypeDef;




typedef struct
{
  uint32_t Mode;

  uint32_t DMAAccessMode;

  uint32_t TwoSamplingDelay;

}ADC_MultiModeTypeDef;
# 286 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc_ex.h"
HAL_StatusTypeDef HAL_ADCEx_InjectedStart(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStop(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedPollForConversion(ADC_HandleTypeDef* hadc, uint32_t Timeout);
HAL_StatusTypeDef HAL_ADCEx_InjectedStart_IT(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStop_IT(ADC_HandleTypeDef* hadc);
uint32_t HAL_ADCEx_InjectedGetValue(ADC_HandleTypeDef* hadc, uint32_t InjectedRank);
HAL_StatusTypeDef HAL_ADCEx_MultiModeStart_DMA(ADC_HandleTypeDef* hadc, uint32_t* pData, uint32_t Length);
HAL_StatusTypeDef HAL_ADCEx_MultiModeStop_DMA(ADC_HandleTypeDef* hadc);
uint32_t HAL_ADCEx_MultiModeGetValue(ADC_HandleTypeDef* hadc);
void HAL_ADCEx_InjectedConvCpltCallback(ADC_HandleTypeDef* hadc);


HAL_StatusTypeDef HAL_ADCEx_InjectedConfigChannel(ADC_HandleTypeDef* hadc,ADC_InjectionConfTypeDef* sConfigInjected);
HAL_StatusTypeDef HAL_ADCEx_MultiModeConfigChannel(ADC_HandleTypeDef* hadc, ADC_MultiModeTypeDef* multimode);
# 522 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h" 2
# 532 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_DeInit(ADC_HandleTypeDef *hadc);
void HAL_ADC_MspInit(ADC_HandleTypeDef* hadc);
void HAL_ADC_MspDeInit(ADC_HandleTypeDef* hadc);
# 544 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef* hadc, uint32_t Timeout);

HAL_StatusTypeDef HAL_ADC_PollForEvent(ADC_HandleTypeDef* hadc, uint32_t EventType, uint32_t Timeout);

HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef* hadc);
HAL_StatusTypeDef HAL_ADC_Stop_IT(ADC_HandleTypeDef* hadc);

void HAL_ADC_IRQHandler(ADC_HandleTypeDef* hadc);

HAL_StatusTypeDef HAL_ADC_Start_DMA(ADC_HandleTypeDef* hadc, uint32_t* pData, uint32_t Length);
HAL_StatusTypeDef HAL_ADC_Stop_DMA(ADC_HandleTypeDef* hadc);

uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef* hadc);

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc);
void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef* hadc);
void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef* hadc);
void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc);
# 572 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef* hadc, ADC_ChannelConfTypeDef* sConfig);
HAL_StatusTypeDef HAL_ADC_AnalogWDGConfig(ADC_HandleTypeDef* hadc, ADC_AnalogWDGConfTypeDef* AnalogWDGConfig);
# 582 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_adc.h"
uint32_t HAL_ADC_GetState(ADC_HandleTypeDef* hadc);
uint32_t HAL_ADC_GetError(ADC_HandleTypeDef *hadc);
# 32 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_can.h" 1
# 70 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_can.h"
typedef enum
{
  HAL_CAN_STATE_RESET = 0x00U,
  HAL_CAN_STATE_READY = 0x01U,
  HAL_CAN_STATE_BUSY = 0x02U,
  HAL_CAN_STATE_BUSY_TX = 0x12U,
  HAL_CAN_STATE_BUSY_RX0 = 0x22U,
  HAL_CAN_STATE_BUSY_RX1 = 0x32U,
  HAL_CAN_STATE_BUSY_TX_RX0 = 0x42U,
  HAL_CAN_STATE_BUSY_TX_RX1 = 0x52U,
  HAL_CAN_STATE_BUSY_RX0_RX1 = 0x62U,
  HAL_CAN_STATE_BUSY_TX_RX0_RX1 = 0x72U,
  HAL_CAN_STATE_TIMEOUT = 0x03U,
  HAL_CAN_STATE_ERROR = 0x04U

}HAL_CAN_StateTypeDef;




typedef struct
{
  uint32_t Prescaler;


  uint32_t Mode;


  uint32_t SJW;




  uint32_t BS1;


  uint32_t BS2;


  uint32_t TTCM;


  uint32_t ABOM;


  uint32_t AWUM;


  uint32_t NART;


  uint32_t RFLM;


  uint32_t TXFP;

}CAN_InitTypeDef;




typedef struct
{
  uint32_t FilterIdHigh;



  uint32_t FilterIdLow;



  uint32_t FilterMaskIdHigh;




  uint32_t FilterMaskIdLow;




  uint32_t FilterFIFOAssignment;


  uint32_t FilterNumber;


  uint32_t FilterMode;


  uint32_t FilterScale;


  uint32_t FilterActivation;


  uint32_t BankNumber;


}CAN_FilterConfTypeDef;




typedef struct
{
  uint32_t StdId;


  uint32_t ExtId;


  uint32_t IDE;


  uint32_t RTR;


  uint32_t DLC;


  uint8_t Data[8];


}CanTxMsgTypeDef;




typedef struct
{
  uint32_t StdId;


  uint32_t ExtId;


  uint32_t IDE;


  uint32_t RTR;


  uint32_t DLC;


  uint8_t Data[8];


  uint32_t FMI;


  uint32_t FIFONumber;


}CanRxMsgTypeDef;




typedef struct
{
  CAN_TypeDef *Instance;

  CAN_InitTypeDef Init;

  CanTxMsgTypeDef* pTxMsg;

  CanRxMsgTypeDef* pRxMsg;

  CanRxMsgTypeDef* pRx1Msg;

  volatile HAL_CAN_StateTypeDef State;

  HAL_LockTypeDef Lock;

  volatile uint32_t ErrorCode;

}CAN_HandleTypeDef;
# 654 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_can.h"
HAL_StatusTypeDef HAL_CAN_Init(CAN_HandleTypeDef* hcan);
HAL_StatusTypeDef HAL_CAN_ConfigFilter(CAN_HandleTypeDef* hcan, CAN_FilterConfTypeDef* sFilterConfig);
HAL_StatusTypeDef HAL_CAN_DeInit(CAN_HandleTypeDef* hcan);
void HAL_CAN_MspInit(CAN_HandleTypeDef* hcan);
void HAL_CAN_MspDeInit(CAN_HandleTypeDef* hcan);
# 667 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_can.h"
HAL_StatusTypeDef HAL_CAN_Transmit(CAN_HandleTypeDef *hcan, uint32_t Timeout);
HAL_StatusTypeDef HAL_CAN_Transmit_IT(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_Receive(CAN_HandleTypeDef *hcan, uint8_t FIFONumber, uint32_t Timeout);
HAL_StatusTypeDef HAL_CAN_Receive_IT(CAN_HandleTypeDef *hcan, uint8_t FIFONumber);
HAL_StatusTypeDef HAL_CAN_Sleep(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_WakeUp(CAN_HandleTypeDef *hcan);
void HAL_CAN_IRQHandler(CAN_HandleTypeDef* hcan);
void HAL_CAN_TxCpltCallback(CAN_HandleTypeDef* hcan);
void HAL_CAN_RxCpltCallback(CAN_HandleTypeDef* hcan);
void HAL_CAN_ErrorCallback(CAN_HandleTypeDef *hcan);
# 685 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_can.h"
uint32_t HAL_CAN_GetError(CAN_HandleTypeDef *hcan);
HAL_CAN_StateTypeDef HAL_CAN_GetState(CAN_HandleTypeDef* hcan);
# 33 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_cortex.h" 1
# 66 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_cortex.h"
typedef struct
{
  uint8_t Enable;

  uint8_t Number;

  uint32_t BaseAddress;
  uint8_t Size;

  uint8_t SubRegionDisable;

  uint8_t TypeExtField;

  uint8_t AccessPermission;

  uint8_t DisableExec;

  uint8_t IsShareable;

  uint8_t IsCacheable;

  uint8_t IsBufferable;

}MPU_Region_InitTypeDef;
# 280 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_cortex.h"
void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SystemReset(void);
uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb);
# 294 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_cortex.h"
uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority);
uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn);
void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource);
void HAL_SYSTICK_IRQHandler(void);
void HAL_SYSTICK_Callback(void);


void HAL_MPU_Enable(uint32_t MPU_Control);
void HAL_MPU_Disable(void);
void HAL_MPU_ConfigRegion(MPU_Region_InitTypeDef *MPU_Init);
# 34 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_crc.h" 1
# 66 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_crc.h"
typedef enum
{
  HAL_CRC_STATE_RESET = 0x00U,
  HAL_CRC_STATE_READY = 0x01U,
  HAL_CRC_STATE_BUSY = 0x02U,
  HAL_CRC_STATE_TIMEOUT = 0x03U,
  HAL_CRC_STATE_ERROR = 0x04U

}HAL_CRC_StateTypeDef;







typedef struct
{
  CRC_TypeDef *Instance;

  HAL_LockTypeDef Lock;

  volatile HAL_CRC_StateTypeDef State;

}CRC_HandleTypeDef;
# 144 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_crc.h"
HAL_StatusTypeDef HAL_CRC_Init(CRC_HandleTypeDef *hcrc);
HAL_StatusTypeDef HAL_CRC_DeInit (CRC_HandleTypeDef *hcrc);
void HAL_CRC_MspInit(CRC_HandleTypeDef *hcrc);
void HAL_CRC_MspDeInit(CRC_HandleTypeDef *hcrc);







uint32_t HAL_CRC_Accumulate(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength);
uint32_t HAL_CRC_Calculate(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength);







HAL_CRC_StateTypeDef HAL_CRC_GetState(CRC_HandleTypeDef *hcrc);
# 35 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h" 1
# 70 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h"
typedef enum
{
  HAL_DAC_STATE_RESET = 0x00U,
  HAL_DAC_STATE_READY = 0x01U,
  HAL_DAC_STATE_BUSY = 0x02U,
  HAL_DAC_STATE_TIMEOUT = 0x03U,
  HAL_DAC_STATE_ERROR = 0x04U
}HAL_DAC_StateTypeDef;




typedef struct
{
  DAC_TypeDef *Instance;

  volatile HAL_DAC_StateTypeDef State;

  HAL_LockTypeDef Lock;

  DMA_HandleTypeDef *DMA_Handle1;

  DMA_HandleTypeDef *DMA_Handle2;

  volatile uint32_t ErrorCode;

}DAC_HandleTypeDef;




typedef struct
{
  uint32_t DAC_Trigger;


  uint32_t DAC_OutputBuffer;

}DAC_ChannelConfTypeDef;
# 271 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac_ex.h" 1
# 113 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac_ex.h"
uint32_t HAL_DACEx_DualGetValue(DAC_HandleTypeDef* hdac);
HAL_StatusTypeDef HAL_DACEx_TriangleWaveGenerate(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t Amplitude);
HAL_StatusTypeDef HAL_DACEx_NoiseWaveGenerate(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t Amplitude);
HAL_StatusTypeDef HAL_DACEx_DualSetValue(DAC_HandleTypeDef* hdac, uint32_t Alignment, uint32_t Data1, uint32_t Data2);

void HAL_DACEx_ConvCpltCallbackCh2(DAC_HandleTypeDef* hdac);
void HAL_DACEx_ConvHalfCpltCallbackCh2(DAC_HandleTypeDef* hdac);
void HAL_DACEx_ErrorCallbackCh2(DAC_HandleTypeDef* hdac);
void HAL_DACEx_DMAUnderrunCallbackCh2(DAC_HandleTypeDef* hdac);
# 176 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac_ex.h"
void DAC_DMAConvCpltCh2(DMA_HandleTypeDef *hdma);
void DAC_DMAErrorCh2(DMA_HandleTypeDef *hdma);
void DAC_DMAHalfConvCpltCh2(DMA_HandleTypeDef *hdma);
# 272 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h" 2
# 282 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h"
HAL_StatusTypeDef HAL_DAC_Init(DAC_HandleTypeDef* hdac);
HAL_StatusTypeDef HAL_DAC_DeInit(DAC_HandleTypeDef* hdac);
void HAL_DAC_MspInit(DAC_HandleTypeDef* hdac);
void HAL_DAC_MspDeInit(DAC_HandleTypeDef* hdac);
# 294 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h"
HAL_StatusTypeDef HAL_DAC_Start(DAC_HandleTypeDef* hdac, uint32_t Channel);
HAL_StatusTypeDef HAL_DAC_Stop(DAC_HandleTypeDef* hdac, uint32_t Channel);
HAL_StatusTypeDef HAL_DAC_Start_DMA(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t* pData, uint32_t Length, uint32_t Alignment);
HAL_StatusTypeDef HAL_DAC_Stop_DMA(DAC_HandleTypeDef* hdac, uint32_t Channel);
uint32_t HAL_DAC_GetValue(DAC_HandleTypeDef* hdac, uint32_t Channel);
# 307 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h"
HAL_StatusTypeDef HAL_DAC_ConfigChannel(DAC_HandleTypeDef* hdac, DAC_ChannelConfTypeDef* sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_DAC_SetValue(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t Alignment, uint32_t Data);
# 317 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dac.h"
HAL_DAC_StateTypeDef HAL_DAC_GetState(DAC_HandleTypeDef* hdac);
void HAL_DAC_IRQHandler(DAC_HandleTypeDef* hdac);
uint32_t HAL_DAC_GetError(DAC_HandleTypeDef *hdac);

void HAL_DAC_ConvCpltCallbackCh1(DAC_HandleTypeDef* hdac);
void HAL_DAC_ConvHalfCpltCallbackCh1(DAC_HandleTypeDef* hdac);
void HAL_DAC_ErrorCallbackCh1(DAC_HandleTypeDef *hdac);
void HAL_DAC_DMAUnderrunCallbackCh1(DAC_HandleTypeDef *hdac);
# 36 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h" 1
# 54 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi_ex.h" 1
# 70 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi_ex.h"
typedef struct
{
  uint8_t FrameStartCode;
  uint8_t LineStartCode;
  uint8_t LineEndCode;
  uint8_t FrameEndCode;
}DCMI_CodesInitTypeDef;




typedef struct
{
  uint32_t SynchroMode;


  uint32_t PCKPolarity;


  uint32_t VSPolarity;


  uint32_t HSPolarity;


  uint32_t CaptureRate;


  uint32_t ExtendedDataMode;


  DCMI_CodesInitTypeDef SyncroCode;

  uint32_t JPEGMode;
# 119 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi_ex.h"
}DCMI_InitTypeDef;
# 55 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h" 2
# 72 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h"
typedef enum
{
  HAL_DCMI_STATE_RESET = 0x00U,
  HAL_DCMI_STATE_READY = 0x01U,
  HAL_DCMI_STATE_BUSY = 0x02U,
  HAL_DCMI_STATE_TIMEOUT = 0x03U,
  HAL_DCMI_STATE_ERROR = 0x04U,
  HAL_DCMI_STATE_SUSPENDED = 0x05U
}HAL_DCMI_StateTypeDef;




typedef struct
{
  DCMI_TypeDef *Instance;

  DCMI_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_DCMI_StateTypeDef State;

  volatile uint32_t XferCount;

  volatile uint32_t XferSize;

  uint32_t XferTransferNumber;

  uint32_t pBuffPtr;

  DMA_HandleTypeDef *DMA_Handle;

  volatile uint32_t ErrorCode;

}DCMI_HandleTypeDef;
# 408 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h"
HAL_StatusTypeDef HAL_DCMI_Init(DCMI_HandleTypeDef *hdcmi);
HAL_StatusTypeDef HAL_DCMI_DeInit(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_MspInit(DCMI_HandleTypeDef* hdcmi);
void HAL_DCMI_MspDeInit(DCMI_HandleTypeDef* hdcmi);
# 420 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h"
HAL_StatusTypeDef HAL_DCMI_Start_DMA(DCMI_HandleTypeDef* hdcmi, uint32_t DCMI_Mode, uint32_t pData, uint32_t Length);
HAL_StatusTypeDef HAL_DCMI_Stop(DCMI_HandleTypeDef* hdcmi);
HAL_StatusTypeDef HAL_DCMI_Suspend(DCMI_HandleTypeDef* hdcmi);
HAL_StatusTypeDef HAL_DCMI_Resume(DCMI_HandleTypeDef* hdcmi);
void HAL_DCMI_ErrorCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_LineEventCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_FrameEventCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_VsyncEventCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_VsyncCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_HsyncCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_IRQHandler(DCMI_HandleTypeDef *hdcmi);
# 439 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h"
HAL_StatusTypeDef HAL_DCMI_ConfigCrop(DCMI_HandleTypeDef *hdcmi, uint32_t X0, uint32_t Y0, uint32_t XSize, uint32_t YSize);
HAL_StatusTypeDef HAL_DCMI_EnableCrop(DCMI_HandleTypeDef *hdcmi);
HAL_StatusTypeDef HAL_DCMI_DisableCrop(DCMI_HandleTypeDef *hdcmi);
# 450 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_dcmi.h"
HAL_DCMI_StateTypeDef HAL_DCMI_GetState(DCMI_HandleTypeDef *hdcmi);
uint32_t HAL_DCMI_GetError(DCMI_HandleTypeDef *hdcmi);
# 37 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_eth.h" 1
# 371 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_eth.h"
typedef enum
{
  HAL_ETH_STATE_RESET = 0x00U,
  HAL_ETH_STATE_READY = 0x01U,
  HAL_ETH_STATE_BUSY = 0x02U,
  HAL_ETH_STATE_BUSY_TX = 0x12U,
  HAL_ETH_STATE_BUSY_RX = 0x22U,
  HAL_ETH_STATE_BUSY_TX_RX = 0x32U,
  HAL_ETH_STATE_BUSY_WR = 0x42U,
  HAL_ETH_STATE_BUSY_RD = 0x82U,
  HAL_ETH_STATE_TIMEOUT = 0x03U,
  HAL_ETH_STATE_ERROR = 0x04U
}HAL_ETH_StateTypeDef;





typedef struct
{
  uint32_t AutoNegotiation;




  uint32_t Speed;


  uint32_t DuplexMode;


  uint16_t PhyAddress;


  uint8_t *MACAddr;

  uint32_t RxMode;


  uint32_t ChecksumMode;


  uint32_t MediaInterface;


} ETH_InitTypeDef;






typedef struct
{
  uint32_t Watchdog;




  uint32_t Jabber;




  uint32_t InterFrameGap;


  uint32_t CarrierSense;


  uint32_t ReceiveOwn;




  uint32_t LoopbackMode;


  uint32_t ChecksumOffload;


  uint32_t RetryTransmission;



  uint32_t AutomaticPadCRCStrip;


  uint32_t BackOffLimit;


  uint32_t DeferralCheck;


  uint32_t ReceiveAll;


  uint32_t SourceAddrFilter;


  uint32_t PassControlFrames;


  uint32_t BroadcastFramesReception;


  uint32_t DestinationAddrFilter;


  uint32_t PromiscuousMode;


  uint32_t MulticastFramesFilter;


  uint32_t UnicastFramesFilter;


  uint32_t HashTableHigh;


  uint32_t HashTableLow;


  uint32_t PauseTime;


  uint32_t ZeroQuantaPause;


  uint32_t PauseLowThreshold;



  uint32_t UnicastPauseFrameDetect;



  uint32_t ReceiveFlowControl;



  uint32_t TransmitFlowControl;



  uint32_t VLANTagComparison;



  uint32_t VLANTagIdentifier;

} ETH_MACInitTypeDef;





typedef struct
{
 uint32_t DropTCPIPChecksumErrorFrame;


  uint32_t ReceiveStoreForward;


  uint32_t FlushReceivedFrame;


  uint32_t TransmitStoreForward;


  uint32_t TransmitThresholdControl;


  uint32_t ForwardErrorFrames;


  uint32_t ForwardUndersizedGoodFrames;



  uint32_t ReceiveThresholdControl;


  uint32_t SecondFrameOperate;



  uint32_t AddressAlignedBeats;


  uint32_t FixedBurst;


  uint32_t RxDMABurstLength;


  uint32_t TxDMABurstLength;


  uint32_t EnhancedDescriptorFormat;


  uint32_t DescriptorSkipLength;


  uint32_t DMAArbitration;

} ETH_DMAInitTypeDef;






typedef struct
{
  volatile uint32_t Status;

  uint32_t ControlBufferSize;

  uint32_t Buffer1Addr;

  uint32_t Buffer2NextDescAddr;


  uint32_t ExtendedStatus;

  uint32_t Reserved1;

  uint32_t TimeStampLow;

  uint32_t TimeStampHigh;

} ETH_DMADescTypeDef;




typedef struct
{
  ETH_DMADescTypeDef *FSRxDesc;

  ETH_DMADescTypeDef *LSRxDesc;

  uint32_t SegCount;

  uint32_t length;

  uint32_t buffer;

} ETH_DMARxFrameInfos;





typedef struct
{
  ETH_TypeDef *Instance;

  ETH_InitTypeDef Init;

  uint32_t LinkStatus;

  ETH_DMADescTypeDef *RxDesc;

  ETH_DMADescTypeDef *TxDesc;

  ETH_DMARxFrameInfos RxFrameInfos;

  volatile HAL_ETH_StateTypeDef State;

  HAL_LockTypeDef Lock;

} ETH_HandleTypeDef;
# 2106 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_eth.h"
HAL_StatusTypeDef HAL_ETH_Init(ETH_HandleTypeDef *heth);
HAL_StatusTypeDef HAL_ETH_DeInit(ETH_HandleTypeDef *heth);
void HAL_ETH_MspInit(ETH_HandleTypeDef *heth);
void HAL_ETH_MspDeInit(ETH_HandleTypeDef *heth);
HAL_StatusTypeDef HAL_ETH_DMATxDescListInit(ETH_HandleTypeDef *heth, ETH_DMADescTypeDef *DMATxDescTab, uint8_t* TxBuff, uint32_t TxBuffCount);
HAL_StatusTypeDef HAL_ETH_DMARxDescListInit(ETH_HandleTypeDef *heth, ETH_DMADescTypeDef *DMARxDescTab, uint8_t *RxBuff, uint32_t RxBuffCount);
# 2121 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_eth.h"
HAL_StatusTypeDef HAL_ETH_TransmitFrame(ETH_HandleTypeDef *heth, uint32_t FrameLength);
HAL_StatusTypeDef HAL_ETH_GetReceivedFrame(ETH_HandleTypeDef *heth);

HAL_StatusTypeDef HAL_ETH_ReadPHYRegister(ETH_HandleTypeDef *heth, uint16_t PHYReg, uint32_t *RegValue);
HAL_StatusTypeDef HAL_ETH_WritePHYRegister(ETH_HandleTypeDef *heth, uint16_t PHYReg, uint32_t RegValue);

HAL_StatusTypeDef HAL_ETH_GetReceivedFrame_IT(ETH_HandleTypeDef *heth);
void HAL_ETH_IRQHandler(ETH_HandleTypeDef *heth);

void HAL_ETH_TxCpltCallback(ETH_HandleTypeDef *heth);
void HAL_ETH_RxCpltCallback(ETH_HandleTypeDef *heth);
void HAL_ETH_ErrorCallback(ETH_HandleTypeDef *heth);
# 2143 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_eth.h"
HAL_StatusTypeDef HAL_ETH_Start(ETH_HandleTypeDef *heth);
HAL_StatusTypeDef HAL_ETH_Stop(ETH_HandleTypeDef *heth);
HAL_StatusTypeDef HAL_ETH_ConfigMAC(ETH_HandleTypeDef *heth, ETH_MACInitTypeDef *macconf);
HAL_StatusTypeDef HAL_ETH_ConfigDMA(ETH_HandleTypeDef *heth, ETH_DMAInitTypeDef *dmaconf);
# 2156 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_eth.h"
HAL_ETH_StateTypeDef HAL_ETH_GetState(ETH_HandleTypeDef *heth);
# 38 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h"
typedef enum
{
  FLASH_PROC_NONE = 0U,
  FLASH_PROC_SECTERASE,
  FLASH_PROC_MASSERASE,
  FLASH_PROC_PROGRAM
} FLASH_ProcedureTypeDef;




typedef struct
{
  volatile FLASH_ProcedureTypeDef ProcedureOnGoing;

  volatile uint32_t NbSectorsToErase;

  volatile uint8_t VoltageForErase;

  volatile uint32_t Sector;

  volatile uint32_t Bank;

  volatile uint32_t Address;

  HAL_LockTypeDef Lock;

  volatile uint32_t ErrorCode;

}FLASH_ProcessTypeDef;
# 315 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash_ex.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash_ex.h"
typedef struct
{
  uint32_t TypeErase;


  uint32_t Banks;


  uint32_t Sector;


  uint32_t NbSectors;


  uint32_t VoltageRange;


} FLASH_EraseInitTypeDef;




typedef struct
{
  uint32_t OptionType;


  uint32_t WRPState;


  uint32_t WRPSector;


  uint32_t Banks;


  uint32_t RDPLevel;


  uint32_t BORLevel;


  uint8_t USERConfig;

} FLASH_OBProgramInitTypeDef;
# 745 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *SectorError);
HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit);
HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit);
void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit);
# 1064 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash_ex.h"
void FLASH_Erase_Sector(uint32_t Sector, uint8_t VoltageRange);
void FLASH_FlushCaches(void);
# 316 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash_ramfunc.h" 1
# 317 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h" 2
# 326 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data);

void HAL_FLASH_IRQHandler(void);

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
# 341 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);

HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);
# 355 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_flash.h"
uint32_t HAL_FLASH_GetError(void);
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
# 39 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h"
typedef struct
{
  uint32_t Pin;


  uint32_t Mode;


  uint32_t Pull;


  uint32_t Speed;


  uint32_t Alternate;

}GPIO_InitTypeDef;




typedef enum
{
  GPIO_PIN_RESET = 0,
  GPIO_PIN_SET
}GPIO_PinState;
# 232 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio_ex.h" 1
# 233 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h" 2
# 243 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h"
void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);
void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);
# 253 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h"
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
void HAL_GPIO_TogglePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
# 40 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hash.h" 1
# 41 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h" 1
# 51 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usb.h" 1
# 66 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usb.h"
typedef enum
{
   USB_OTG_DEVICE_MODE = 0U,
   USB_OTG_HOST_MODE = 1U,
   USB_OTG_DRD_MODE = 2U

}USB_OTG_ModeTypeDef;




typedef enum {
  URB_IDLE = 0U,
  URB_DONE,
  URB_NOTREADY,
  URB_NYET,
  URB_ERROR,
  URB_STALL

}USB_OTG_URBStateTypeDef;




typedef enum {
  HC_IDLE = 0U,
  HC_XFRC,
  HC_HALTED,
  HC_NAK,
  HC_NYET,
  HC_STALL,
  HC_XACTERR,
  HC_BBLERR,
  HC_DATATGLERR

}USB_OTG_HCStateTypeDef;




typedef struct
{
  uint32_t dev_endpoints;



  uint32_t Host_channels;



  uint32_t speed;


  uint32_t dma_enable;

  uint32_t ep0_mps;


  uint32_t phy_itface;


  uint32_t Sof_enable;

  uint32_t low_power_enable;

  uint32_t lpm_enable;

  uint32_t battery_charging_enable;

  uint32_t vbus_sensing_enable;

  uint32_t use_dedicated_ep1;

  uint32_t use_external_vbus;

}USB_OTG_CfgTypeDef;




typedef struct
{
  uint8_t num;


  uint8_t is_in;


  uint8_t is_stall;


  uint8_t type;


  uint8_t data_pid_start;


  uint8_t even_odd_frame;


  uint16_t tx_fifo_num;


  uint32_t maxpacket;


  uint8_t *xfer_buff;

  uint32_t dma_addr;

  uint32_t xfer_len;

  uint32_t xfer_count;

}USB_OTG_EPTypeDef;




typedef struct
{
  uint8_t dev_addr ;


  uint8_t ch_num;


  uint8_t ep_num;


  uint8_t ep_is_in;


  uint8_t speed;


  uint8_t do_ping;

  uint8_t process_ping;

  uint8_t ep_type;


  uint16_t max_packet;


  uint8_t data_pid;


  uint8_t *xfer_buff;

  uint32_t xfer_len;

  uint32_t xfer_count;

  uint8_t toggle_in;


  uint8_t toggle_out;


  uint32_t dma_addr;

  uint32_t ErrCnt;

  USB_OTG_URBStateTypeDef urb_state;


  USB_OTG_HCStateTypeDef state;


}USB_OTG_HCTypeDef;
# 408 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usb.h"
HAL_StatusTypeDef USB_CoreInit(USB_OTG_GlobalTypeDef *USBx, const USB_OTG_CfgTypeDef *Init);
HAL_StatusTypeDef USB_DevInit(USB_OTG_GlobalTypeDef *USBx, const USB_OTG_CfgTypeDef *Init);
HAL_StatusTypeDef USB_EnableGlobalInt(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DisableGlobalInt(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_SetCurrentMode(USB_OTG_GlobalTypeDef *USBx , USB_OTG_ModeTypeDef mode);
HAL_StatusTypeDef USB_SetDevSpeed(USB_OTG_GlobalTypeDef *USBx , uint8_t speed);
HAL_StatusTypeDef USB_FlushRxFifo (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_FlushTxFifo (USB_OTG_GlobalTypeDef *USBx, uint32_t num );
HAL_StatusTypeDef USB_ActivateEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_DeactivateEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_ActivateDedicatedEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_DeactivateDedicatedEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPStartXfer(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep, uint8_t dma);
HAL_StatusTypeDef USB_EP0StartXfer(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep, uint8_t dma);
HAL_StatusTypeDef USB_WritePacket(USB_OTG_GlobalTypeDef *USBx, uint8_t *src, uint8_t ch_ep_num, uint16_t len, uint8_t dma);
void * USB_ReadPacket(USB_OTG_GlobalTypeDef *USBx, uint8_t *dest, uint16_t len);
HAL_StatusTypeDef USB_EPSetStall(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPClearStall(USB_OTG_GlobalTypeDef *USBx , USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_SetDevAddress (USB_OTG_GlobalTypeDef *USBx, uint8_t address);
HAL_StatusTypeDef USB_DevConnect (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DevDisconnect (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_StopDevice(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_ActivateSetup (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_EP0_OutStart(USB_OTG_GlobalTypeDef *USBx, uint8_t dma, uint8_t *psetup);
uint8_t USB_GetDevSpeed(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_GetMode(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadInterrupts (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevAllOutEpInterrupt (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevOutEPInterrupt (USB_OTG_GlobalTypeDef *USBx , uint8_t epnum);
uint32_t USB_ReadDevAllInEpInterrupt (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevInEPInterrupt (USB_OTG_GlobalTypeDef *USBx , uint8_t epnum);
void USB_ClearInterrupts (USB_OTG_GlobalTypeDef *USBx, uint32_t interrupt);

HAL_StatusTypeDef USB_HostInit (USB_OTG_GlobalTypeDef *USBx, const USB_OTG_CfgTypeDef *cfg);
HAL_StatusTypeDef USB_InitFSLSPClkSel(USB_OTG_GlobalTypeDef *USBx , uint8_t freq);
HAL_StatusTypeDef USB_ResetPort(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DriveVbus (USB_OTG_GlobalTypeDef *USBx, uint8_t state);
uint32_t USB_GetHostSpeed (USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_GetCurrentFrame (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_HC_Init(USB_OTG_GlobalTypeDef *USBx,
                                  uint8_t ch_num,
                                  uint8_t epnum,
                                  uint8_t dev_address,
                                  uint8_t speed,
                                  uint8_t ep_type,
                                  uint16_t mps);
HAL_StatusTypeDef USB_HC_StartXfer(USB_OTG_GlobalTypeDef *USBx, USB_OTG_HCTypeDef *hc, uint8_t dma);
uint32_t USB_HC_ReadInterrupt (USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_HC_Halt(USB_OTG_GlobalTypeDef *USBx , uint8_t hc_num);
HAL_StatusTypeDef USB_DoPing(USB_OTG_GlobalTypeDef *USBx , uint8_t ch_num);
HAL_StatusTypeDef USB_StopHost(USB_OTG_GlobalTypeDef *USBx);
# 52 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h" 2
# 69 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h"
typedef enum
{
  HAL_HCD_STATE_RESET = 0x00U,
  HAL_HCD_STATE_READY = 0x01U,
  HAL_HCD_STATE_ERROR = 0x02U,
  HAL_HCD_STATE_BUSY = 0x03U,
  HAL_HCD_STATE_TIMEOUT = 0x04U
} HCD_StateTypeDef;

typedef USB_OTG_GlobalTypeDef HCD_TypeDef;
typedef USB_OTG_CfgTypeDef HCD_InitTypeDef;
typedef USB_OTG_HCTypeDef HCD_HCTypeDef ;
typedef USB_OTG_URBStateTypeDef HCD_URBStateTypeDef ;
typedef USB_OTG_HCStateTypeDef HCD_HCStateTypeDef ;







typedef struct
{
  HCD_TypeDef *Instance;
  HCD_InitTypeDef Init;
  HCD_HCTypeDef hc[15U];
  HAL_LockTypeDef Lock;
  volatile HCD_StateTypeDef State;
  void *pData;
} HCD_HandleTypeDef;
# 165 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h"
HAL_StatusTypeDef HAL_HCD_Init(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_DeInit(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_HC_Init(HCD_HandleTypeDef *hhcd,
                                    uint8_t ch_num,
                                    uint8_t epnum,
                                    uint8_t dev_address,
                                    uint8_t speed,
                                    uint8_t ep_type,
                                    uint16_t mps);

HAL_StatusTypeDef HAL_HCD_HC_Halt(HCD_HandleTypeDef *hhcd, uint8_t ch_num);

void HAL_HCD_MspInit(HCD_HandleTypeDef *hhcd);
void HAL_HCD_MspDeInit(HCD_HandleTypeDef *hhcd);
# 187 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h"
HAL_StatusTypeDef HAL_HCD_HC_SubmitRequest(HCD_HandleTypeDef *hhcd,
                                             uint8_t ch_num,
                                             uint8_t direction,
                                             uint8_t ep_type,
                                             uint8_t token,
                                             uint8_t* pbuff,
                                             uint16_t length,
                                             uint8_t do_ping);


void HAL_HCD_IRQHandler(HCD_HandleTypeDef *hhcd);
void HAL_HCD_SOF_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_Connect_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_Disconnect_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_HC_NotifyURBChange_Callback(HCD_HandleTypeDef *hhcd,
                                                        uint8_t chnum,
                                                        HCD_URBStateTypeDef urb_state);
# 212 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h"
HAL_StatusTypeDef HAL_HCD_ResetPort(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_Start(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_Stop(HCD_HandleTypeDef *hhcd);
# 223 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_hcd.h"
HCD_StateTypeDef HAL_HCD_GetState(HCD_HandleTypeDef *hhcd);
HCD_URBStateTypeDef HAL_HCD_HC_GetURBState(HCD_HandleTypeDef *hhcd, uint8_t chnum);
uint32_t HAL_HCD_HC_GetXferCount(HCD_HandleTypeDef *hhcd, uint8_t chnum);
HCD_HCStateTypeDef HAL_HCD_HC_GetState(HCD_HandleTypeDef *hhcd, uint8_t chnum);
uint32_t HAL_HCD_GetCurrentFrame(HCD_HandleTypeDef *hhcd);
uint32_t HAL_HCD_GetCurrentSpeed(HCD_HandleTypeDef *hhcd);
# 42 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"
typedef struct
{
  uint32_t ClockSpeed;


  uint32_t DutyCycle;


  uint32_t OwnAddress1;


  uint32_t AddressingMode;


  uint32_t DualAddressMode;


  uint32_t OwnAddress2;


  uint32_t GeneralCallMode;


  uint32_t NoStretchMode;


}I2C_InitTypeDef;
# 119 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"
typedef enum
{
  HAL_I2C_STATE_RESET = 0x00U,
  HAL_I2C_STATE_READY = 0x20U,
  HAL_I2C_STATE_BUSY = 0x24U,
  HAL_I2C_STATE_BUSY_TX = 0x21U,
  HAL_I2C_STATE_BUSY_RX = 0x22U,
  HAL_I2C_STATE_LISTEN = 0x28U,
  HAL_I2C_STATE_BUSY_TX_LISTEN = 0x29U,

  HAL_I2C_STATE_BUSY_RX_LISTEN = 0x2AU,

  HAL_I2C_STATE_ABORT = 0x60U,
  HAL_I2C_STATE_TIMEOUT = 0xA0U,
  HAL_I2C_STATE_ERROR = 0xE0U

}HAL_I2C_StateTypeDef;
# 154 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"
typedef enum
{
  HAL_I2C_MODE_NONE = 0x00U,
  HAL_I2C_MODE_MASTER = 0x10U,
  HAL_I2C_MODE_SLAVE = 0x20U,
  HAL_I2C_MODE_MEM = 0x40U

}HAL_I2C_ModeTypeDef;




typedef struct
{
  I2C_TypeDef *Instance;

  I2C_InitTypeDef Init;

  uint8_t *pBuffPtr;

  uint16_t XferSize;

  volatile uint16_t XferCount;

  volatile uint32_t XferOptions;

  volatile uint32_t PreviousState;


  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_I2C_StateTypeDef State;

  volatile HAL_I2C_ModeTypeDef Mode;

  volatile uint32_t ErrorCode;

  volatile uint32_t Devaddress;

  volatile uint32_t Memaddress;

  volatile uint32_t MemaddSize;

  volatile uint32_t EventCount;

}I2C_HandleTypeDef;
# 475 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c_ex.h" 1
# 476 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h" 2
# 486 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"
HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_DeInit (I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspInit(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspDeInit(I2C_HandleTypeDef *hi2c);
# 499 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_IsDeviceReady(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);

HAL_StatusTypeDef HAL_I2C_Master_Sequential_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Master_Sequential_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Sequential_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Sequential_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Master_Abort_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress);
HAL_StatusTypeDef HAL_I2C_EnableListen_IT(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_DisableListen_IT(I2C_HandleTypeDef *hi2c);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);


void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode);
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c);
# 552 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"
HAL_I2C_StateTypeDef HAL_I2C_GetState(I2C_HandleTypeDef *hi2c);
HAL_I2C_ModeTypeDef HAL_I2C_GetMode(I2C_HandleTypeDef *hi2c);
uint32_t HAL_I2C_GetError(I2C_HandleTypeDef *hi2c);
# 43 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s.h"
typedef struct
{
  uint32_t Mode;


  uint32_t Standard;


  uint32_t DataFormat;


  uint32_t MCLKOutput;


  uint32_t AudioFreq;


  uint32_t CPOL;


  uint32_t ClockSource;


  uint32_t FullDuplexMode;


}I2S_InitTypeDef;




typedef enum
{
  HAL_I2S_STATE_RESET = 0x00U,
  HAL_I2S_STATE_READY = 0x01U,
  HAL_I2S_STATE_BUSY = 0x02U,
  HAL_I2S_STATE_BUSY_TX = 0x03U,
  HAL_I2S_STATE_BUSY_RX = 0x04U,
  HAL_I2S_STATE_BUSY_TX_RX = 0x05U,
  HAL_I2S_STATE_TIMEOUT = 0x06U,
  HAL_I2S_STATE_ERROR = 0x07U

}HAL_I2S_StateTypeDef;




typedef struct __I2S_HandleTypeDef
{
  SPI_TypeDef *Instance;

  I2S_InitTypeDef Init;

  uint16_t *pTxBuffPtr;

  volatile uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint16_t *pRxBuffPtr;

  volatile uint16_t RxXferSize;

  volatile uint16_t RxXferCount;






  void (*IrqHandlerISR) (struct __I2S_HandleTypeDef *hi2s);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  volatile HAL_LockTypeDef Lock;

  volatile HAL_I2S_StateTypeDef State;

  volatile uint32_t ErrorCode;


}I2S_HandleTypeDef;
# 391 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s_ex.h" 1
# 146 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s_ex.h"
HAL_StatusTypeDef HAL_I2SEx_TransmitReceive(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData,
                                            uint16_t Size, uint32_t Timeout);

HAL_StatusTypeDef HAL_I2SEx_TransmitReceive_IT(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData,
                                               uint16_t Size);

HAL_StatusTypeDef HAL_I2SEx_TransmitReceive_DMA(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData,
                                                uint16_t Size);

void HAL_I2SEx_FullDuplex_IRQHandler(I2S_HandleTypeDef *hi2s);
void HAL_I2SEx_TxRxCpltCallback(I2S_HandleTypeDef *hi2s);
# 392 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s.h" 2
# 402 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s.h"
HAL_StatusTypeDef HAL_I2S_Init(I2S_HandleTypeDef *hi2s);
HAL_StatusTypeDef HAL_I2S_DeInit (I2S_HandleTypeDef *hi2s);
void HAL_I2S_MspInit(I2S_HandleTypeDef *hi2s);
void HAL_I2S_MspDeInit(I2S_HandleTypeDef *hi2s);
# 415 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s.h"
HAL_StatusTypeDef HAL_I2S_Transmit(I2S_HandleTypeDef *hi2s, uint16_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2S_Receive(I2S_HandleTypeDef *hi2s, uint16_t *pData, uint16_t Size, uint32_t Timeout);


HAL_StatusTypeDef HAL_I2S_Transmit_IT(I2S_HandleTypeDef *hi2s, uint16_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2S_Receive_IT(I2S_HandleTypeDef *hi2s, uint16_t *pData, uint16_t Size);
void HAL_I2S_IRQHandler(I2S_HandleTypeDef *hi2s);


HAL_StatusTypeDef HAL_I2S_Transmit_DMA(I2S_HandleTypeDef *hi2s, uint16_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2S_Receive_DMA(I2S_HandleTypeDef *hi2s, uint16_t *pData, uint16_t Size);

HAL_StatusTypeDef HAL_I2S_DMAPause(I2S_HandleTypeDef *hi2s);
HAL_StatusTypeDef HAL_I2S_DMAResume(I2S_HandleTypeDef *hi2s);
HAL_StatusTypeDef HAL_I2S_DMAStop(I2S_HandleTypeDef *hi2s);


void HAL_I2S_TxHalfCpltCallback(I2S_HandleTypeDef *hi2s);
void HAL_I2S_TxCpltCallback(I2S_HandleTypeDef *hi2s);
void HAL_I2S_RxHalfCpltCallback(I2S_HandleTypeDef *hi2s);
void HAL_I2S_RxCpltCallback(I2S_HandleTypeDef *hi2s);
void HAL_I2S_ErrorCallback(I2S_HandleTypeDef *hi2s);
# 445 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2s.h"
HAL_I2S_StateTypeDef HAL_I2S_GetState(I2S_HandleTypeDef *hi2s);
uint32_t HAL_I2S_GetError(I2S_HandleTypeDef *hi2s);
# 44 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_iwdg.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_iwdg.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t Reload;


} IWDG_InitTypeDef;




typedef struct
{
  IWDG_TypeDef *Instance;

  IWDG_InitTypeDef Init;

}IWDG_HandleTypeDef;
# 146 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_iwdg.h"
HAL_StatusTypeDef HAL_IWDG_Init(IWDG_HandleTypeDef *hiwdg);
# 155 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_iwdg.h"
HAL_StatusTypeDef HAL_IWDG_Refresh(IWDG_HandleTypeDef *hiwdg);
# 45 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h" 1
# 53 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_sdmmc.h" 1
# 71 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_sdmmc.h"
typedef struct
{
  uint32_t ClockEdge;


  uint32_t ClockBypass;



  uint32_t ClockPowerSave;



  uint32_t BusWide;


  uint32_t HardwareFlowControl;


  uint32_t ClockDiv;


}SDIO_InitTypeDef;





typedef struct
{
  uint32_t Argument;




  uint32_t CmdIndex;


  uint32_t Response;


  uint32_t WaitForInterrupt;



  uint32_t CPSM;


}SDIO_CmdInitTypeDef;





typedef struct
{
  uint32_t DataTimeOut;

  uint32_t DataLength;

  uint32_t DataBlockSize;


  uint32_t TransferDir;



  uint32_t TransferMode;


  uint32_t DPSM;


}SDIO_DataInitTypeDef;
# 1045 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_sdmmc.h"
HAL_StatusTypeDef SDIO_Init(SDIO_TypeDef *SDIOx, SDIO_InitTypeDef Init);
# 1054 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_sdmmc.h"
uint32_t SDIO_ReadFIFO(SDIO_TypeDef *SDIOx);
HAL_StatusTypeDef SDIO_WriteFIFO(SDIO_TypeDef *SDIOx, uint32_t *pWriteData);
# 1064 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_sdmmc.h"
HAL_StatusTypeDef SDIO_PowerState_ON(SDIO_TypeDef *SDIOx);
HAL_StatusTypeDef SDIO_PowerState_OFF(SDIO_TypeDef *SDIOx);
uint32_t SDIO_GetPowerState(SDIO_TypeDef *SDIOx);


HAL_StatusTypeDef SDIO_SendCommand(SDIO_TypeDef *SDIOx, SDIO_CmdInitTypeDef *Command);
uint8_t SDIO_GetCommandResponse(SDIO_TypeDef *SDIOx);
uint32_t SDIO_GetResponse(SDIO_TypeDef *SDIOx, uint32_t Response);


HAL_StatusTypeDef SDIO_ConfigData(SDIO_TypeDef *SDIOx, SDIO_DataInitTypeDef* Data);
uint32_t SDIO_GetDataCounter(SDIO_TypeDef *SDIOx);
uint32_t SDIO_GetFIFOCount(SDIO_TypeDef *SDIOx);


HAL_StatusTypeDef SDIO_SetSDMMCReadWaitMode(SDIO_TypeDef *SDIOx, uint32_t SDIO_ReadWaitMode);


uint32_t SDMMC_CmdBlockLength(SDIO_TypeDef *SDIOx, uint32_t BlockSize);
uint32_t SDMMC_CmdReadSingleBlock(SDIO_TypeDef *SDIOx, uint32_t ReadAdd);
uint32_t SDMMC_CmdReadMultiBlock(SDIO_TypeDef *SDIOx, uint32_t ReadAdd);
uint32_t SDMMC_CmdWriteSingleBlock(SDIO_TypeDef *SDIOx, uint32_t WriteAdd);
uint32_t SDMMC_CmdWriteMultiBlock(SDIO_TypeDef *SDIOx, uint32_t WriteAdd);
uint32_t SDMMC_CmdSDEraseStartAdd(SDIO_TypeDef *SDIOx, uint32_t StartAdd);
uint32_t SDMMC_CmdSDEraseEndAdd(SDIO_TypeDef *SDIOx, uint32_t EndAdd);
uint32_t SDMMC_CmdErase(SDIO_TypeDef *SDIOx);
uint32_t SDMMC_CmdStopTransfer(SDIO_TypeDef *SDIOx);
uint32_t SDMMC_CmdSelDesel(SDIO_TypeDef *SDIOx, uint64_t Addr);
uint32_t SDMMC_CmdGoIdleState(SDIO_TypeDef *SDIOx);
uint32_t SDMMC_CmdOperCond(SDIO_TypeDef *SDIOx);
uint32_t SDMMC_CmdAppCommand(SDIO_TypeDef *SDIOx, uint32_t Argument);
uint32_t SDMMC_CmdAppOperCommand(SDIO_TypeDef *SDIOx, uint32_t SdType);
uint32_t SDMMC_CmdBusWidth(SDIO_TypeDef *SDIOx, uint32_t BusWidth);
uint32_t SDMMC_CmdSendSCR(SDIO_TypeDef *SDIOx);
uint32_t SDMMC_CmdSendCID(SDIO_TypeDef *SDIOx);
uint32_t SDMMC_CmdSendCSD(SDIO_TypeDef *SDIOx, uint32_t Argument);
uint32_t SDMMC_CmdSetRelAdd(SDIO_TypeDef *SDIOx, uint16_t *pRCA);
uint32_t SDMMC_CmdSetRelAddMmc(SDIO_TypeDef *SDIOx, uint16_t RCA);
uint32_t SDMMC_CmdSendStatus(SDIO_TypeDef *SDIOx, uint32_t Argument);
uint32_t SDMMC_CmdStatusRegister(SDIO_TypeDef *SDIOx);

uint32_t SDMMC_CmdOpCondition(SDIO_TypeDef *SDIOx, uint32_t Argument);
uint32_t SDMMC_CmdSwitch(SDIO_TypeDef *SDIOx, uint32_t Argument);
uint32_t SDMMC_CmdEraseStartAdd(SDIO_TypeDef *SDIOx, uint32_t StartAdd);
uint32_t SDMMC_CmdEraseEndAdd(SDIO_TypeDef *SDIOx, uint32_t EndAdd);
# 54 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h" 2
# 72 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h"
typedef enum
{
  HAL_MMC_STATE_RESET = 0x00000000U,
  HAL_MMC_STATE_READY = 0x00000001U,
  HAL_MMC_STATE_TIMEOUT = 0x00000002U,
  HAL_MMC_STATE_BUSY = 0x00000003U,
  HAL_MMC_STATE_PROGRAMMING = 0x00000004U,
  HAL_MMC_STATE_RECEIVING = 0x00000005U,
  HAL_MMC_STATE_TRANSFER = 0x00000006U,
  HAL_MMC_STATE_ERROR = 0x0000000FU
}HAL_MMC_StateTypeDef;







typedef enum
{
  HAL_MMC_CARD_READY = 0x00000001U,
  HAL_MMC_CARD_IDENTIFICATION = 0x00000002U,
  HAL_MMC_CARD_STANDBY = 0x00000003U,
  HAL_MMC_CARD_TRANSFER = 0x00000004U,
  HAL_MMC_CARD_SENDING = 0x00000005U,
  HAL_MMC_CARD_RECEIVING = 0x00000006U,
  HAL_MMC_CARD_PROGRAMMING = 0x00000007U,
  HAL_MMC_CARD_DISCONNECTED = 0x00000008U,
  HAL_MMC_CARD_ERROR = 0x000000FFU
}HAL_MMC_CardStateTypeDef;
# 115 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h"
typedef struct
{
  uint32_t CardType;

  uint32_t Class;

  uint32_t RelCardAdd;

  uint32_t BlockNbr;

  uint32_t BlockSize;

  uint32_t LogBlockNbr;

  uint32_t LogBlockSize;

}HAL_MMC_CardInfoTypeDef;




typedef struct
{
  SDIO_TypeDef *Instance;

  SDIO_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  uint32_t *pTxBuffPtr;

  uint32_t TxXferSize;

  uint32_t *pRxBuffPtr;

  uint32_t RxXferSize;

  volatile uint32_t Context;

  volatile HAL_MMC_StateTypeDef State;

  volatile uint32_t ErrorCode;

  DMA_HandleTypeDef *hdmarx;

  DMA_HandleTypeDef *hdmatx;

  HAL_MMC_CardInfoTypeDef MmcCard;

  uint32_t CSD[4U];

  uint32_t CID[4U];

}MMC_HandleTypeDef;
# 177 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h"
typedef struct
{
  volatile uint8_t CSDStruct;
  volatile uint8_t SysSpecVersion;
  volatile uint8_t Reserved1;
  volatile uint8_t TAAC;
  volatile uint8_t NSAC;
  volatile uint8_t MaxBusClkFrec;
  volatile uint16_t CardComdClasses;
  volatile uint8_t RdBlockLen;
  volatile uint8_t PartBlockRead;
  volatile uint8_t WrBlockMisalign;
  volatile uint8_t RdBlockMisalign;
  volatile uint8_t DSRImpl;
  volatile uint8_t Reserved2;
  volatile uint32_t DeviceSize;
  volatile uint8_t MaxRdCurrentVDDMin;
  volatile uint8_t MaxRdCurrentVDDMax;
  volatile uint8_t MaxWrCurrentVDDMin;
  volatile uint8_t MaxWrCurrentVDDMax;
  volatile uint8_t DeviceSizeMul;
  volatile uint8_t EraseGrSize;
  volatile uint8_t EraseGrMul;
  volatile uint8_t WrProtectGrSize;
  volatile uint8_t WrProtectGrEnable;
  volatile uint8_t ManDeflECC;
  volatile uint8_t WrSpeedFact;
  volatile uint8_t MaxWrBlockLen;
  volatile uint8_t WriteBlockPaPartial;
  volatile uint8_t Reserved3;
  volatile uint8_t ContentProtectAppli;
  volatile uint8_t FileFormatGrouop;
  volatile uint8_t CopyFlag;
  volatile uint8_t PermWrProtect;
  volatile uint8_t TempWrProtect;
  volatile uint8_t FileFormat;
  volatile uint8_t ECC;
  volatile uint8_t CSD_CRC;
  volatile uint8_t Reserved4;

}HAL_MMC_CardCSDTypeDef;







typedef struct
{
  volatile uint8_t ManufacturerID;
  volatile uint16_t OEM_AppliID;
  volatile uint32_t ProdName1;
  volatile uint8_t ProdName2;
  volatile uint8_t ProdRev;
  volatile uint32_t ProdSN;
  volatile uint8_t Reserved1;
  volatile uint16_t ManufactDate;
  volatile uint8_t CID_CRC;
  volatile uint8_t Reserved2;

}HAL_MMC_CardCIDTypeDef;







typedef struct
{
  volatile uint8_t DataBusWidth;
  volatile uint8_t SecuredMode;
  volatile uint16_t CardType;
  volatile uint32_t ProtectedAreaSize;
  volatile uint8_t SpeedClass;
  volatile uint8_t PerformanceMove;
  volatile uint8_t AllocationUnitSize;
  volatile uint16_t EraseSize;
  volatile uint8_t EraseTimeout;
  volatile uint8_t EraseOffset;

}HAL_MMC_CardStatusTypeDef;
# 569 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h"
HAL_StatusTypeDef HAL_MMC_Init(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_InitCard(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_DeInit (MMC_HandleTypeDef *hmmc);
void HAL_MMC_MspInit(MMC_HandleTypeDef *hmmc);
void HAL_MMC_MspDeInit(MMC_HandleTypeDef *hmmc);
# 582 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_mmc.h"
HAL_StatusTypeDef HAL_MMC_ReadBlocks(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_MMC_WriteBlocks(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_MMC_Erase(MMC_HandleTypeDef *hmmc, uint32_t BlockStartAdd, uint32_t BlockEndAdd);

HAL_StatusTypeDef HAL_MMC_ReadBlocks_IT(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_MMC_WriteBlocks_IT(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);

HAL_StatusTypeDef HAL_MMC_ReadBlocks_DMA(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_MMC_WriteBlocks_DMA(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);

void HAL_MMC_IRQHandler(MMC_HandleTypeDef *hmmc);


void HAL_MMC_TxCpltCallback(MMC_HandleTypeDef *hmmc);
void HAL_MMC_RxCpltCallback(MMC_HandleTypeDef *hmmc);
void HAL_MMC_ErrorCallback(MMC_HandleTypeDef *hmmc);
void HAL_MMC_AbortCallback(MMC_HandleTypeDef *hmmc);







HAL_StatusTypeDef HAL_MMC_ConfigWideBusOperation(MMC_HandleTypeDef *hmmc, uint32_t WideMode);







HAL_MMC_CardStateTypeDef HAL_MMC_GetCardState(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_GetCardCID(MMC_HandleTypeDef *hmmc, HAL_MMC_CardCIDTypeDef *pCID);
HAL_StatusTypeDef HAL_MMC_GetCardCSD(MMC_HandleTypeDef *hmmc, HAL_MMC_CardCSDTypeDef *pCSD);
HAL_StatusTypeDef HAL_MMC_GetCardInfo(MMC_HandleTypeDef *hmmc, HAL_MMC_CardInfoTypeDef *pCardInfo);







HAL_MMC_StateTypeDef HAL_MMC_GetState(MMC_HandleTypeDef *hmmc);
uint32_t HAL_MMC_GetError(MMC_HandleTypeDef *hmmc);







HAL_StatusTypeDef HAL_MMC_Abort(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_Abort_IT(MMC_HandleTypeDef *hmmc);
# 46 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h" 1
# 69 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h"
typedef enum
{
  HAL_PCD_STATE_RESET = 0x00U,
  HAL_PCD_STATE_READY = 0x01U,
  HAL_PCD_STATE_ERROR = 0x02U,
  HAL_PCD_STATE_BUSY = 0x03U,
  HAL_PCD_STATE_TIMEOUT = 0x04U
} PCD_StateTypeDef;
# 89 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h"
typedef USB_OTG_GlobalTypeDef PCD_TypeDef;
typedef USB_OTG_CfgTypeDef PCD_InitTypeDef;
typedef USB_OTG_EPTypeDef PCD_EPTypeDef ;




typedef struct
{
  PCD_TypeDef *Instance;
  PCD_InitTypeDef Init;
  PCD_EPTypeDef IN_ep[16U];
  PCD_EPTypeDef OUT_ep[16U];
  HAL_LockTypeDef Lock;
  volatile PCD_StateTypeDef State;
  uint32_t Setup[12U];
# 115 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h"
  void *pData;
} PCD_HandleTypeDef;






# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd_ex.h" 1
# 91 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd_ex.h"
HAL_StatusTypeDef HAL_PCDEx_SetTxFiFo(PCD_HandleTypeDef *hpcd, uint8_t fifo, uint16_t size);
HAL_StatusTypeDef HAL_PCDEx_SetRxFiFo(PCD_HandleTypeDef *hpcd, uint16_t size);
# 124 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h" 2
# 250 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_Init(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeInit(PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspInit(PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspDeInit(PCD_HandleTypeDef *hpcd);
# 264 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_Start(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_Stop(PCD_HandleTypeDef *hpcd);
void HAL_PCD_IRQHandler(PCD_HandleTypeDef *hpcd);

void HAL_PCD_DataOutStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_DataInStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_SetupStageCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SOFCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResetCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SuspendCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResumeCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ISOOUTIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ISOINIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_DisconnectCallback(PCD_HandleTypeDef *hpcd);
# 287 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_DevConnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DevDisconnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_SetAddress(PCD_HandleTypeDef *hpcd, uint8_t address);
HAL_StatusTypeDef HAL_PCD_EP_Open(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type);
HAL_StatusTypeDef HAL_PCD_EP_Close(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Receive(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
HAL_StatusTypeDef HAL_PCD_EP_Transmit(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
uint16_t HAL_PCD_EP_GetRxCount(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_SetStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_ClrStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Flush(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_ActivateRemoteWakeup(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeActivateRemoteWakeup(PCD_HandleTypeDef *hpcd);
# 308 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h"
PCD_StateTypeDef HAL_PCD_GetState(PCD_HandleTypeDef *hpcd);
# 47 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr.h" 1
# 66 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr.h"
typedef struct
{
  uint32_t PVDLevel;


  uint32_t Mode;

}PWR_PVDTypeDef;
# 292 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr_ex.h" 1
# 223 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr_ex.h"
void HAL_PWREx_EnableFlashPowerDown(void);
void HAL_PWREx_DisableFlashPowerDown(void);
HAL_StatusTypeDef HAL_PWREx_EnableBkUpReg(void);
HAL_StatusTypeDef HAL_PWREx_DisableBkUpReg(void);
uint32_t HAL_PWREx_GetVoltageRange(void);
HAL_StatusTypeDef HAL_PWREx_ControlVoltageScaling(uint32_t VoltageScaling);
# 293 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr.h" 2
# 303 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr.h"
void HAL_PWR_DeInit(void);
void HAL_PWR_EnableBkUpAccess(void);
void HAL_PWR_DisableBkUpAccess(void);
# 315 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pwr.h"
void HAL_PWR_ConfigPVD(PWR_PVDTypeDef *sConfigPVD);
void HAL_PWR_EnablePVD(void);
void HAL_PWR_DisablePVD(void);


void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinx);
void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx);


void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry);
void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry);
void HAL_PWR_EnterSTANDBYMode(void);


void HAL_PWR_PVD_IRQHandler(void);
void HAL_PWR_PVDCallback(void);


void HAL_PWR_EnableSleepOnExit(void);
void HAL_PWR_DisableSleepOnExit(void);
void HAL_PWR_EnableSEVOnPend(void);
void HAL_PWR_DisableSEVOnPend(void);
# 48 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h" 1
# 51 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc_ex.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc_ex.h"
typedef struct
{
  uint32_t PLLState;


  uint32_t PLLSource;


  uint32_t PLLM;


  uint32_t PLLN;



  uint32_t PLLP;


  uint32_t PLLQ;
# 93 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc_ex.h"
}RCC_PLLInitTypeDef;
# 402 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc_ex.h"
typedef struct
{





  uint32_t PLLI2SN;




  uint32_t PLLI2SR;



}RCC_PLLI2SInitTypeDef;




typedef struct
{
  uint32_t PeriphClockSelection;


  RCC_PLLI2SInitTypeDef PLLI2S;


  uint32_t RTCClockSelection;





}RCC_PeriphCLKInitTypeDef;
# 6729 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);

uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk);
# 52 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h" 2
# 69 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h"
typedef struct
{
  uint32_t OscillatorType;


  uint32_t HSEState;


  uint32_t LSEState;


  uint32_t HSIState;


  uint32_t HSICalibrationValue;


  uint32_t LSIState;


  RCC_PLLInitTypeDef PLL;
}RCC_OscInitTypeDef;




typedef struct
{
  uint32_t ClockType;


  uint32_t SYSCLKSource;


  uint32_t AHBCLKDivider;


  uint32_t APB1CLKDivider;


  uint32_t APB2CLKDivider;


}RCC_ClkInitTypeDef;
# 1247 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h"
void HAL_RCC_DeInit(void);
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);
# 1258 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h"
void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
void HAL_RCC_EnableCSS(void);
void HAL_RCC_DisableCSS(void);
uint32_t HAL_RCC_GetSysClockFreq(void);
uint32_t HAL_RCC_GetHCLKFreq(void);
uint32_t HAL_RCC_GetPCLK1Freq(void);
uint32_t HAL_RCC_GetPCLK2Freq(void);
void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);


void HAL_RCC_NMI_IRQHandler(void);


void HAL_RCC_CSSCallback(void);
# 49 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
typedef enum
{
  HAL_RTC_STATE_RESET = 0x00U,
  HAL_RTC_STATE_READY = 0x01U,
  HAL_RTC_STATE_BUSY = 0x02U,
  HAL_RTC_STATE_TIMEOUT = 0x03U,
  HAL_RTC_STATE_ERROR = 0x04U
}HAL_RTCStateTypeDef;




typedef struct
{
  uint32_t HourFormat;


  uint32_t AsynchPrediv;


  uint32_t SynchPrediv;


  uint32_t OutPut;


  uint32_t OutPutPolarity;


  uint32_t OutPutType;

}RTC_InitTypeDef;




typedef struct
{
  uint8_t Hours;



  uint8_t Minutes;


  uint8_t Seconds;


  uint8_t TimeFormat;


  uint32_t SubSeconds;



  uint32_t SecondFraction;





  uint32_t DayLightSaving;


  uint32_t StoreOperation;


}RTC_TimeTypeDef;




typedef struct
{
  uint8_t WeekDay;


  uint8_t Month;


  uint8_t Date;


  uint8_t Year;


}RTC_DateTypeDef;




typedef struct
{
  RTC_TimeTypeDef AlarmTime;

  uint32_t AlarmMask;


  uint32_t AlarmSubSecondMask;


  uint32_t AlarmDateWeekDaySel;


  uint8_t AlarmDateWeekDay;



  uint32_t Alarm;

}RTC_AlarmTypeDef;




typedef struct
{
  RTC_TypeDef *Instance;

  RTC_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_RTCStateTypeDef State;

}RTC_HandleTypeDef;
# 636 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc_ex.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc_ex.h"
typedef struct
{
  uint32_t Tamper;


  uint32_t PinSelection;


  uint32_t Trigger;


  uint32_t Filter;


  uint32_t SamplingFrequency;


  uint32_t PrechargeDuration;


  uint32_t TamperPullUp;


  uint32_t TimeStampOnTamperDetection;

}RTC_TamperTypeDef;
# 826 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc_ex.h"
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp_IT(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_GetTimeStamp(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTimeStamp, RTC_DateTypeDef *sTimeStampDate, uint32_t Format);

HAL_StatusTypeDef HAL_RTCEx_SetTamper(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper);
HAL_StatusTypeDef HAL_RTCEx_SetTamper_IT(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTamper(RTC_HandleTypeDef *hrtc, uint32_t Tamper);
void HAL_RTCEx_TamperTimeStampIRQHandler(RTC_HandleTypeDef *hrtc);

void HAL_RTCEx_Tamper1EventCallback(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_Tamper2EventCallback(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_TimeStampEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForTimeStampEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
HAL_StatusTypeDef HAL_RTCEx_PollForTamper1Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
HAL_StatusTypeDef HAL_RTCEx_PollForTamper2Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
# 850 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc_ex.h"
HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);
HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer_IT(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);
uint32_t HAL_RTCEx_DeactivateWakeUpTimer(RTC_HandleTypeDef *hrtc);
uint32_t HAL_RTCEx_GetWakeUpTimer(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_WakeUpTimerIRQHandler(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_WakeUpTimerEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForWakeUpTimerEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
# 865 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc_ex.h"
void HAL_RTCEx_BKUPWrite(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister, uint32_t Data);
uint32_t HAL_RTCEx_BKUPRead(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister);

HAL_StatusTypeDef HAL_RTCEx_SetCoarseCalib(RTC_HandleTypeDef *hrtc, uint32_t CalibSign, uint32_t Value);
HAL_StatusTypeDef HAL_RTCEx_DeactivateCoarseCalib(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetSmoothCalib(RTC_HandleTypeDef *hrtc, uint32_t SmoothCalibPeriod, uint32_t SmoothCalibPlusPulses, uint32_t SmouthCalibMinusPulsesValue);
HAL_StatusTypeDef HAL_RTCEx_SetSynchroShift(RTC_HandleTypeDef *hrtc, uint32_t ShiftAdd1S, uint32_t ShiftSubFS);
HAL_StatusTypeDef HAL_RTCEx_SetCalibrationOutPut(RTC_HandleTypeDef *hrtc, uint32_t CalibOutput);
HAL_StatusTypeDef HAL_RTCEx_DeactivateCalibrationOutPut(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DeactivateRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_EnableBypassShadow(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DisableBypassShadow(RTC_HandleTypeDef *hrtc);
# 886 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc_ex.h"
void HAL_RTCEx_AlarmBEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForAlarmBEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
# 637 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h" 2
# 647 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_Init(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTC_DeInit(RTC_HandleTypeDef *hrtc);
void HAL_RTC_MspInit(RTC_HandleTypeDef *hrtc);
void HAL_RTC_MspDeInit(RTC_HandleTypeDef *hrtc);
# 659 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_SetTime(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTime, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_GetTime(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTime, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_SetDate(RTC_HandleTypeDef *hrtc, RTC_DateTypeDef *sDate, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_GetDate(RTC_HandleTypeDef *hrtc, RTC_DateTypeDef *sDate, uint32_t Format);
# 671 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_SetAlarm(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_SetAlarm_IT(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_DeactivateAlarm(RTC_HandleTypeDef *hrtc, uint32_t Alarm);
HAL_StatusTypeDef HAL_RTC_GetAlarm(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Alarm, uint32_t Format);
void HAL_RTC_AlarmIRQHandler(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTC_PollForAlarmAEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
void HAL_RTC_AlarmAEventCallback(RTC_HandleTypeDef *hrtc);
# 686 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_WaitForSynchro(RTC_HandleTypeDef* hrtc);
# 695 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
HAL_RTCStateTypeDef HAL_RTC_GetState(RTC_HandleTypeDef *hrtc);
# 812 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rtc.h"
HAL_StatusTypeDef RTC_EnterInitMode(RTC_HandleTypeDef* hrtc);
uint8_t RTC_ByteToBcd2(uint8_t Value);
uint8_t RTC_Bcd2ToByte(uint8_t Value);
# 50 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sd.h" 1
# 72 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sd.h"
typedef enum
{
  HAL_SD_STATE_RESET = 0x00000000U,
  HAL_SD_STATE_READY = 0x00000001U,
  HAL_SD_STATE_TIMEOUT = 0x00000002U,
  HAL_SD_STATE_BUSY = 0x00000003U,
  HAL_SD_STATE_PROGRAMMING = 0x00000004U,
  HAL_SD_STATE_RECEIVING = 0x00000005U,
  HAL_SD_STATE_TRANSFER = 0x00000006U,
  HAL_SD_STATE_ERROR = 0x0000000FU
}HAL_SD_StateTypeDef;







typedef enum
{
  HAL_SD_CARD_READY = 0x00000001U,
  HAL_SD_CARD_IDENTIFICATION = 0x00000002U,
  HAL_SD_CARD_STANDBY = 0x00000003U,
  HAL_SD_CARD_TRANSFER = 0x00000004U,
  HAL_SD_CARD_SENDING = 0x00000005U,
  HAL_SD_CARD_RECEIVING = 0x00000006U,
  HAL_SD_CARD_PROGRAMMING = 0x00000007U,
  HAL_SD_CARD_DISCONNECTED = 0x00000008U,
  HAL_SD_CARD_ERROR = 0x000000FFU
}HAL_SD_CardStateTypeDef;
# 115 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sd.h"
typedef struct
{
  uint32_t CardType;

  uint32_t CardVersion;

  uint32_t Class;

  uint32_t RelCardAdd;

  uint32_t BlockNbr;

  uint32_t BlockSize;

  uint32_t LogBlockNbr;

  uint32_t LogBlockSize;

}HAL_SD_CardInfoTypeDef;




typedef struct
{
  SDIO_TypeDef *Instance;

  SDIO_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  uint32_t *pTxBuffPtr;

  uint32_t TxXferSize;

  uint32_t *pRxBuffPtr;

  uint32_t RxXferSize;

  volatile uint32_t Context;

  volatile HAL_SD_StateTypeDef State;

  volatile uint32_t ErrorCode;

  DMA_HandleTypeDef *hdmarx;

  DMA_HandleTypeDef *hdmatx;

  HAL_SD_CardInfoTypeDef SdCard;

  uint32_t CSD[4];

  uint32_t CID[4];

}SD_HandleTypeDef;
# 179 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sd.h"
typedef struct
{
  volatile uint8_t CSDStruct;
  volatile uint8_t SysSpecVersion;
  volatile uint8_t Reserved1;
  volatile uint8_t TAAC;
  volatile uint8_t NSAC;
  volatile uint8_t MaxBusClkFrec;
  volatile uint16_t CardComdClasses;
  volatile uint8_t RdBlockLen;
  volatile uint8_t PartBlockRead;
  volatile uint8_t WrBlockMisalign;
  volatile uint8_t RdBlockMisalign;
  volatile uint8_t DSRImpl;
  volatile uint8_t Reserved2;
  volatile uint32_t DeviceSize;
  volatile uint8_t MaxRdCurrentVDDMin;
  volatile uint8_t MaxRdCurrentVDDMax;
  volatile uint8_t MaxWrCurrentVDDMin;
  volatile uint8_t MaxWrCurrentVDDMax;
  volatile uint8_t DeviceSizeMul;
  volatile uint8_t EraseGrSize;
  volatile uint8_t EraseGrMul;
  volatile uint8_t WrProtectGrSize;
  volatile uint8_t WrProtectGrEnable;
  volatile uint8_t ManDeflECC;
  volatile uint8_t WrSpeedFact;
  volatile uint8_t MaxWrBlockLen;
  volatile uint8_t WriteBlockPaPartial;
  volatile uint8_t Reserved3;
  volatile uint8_t ContentProtectAppli;
  volatile uint8_t FileFormatGrouop;
  volatile uint8_t CopyFlag;
  volatile uint8_t PermWrProtect;
  volatile uint8_t TempWrProtect;
  volatile uint8_t FileFormat;
  volatile uint8_t ECC;
  volatile uint8_t CSD_CRC;
  volatile uint8_t Reserved4;

}HAL_SD_CardCSDTypeDef;







typedef struct
{
  volatile uint8_t ManufacturerID;
  volatile uint16_t OEM_AppliID;
  volatile uint32_t ProdName1;
  volatile uint8_t ProdName2;
  volatile uint8_t ProdRev;
  volatile uint32_t ProdSN;
  volatile uint8_t Reserved1;
  volatile uint16_t ManufactDate;
  volatile uint8_t CID_CRC;
  volatile uint8_t Reserved2;

}HAL_SD_CardCIDTypeDef;







typedef struct
{
  volatile uint8_t DataBusWidth;
  volatile uint8_t SecuredMode;
  volatile uint16_t CardType;
  volatile uint32_t ProtectedAreaSize;
  volatile uint8_t SpeedClass;
  volatile uint8_t PerformanceMove;
  volatile uint8_t AllocationUnitSize;
  volatile uint16_t EraseSize;
  volatile uint8_t EraseTimeout;
  volatile uint8_t EraseOffset;

}HAL_SD_CardStatusTypeDef;
# 565 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sd.h"
HAL_StatusTypeDef HAL_SD_Init(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_InitCard(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_DeInit (SD_HandleTypeDef *hsd);
void HAL_SD_MspInit(SD_HandleTypeDef *hsd);
void HAL_SD_MspDeInit(SD_HandleTypeDef *hsd);
# 578 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sd.h"
HAL_StatusTypeDef HAL_SD_ReadBlocks(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_SD_WriteBlocks(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_SD_Erase(SD_HandleTypeDef *hsd, uint32_t BlockStartAdd, uint32_t BlockEndAdd);

HAL_StatusTypeDef HAL_SD_ReadBlocks_IT(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SD_WriteBlocks_IT(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);

HAL_StatusTypeDef HAL_SD_ReadBlocks_DMA(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SD_WriteBlocks_DMA(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);

void HAL_SD_IRQHandler(SD_HandleTypeDef *hsd);


void HAL_SD_TxCpltCallback(SD_HandleTypeDef *hsd);
void HAL_SD_RxCpltCallback(SD_HandleTypeDef *hsd);
void HAL_SD_ErrorCallback(SD_HandleTypeDef *hsd);
void HAL_SD_AbortCallback(SD_HandleTypeDef *hsd);







HAL_StatusTypeDef HAL_SD_ConfigWideBusOperation(SD_HandleTypeDef *hsd, uint32_t WideMode);







HAL_StatusTypeDef HAL_SD_SendSDStatus(SD_HandleTypeDef *hsd, uint32_t *pSDstatus);
HAL_SD_CardStateTypeDef HAL_SD_GetCardState(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_GetCardCID(SD_HandleTypeDef *hsd, HAL_SD_CardCIDTypeDef *pCID);
HAL_StatusTypeDef HAL_SD_GetCardCSD(SD_HandleTypeDef *hsd, HAL_SD_CardCSDTypeDef *pCSD);
HAL_StatusTypeDef HAL_SD_GetCardStatus(SD_HandleTypeDef *hsd, HAL_SD_CardStatusTypeDef *pStatus);
HAL_StatusTypeDef HAL_SD_GetCardInfo(SD_HandleTypeDef *hsd, HAL_SD_CardInfoTypeDef *pCardInfo);







HAL_SD_StateTypeDef HAL_SD_GetState(SD_HandleTypeDef *hsd);
uint32_t HAL_SD_GetError(SD_HandleTypeDef *hsd);







HAL_StatusTypeDef HAL_SD_Abort(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_Abort_IT(SD_HandleTypeDef *hsd);
# 51 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sdram.h" 1
# 52 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_spi.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_spi.h"
typedef struct
{
  uint32_t Mode;


  uint32_t Direction;


  uint32_t DataSize;


  uint32_t CLKPolarity;


  uint32_t CLKPhase;


  uint32_t NSS;



  uint32_t BaudRatePrescaler;





  uint32_t FirstBit;


  uint32_t TIMode;


  uint32_t CRCCalculation;


  uint32_t CRCPolynomial;

}SPI_InitTypeDef;




typedef enum
{
  HAL_SPI_STATE_RESET = 0x00U,
  HAL_SPI_STATE_READY = 0x01U,
  HAL_SPI_STATE_BUSY = 0x02U,
  HAL_SPI_STATE_BUSY_TX = 0x03U,
  HAL_SPI_STATE_BUSY_RX = 0x04U,
  HAL_SPI_STATE_BUSY_TX_RX = 0x05U,
  HAL_SPI_STATE_ERROR = 0x06U
}HAL_SPI_StateTypeDef;




typedef struct __SPI_HandleTypeDef
{
  SPI_TypeDef *Instance;

  SPI_InitTypeDef Init;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  void (*RxISR)(struct __SPI_HandleTypeDef * hspi);

  void (*TxISR)(struct __SPI_HandleTypeDef * hspi);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_SPI_StateTypeDef State;

  volatile uint32_t ErrorCode;

}SPI_HandleTypeDef;
# 429 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_spi.h"
HAL_StatusTypeDef HAL_SPI_Init(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DeInit (SPI_HandleTypeDef *hspi);
void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi);
void HAL_SPI_MspDeInit(SPI_HandleTypeDef *hspi);
# 441 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_spi.h"
HAL_StatusTypeDef HAL_SPI_Transmit(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_Receive(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_TransmitReceive(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_Transmit_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Receive_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_TransmitReceive_IT(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Transmit_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Receive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_TransmitReceive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_DMAPause(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DMAResume(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DMAStop(SPI_HandleTypeDef *hspi);

HAL_StatusTypeDef HAL_SPI_Abort(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_Abort_IT(SPI_HandleTypeDef *hspi);

void HAL_SPI_IRQHandler(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxRxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_RxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxRxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_ErrorCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_AbortCpltCallback(SPI_HandleTypeDef *hspi);
# 474 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_spi.h"
HAL_SPI_StateTypeDef HAL_SPI_GetState(SPI_HandleTypeDef *hspi);
uint32_t HAL_SPI_GetError(SPI_HandleTypeDef *hspi);
# 53 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t CounterMode;


  uint32_t Period;



  uint32_t ClockDivision;


  uint32_t RepetitionCounter;







} TIM_Base_InitTypeDef;





typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCFastMode;




  uint32_t OCIdleState;



  uint32_t OCNIdleState;


} TIM_OC_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCIdleState;



  uint32_t OCNIdleState;



  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICFilter;

} TIM_OnePulse_InitTypeDef;






typedef struct
{
  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICPrescaler;


  uint32_t ICFilter;

} TIM_IC_InitTypeDef;





typedef struct
{
  uint32_t EncoderMode;


  uint32_t IC1Polarity;


  uint32_t IC1Selection;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t IC2Polarity;


  uint32_t IC2Selection;


  uint32_t IC2Prescaler;


  uint32_t IC2Filter;

} TIM_Encoder_InitTypeDef;




typedef struct
{
  uint32_t ClockSource;

  uint32_t ClockPolarity;

  uint32_t ClockPrescaler;

  uint32_t ClockFilter;

}TIM_ClockConfigTypeDef;




typedef struct
{
  uint32_t ClearInputState;

  uint32_t ClearInputSource;

  uint32_t ClearInputPolarity;

  uint32_t ClearInputPrescaler;

  uint32_t ClearInputFilter;

}TIM_ClearInputConfigTypeDef;




typedef struct {
  uint32_t SlaveMode;

  uint32_t InputTrigger;

  uint32_t TriggerPolarity;

  uint32_t TriggerPrescaler;

  uint32_t TriggerFilter;


}TIM_SlaveConfigTypeDef;




typedef enum
{
  HAL_TIM_STATE_RESET = 0x00U,
  HAL_TIM_STATE_READY = 0x01U,
  HAL_TIM_STATE_BUSY = 0x02U,
  HAL_TIM_STATE_TIMEOUT = 0x03U,
  HAL_TIM_STATE_ERROR = 0x04U
}HAL_TIM_StateTypeDef;




typedef enum
{
  HAL_TIM_ACTIVE_CHANNEL_1 = 0x01U,
  HAL_TIM_ACTIVE_CHANNEL_2 = 0x02U,
  HAL_TIM_ACTIVE_CHANNEL_3 = 0x04U,
  HAL_TIM_ACTIVE_CHANNEL_4 = 0x08U,
  HAL_TIM_ACTIVE_CHANNEL_CLEARED = 0x00U
}HAL_TIM_ActiveChannel;




typedef struct
{
  TIM_TypeDef *Instance;
  TIM_Base_InitTypeDef Init;
  HAL_TIM_ActiveChannel Channel;
  DMA_HandleTypeDef *hdma[7];

  HAL_LockTypeDef Lock;
  volatile HAL_TIM_StateTypeDef State;
}TIM_HandleTypeDef;
# 1291 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h" 1
# 66 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
typedef struct
{

  uint32_t IC1Polarity;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t Commutation_Delay;

} TIM_HallSensor_InitTypeDef;




typedef struct {
  uint32_t MasterOutputTrigger;


  uint32_t MasterSlaveMode;

}TIM_MasterConfigTypeDef;




typedef struct
{
  uint32_t OffStateRunMode;

  uint32_t OffStateIDLEMode;

  uint32_t LockLevel;

  uint32_t DeadTime;

  uint32_t BreakState;

  uint32_t BreakPolarity;

  uint32_t AutomaticOutput;

}TIM_BreakDeadTimeConfigTypeDef;
# 177 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Init(TIM_HandleTypeDef* htim, TIM_HallSensor_InitTypeDef* sConfig);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_DeInit(TIM_HandleTypeDef* htim);

void HAL_TIMEx_HallSensor_MspInit(TIM_HandleTypeDef* htim);
void HAL_TIMEx_HallSensor_MspDeInit(TIM_HandleTypeDef* htim);


HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start(TIM_HandleTypeDef* htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop(TIM_HandleTypeDef* htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_IT(TIM_HandleTypeDef* htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_IT(TIM_HandleTypeDef* htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_DMA(TIM_HandleTypeDef* htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_DMA(TIM_HandleTypeDef* htim);
# 201 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OCN_Start(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop(TIM_HandleTypeDef* htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_IT(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_IT(TIM_HandleTypeDef* htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_DMA(TIM_HandleTypeDef* htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_DMA(TIM_HandleTypeDef* htim, uint32_t Channel);
# 220 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_PWMN_Start(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef* htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_IT(TIM_HandleTypeDef* htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_IT(TIM_HandleTypeDef* htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_DMA(TIM_HandleTypeDef* htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_DMA(TIM_HandleTypeDef* htim, uint32_t Channel);
# 238 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start(TIM_HandleTypeDef* htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop(TIM_HandleTypeDef* htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start_IT(TIM_HandleTypeDef* htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop_IT(TIM_HandleTypeDef* htim, uint32_t OutputChannel);
# 252 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutationEvent(TIM_HandleTypeDef* htim, uint32_t InputTrigger, uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutationEvent_IT(TIM_HandleTypeDef* htim, uint32_t InputTrigger, uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutationEvent_DMA(TIM_HandleTypeDef* htim, uint32_t InputTrigger, uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef* htim, TIM_MasterConfigTypeDef * sMasterConfig);
HAL_StatusTypeDef HAL_TIMEx_ConfigBreakDeadTime(TIM_HandleTypeDef* htim, TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig);
HAL_StatusTypeDef HAL_TIMEx_RemapConfig(TIM_HandleTypeDef* htim, uint32_t Remap);
# 266 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
void HAL_TIMEx_CommutationCallback(TIM_HandleTypeDef* htim);
void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef* htim);
void TIMEx_DMACommutationCplt(DMA_HandleTypeDef *hdma);
# 277 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim_ex.h"
HAL_TIM_StateTypeDef HAL_TIMEx_HallSensor_GetState(TIM_HandleTypeDef* htim);
# 1292 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h" 2
# 1303 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim);
# 1324 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1346 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1368 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_IC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1390 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode);
HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
# 1410 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef* sConfig);
HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1, uint32_t *pData2, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1432 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim);
# 1442 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef* sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef* sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef* sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef* sConfig, uint32_t OutputChannel, uint32_t InputChannel);
HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim, TIM_ClearInputConfigTypeDef * sClearInputConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef * sClockSourceConfig);
HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchronization(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef * sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchronization_IT(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef * sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc,
                                              uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc,
                                              uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource);
uint32_t HAL_TIM_ReadCapturedValue(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1468 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim);
# 1483 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(TIM_HandleTypeDef *htim);
# 1748 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_tim.h"
void TIM_Base_SetConfig(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure);
void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter);
void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);
void TIM_DMADelayPulseCplt(DMA_HandleTypeDef *hdma);
void TIM_DMAError(DMA_HandleTypeDef *hdma);
void TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma);
void TIM_CCxChannelCmd(TIM_TypeDef* TIMx, uint32_t Channel, uint32_t ChannelState);
# 54 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_uart.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_uart.h"
typedef struct
{
  uint32_t BaudRate;





  uint32_t WordLength;


  uint32_t StopBits;


  uint32_t Parity;






  uint32_t Mode;


  uint32_t HwFlowCtl;



  uint32_t OverSampling;

}UART_InitTypeDef;
# 136 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_uart.h"
typedef enum
{
  HAL_UART_STATE_RESET = 0x00U,

  HAL_UART_STATE_READY = 0x20U,

  HAL_UART_STATE_BUSY = 0x24U,

  HAL_UART_STATE_BUSY_TX = 0x21U,

  HAL_UART_STATE_BUSY_RX = 0x22U,

  HAL_UART_STATE_BUSY_TX_RX = 0x23U,


  HAL_UART_STATE_TIMEOUT = 0xA0U,

  HAL_UART_STATE_ERROR = 0xE0U

}HAL_UART_StateTypeDef;




typedef struct
{
  USART_TypeDef *Instance;

  UART_InitTypeDef Init;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_UART_StateTypeDef gState;



  volatile HAL_UART_StateTypeDef RxState;


  volatile uint32_t ErrorCode;

}UART_HandleTypeDef;
# 632 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_LIN_Init(UART_HandleTypeDef *huart, uint32_t BreakDetectLength);
HAL_StatusTypeDef HAL_MultiProcessor_Init(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethod);
HAL_StatusTypeDef HAL_UART_DeInit (UART_HandleTypeDef *huart);
void HAL_UART_MspInit(UART_HandleTypeDef *huart);
void HAL_UART_MspDeInit(UART_HandleTypeDef *huart);
# 647 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_DMAPause(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAResume(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAStop(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_UART_Abort(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_Abort_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive_IT(UART_HandleTypeDef *huart);

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortCpltCallback (UART_HandleTypeDef *huart);
void HAL_UART_AbortTransmitCpltCallback (UART_HandleTypeDef *huart);
void HAL_UART_AbortReceiveCpltCallback (UART_HandleTypeDef *huart);
# 681 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_uart.h"
HAL_StatusTypeDef HAL_LIN_SendBreak(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_EnterMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_ExitMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableTransmitter(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableReceiver(UART_HandleTypeDef *huart);
# 694 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_uart.h"
HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart);
uint32_t HAL_UART_GetError(UART_HandleTypeDef *huart);
# 55 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_usart.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_usart.h"
typedef struct
{
  uint32_t BaudRate;




  uint32_t WordLength;


  uint32_t StopBits;


  uint32_t Parity;






  uint32_t Mode;


  uint32_t CLKPolarity;


  uint32_t CLKPhase;


  uint32_t CLKLastBit;


}USART_InitTypeDef;




typedef enum
{
  HAL_USART_STATE_RESET = 0x00U,
  HAL_USART_STATE_READY = 0x01U,
  HAL_USART_STATE_BUSY = 0x02U,
  HAL_USART_STATE_BUSY_TX = 0x12U,
  HAL_USART_STATE_BUSY_RX = 0x22U,
  HAL_USART_STATE_BUSY_TX_RX = 0x32U,
  HAL_USART_STATE_TIMEOUT = 0x03U,
  HAL_USART_STATE_ERROR = 0x04U
}HAL_USART_StateTypeDef;




typedef struct
{
  USART_TypeDef *Instance;

  USART_InitTypeDef Init;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_USART_StateTypeDef State;

  volatile uint32_t ErrorCode;

}USART_HandleTypeDef;
# 465 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_usart.h"
HAL_StatusTypeDef HAL_USART_Init(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DeInit(USART_HandleTypeDef *husart);
void HAL_USART_MspInit(USART_HandleTypeDef *husart);
void HAL_USART_MspDeInit(USART_HandleTypeDef *husart);
# 477 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_usart.h"
HAL_StatusTypeDef HAL_USART_Transmit(USART_HandleTypeDef *husart, uint8_t *pTxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_Receive(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_TransmitReceive(USART_HandleTypeDef *husart, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_Transmit_IT(USART_HandleTypeDef *husart, uint8_t *pTxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_Receive_IT(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_TransmitReceive_IT(USART_HandleTypeDef *husart, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_Transmit_DMA(USART_HandleTypeDef *husart, uint8_t *pTxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_Receive_DMA(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_TransmitReceive_DMA(USART_HandleTypeDef *husart, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_DMAPause(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DMAResume(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DMAStop(USART_HandleTypeDef *husart);

HAL_StatusTypeDef HAL_USART_Abort(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_Abort_IT(USART_HandleTypeDef *husart);

void HAL_USART_IRQHandler(USART_HandleTypeDef *husart);
void HAL_USART_TxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_TxHalfCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_RxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_RxHalfCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_TxRxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_ErrorCallback(USART_HandleTypeDef *husart);
void HAL_USART_AbortCpltCallback (USART_HandleTypeDef *husart);
# 509 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_usart.h"
HAL_USART_StateTypeDef HAL_USART_GetState(USART_HandleTypeDef *husart);
uint32_t HAL_USART_GetError(USART_HandleTypeDef *husart);
# 56 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_wwdg.h" 1
# 65 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_wwdg.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t Window;


  uint32_t Counter;


  uint32_t EWIMode ;


}WWDG_InitTypeDef;




typedef struct
{
  WWDG_TypeDef *Instance;

  WWDG_InitTypeDef Init;

}WWDG_HandleTypeDef;
# 248 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_wwdg.h"
HAL_StatusTypeDef HAL_WWDG_Init(WWDG_HandleTypeDef *hwwdg);
void HAL_WWDG_MspInit(WWDG_HandleTypeDef *hwwdg);
# 258 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_wwdg.h"
HAL_StatusTypeDef HAL_WWDG_Refresh(WWDG_HandleTypeDef *hwwdg);
void HAL_WWDG_IRQHandler(WWDG_HandleTypeDef *hwwdg);
void HAL_WWDG_EarlyWakeupCallback(WWDG_HandleTypeDef* hwwdg);
# 57 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h" 1
# 327 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
typedef struct
{
  uint32_t CommonClock;





  uint32_t Multimode;




  uint32_t MultiDMATransfer;




  uint32_t MultiTwoSamplingDelay;





} LL_ADC_CommonInitTypeDef;
# 373 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
typedef struct
{
  uint32_t Resolution;




  uint32_t DataAlignment;




  uint32_t SequencersScanMode;




} LL_ADC_InitTypeDef;
# 411 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
typedef struct
{
  uint32_t TriggerSource;






  uint32_t SequencerLength;





  uint32_t SequencerDiscont;






  uint32_t ContinuousMode;





  uint32_t DMATransfer;




} LL_ADC_REG_InitTypeDef;
# 465 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
typedef struct
{
  uint32_t TriggerSource;






  uint32_t SequencerLength;





  uint32_t SequencerDiscont;






  uint32_t TrigAuto;





} LL_ADC_INJ_InitTypeDef;
# 1774 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_DMA_GetRegAddr(ADC_TypeDef *ADCx, uint32_t Register)
{
  register uint32_t data_reg_addr = 0U;

  if (Register == 0x00000000U)
  {

    data_reg_addr = (uint32_t)&(ADCx->DR);
  }
  else
  {

    data_reg_addr = (uint32_t)&(((((ADC_Common_TypeDef *) ((0x40000000U + 0x00010000U) + 0x2300U))))->CDR);
  }

  return data_reg_addr;
}
# 1819 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetCommonClock(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t CommonClock)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x3U << (16U))))) | (CommonClock))));
}
# 1835 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCommonClock(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x3U << (16U)))));
}
# 1868 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetCommonPathInternalCh(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t PathInternal)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x1U << (23U)) | (0x1U << (22U))))) | (PathInternal))));
}
# 1889 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCommonPathInternalCh(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x1U << (23U)) | (0x1U << (22U)))));
}
# 1915 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetResolution(ADC_TypeDef *ADCx, uint32_t Resolution)
{
  (((ADCx->CR1)) = ((((((ADCx->CR1))) & (~((0x3U << (24U))))) | (Resolution))));
}
# 1932 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetResolution(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR1) & ((0x3U << (24U)))));
}
# 1948 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetDataAlignment(ADC_TypeDef *ADCx, uint32_t DataAlignment)
{
  (((ADCx->CR2)) = ((((((ADCx->CR2))) & (~((0x1U << (11U))))) | (DataAlignment))));
}
# 1963 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetDataAlignment(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR2) & ((0x1U << (11U)))));
}
# 1989 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetSequencersScanMode(ADC_TypeDef *ADCx, uint32_t ScanMode)
{
  (((ADCx->CR1)) = ((((((ADCx->CR1))) & (~((0x1U << (8U))))) | (ScanMode))));
}
# 2014 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetSequencersScanMode(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR1) & ((0x1U << (8U)))));
}
# 2058 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_SetTriggerSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{





  (((ADCx->CR2)) = ((((((ADCx->CR2))) & (~((0xFU << (24U))))) | ((TriggerSource & (0xFU << (24U)))))));
}
# 2102 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetTriggerSource(ADC_TypeDef *ADCx)
{
  register uint32_t TriggerSource = ((ADCx->CR2) & ((0xFU << (24U)) | (0x3U << (28U))));



  register uint32_t ShiftExten = ((TriggerSource & (0x3U << (28U))) >> ((28U) - 2U));



  return ((TriggerSource
           & ((((0x00000000U & (0xFU << (24U))) >> (4U * 0U)) | (((0xFU << (24U))) >> (4U * 1U)) | (((0xFU << (24U))) >> (4U * 2U)) | (((0xFU << (24U))) >> (4U * 3U))) << ShiftExten) & (0xFU << (24U)))
          | (((((0x00000000U & (0x3U << (28U))) >> (4U * 0U)) | ((((0x1U << (28U)))) >> (4U * 1U)) | ((((0x1U << (28U)))) >> (4U * 2U)) | ((((0x1U << (28U)))) >> (4U * 3U))) << ShiftExten) & (0x3U << (28U)))
         );
}
# 2129 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_IsTriggerSourceSWStart(ADC_TypeDef *ADCx)
{
  return (((ADCx->CR2) & ((0x3U << (28U)))) == (0x00000000U & (0x3U << (28U))));
}
# 2146 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetTriggerEdge(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR2) & ((0x3U << (28U)))));
}
# 2208 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerLength(ADC_TypeDef *ADCx, uint32_t SequencerNbRanks)
{
  (((ADCx->SQR1)) = ((((((ADCx->SQR1))) & (~((0xFU << (20U))))) | (SequencerNbRanks))));
}
# 2268 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerLength(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->SQR1) & ((0xFU << (20U)))));
}
# 2296 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerDiscont(ADC_TypeDef *ADCx, uint32_t SeqDiscont)
{
  (((ADCx->CR1)) = ((((((ADCx->CR1))) & (~((0x1U << (11U)) | (0x7U << (13U))))) | (SeqDiscont))));
}
# 2319 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerDiscont(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR1) & ((0x1U << (11U)) | (0x7U << (13U)))));
}
# 2402 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank, uint32_t Channel)
{




  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SQR1)) + (((((Rank) & ((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))))))) << 2U))));

  (((*preg)) = ((((((*preg))) & (~(((0x1FU << (0U))) << (Rank & (0x0000001FU))))) | ((Channel & ((0x1FU << (0U)))) << (Rank & (0x0000001FU))))))

                                                                                          ;
}
# 2499 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SQR1)) + (((((Rank) & ((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))))))) << 2U))));

  return (uint32_t) (((*preg) & (((0x1FU << (0U))) << (Rank & (0x0000001FU))))

                     >> (Rank & (0x0000001FU))
                    );
}
# 2524 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_SetContinuousMode(ADC_TypeDef *ADCx, uint32_t Continuous)
{
  (((ADCx->CR2)) = ((((((ADCx->CR2))) & (~((0x1U << (1U))))) | (Continuous))));
}
# 2541 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetContinuousMode(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR2) & ((0x1U << (1U)))));
}
# 2577 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_SetDMATransfer(ADC_TypeDef *ADCx, uint32_t DMATransfer)
{
  (((ADCx->CR2)) = ((((((ADCx->CR2))) & (~((0x1U << (8U)) | (0x1U << (9U))))) | (DMATransfer))));
}
# 2612 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetDMATransfer(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR2) & ((0x1U << (8U)) | (0x1U << (9U)))));
}
# 2634 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_SetFlagEndOfConversion(ADC_TypeDef *ADCx, uint32_t EocSelection)
{
  (((ADCx->CR2)) = ((((((ADCx->CR2))) & (~((0x1U << (10U))))) | (EocSelection))));
}
# 2649 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetFlagEndOfConversion(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR2) & ((0x1U << (10U)))));
}
# 2693 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTriggerSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{





  (((ADCx->CR2)) = ((((((ADCx->CR2))) & (~((0xFU << (16U))))) | ((TriggerSource & (0xFU << (16U)))))));
}
# 2737 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTriggerSource(ADC_TypeDef *ADCx)
{
  register uint32_t TriggerSource = ((ADCx->CR2) & ((0xFU << (16U)) | (0x3U << (20U))));



  register uint32_t ShiftExten = ((TriggerSource & (0x3U << (20U))) >> ((20U) - 2U));



  return ((TriggerSource
           & ((((0x00000000U & (0xFU << (16U))) >> (4U * 0U)) | (((0xFU << (16U))) >> (4U * 1U)) | (((0xFU << (16U))) >> (4U * 2U)) | (((0xFU << (16U))) >> (4U * 3U))) << ShiftExten) & (0xFU << (16U)))
          | (((((0x00000000U & (0x3U << (20U))) >> (4U * 0U)) | ((((0x1U << (20U)))) >> (4U * 1U)) | ((((0x1U << (20U)))) >> (4U * 2U)) | ((((0x1U << (20U)))) >> (4U * 3U))) << ShiftExten) & (0x3U << (20U)))
         );
}
# 2764 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_IsTriggerSourceSWStart(ADC_TypeDef *ADCx)
{
  return (((ADCx->CR2) & ((0x3U << (20U)))) == (0x00000000U & (0x3U << (20U))));
}
# 2779 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTriggerEdge(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR2) & ((0x3U << (20U)))));
}
# 2807 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerLength(ADC_TypeDef *ADCx, uint32_t SequencerNbRanks)
{
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0x3U << (20U))))) | (SequencerNbRanks))));
}
# 2834 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerLength(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->JSQR) & ((0x3U << (20U)))));
}
# 2852 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerDiscont(ADC_TypeDef *ADCx, uint32_t SeqDiscont)
{
  (((ADCx->CR1)) = ((((((ADCx->CR1))) & (~((0x1U << (12U))))) | (SeqDiscont))));
}
# 2867 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerDiscont(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR1) & ((0x1U << (12U)))));
}
# 2919 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank, uint32_t Channel)
{




  register uint32_t tmpreg1 = (((ADCx->JSQR) & ((0x3U << (20U)))) >> (20U)) + 1U;

  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~(((0x1FU << (0U))) << (5U * (uint8_t)(((Rank) + 3U) - (tmpreg1)))))) | ((Channel & ((0x1FU << (0U)))) << (5U * (uint8_t)(((Rank) + 3U) - (tmpreg1)))))))

                                                                                                   ;
}
# 2988 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t tmpreg1 = (((ADCx->JSQR) & ((0x3U << (20U)))) >> (20U)) + 1U;

  return (uint32_t)(((ADCx->JSQR) & (((0x1FU << (0U))) << (5U * (uint8_t)(((Rank) + 3U) - (tmpreg1)))))

                    >> (5U * (uint8_t)(((Rank) + 3U) - (tmpreg1)))
                   );
}
# 3024 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTrigAuto(ADC_TypeDef *ADCx, uint32_t TrigAuto)
{
  (((ADCx->CR1)) = ((((((ADCx->CR1))) & (~((0x1U << (10U))))) | (TrigAuto))));
}
# 3038 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTrigAuto(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR1) & ((0x1U << (10U)))));
}
# 3068 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetOffset(ADC_TypeDef *ADCx, uint32_t Rank, uint32_t OffsetLevel)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JOFR1)) + (((((Rank) & ((0x00000000U | 0x00001000U | 0x00002000U | 0x00003000U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00001000U | 0x00002000U | 0x00003000U))))))) << 2U))));

  (((*preg)) = ((((((*preg))) & (~((0xFFFU << (0U))))) | (OffsetLevel))))

                         ;
}
# 3095 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetOffset(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JOFR1)) + (((((Rank) & ((0x00000000U | 0x00001000U | 0x00002000U | 0x00003000U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00001000U | 0x00002000U | 0x00003000U))))))) << 2U))));

  return (uint32_t)(((*preg) & ((0xFFFU << (0U))))

                   );
}
# 3188 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetChannelSamplingTime(ADC_TypeDef *ADCx, uint32_t Channel, uint32_t SamplingTime)
{




  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SMPR1)) + (((((Channel) & ((0x00000000U | 0x02000000U))) >> (__CLZ(__RBIT(((0x00000000U | 0x02000000U))))))) << 2U))));

  (((*preg)) = ((((((*preg))) & (~((0x7U << (0U)) << (((Channel) & (0x01F00000U)) >> (__CLZ(__RBIT((0x01F00000U)))))))) | (SamplingTime << (((Channel) & (0x01F00000U)) >> (__CLZ(__RBIT((0x01F00000U)))))))))

                                                                                          ;
}
# 3265 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetChannelSamplingTime(ADC_TypeDef *ADCx, uint32_t Channel)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SMPR1)) + (((((Channel) & ((0x00000000U | 0x02000000U))) >> (__CLZ(__RBIT(((0x00000000U | 0x02000000U))))))) << 2U))));

  return (uint32_t)(((*preg) & ((0x7U << (0U)) << (((Channel) & (0x01F00000U)) >> (__CLZ(__RBIT((0x01F00000U)))))))

                    >> (((Channel) & (0x01F00000U)) >> (__CLZ(__RBIT((0x01F00000U)))))
                   );
}
# 3379 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetAnalogWDMonitChannels(ADC_TypeDef *ADCx, uint32_t AWDChannelGroup)
{
  (((ADCx->CR1)) = ((((((ADCx->CR1))) & (~(((0x1U << (23U)) | (0x1U << (22U)) | (0x1U << (9U)) | (0x1FU << (0U)))))) | (AWDChannelGroup))))

                             ;
}
# 3475 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetAnalogWDMonitChannels(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CR1) & (((0x1U << (23U)) | (0x1U << (22U)) | (0x1U << (9U)) | (0x1FU << (0U))))));
}
# 3502 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetAnalogWDThresholds(ADC_TypeDef *ADCx, uint32_t AWDThresholdsHighLow, uint32_t AWDThresholdValue)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->HTR)) + ((AWDThresholdsHighLow) << 2U))));

  (((*preg)) = ((((((*preg))) & (~((0xFFFU << (0U))))) | (AWDThresholdValue))))

                               ;
}
# 3525 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetAnalogWDThresholds(ADC_TypeDef *ADCx, uint32_t AWDThresholdsHighLow)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->HTR)) + ((AWDThresholdsHighLow) << 2U))));

  return (uint32_t)(((*preg) & ((0xFFFU << (0U)))));
}
# 3567 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetMultimode(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t Multimode)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x1FU << (0U))))) | (Multimode))));
}
# 3597 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetMultimode(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x1FU << (0U)))));
}
# 3646 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetMultiDMATransfer(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t MultiDMATransfer)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x3U << (14U)) | (0x1U << (13U))))) | (MultiDMATransfer))));
}
# 3694 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetMultiDMATransfer(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x3U << (14U)) | (0x1U << (13U)))));
}
# 3728 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_SetMultiTwoSamplingDelay(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t MultiTwoSamplingDelay)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0xFU << (8U))))) | (MultiTwoSamplingDelay))));
}
# 3756 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetMultiTwoSamplingDelay(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0xFU << (8U)))));
}
# 3779 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_Enable(ADC_TypeDef *ADCx)
{
  ((ADCx->CR2) |= ((0x1U << (0U))));
}







static inline void LL_ADC_Disable(ADC_TypeDef *ADCx)
{
  ((ADCx->CR2) &= ~((0x1U << (0U))));
}







static inline uint32_t LL_ADC_IsEnabled(ADC_TypeDef *ADCx)
{
  return (((ADCx->CR2) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}
# 3830 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_StartConversionSWStart(ADC_TypeDef *ADCx)
{
  ((ADCx->CR2) |= ((0x1U << (30U))));
}
# 3851 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_StartConversionExtTrig(ADC_TypeDef *ADCx, uint32_t ExternalTriggerEdge)
{
  ((ADCx->CR2) |= (ExternalTriggerEdge));
}
# 3869 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_REG_StopConversionExtTrig(ADC_TypeDef *ADCx)
{
  ((ADCx->CR2) &= ~((0x3U << (28U))));
}
# 3883 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_ReadConversionData32(ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFU << (0U)))));
}
# 3898 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint16_t LL_ADC_REG_ReadConversionData12(ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFU << (0U)))));
}
# 3913 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint16_t LL_ADC_REG_ReadConversionData10(ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFU << (0U)))));
}
# 3928 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint8_t LL_ADC_REG_ReadConversionData8(ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFU << (0U)))));
}
# 3943 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint8_t LL_ADC_REG_ReadConversionData6(ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFU << (0U)))));
}
# 3970 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_ReadMultiConversionData32(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t ConversionData)
{
  return (uint32_t)(((ADCxy_COMMON->CDR) & ((0xFFFFU << (16U))))

                    >> (__CLZ(__RBIT(ConversionData)))
                   );
}
# 4003 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_StartConversionSWStart(ADC_TypeDef *ADCx)
{
  ((ADCx->CR2) |= ((0x1U << (22U))));
}
# 4024 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_StartConversionExtTrig(ADC_TypeDef *ADCx, uint32_t ExternalTriggerEdge)
{
  ((ADCx->CR2) |= (ExternalTriggerEdge));
}
# 4042 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_INJ_StopConversionExtTrig(ADC_TypeDef *ADCx)
{
  ((ADCx->CR2) &= ~((0x3U << (20U))));
}
# 4064 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_ReadConversionData32(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + (((((Rank) & ((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))))))) << 2U))));

  return (uint32_t)(((*preg) & ((0xFFFFU << (0U))))

                   );
}
# 4091 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint16_t LL_ADC_INJ_ReadConversionData12(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + (((((Rank) & ((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))))))) << 2U))));

  return (uint16_t)(((*preg) & ((0xFFFFU << (0U))))

                   );
}
# 4118 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint16_t LL_ADC_INJ_ReadConversionData10(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + (((((Rank) & ((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))))))) << 2U))));

  return (uint16_t)(((*preg) & ((0xFFFFU << (0U))))

                   );
}
# 4145 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint8_t LL_ADC_INJ_ReadConversionData8(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + (((((Rank) & ((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))))))) << 2U))));

  return (uint8_t)(((*preg) & ((0xFFFFU << (0U))))

                  );
}
# 4172 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint8_t LL_ADC_INJ_ReadConversionData6(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register uint32_t *preg = ((uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + (((((Rank) & ((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))) >> (__CLZ(__RBIT(((0x00000000U | 0x00000100U | 0x00000200U | 0x00000300U))))))) << 2U))));

  return (uint8_t)(((*preg) & ((0xFFFFU << (0U))))

                  );
}
# 4199 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_EOCS(ADC_TypeDef *ADCx)
{
  return (((ADCx->SR) & ((0x1U << (1U)))) == ((0x1U << (1U))));
}







static inline uint32_t LL_ADC_IsActiveFlag_OVR(ADC_TypeDef *ADCx)
{
  return (((ADCx->SR) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}
# 4222 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_JEOS(ADC_TypeDef *ADCx)
{




  return (((ADCx->SR) & ((0x1U << (2U)))) == ((0x1U << (2U))));
}







static inline uint32_t LL_ADC_IsActiveFlag_AWD1(ADC_TypeDef *ADCx)
{
  return (((ADCx->SR) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}
# 4252 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_ClearFlag_EOCS(ADC_TypeDef *ADCx)
{
  ((ADCx->SR) = (~(0x1U << (1U))));
}







static inline void LL_ADC_ClearFlag_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->SR) = (~(0x1U << (5U))));
}
# 4275 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_ClearFlag_JEOS(ADC_TypeDef *ADCx)
{




  ((ADCx->SR) = (~(0x1U << (2U))));
}







static inline void LL_ADC_ClearFlag_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->SR) = (~(0x1U << (0U))));
}
# 4307 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_EOCS(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((((ADC_TypeDef *) ((0x40000000U + 0x00010000U) + 0x2000U))->SR) & ((0x1U << (1U)))) == ((0x1U << (1U))));
}
# 4323 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV1_EOCS(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((ADCxy_COMMON->CSR) & ((0x1U << (9U)))) == ((0x1U << (9U))));
}
# 4339 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV2_EOCS(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((ADCxy_COMMON->CSR) & ((0x1U << (17U)))) == ((0x1U << (17U))));
}







static inline uint32_t LL_ADC_IsActiveFlag_MST_OVR(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((ADCxy_COMMON->CSR) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}
# 4362 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV1_OVR(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((ADCxy_COMMON->CSR) & ((0x1U << (13U)))) == ((0x1U << (13U))));
}
# 4374 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV2_OVR(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((ADCxy_COMMON->CSR) & ((0x1U << (21U)))) == ((0x1U << (21U))));
}
# 4387 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_JEOS(ADC_Common_TypeDef *ADCxy_COMMON)
{




  return (((ADCxy_COMMON->CSR) & ((0x1U << (2U)))) == ((0x1U << (2U))));
}
# 4403 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV1_JEOS(ADC_Common_TypeDef *ADCxy_COMMON)
{




  return (((ADCxy_COMMON->CSR) & ((0x1U << (10U)))) == ((0x1U << (10U))));
}
# 4419 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV2_JEOS(ADC_Common_TypeDef *ADCxy_COMMON)
{




  return (((ADCxy_COMMON->CSR) & ((0x1U << (18U)))) == ((0x1U << (18U))));
}
# 4435 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_AWD1(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((ADCxy_COMMON->CSR) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}
# 4447 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV1_AWD1(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (((ADCxy_COMMON->CSR) & ((0x1U << (8U)))) == ((0x1U << (8U))));
}
# 4459 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV2_AWD1(ADC_Common_TypeDef *ADCxy_COMMON)
{
    return (((ADCxy_COMMON->CSR) & ((0x1U << (16U)))) == ((0x1U << (16U))));
}
# 4484 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_EnableIT_EOCS(ADC_TypeDef *ADCx)
{
  ((ADCx->CR1) |= ((0x1U << (5U))));
}







static inline void LL_ADC_EnableIT_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->CR1) |= ((0x1U << (26U))));
}
# 4507 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_EnableIT_JEOS(ADC_TypeDef *ADCx)
{




  ((ADCx->CR1) |= ((0x1U << (7U))));
}







static inline void LL_ADC_EnableIT_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->CR1) |= ((0x1U << (6U))));
}
# 4537 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_DisableIT_EOCS(ADC_TypeDef *ADCx)
{
  ((ADCx->CR1) &= ~((0x1U << (5U))));
}







static inline void LL_ADC_DisableIT_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->CR1) &= ~((0x1U << (26U))));
}
# 4560 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline void LL_ADC_DisableIT_JEOS(ADC_TypeDef *ADCx)
{




  ((ADCx->CR1) &= ~((0x1U << (7U))));
}







static inline void LL_ADC_DisableIT_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->CR1) &= ~((0x1U << (6U))));
}
# 4591 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_EOCS(ADC_TypeDef *ADCx)
{
  return (((ADCx->CR1) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}
# 4603 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_OVR(ADC_TypeDef *ADCx)
{
  return (((ADCx->CR1) & ((0x1U << (26U)))) == ((0x1U << (26U))));
}
# 4616 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_JEOS(ADC_TypeDef *ADCx)
{




  return (((ADCx->CR1) & ((0x1U << (7U)))) == ((0x1U << (7U))));
}
# 4632 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_AWD1(ADC_TypeDef *ADCx)
{
  return (((ADCx->CR1) & ((0x1U << (6U)))) == ((0x1U << (6U))));
}
# 4647 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h"
ErrorStatus LL_ADC_CommonDeInit(ADC_Common_TypeDef *ADCxy_COMMON);
ErrorStatus LL_ADC_CommonInit(ADC_Common_TypeDef *ADCxy_COMMON, LL_ADC_CommonInitTypeDef *ADC_CommonInitStruct);
void LL_ADC_CommonStructInit(LL_ADC_CommonInitTypeDef *ADC_CommonInitStruct);



ErrorStatus LL_ADC_DeInit(ADC_TypeDef *ADCx);


ErrorStatus LL_ADC_Init(ADC_TypeDef *ADCx, LL_ADC_InitTypeDef *ADC_InitStruct);
void LL_ADC_StructInit(LL_ADC_InitTypeDef *ADC_InitStruct);


ErrorStatus LL_ADC_REG_Init(ADC_TypeDef *ADCx, LL_ADC_REG_InitTypeDef *ADC_REG_InitStruct);
void LL_ADC_REG_StructInit(LL_ADC_REG_InitTypeDef *ADC_REG_InitStruct);


ErrorStatus LL_ADC_INJ_Init(ADC_TypeDef *ADCx, LL_ADC_INJ_InitTypeDef *ADC_INJ_InitStruct);
void LL_ADC_INJ_StructInit(LL_ADC_INJ_InitTypeDef *ADC_INJ_InitStruct);
# 58 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h" 1
# 525 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_SetRegulVoltageScaling(uint32_t VoltageScaling)
{
  (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR)) = ((((((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR))) & (~((0x1U << (14U))))) | (VoltageScaling))));
}
# 539 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline uint32_t LL_PWR_GetRegulVoltageScaling(void)
{
  return (uint32_t)(((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) & ((0x1U << (14U)))));
}





static inline void LL_PWR_EnableFlashPowerDown(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) |= ((0x1U << (9U))));
}






static inline void LL_PWR_DisableFlashPowerDown(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) &= ~((0x1U << (9U))));
}






static inline uint32_t LL_PWR_IsEnabledFlashPowerDown(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) & ((0x1U << (9U)))) == ((0x1U << (9U))));
}






static inline void LL_PWR_EnableBkUpAccess(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) |= ((0x1U << (8U))));
}






static inline void LL_PWR_DisableBkUpAccess(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) &= ~((0x1U << (8U))));
}






static inline uint32_t LL_PWR_IsEnabledBkUpAccess(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) & ((0x1U << (8U)))) == ((0x1U << (8U))));
}







static inline void LL_PWR_EnableBkUpRegulator(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) |= ((0x1U << (9U))));
}
# 621 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_DisableBkUpRegulator(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) &= ~((0x1U << (9U))));
}






static inline uint32_t LL_PWR_IsEnabledBkUpRegulator(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) & ((0x1U << (9U)))) == ((0x1U << (9U))));
}
# 644 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_SetRegulModeDS(uint32_t RegulMode)
{
  (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR)) = ((((((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR))) & (~((0x1U << (0U))))) | (RegulMode))));
}
# 656 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline uint32_t LL_PWR_GetRegulModeDS(void)
{
  return (uint32_t)(((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) & ((0x1U << (0U)))));
}
# 683 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_SetPowerMode(uint32_t PDMode)
{





  (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR)) = ((((((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR))) & (~(((0x1U << (1U))| (0x1U << (0U)))))) | (PDMode))));

}
# 715 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline uint32_t LL_PWR_GetPowerMode(void)
{





  return (uint32_t)(((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) & (((0x1U << (1U))| (0x1U << (0U))))));

}
# 740 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_SetPVDLevel(uint32_t PVDLevel)
{
  (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR)) = ((((((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR))) & (~((0x7U << (5U))))) | (PVDLevel))));
}
# 758 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline uint32_t LL_PWR_GetPVDLevel(void)
{
  return (uint32_t)(((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) & ((0x7U << (5U)))));
}






static inline void LL_PWR_EnablePVD(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) |= ((0x1U << (4U))));
}






static inline void LL_PWR_DisablePVD(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) &= ~((0x1U << (4U))));
}






static inline uint32_t LL_PWR_IsEnabledPVD(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) & ((0x1U << (4U)))) == ((0x1U << (4U))));
}
# 807 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_EnableWakeUpPin(uint32_t WakeUpPin)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) |= (WakeUpPin));
}
# 826 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_DisableWakeUpPin(uint32_t WakeUpPin)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) &= ~(WakeUpPin));
}
# 845 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline uint32_t LL_PWR_IsEnabledWakeUpPin(uint32_t WakeUpPin)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) & (WakeUpPin)) == (WakeUpPin));
}
# 864 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline uint32_t LL_PWR_IsActiveFlag_WU(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}






static inline uint32_t LL_PWR_IsActiveFlag_SB(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) & ((0x1U << (1U)))) == ((0x1U << (1U))));
}






static inline uint32_t LL_PWR_IsActiveFlag_BRR(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) & ((0x1U << (3U)))) == ((0x1U << (3U))));
}





static inline uint32_t LL_PWR_IsActiveFlag_PVDO(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) & ((0x1U << (2U)))) == ((0x1U << (2U))));
}






static inline uint32_t LL_PWR_IsActiveFlag_VOS(void)
{
  return (((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CSR) & ((0x1U << (14U)))) == ((0x1U << (14U))));
}
# 947 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
static inline void LL_PWR_ClearFlag_SB(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) |= ((0x1U << (3U))));
}






static inline void LL_PWR_ClearFlag_WU(void)
{
  ((((PWR_TypeDef *) (0x40000000U + 0x7000U))->CR) |= ((0x1U << (2U))));
}
# 981 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h"
ErrorStatus LL_PWR_DeInit(void);
# 59 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h" 1
# 104 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
typedef struct
{
  uint32_t HourFormat;





  uint32_t AsynchPrescaler;





  uint32_t SynchPrescaler;




} LL_RTC_InitTypeDef;




typedef struct
{
  uint32_t TimeFormat;




  uint8_t Hours;





  uint8_t Minutes;




  uint8_t Seconds;



} LL_RTC_TimeTypeDef;




typedef struct
{
  uint8_t WeekDay;




  uint8_t Month;




  uint8_t Day;




  uint8_t Year;



} LL_RTC_DateTypeDef;




typedef struct
{
  LL_RTC_TimeTypeDef AlarmTime;

  uint32_t AlarmMask;






  uint32_t AlarmDateWeekDaySel;






  uint8_t AlarmDateWeekDay;
# 210 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
} LL_RTC_AlarmTypeDef;
# 805 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_SetHourFormat(RTC_TypeDef *RTCx, uint32_t HourFormat)
{
  (((RTCx->CR)) = ((((((RTCx->CR))) & (~((0x1U << (6U))))) | (HourFormat))));
}
# 818 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_GetHourFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CR) & ((0x1U << (6U)))));
}
# 835 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_SetAlarmOutEvent(RTC_TypeDef *RTCx, uint32_t AlarmOutput)
{
  (((RTCx->CR)) = ((((((RTCx->CR))) & (~((0x3U << (21U))))) | (AlarmOutput))));
}
# 850 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_GetAlarmOutEvent(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CR) & ((0x3U << (21U)))));
}
# 867 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_SetAlarmOutputType(RTC_TypeDef *RTCx, uint32_t Output)
{
  (((RTCx->TAFCR)) = ((((((RTCx->TAFCR))) & (~((0x1U << (18U))))) | (Output))));
}
# 883 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_GetAlarmOutputType(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TAFCR) & ((0x1U << (18U)))));
}
# 902 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnablePushPullMode(RTC_TypeDef *RTCx, uint32_t PinMask)
{
  ((RTCx->TAFCR) |= (PinMask));
}
# 921 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DisablePushPullMode(RTC_TypeDef* RTCx, uint32_t PinMask)
{
  ((RTCx->TAFCR) &= ~(PinMask));
}
# 937 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_SetOutputPin(RTC_TypeDef* RTCx, uint32_t PinMask)
{
  ((RTCx->TAFCR) |= ((PinMask >> 1)));
}
# 953 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ResetOutputPin(RTC_TypeDef* RTCx, uint32_t PinMask)
{
  ((RTCx->TAFCR) &= ~((PinMask >> 1)));
}
# 967 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnableInitMode(RTC_TypeDef *RTCx)
{

  ((RTCx->ISR) = (0xFFFFFFFFU));
}







static inline void LL_RTC_DisableInitMode(RTC_TypeDef *RTCx)
{

  ((RTCx->ISR) = ((uint32_t)~(0x1U << (7U))));
}
# 995 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_SetOutputPolarity(RTC_TypeDef *RTCx, uint32_t Polarity)
{
  (((RTCx->CR)) = ((((((RTCx->CR))) & (~((0x1U << (20U))))) | (Polarity))));
}
# 1008 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_GetOutputPolarity(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CR) & ((0x1U << (20U)))));
}
# 1020 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnableShadowRegBypass(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (5U))));
}







static inline void LL_RTC_DisableShadowRegBypass(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (5U))));
}







static inline uint32_t LL_RTC_IsShadowRegBypassEnabled(RTC_TypeDef *RTCx)
{
  return (((RTCx->CR) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}
# 1055 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnableRefClock(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (4U))));
}
# 1068 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DisableRefClock(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (4U))));
}
# 1080 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_SetAsynchPrescaler(RTC_TypeDef *RTCx, uint32_t AsynchPrescaler)
{
  (((RTCx->PRER)) = ((((((RTCx->PRER))) & (~((0x7FU << (16U))))) | (AsynchPrescaler << (16U)))));
}
# 1092 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_SetSynchPrescaler(RTC_TypeDef *RTCx, uint32_t SynchPrescaler)
{
  (((RTCx->PRER)) = ((((((RTCx->PRER))) & (~((0x7FFFU << (0U))))) | (SynchPrescaler))));
}







static inline uint32_t LL_RTC_GetAsynchPrescaler(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->PRER) & ((0x7FU << (16U)))) >> (16U));
}







static inline uint32_t LL_RTC_GetSynchPrescaler(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->PRER) & ((0x7FFFU << (0U)))));
}







static inline void LL_RTC_EnableWriteProtection(RTC_TypeDef *RTCx)
{
  ((RTCx->WPR) = (((uint8_t)0xFFU)));
}







static inline void LL_RTC_DisableWriteProtection(RTC_TypeDef *RTCx)
{
  ((RTCx->WPR) = (((uint8_t)0xCAU)));
  ((RTCx->WPR) = (((uint8_t)0x53U)));
}
# 1161 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_SetFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
{
  (((RTCx->TR)) = ((((((RTCx->TR))) & (~((0x1U << (22U))))) | (TimeFormat))));
}
# 1178 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TIME_GetFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TR) & ((0x1U << (22U)))));
}
# 1194 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
{
  (((RTCx->TR)) = ((((((RTCx->TR))) & (~(((0x3U << (20U)) | (0xFU << (16U)))))) | ((((Hours & 0xF0U) << ((20U) - 4U)) | ((Hours & 0x0FU) << (16U)))))))
                                                                                              ;
}
# 1213 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TIME_GetHour(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->TR) & (((0x3U << (20U)) | (0xFU << (16U)))));
  return (uint32_t)((((temp & (0x3U << (20U))) >> (20U)) << 4U) | ((temp & (0xFU << (16U))) >> (16U)));
}
# 1232 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
{
  (((RTCx->TR)) = ((((((RTCx->TR))) & (~(((0x7U << (12U)) | (0xFU << (8U)))))) | ((((Minutes & 0xF0U) << ((12U) - 4U)) | ((Minutes & 0x0FU) << (8U)))))))
                                                                                                    ;
}
# 1251 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TIME_GetMinute(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->TR) & (((0x7U << (12U)) | (0xFU << (8U)))));
  return (uint32_t)((((temp & (0x7U << (12U))) >> (12U)) << 4U) | ((temp & (0xFU << (8U))) >> (8U)));
}
# 1270 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
{
  (((RTCx->TR)) = ((((((RTCx->TR))) & (~(((0x7U << (4U)) | (0xFU << (0U)))))) | ((((Seconds & 0xF0U) << ((4U) - 4U)) | ((Seconds & 0x0FU) << (0U)))))))
                                                                                                  ;
}
# 1289 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TIME_GetSecond(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->TR) & (((0x7U << (4U)) | (0xFU << (0U)))));
  return (uint32_t)((((temp & (0x7U << (4U))) >> (4U)) << 4U) | ((temp & (0xFU << (0U))) >> (0U)));
}
# 1318 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_Config(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
{
  register uint32_t temp = 0U;

  temp = Format12_24 |
         (((Hours & 0xF0U) << ((20U) - 4U)) | ((Hours & 0x0FU) << (16U))) |
         (((Minutes & 0xF0U) << ((12U) - 4U)) | ((Minutes & 0x0FU) << (8U))) |
         (((Seconds & 0xF0U) << ((4U) - 4U)) | ((Seconds & 0x0FU) << (0U)));
  (((RTCx->TR)) = ((((((RTCx->TR))) & (~(((0x1U << (22U)) | (0x3U << (20U)) | (0xFU << (16U)) | (0x7U << (12U)) | (0xFU << (8U)) | (0x7U << (4U)) | (0xFU << (0U)))))) | (temp))));
}
# 1346 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TIME_Get(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->TR) & (((0x3U << (20U)) | (0xFU << (16U)) | (0x7U << (12U)) | (0xFU << (8U)) | (0x7U << (4U)) | (0xFU << (0U)))));
  return (uint32_t)((((((temp & (0x3U << (20U))) >> (20U)) << 4U) | ((temp & (0xFU << (16U))) >> (16U))) << 16U) |
                    (((((temp & (0x7U << (12U))) >> (12U)) << 4U) | ((temp & (0xFU << (8U))) >> (8U))) << 8U) |
                    ((((temp & (0x7U << (4U))) >> (4U)) << 4U) | ((temp & (0xFU << (0U))) >> (0U))));
}
# 1363 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_EnableDayLightStore(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (18U))));
}
# 1375 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_DisableDayLightStore(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (18U))));
}







static inline uint32_t LL_RTC_TIME_IsDayLightStoreEnabled(RTC_TypeDef *RTCx)
{
  return (((RTCx->CR) & ((0x1U << (18U)))) == ((0x1U << (18U))));
}
# 1398 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_DecHour(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (17U))));
}
# 1410 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_IncHour(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (16U))));
}
# 1428 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TIME_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->SSR) & ((0xFFFFU << (0U)))));
}
# 1447 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TIME_Synchronize(RTC_TypeDef *RTCx, uint32_t ShiftSecond, uint32_t Fraction)
{
  ((RTCx->SHIFTR) = (ShiftSecond | Fraction));
}
# 1469 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DATE_SetYear(RTC_TypeDef *RTCx, uint32_t Year)
{
  (((RTCx->DR)) = ((((((RTCx->DR))) & (~(((0xFU << (20U)) | (0xFU << (16U)))))) | ((((Year & 0xF0U) << ((20U) - 4U)) | ((Year & 0x0FU) << (16U)))))))
                                                                                            ;
}
# 1485 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_DATE_GetYear(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->DR) & (((0xFU << (20U)) | (0xFU << (16U)))));
  return (uint32_t)((((temp & (0xFU << (20U))) >> (20U)) << 4U) | ((temp & (0xFU << (16U))) >> (16U)));
}
# 1507 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DATE_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
{
  (((RTCx->DR)) = ((((((RTCx->DR))) & (~((0x7U << (13U))))) | (WeekDay << (13U)))));
}
# 1527 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_DATE_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->DR) & ((0x7U << (13U)))) >> (13U));
}
# 1553 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DATE_SetMonth(RTC_TypeDef *RTCx, uint32_t Month)
{
  (((RTCx->DR)) = ((((((RTCx->DR))) & (~(((0x1U << (12U)) | (0xFU << (8U)))))) | ((((Month & 0xF0U) << ((12U) - 4U)) | ((Month & 0x0FU) << (8U)))))))
                                                                                              ;
}
# 1581 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_DATE_GetMonth(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->DR) & (((0x1U << (12U)) | (0xFU << (8U)))));
  return (uint32_t)((((temp & (0x1U << (12U))) >> (12U)) << 4U) | ((temp & (0xFU << (8U))) >> (8U)));
}
# 1598 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DATE_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
{
  (((RTCx->DR)) = ((((((RTCx->DR))) & (~(((0x3U << (4U)) | (0xFU << (0U)))))) | ((((Day & 0xF0U) << ((4U) - 4U)) | ((Day & 0x0FU) << (0U)))))))
                                                                                          ;
}
# 1614 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_DATE_GetDay(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->DR) & (((0x3U << (4U)) | (0xFU << (0U)))));
  return (uint32_t)((((temp & (0x3U << (4U))) >> (4U)) << 4U) | ((temp & (0xFU << (0U))) >> (0U)));
}
# 1657 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DATE_Config(RTC_TypeDef *RTCx, uint32_t WeekDay, uint32_t Day, uint32_t Month, uint32_t Year)
{
  register uint32_t temp = 0U;

  temp = (WeekDay << (13U)) |
         (((Year & 0xF0U) << ((20U) - 4U)) | ((Year & 0x0FU) << (16U))) |
         (((Month & 0xF0U) << ((12U) - 4U)) | ((Month & 0x0FU) << (8U))) |
         (((Day & 0xF0U) << ((4U) - 4U)) | ((Day & 0x0FU) << (0U)));

  (((RTCx->DR)) = ((((((RTCx->DR))) & (~(((0x7U << (13U)) | (0x1U << (12U)) | (0xFU << (8U)) | (0x3U << (4U)) | (0xFU << (0U)) | (0xFU << (20U)) | (0xFU << (16U)))))) | (temp))));
}
# 1685 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_DATE_Get(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->DR) & (((0x7U << (13U)) | (0x1U << (12U)) | (0xFU << (8U)) | (0x3U << (4U)) | (0xFU << (0U)) | (0xFU << (20U)) | (0xFU << (16U)))));
  return (uint32_t)((((temp & (0x7U << (13U))) >> (13U)) << 24U) |
                    (((((temp & (0x3U << (4U))) >> (4U)) << 4U) | ((temp & (0xFU << (0U))) >> (0U))) << 16U) |
                    (((((temp & (0x1U << (12U))) >> (12U)) << 4U) | ((temp & (0xFU << (8U))) >> (8U))) << 8U) |
                    ((((temp & (0xFU << (20U))) >> (20U)) << 4U) | ((temp & (0xFU << (16U))) >> (16U))));
}
# 1711 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_Enable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (8U))));
}
# 1723 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_Disable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (8U))));
}
# 1744 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~((0x1U << (31U)) | (0x1U << (23U)) | (0x1U << (15U)) | (0x1U << (7U))))) | (Mask))));
}
# 1764 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMAR) & ((0x1U << (31U)) | (0x1U << (23U)) | (0x1U << (15U)) | (0x1U << (7U)))));
}







static inline void LL_RTC_ALMA_EnableWeekday(RTC_TypeDef *RTCx)
{
  ((RTCx->ALRMAR) |= ((0x1U << (30U))));
}







static inline void LL_RTC_ALMA_DisableWeekday(RTC_TypeDef *RTCx)
{
  ((RTCx->ALRMAR) &= ~((0x1U << (30U))));
}
# 1800 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
{
  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~(((0x3U << (28U)) | (0xFU << (24U)))))) | ((((Day & 0xF0U) << ((28U) - 4U)) | ((Day & 0x0FU) << (24U)))))))
                                                                                                  ;
}
# 1814 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetDay(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMAR) & (((0x3U << (28U)) | (0xFU << (24U)))));
  return (uint32_t)((((temp & (0x3U << (28U))) >> (28U)) << 4U) | ((temp & (0xFU << (24U))) >> (24U)));
}
# 1836 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
{
  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~((0xFU << (24U))))) | (WeekDay << (24U)))));
}
# 1854 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMAR) & ((0xFU << (24U)))) >> (24U));
}
# 1868 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetTimeFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
{
  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~((0x1U << (22U))))) | (TimeFormat))));
}
# 1881 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetTimeFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMAR) & ((0x1U << (22U)))));
}
# 1895 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
{
  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~(((0x3U << (20U)) | (0xFU << (16U)))))) | ((((Hours & 0xF0U) << ((20U) - 4U)) | ((Hours & 0x0FU) << (16U)))))))
                                                                                                      ;
}
# 1909 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetHour(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMAR) & (((0x3U << (20U)) | (0xFU << (16U)))));
  return (uint32_t)((((temp & (0x3U << (20U))) >> (20U)) << 4U) | ((temp & (0xFU << (16U))) >> (16U)));
}
# 1926 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
{
  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~(((0x7U << (12U)) | (0xFU << (8U)))))) | ((((Minutes & 0xF0U) << ((12U) - 4U)) | ((Minutes & 0x0FU) << (8U)))))))
                                                                                                            ;
}
# 1940 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetMinute(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMAR) & (((0x7U << (12U)) | (0xFU << (8U)))));
  return (uint32_t)((((temp & (0x7U << (12U))) >> (12U)) << 4U) | ((temp & (0xFU << (8U))) >> (8U)));
}
# 1957 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
{
  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~(((0x7U << (4U)) | (0xFU << (0U)))))) | ((((Seconds & 0xF0U) << ((4U) - 4U)) | ((Seconds & 0x0FU) << (0U)))))))
                                                                                                          ;
}
# 1971 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetSecond(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMAR) & (((0x7U << (4U)) | (0xFU << (0U)))));
  return (uint32_t)((((temp & (0x7U << (4U))) >> (4U)) << 4U) | ((temp & (0xFU << (0U))) >> (0U)));
}
# 1997 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_ConfigTime(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
{
  register uint32_t temp = 0U;

  temp = Format12_24 | (((Hours & 0xF0U) << ((20U) - 4U)) | ((Hours & 0x0FU) << (16U))) |
         (((Minutes & 0xF0U) << ((12U) - 4U)) | ((Minutes & 0x0FU) << (8U))) |
         (((Seconds & 0xF0U) << ((4U) - 4U)) | ((Seconds & 0x0FU) << (0U)));

  (((RTCx->ALRMAR)) = ((((((RTCx->ALRMAR))) & (~((0x1U << (22U)) | (0x3U << (20U)) | (0xFU << (16U)) | (0x7U << (12U)) | (0xFU << (8U)) | (0x7U << (4U)) | (0xFU << (0U))))) | (temp))));
}
# 2021 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMA_GetTime(RTC_TypeDef *RTCx)
{
  return (uint32_t)((LL_RTC_ALMA_GetHour(RTCx) << 16U) | (LL_RTC_ALMA_GetMinute(RTCx) << 8U) | LL_RTC_ALMA_GetSecond(RTCx));
}
# 2035 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetSubSecondMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  (((RTCx->ALRMASSR)) = ((((((RTCx->ALRMASSR))) & (~((0xFU << (24U))))) | (Mask << (24U)))));
}







static inline uint32_t LL_RTC_ALMA_GetSubSecondMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMASSR) & ((0xFU << (24U)))) >> (24U));
}
# 2058 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMA_SetSubSecond(RTC_TypeDef *RTCx, uint32_t Subsecond)
{
  (((RTCx->ALRMASSR)) = ((((((RTCx->ALRMASSR))) & (~((0x7FFFU << (0U))))) | (Subsecond))));
}







static inline uint32_t LL_RTC_ALMA_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMASSR) & ((0x7FFFU << (0U)))));
}
# 2089 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_Enable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (9U))));
}
# 2101 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_Disable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (9U))));
}
# 2122 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  (((RTCx->ALRMBR)) = ((((((RTCx->ALRMBR))) & (~((0x1U << (31U)) | (0x1U << (23U)) | (0x1U << (15U)) | (0x1U << (7U))))) | (Mask))));
}
# 2142 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMBR) & ((0x1U << (31U)) | (0x1U << (23U)) | (0x1U << (15U)) | (0x1U << (7U)))));
}







static inline void LL_RTC_ALMB_EnableWeekday(RTC_TypeDef *RTCx)
{
  ((RTCx->ALRMBR) |= ((0x1U << (30U))));
}







static inline void LL_RTC_ALMB_DisableWeekday(RTC_TypeDef *RTCx)
{
  ((RTCx->ALRMBR) &= ~((0x1U << (30U))));
}
# 2178 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetDay(RTC_TypeDef *RTCx, uint32_t Day)
{
  (((((RTC_TypeDef *) (0x40000000U + 0x2800U))->ALRMBR)) = ((((((((RTC_TypeDef *) (0x40000000U + 0x2800U))->ALRMBR))) & (~(((0x3U << (28U)) | (0xFU << (24U)))))) | ((((Day & 0xF0U) << ((28U) - 4U)) | ((Day & 0x0FU) << (24U)))))))
                                                                                                  ;
}
# 2192 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetDay(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMBR) & (((0x3U << (28U)) | (0xFU << (24U)))));
  return (uint32_t)((((temp & (0x3U << (28U))) >> (28U)) << 4U) | ((temp & (0xFU << (24U))) >> (24U)));
}
# 2214 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetWeekDay(RTC_TypeDef *RTCx, uint32_t WeekDay)
{
  (((RTCx->ALRMBR)) = ((((((RTCx->ALRMBR))) & (~((0xFU << (24U))))) | (WeekDay << (24U)))));
}
# 2232 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMBR) & ((0xFU << (24U)))) >> (24U));
}
# 2246 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetTimeFormat(RTC_TypeDef *RTCx, uint32_t TimeFormat)
{
  (((RTCx->ALRMBR)) = ((((((RTCx->ALRMBR))) & (~((0x1U << (22U))))) | (TimeFormat))));
}
# 2259 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetTimeFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMBR) & ((0x1U << (22U)))));
}
# 2273 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetHour(RTC_TypeDef *RTCx, uint32_t Hours)
{
  (((RTCx->ALRMBR)) = ((((((RTCx->ALRMBR))) & (~(((0x3U << (20U)) | (0xFU << (16U)))))) | ((((Hours & 0xF0U) << ((20U) - 4U)) | ((Hours & 0x0FU) << (16U)))))))
                                                                                                      ;
}
# 2287 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetHour(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMBR) & (((0x3U << (20U)) | (0xFU << (16U)))));
  return (uint32_t)((((temp & (0x3U << (20U))) >> (20U)) << 4U) | ((temp & (0xFU << (16U))) >> (16U)));
}
# 2304 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetMinute(RTC_TypeDef *RTCx, uint32_t Minutes)
{
  (((RTCx->ALRMBR)) = ((((((RTCx->ALRMBR))) & (~(((0x7U << (12U)) | (0xFU << (8U)))))) | ((((Minutes & 0xF0U) << ((12U) - 4U)) | ((Minutes & 0x0FU) << (8U)))))))
                                                                                                            ;
}
# 2318 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetMinute(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMBR) & (((0x7U << (12U)) | (0xFU << (8U)))));
  return (uint32_t)((((temp & (0x7U << (12U))) >> (12U)) << 4U) | ((temp & (0xFU << (8U))) >> (8U)));
}
# 2335 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetSecond(RTC_TypeDef *RTCx, uint32_t Seconds)
{
  (((RTCx->ALRMBR)) = ((((((RTCx->ALRMBR))) & (~(((0x7U << (4U)) | (0xFU << (0U)))))) | ((((Seconds & 0xF0U) << ((4U) - 4U)) | ((Seconds & 0x0FU) << (0U)))))))
                                                                                                          ;
}
# 2349 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetSecond(RTC_TypeDef *RTCx)
{
  register uint32_t temp = 0U;

  temp = ((RTCx->ALRMBR) & (((0x7U << (4U)) | (0xFU << (0U)))));
  return (uint32_t)((((temp & (0x7U << (4U))) >> (4U)) << 4U) | ((temp & (0xFU << (0U))) >> (0U)));
}
# 2375 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_ConfigTime(RTC_TypeDef *RTCx, uint32_t Format12_24, uint32_t Hours, uint32_t Minutes, uint32_t Seconds)
{
  register uint32_t temp = 0U;

  temp = Format12_24 | (((Hours & 0xF0U) << ((20U) - 4U)) | ((Hours & 0x0FU) << (16U))) |
         (((Minutes & 0xF0U) << ((12U) - 4U)) | ((Minutes & 0x0FU) << (8U))) |
         (((Seconds & 0xF0U) << ((4U) - 4U)) | ((Seconds & 0x0FU) << (0U)));

  (((RTCx->ALRMBR)) = ((((((RTCx->ALRMBR))) & (~((0x1U << (22U))| (0x3U << (20U)) | (0xFU << (16U)) | (0x7U << (12U)) | (0xFU << (8U)) | (0x7U << (4U)) | (0xFU << (0U))))) | (temp))));
}
# 2399 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_ALMB_GetTime(RTC_TypeDef *RTCx)
{
  return (uint32_t)((LL_RTC_ALMB_GetHour(RTCx) << 16U) | (LL_RTC_ALMB_GetMinute(RTCx) << 8U) | LL_RTC_ALMB_GetSecond(RTCx));
}
# 2413 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetSubSecondMask(RTC_TypeDef *RTCx, uint32_t Mask)
{
  (((RTCx->ALRMBSSR)) = ((((((RTCx->ALRMBSSR))) & (~((0xFU << (24U))))) | (Mask << (24U)))));
}







static inline uint32_t LL_RTC_ALMB_GetSubSecondMask(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMBSSR) & ((0xFU << (24U)))) >> (24U));
}
# 2436 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ALMB_SetSubSecond(RTC_TypeDef *RTCx, uint32_t Subsecond)
{
  (((RTCx->ALRMBSSR)) = ((((((RTCx->ALRMBSSR))) & (~((0x7FFFU << (0U))))) | (Subsecond))));
}







static inline uint32_t LL_RTC_ALMB_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->ALRMBSSR) & ((0x7FFFU << (0U)))));
}
# 2467 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TS_Enable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (11U))));
}
# 2479 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TS_Disable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (11U))));
}
# 2495 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TS_SetActiveEdge(RTC_TypeDef *RTCx, uint32_t Edge)
{
  (((RTCx->CR)) = ((((((RTCx->CR))) & (~((0x1U << (3U))))) | (Edge))));
}
# 2509 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetActiveEdge(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CR) & ((0x1U << (3U)))));
}
# 2522 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetTimeFormat(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSTR) & ((0x1U << (22U)))));
}
# 2535 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetHour(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSTR) & ((0x3U << (20U)) | (0xFU << (16U)))) >> (16U));
}
# 2548 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetMinute(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSTR) & ((0x7U << (12U)) | (0xFU << (8U)))) >> (8U));
}
# 2561 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSTR) & ((0x7U << (4U)) | (0xFU << (0U)))));
}
# 2579 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetTime(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSTR) & ((0x3U << (20U)) | (0xFU << (16U)) | (0x7U << (12U)) | (0xFU << (8U)) | (0x7U << (4U)) | (0xFU << (0U))))
                                                                                                                 );
}
# 2598 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetWeekDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSDR) & ((0x7U << (13U)))) >> (13U));
}
# 2623 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetMonth(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSDR) & ((0x1U << (12U)) | (0xFU << (8U)))) >> (8U));
}
# 2636 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetDay(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSDR) & ((0x3U << (4U)) | (0xFU << (0U)))));
}
# 2653 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetDate(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSDR) & ((0x7U << (13U)) | (0x1U << (12U)) | (0xFU << (8U)) | (0x3U << (4U)) | (0xFU << (0U)))));
}







static inline uint32_t LL_RTC_TS_GetSubSecond(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TSSSR) & ((0xFFFFU << (0U)))));
}
# 2676 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TS_EnableOnTamper(RTC_TypeDef *RTCx)
{
  ((RTCx->TAFCR) |= ((0x1U << (7U))));
}







static inline void LL_RTC_TS_DisableOnTamper(RTC_TypeDef *RTCx)
{
  ((RTCx->TAFCR) &= ~((0x1U << (7U))));
}
# 2705 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TS_SetPin(RTC_TypeDef *RTCx, uint32_t TSPin)
{
  (((RTCx->TAFCR)) = ((((((RTCx->TAFCR))) & (~((0x1U << (17U))))) | (TSPin))));
}
# 2722 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TS_GetPin(RTC_TypeDef *RTCx)
{
   return (uint32_t)(((RTCx->TAFCR) & ((0x1U << (17U)))));
}
# 2747 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_Enable(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  ((RTCx->TAFCR) |= (Tamper));
}
# 2764 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_Disable(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  ((RTCx->TAFCR) &= ~(Tamper));
}
# 2776 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_DisablePullUp(RTC_TypeDef *RTCx)
{
  ((RTCx->TAFCR) |= ((0x1U << (15U))));
}







static inline void LL_RTC_TAMPER_EnablePullUp(RTC_TypeDef *RTCx)
{
  ((RTCx->TAFCR) &= ~((0x1U << (15U))));
}
# 2805 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_SetPrecharge(RTC_TypeDef *RTCx, uint32_t Duration)
{
  (((RTCx->TAFCR)) = ((((((RTCx->TAFCR))) & (~((0x3U << (13U))))) | (Duration))));
}
# 2820 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TAMPER_GetPrecharge(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TAFCR) & ((0x3U << (13U)))));
}
# 2838 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_SetFilterCount(RTC_TypeDef *RTCx, uint32_t FilterCount)
{
  (((RTCx->TAFCR)) = ((((((RTCx->TAFCR))) & (~((0x3U << (11U))))) | (FilterCount))));
}
# 2853 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TAMPER_GetFilterCount(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TAFCR) & ((0x3U << (11U)))));
}
# 2875 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_SetSamplingFreq(RTC_TypeDef *RTCx, uint32_t SamplingFreq)
{
  (((RTCx->TAFCR)) = ((((((RTCx->TAFCR))) & (~((0x7U << (8U))))) | (SamplingFreq))));
}
# 2894 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TAMPER_GetSamplingFreq(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->TAFCR) & ((0x7U << (8U)))));
}
# 2912 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_EnableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  ((RTCx->TAFCR) |= (Tamper));
}
# 2929 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_DisableActiveLevel(RTC_TypeDef *RTCx, uint32_t Tamper)
{
  ((RTCx->TAFCR) &= ~(Tamper));
}
# 2946 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_TAMPER_SetPin(RTC_TypeDef *RTCx, uint32_t TamperPin)
{
  (((RTCx->TAFCR)) = ((((((RTCx->TAFCR))) & (~((0x1U << (16U))))) | (TamperPin))));
}
# 2963 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_TAMPER_GetPin(RTC_TypeDef *RTCx)
{
   return (uint32_t)(((RTCx->TAFCR) & ((0x1U << (16U)))));
}
# 2983 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_WAKEUP_Enable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (10U))));
}
# 2995 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_WAKEUP_Disable(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (10U))));
}







static inline uint32_t LL_RTC_WAKEUP_IsEnabled(RTC_TypeDef *RTCx)
{
  return (((RTCx->CR) & ((0x1U << (10U)))) == ((0x1U << (10U))));
}
# 3026 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_WAKEUP_SetClock(RTC_TypeDef *RTCx, uint32_t WakeupClock)
{
  (((RTCx->CR)) = ((((((RTCx->CR))) & (~((0x7U << (0U))))) | (WakeupClock))));
}
# 3043 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_WAKEUP_GetClock(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CR) & ((0x7U << (0U)))));
}
# 3056 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_WAKEUP_SetAutoReload(RTC_TypeDef *RTCx, uint32_t Value)
{
  (((RTCx->WUTR)) = ((((((RTCx->WUTR))) & (~((0xFFFFU << (0U))))) | (Value))));
}







static inline uint32_t LL_RTC_WAKEUP_GetAutoReload(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->WUTR) & ((0xFFFFU << (0U)))));
}
# 3108 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_BAK_SetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister, uint32_t Data)
{
  register uint32_t tmp = 0U;

  tmp = (uint32_t)(&(RTCx->BKP0R));
  tmp += (BackupRegister * 4U);


  *(volatile uint32_t *)tmp = (uint32_t)Data;
}
# 3146 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_BAK_GetRegister(RTC_TypeDef *RTCx, uint32_t BackupRegister)
{
  register uint32_t tmp = 0U;

  tmp = (uint32_t)(&(RTCx->BKP0R));
  tmp += (BackupRegister * 4U);


  return (*(volatile uint32_t *)tmp);
}
# 3177 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_CAL_SetOutputFreq(RTC_TypeDef *RTCx, uint32_t Frequency)
{
  (((RTCx->CR)) = ((((((RTCx->CR))) & (~((0x1U << (23U)) | (0x1U << (19U))))) | (Frequency))));
}
# 3192 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_CAL_GetOutputFreq(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CR) & ((0x1U << (23U)) | (0x1U << (19U)))));
}
# 3205 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_CAL_EnableCoarseDigital(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (7U))));
}
# 3218 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_CAL_DisableCoarseDigital(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (7U))));
}
# 3238 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_CAL_ConfigCoarseDigital(RTC_TypeDef* RTCx, uint32_t Sign, uint32_t Value)
{
  (((RTCx->CALIBR)) = ((((((RTCx->CALIBR))) & (~((0x1U << (7U)) | (0x1FU << (0U))))) | (Sign | Value))));
}







static inline uint32_t LL_RTC_CAL_GetCoarseDigitalValue(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CALIBR) & ((0x1FU << (0U)))));
}
# 3262 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_CAL_GetCoarseDigitalSign(RTC_TypeDef* RTCx)
{
  return (uint32_t)(((RTCx->CALIBR) & ((0x1U << (7U)))));
}
# 3278 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_CAL_SetPulse(RTC_TypeDef *RTCx, uint32_t Pulse)
{
  (((RTCx->CALR)) = ((((((RTCx->CALR))) & (~((0x1U << (15U))))) | (Pulse))));
}







static inline uint32_t LL_RTC_CAL_IsPulseInserted(RTC_TypeDef *RTCx)
{
  return (((RTCx->CALR) & ((0x1U << (15U)))) == ((0x1U << (15U))));
}
# 3307 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_CAL_SetPeriod(RTC_TypeDef *RTCx, uint32_t Period)
{
  (((RTCx->CALR)) = ((((((RTCx->CALR))) & (~((0x1U << (14U)) | (0x1U << (13U))))) | (Period))));
}
# 3322 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_CAL_GetPeriod(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CALR) & ((0x1U << (14U)) | (0x1U << (13U)))));
}
# 3336 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_CAL_SetMinus(RTC_TypeDef *RTCx, uint32_t CalibMinus)
{
  (((RTCx->CALR)) = ((((((RTCx->CALR))) & (~((0x1FFU << (0U))))) | (CalibMinus))));
}







static inline uint32_t LL_RTC_CAL_GetMinus(RTC_TypeDef *RTCx)
{
  return (uint32_t)(((RTCx->CALR) & ((0x1FFU << (0U)))));
}
# 3366 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_IsActiveFlag_RECALP(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (16U)))) == ((0x1U << (16U))));
}
# 3379 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_IsActiveFlag_TAMP2(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (14U)))) == ((0x1U << (14U))));
}
# 3391 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline uint32_t LL_RTC_IsActiveFlag_TAMP1(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (13U)))) == ((0x1U << (13U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_TSOV(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (12U)))) == ((0x1U << (12U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_TS(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (11U)))) == ((0x1U << (11U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_WUT(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (10U)))) == ((0x1U << (10U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_ALRB(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (9U)))) == ((0x1U << (9U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_ALRA(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (8U)))) == ((0x1U << (8U))));
}
# 3459 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ClearFlag_TAMP2(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (14U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}
# 3471 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_ClearFlag_TAMP1(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (13U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}







static inline void LL_RTC_ClearFlag_TSOV(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (12U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}







static inline void LL_RTC_ClearFlag_TS(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (11U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}







static inline void LL_RTC_ClearFlag_WUT(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (10U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}







static inline void LL_RTC_ClearFlag_ALRB(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (9U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}







static inline void LL_RTC_ClearFlag_ALRA(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (8U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}







static inline uint32_t LL_RTC_IsActiveFlag_INIT(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (6U)))) == ((0x1U << (6U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_RS(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}







static inline void LL_RTC_ClearFlag_RS(RTC_TypeDef *RTCx)
{
  ((RTCx->ISR) = ((~(((0x1U << (5U)) | (0x1U << (7U))) & 0x0000FFFFU) | (RTCx->ISR & (0x1U << (7U))))));
}







static inline uint32_t LL_RTC_IsActiveFlag_INITS(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (4U)))) == ((0x1U << (4U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_SHP(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (3U)))) == ((0x1U << (3U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_WUTW(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (2U)))) == ((0x1U << (2U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_ALRBW(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (1U)))) == ((0x1U << (1U))));
}







static inline uint32_t LL_RTC_IsActiveFlag_ALRAW(RTC_TypeDef *RTCx)
{
  return (((RTCx->ISR) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}
# 3634 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnableIT_TS(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (15U))));
}
# 3646 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DisableIT_TS(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (15U))));
}
# 3658 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnableIT_WUT(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (14U))));
}
# 3670 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DisableIT_WUT(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (14U))));
}
# 3682 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnableIT_ALRB(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (13U))));
}
# 3694 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DisableIT_ALRB(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (13U))));
}
# 3706 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_EnableIT_ALRA(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) |= ((0x1U << (12U))));
}
# 3718 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
static inline void LL_RTC_DisableIT_ALRA(RTC_TypeDef *RTCx)
{
  ((RTCx->CR) &= ~((0x1U << (12U))));
}







static inline void LL_RTC_EnableIT_TAMP(RTC_TypeDef *RTCx)
{
  ((RTCx->TAFCR) |= ((0x1U << (2U))));
}







static inline void LL_RTC_DisableIT_TAMP(RTC_TypeDef *RTCx)
{
  ((RTCx->TAFCR) &= ~((0x1U << (2U))));
}







static inline uint32_t LL_RTC_IsEnabledIT_TS(RTC_TypeDef *RTCx)
{
  return (((RTCx->CR) & ((0x1U << (15U)))) == ((0x1U << (15U))));
}







static inline uint32_t LL_RTC_IsEnabledIT_WUT(RTC_TypeDef *RTCx)
{
  return (((RTCx->CR) & ((0x1U << (14U)))) == ((0x1U << (14U))));
}







static inline uint32_t LL_RTC_IsEnabledIT_ALRB(RTC_TypeDef *RTCx)
{
  return (((RTCx->CR) & ((0x1U << (13U)))) == ((0x1U << (13U))));
}







static inline uint32_t LL_RTC_IsEnabledIT_ALRA(RTC_TypeDef *RTCx)
{
  return (((RTCx->CR) & ((0x1U << (12U)))) == ((0x1U << (12U))));
}







static inline uint32_t LL_RTC_IsEnabledIT_TAMP(RTC_TypeDef *RTCx)
{
  return (((RTCx->TAFCR) & ((0x1U << (2U))))
                                     == ((0x1U << (2U))));
}
# 3810 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h"
ErrorStatus LL_RTC_DeInit(RTC_TypeDef *RTCx);
ErrorStatus LL_RTC_Init(RTC_TypeDef *RTCx, LL_RTC_InitTypeDef *RTC_InitStruct);
void LL_RTC_StructInit(LL_RTC_InitTypeDef *RTC_InitStruct);
ErrorStatus LL_RTC_TIME_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_TimeTypeDef *RTC_TimeStruct);
void LL_RTC_TIME_StructInit(LL_RTC_TimeTypeDef *RTC_TimeStruct);
ErrorStatus LL_RTC_DATE_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_DateTypeDef *RTC_DateStruct);
void LL_RTC_DATE_StructInit(LL_RTC_DateTypeDef *RTC_DateStruct);
ErrorStatus LL_RTC_ALMA_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
ErrorStatus LL_RTC_ALMB_Init(RTC_TypeDef *RTCx, uint32_t RTC_Format, LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
void LL_RTC_ALMA_StructInit(LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
void LL_RTC_ALMB_StructInit(LL_RTC_AlarmTypeDef *RTC_AlarmStruct);
ErrorStatus LL_RTC_EnterInitMode(RTC_TypeDef *RTCx);
ErrorStatus LL_RTC_ExitInitMode(RTC_TypeDef *RTCx);
ErrorStatus LL_RTC_WaitForSynchro(RTC_TypeDef *RTCx);
# 60 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h" 1
# 92 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
typedef struct
{
  uint32_t BaudRate;



  uint32_t DataWidth;




  uint32_t StopBits;




  uint32_t Parity;




  uint32_t TransferDirection;




  uint32_t HardwareFlowControl;




  uint32_t OverSampling;




} LL_USART_InitTypeDef;




typedef struct
{
  uint32_t ClockOutput;






  uint32_t ClockPolarity;





  uint32_t ClockPhase;





  uint32_t LastBitClockPulse;






} LL_USART_ClockInitTypeDef;
# 427 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_Enable(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (13U))));
}
# 441 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_Disable(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (13U))));
}







static inline uint32_t LL_USART_IsEnabled(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (13U)))) == ((0x1U << (13U))));
}







static inline void LL_USART_EnableDirectionRx(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (2U))));
}







static inline void LL_USART_DisableDirectionRx(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (2U))));
}







static inline void LL_USART_EnableDirectionTx(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (3U))));
}







static inline void LL_USART_DisableDirectionTx(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (3U))));
}
# 514 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetTransferDirection(USART_TypeDef *USARTx, uint32_t TransferDirection)
{
  (((USARTx->CR1)) = ((((((USARTx->CR1))) & (~((0x1U << (2U)) | (0x1U << (3U))))) | (TransferDirection))));
}
# 530 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetTransferDirection(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR1) & ((0x1U << (2U)) | (0x1U << (3U)))));
}
# 549 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetParity(USART_TypeDef *USARTx, uint32_t Parity)
{
  (((USARTx->CR1)) = ((((((USARTx->CR1))) & (~((0x1U << (9U)) | (0x1U << (10U))))) | (Parity))));
}
# 564 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetParity(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR1) & ((0x1U << (9U)) | (0x1U << (10U)))));
}
# 578 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetWakeUpMethod(USART_TypeDef *USARTx, uint32_t Method)
{
  (((USARTx->CR1)) = ((((((USARTx->CR1))) & (~((0x1U << (11U))))) | (Method))));
}
# 591 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetWakeUpMethod(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR1) & ((0x1U << (11U)))));
}
# 605 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetDataWidth(USART_TypeDef *USARTx, uint32_t DataWidth)
{
  (((USARTx->CR1)) = ((((((USARTx->CR1))) & (~((0x1U << (12U))))) | (DataWidth))));
}
# 618 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetDataWidth(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR1) & ((0x1U << (12U)))));
}
# 632 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetOverSampling(USART_TypeDef *USARTx, uint32_t OverSampling)
{
  (((USARTx->CR1)) = ((((((USARTx->CR1))) & (~((0x1U << (15U))))) | (OverSampling))));
}
# 645 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetOverSampling(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR1) & ((0x1U << (15U)))));
}
# 661 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetLastClkPulseOutput(USART_TypeDef *USARTx, uint32_t LastBitClockPulse)
{
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0x1U << (8U))))) | (LastBitClockPulse))));
}
# 677 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetLastClkPulseOutput(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR2) & ((0x1U << (8U)))));
}
# 693 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetClockPhase(USART_TypeDef *USARTx, uint32_t ClockPhase)
{
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0x1U << (9U))))) | (ClockPhase))));
}
# 708 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetClockPhase(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR2) & ((0x1U << (9U)))));
}
# 724 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetClockPolarity(USART_TypeDef *USARTx, uint32_t ClockPolarity)
{
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0x1U << (10U))))) | (ClockPolarity))));
}
# 739 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetClockPolarity(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR2) & ((0x1U << (10U)))));
}
# 767 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigClock(USART_TypeDef *USARTx, uint32_t Phase, uint32_t Polarity, uint32_t LBCPOutput)
{
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0x1U << (9U)) | (0x1U << (10U)) | (0x1U << (8U))))) | (Phase | Polarity | LBCPOutput))));
}
# 780 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableSCLKOutput(USART_TypeDef *USARTx)
{
  ((USARTx->CR2) |= ((0x1U << (11U))));
}
# 793 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableSCLKOutput(USART_TypeDef *USARTx)
{
  ((USARTx->CR2) &= ~((0x1U << (11U))));
}
# 806 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledSCLKOutput(USART_TypeDef *USARTx)
{
  return (((USARTx->CR2) & ((0x1U << (11U)))) == ((0x1U << (11U))));
}
# 822 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetStopBitsLength(USART_TypeDef *USARTx, uint32_t StopBits)
{
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0x3U << (12U))))) | (StopBits))));
}
# 837 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetStopBitsLength(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR2) & ((0x3U << (12U)))));
}
# 867 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigCharacter(USART_TypeDef *USARTx, uint32_t DataWidth, uint32_t Parity,
                                              uint32_t StopBits)
{
  (((USARTx->CR1)) = ((((((USARTx->CR1))) & (~((0x1U << (9U)) | (0x1U << (10U)) | (0x1U << (12U))))) | (Parity | DataWidth))));
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0x3U << (12U))))) | (StopBits))));
}
# 883 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetNodeAddress(USART_TypeDef *USARTx, uint32_t NodeAddress)
{
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0xFU << (0U))))) | ((NodeAddress & (0xFU << (0U)))))));
}
# 895 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetNodeAddress(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR2) & ((0xFU << (0U)))));
}
# 908 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableRTSHWFlowCtrl(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (8U))));
}
# 921 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableRTSHWFlowCtrl(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (8U))));
}
# 934 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableCTSHWFlowCtrl(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (9U))));
}
# 947 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableCTSHWFlowCtrl(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (9U))));
}
# 966 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetHWFlowCtrl(USART_TypeDef *USARTx, uint32_t HardwareFlowControl)
{
  (((USARTx->CR3)) = ((((((USARTx->CR3))) & (~((0x1U << (8U)) | (0x1U << (9U))))) | (HardwareFlowControl))));
}
# 984 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetHWFlowCtrl(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR3) & ((0x1U << (8U)) | (0x1U << (9U)))));
}







static inline void LL_USART_EnableOneBitSamp(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (11U))));
}







static inline void LL_USART_DisableOneBitSamp(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (11U))));
}







static inline uint32_t LL_USART_IsEnabledOneBitSamp(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (11U)))) == ((0x1U << (11U))));
}
# 1037 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetBaudRate(USART_TypeDef *USARTx, uint32_t PeriphClk, uint32_t OverSampling,
                                          uint32_t BaudRate)
{
  if (OverSampling == (0x1U << (15U)))
  {
    USARTx->BRR = (uint16_t)((((((((((PeriphClk)))*25)/(2*(((BaudRate)))))/100) << 4) + ((((((((((PeriphClk)))*25)/(2*(((BaudRate))))) - ((((((((PeriphClk))))*25)/(2*((((BaudRate))))))/100) * 100)) * 8 + 50) / 100) & 0xF8) << 1)) + (((((((((PeriphClk)))*25)/(2*(((BaudRate))))) - ((((((((PeriphClk))))*25)/(2*((((BaudRate))))))/100) * 100)) * 8 + 50) / 100) & 0x07)));
  }
  else
  {
    USARTx->BRR = (uint16_t)((((((((((PeriphClk)))*25)/(4*(((BaudRate)))))/100) << 4) + (((((((((PeriphClk)))*25)/(4*(((BaudRate))))) - ((((((((PeriphClk))))*25)/(4*((((BaudRate))))))/100) * 100)) * 16 + 50) / 100) & 0xF0)) + (((((((((PeriphClk)))*25)/(4*(((BaudRate))))) - ((((((((PeriphClk))))*25)/(4*((((BaudRate))))))/100) * 100)) * 16 + 50) / 100) & 0x0F)));
  }
}
# 1062 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetBaudRate(USART_TypeDef *USARTx, uint32_t PeriphClk, uint32_t OverSampling)
{
  register uint32_t usartdiv = 0x0U;
  register uint32_t brrresult = 0x0U;

  usartdiv = USARTx->BRR;

  if (OverSampling == (0x1U << (15U)))
  {
    if ((usartdiv & 0xFFF7U) != 0U)
    {
      usartdiv = (uint16_t)((usartdiv & 0xFFF0U) | ((usartdiv & 0x0007U) << 1U)) ;
      brrresult = (PeriphClk * 2U) / usartdiv;
    }
  }
  else
  {
    if ((usartdiv & 0xFFFFU) != 0U)
    {
      brrresult = PeriphClk / usartdiv;
    }
  }
  return (brrresult);
}
# 1103 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableIrda(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (1U))));
}
# 1116 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableIrda(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (1U))));
}
# 1129 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledIrda(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (1U)))) == ((0x1U << (1U))));
}
# 1145 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetIrdaPowerMode(USART_TypeDef *USARTx, uint32_t PowerMode)
{
  (((USARTx->CR3)) = ((((((USARTx->CR3))) & (~((0x1U << (2U))))) | (PowerMode))));
}
# 1160 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetIrdaPowerMode(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR3) & ((0x1U << (2U)))));
}
# 1175 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetIrdaPrescaler(USART_TypeDef *USARTx, uint32_t PrescalerValue)
{
  (((USARTx->GTPR)) = ((((((USARTx->GTPR))) & (~((0xFFU << (0U))))) | (PrescalerValue))));
}
# 1189 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetIrdaPrescaler(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->GTPR) & ((0xFFU << (0U)))));
}
# 1210 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableSmartcardNACK(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (4U))));
}
# 1223 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableSmartcardNACK(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (4U))));
}
# 1236 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledSmartcardNACK(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (4U)))) == ((0x1U << (4U))));
}
# 1249 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableSmartcard(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (5U))));
}
# 1262 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableSmartcard(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (5U))));
}
# 1275 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledSmartcard(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}
# 1290 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetSmartcardPrescaler(USART_TypeDef *USARTx, uint32_t PrescalerValue)
{
  (((USARTx->GTPR)) = ((((((USARTx->GTPR))) & (~((0xFFU << (0U))))) | (PrescalerValue))));
}
# 1304 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetSmartcardPrescaler(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->GTPR) & ((0xFFU << (0U)))));
}
# 1319 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetSmartcardGuardTime(USART_TypeDef *USARTx, uint32_t GuardTime)
{
  (((USARTx->GTPR)) = ((((((USARTx->GTPR))) & (~((0xFFU << (8U))))) | (GuardTime << (8U)))));
}
# 1333 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetSmartcardGuardTime(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->GTPR) & ((0xFFU << (8U)))) >> (8U));
}
# 1354 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableHalfDuplex(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (3U))));
}
# 1367 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableHalfDuplex(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (3U))));
}
# 1380 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledHalfDuplex(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (3U)))) == ((0x1U << (3U))));
}
# 1404 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_SetLINBrkDetectionLen(USART_TypeDef *USARTx, uint32_t LINBDLength)
{
  (((USARTx->CR2)) = ((((((USARTx->CR2))) & (~((0x1U << (5U))))) | (LINBDLength))));
}
# 1419 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_GetLINBrkDetectionLen(USART_TypeDef *USARTx)
{
  return (uint32_t)(((USARTx->CR2) & ((0x1U << (5U)))));
}
# 1432 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableLIN(USART_TypeDef *USARTx)
{
  ((USARTx->CR2) |= ((0x1U << (14U))));
}
# 1445 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableLIN(USART_TypeDef *USARTx)
{
  ((USARTx->CR2) &= ~((0x1U << (14U))));
}
# 1458 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledLIN(USART_TypeDef *USARTx)
{
  return (((USARTx->CR2) & ((0x1U << (14U)))) == ((0x1U << (14U))));
}
# 1496 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigAsyncMode(USART_TypeDef *USARTx)
{



  ((USARTx->CR2) &= ~(((0x1U << (14U)) | (0x1U << (11U)))));
  ((USARTx->CR3) &= ~(((0x1U << (5U)) | (0x1U << (1U)) | (0x1U << (3U)))));
}
# 1532 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigSyncMode(USART_TypeDef *USARTx)
{



  ((USARTx->CR2) &= ~(((0x1U << (14U)))));
  ((USARTx->CR3) &= ~(((0x1U << (5U)) | (0x1U << (1U)) | (0x1U << (3U)))));

  ((USARTx->CR2) |= ((0x1U << (11U))));
}
# 1572 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigLINMode(USART_TypeDef *USARTx)
{



  ((USARTx->CR2) &= ~(((0x1U << (11U)) | (0x3U << (12U)))));
  ((USARTx->CR3) &= ~(((0x1U << (1U)) | (0x1U << (5U)) | (0x1U << (3U)))));

  ((USARTx->CR2) |= ((0x1U << (14U))));
}
# 1610 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigHalfDuplexMode(USART_TypeDef *USARTx)
{



  ((USARTx->CR2) &= ~(((0x1U << (14U)) | (0x1U << (11U)))));
  ((USARTx->CR3) &= ~(((0x1U << (5U)) | (0x1U << (1U)))));

  ((USARTx->CR3) |= ((0x1U << (3U))));
}
# 1650 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigSmartcardMode(USART_TypeDef *USARTx)
{



  ((USARTx->CR2) &= ~(((0x1U << (14U)))));
  ((USARTx->CR3) &= ~(((0x1U << (1U)) | (0x1U << (3U)))));


  ((USARTx->CR2) |= (((0x1U << (12U)) | (0x2U << (12U)) | (0x1U << (11U)))));

  ((USARTx->CR3) |= ((0x1U << (5U))));
}
# 1693 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigIrdaMode(USART_TypeDef *USARTx)
{



  ((USARTx->CR2) &= ~(((0x1U << (14U)) | (0x1U << (11U)) | (0x3U << (12U)))));
  ((USARTx->CR3) &= ~(((0x1U << (5U)) | (0x1U << (3U)))));

  ((USARTx->CR3) |= ((0x1U << (1U))));
}
# 1731 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ConfigMultiProcessMode(USART_TypeDef *USARTx)
{



  ((USARTx->CR2) &= ~(((0x1U << (14U)) | (0x1U << (11U)))));
  ((USARTx->CR3) &= ~(((0x1U << (5U)) | (0x1U << (3U)) | (0x1U << (1U)))));
}
# 1754 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsActiveFlag_PE(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}







static inline uint32_t LL_USART_IsActiveFlag_FE(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (1U)))) == ((0x1U << (1U))));
}







static inline uint32_t LL_USART_IsActiveFlag_NE(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (2U)))) == ((0x1U << (2U))));
}







static inline uint32_t LL_USART_IsActiveFlag_ORE(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (3U)))) == ((0x1U << (3U))));
}







static inline uint32_t LL_USART_IsActiveFlag_IDLE(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (4U)))) == ((0x1U << (4U))));
}







static inline uint32_t LL_USART_IsActiveFlag_RXNE(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}







static inline uint32_t LL_USART_IsActiveFlag_TC(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (6U)))) == ((0x1U << (6U))));
}







static inline uint32_t LL_USART_IsActiveFlag_TXE(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (7U)))) == ((0x1U << (7U))));
}
# 1844 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsActiveFlag_LBD(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (8U)))) == ((0x1U << (8U))));
}
# 1857 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsActiveFlag_nCTS(USART_TypeDef *USARTx)
{
  return (((USARTx->SR) & ((0x1U << (9U)))) == ((0x1U << (9U))));
}







static inline uint32_t LL_USART_IsActiveFlag_SBK(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}







static inline uint32_t LL_USART_IsActiveFlag_RWU(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (1U)))) == ((0x1U << (1U))));
}
# 1894 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ClearFlag_PE(USART_TypeDef *USARTx)
{
  volatile uint32_t tmpreg;
  tmpreg = USARTx->SR;
  (void) tmpreg;
  tmpreg = USARTx->DR;
  (void) tmpreg;
}
# 1913 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ClearFlag_FE(USART_TypeDef *USARTx)
{
  volatile uint32_t tmpreg;
  tmpreg = USARTx->SR;
  (void) tmpreg;
  tmpreg = USARTx->DR;
  (void) tmpreg;
}
# 1932 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ClearFlag_NE(USART_TypeDef *USARTx)
{
  volatile uint32_t tmpreg;
  tmpreg = USARTx->SR;
  (void) tmpreg;
  tmpreg = USARTx->DR;
  (void) tmpreg;
}
# 1951 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ClearFlag_ORE(USART_TypeDef *USARTx)
{
  volatile uint32_t tmpreg;
  tmpreg = USARTx->SR;
  (void) tmpreg;
  tmpreg = USARTx->DR;
  (void) tmpreg;
}
# 1970 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ClearFlag_IDLE(USART_TypeDef *USARTx)
{
  volatile uint32_t tmpreg;
  tmpreg = USARTx->SR;
  (void) tmpreg;
  tmpreg = USARTx->DR;
  (void) tmpreg;
}







static inline void LL_USART_ClearFlag_TC(USART_TypeDef *USARTx)
{
  ((USARTx->SR) = (~((0x1U << (6U)))));
}







static inline void LL_USART_ClearFlag_RXNE(USART_TypeDef *USARTx)
{
  ((USARTx->SR) = (~((0x1U << (5U)))));
}
# 2009 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ClearFlag_LBD(USART_TypeDef *USARTx)
{
  ((USARTx->SR) = (~((0x1U << (8U)))));
}
# 2022 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_ClearFlag_nCTS(USART_TypeDef *USARTx)
{
  ((USARTx->SR) = (~((0x1U << (9U)))));
}
# 2041 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableIT_IDLE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (4U))));
}







static inline void LL_USART_EnableIT_RXNE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (5U))));
}







static inline void LL_USART_EnableIT_TC(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (6U))));
}







static inline void LL_USART_EnableIT_TXE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (7U))));
}







static inline void LL_USART_EnableIT_PE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (8U))));
}
# 2098 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableIT_LBD(USART_TypeDef *USARTx)
{
  ((USARTx->CR2) |= ((0x1U << (6U))));
}
# 2113 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableIT_ERROR(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (0U))));
}
# 2126 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableIT_CTS(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (10U))));
}







static inline void LL_USART_DisableIT_IDLE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (4U))));
}







static inline void LL_USART_DisableIT_RXNE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (5U))));
}







static inline void LL_USART_DisableIT_TC(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (6U))));
}







static inline void LL_USART_DisableIT_TXE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (7U))));
}







static inline void LL_USART_DisableIT_PE(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (8U))));
}
# 2194 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableIT_LBD(USART_TypeDef *USARTx)
{
  ((USARTx->CR2) &= ~((0x1U << (6U))));
}
# 2209 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableIT_ERROR(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (0U))));
}
# 2222 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_DisableIT_CTS(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (10U))));
}







static inline uint32_t LL_USART_IsEnabledIT_IDLE(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (4U)))) == ((0x1U << (4U))));
}







static inline uint32_t LL_USART_IsEnabledIT_RXNE(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (5U)))) == ((0x1U << (5U))));
}







static inline uint32_t LL_USART_IsEnabledIT_TC(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (6U)))) == ((0x1U << (6U))));
}







static inline uint32_t LL_USART_IsEnabledIT_TXE(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (7U)))) == ((0x1U << (7U))));
}







static inline uint32_t LL_USART_IsEnabledIT_PE(USART_TypeDef *USARTx)
{
  return (((USARTx->CR1) & ((0x1U << (8U)))) == ((0x1U << (8U))));
}
# 2290 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledIT_LBD(USART_TypeDef *USARTx)
{
  return (((USARTx->CR2) & ((0x1U << (6U)))) == ((0x1U << (6U))));
}







static inline uint32_t LL_USART_IsEnabledIT_ERROR(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (0U)))) == ((0x1U << (0U))));
}
# 2314 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_IsEnabledIT_CTS(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (10U)))) == ((0x1U << (10U))));
}
# 2333 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_EnableDMAReq_RX(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (6U))));
}







static inline void LL_USART_DisableDMAReq_RX(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (6U))));
}







static inline uint32_t LL_USART_IsEnabledDMAReq_RX(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (6U)))) == ((0x1U << (6U))));
}







static inline void LL_USART_EnableDMAReq_TX(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) |= ((0x1U << (7U))));
}







static inline void LL_USART_DisableDMAReq_TX(USART_TypeDef *USARTx)
{
  ((USARTx->CR3) &= ~((0x1U << (7U))));
}







static inline uint32_t LL_USART_IsEnabledDMAReq_TX(USART_TypeDef *USARTx)
{
  return (((USARTx->CR3) & ((0x1U << (7U)))) == ((0x1U << (7U))));
}
# 2400 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint32_t LL_USART_DMA_GetRegAddr(USART_TypeDef *USARTx)
{

  return ((uint32_t) &(USARTx->DR));
}
# 2420 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline uint8_t LL_USART_ReceiveData8(USART_TypeDef *USARTx)
{
  return (uint8_t)(((USARTx->DR) & ((0x1FFU << (0U)))));
}







static inline uint16_t LL_USART_ReceiveData9(USART_TypeDef *USARTx)
{
  return (uint16_t)(((USARTx->DR) & ((0x1FFU << (0U)))));
}
# 2443 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_TransmitData8(USART_TypeDef *USARTx, uint8_t Value)
{
  USARTx->DR = Value;
}
# 2455 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_TransmitData9(USART_TypeDef *USARTx, uint16_t Value)
{
  USARTx->DR = Value & 0x1FFU;
}
# 2474 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
static inline void LL_USART_RequestBreakSending(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (0U))));
}







static inline void LL_USART_RequestEnterMuteMode(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) |= ((0x1U << (1U))));
}







static inline void LL_USART_RequestExitMuteMode(USART_TypeDef *USARTx)
{
  ((USARTx->CR1) &= ~((0x1U << (1U))));
}
# 2509 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h"
ErrorStatus LL_USART_DeInit(USART_TypeDef *USARTx);
ErrorStatus LL_USART_Init(USART_TypeDef *USARTx, LL_USART_InitTypeDef *USART_InitStruct);
void LL_USART_StructInit(LL_USART_InitTypeDef *USART_InitStruct);
ErrorStatus LL_USART_ClockInit(USART_TypeDef *USARTx, LL_USART_ClockInitTypeDef *USART_ClockInitStruct);
void LL_USART_ClockStructInit(LL_USART_ClockInitTypeDef *USART_ClockInitStruct);
# 61 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h" 1
# 49 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h"
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_fsmc.h" 1
# 67 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_fsmc.h"
typedef struct
{
  uint32_t NSBank;


  uint32_t DataAddressMux;



  uint32_t MemoryType;



  uint32_t MemoryDataWidth;


  uint32_t BurstAccessMode;



  uint32_t WaitSignalPolarity;



  uint32_t WrapMode;




  uint32_t WaitSignalActive;




  uint32_t WriteOperation;


  uint32_t WaitSignal;



  uint32_t ExtendedMode;


  uint32_t AsynchronousWait;



  uint32_t WriteBurst;


  uint32_t ContinuousClock;





  uint32_t WriteFifo;





  uint32_t PageSize;

}FSMC_NORSRAM_InitTypeDef;




typedef struct
{
  uint32_t AddressSetupTime;




  uint32_t AddressHoldTime;




  uint32_t DataSetupTime;





  uint32_t BusTurnAroundDuration;




  uint32_t CLKDivision;




  uint32_t DataLatency;







  uint32_t AccessMode;


}FSMC_NORSRAM_TimingTypeDef;





typedef struct
{
  uint32_t NandBank;


  uint32_t Waitfeature;


  uint32_t MemoryDataWidth;


  uint32_t EccComputation;


  uint32_t ECCPageSize;


  uint32_t TCLRSetupTime;



  uint32_t TARSetupTime;



}FSMC_NAND_InitTypeDef;




typedef struct
{
  uint32_t SetupTime;





  uint32_t WaitSetupTime;





  uint32_t HoldSetupTime;






  uint32_t HiZSetupTime;





}FSMC_NAND_PCC_TimingTypeDef;




typedef struct
{
  uint32_t Waitfeature;


  uint32_t TCLRSetupTime;



  uint32_t TARSetupTime;



}FSMC_PCCARD_InitTypeDef;
# 965 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_fsmc.h"
HAL_StatusTypeDef FSMC_NORSRAM_Init(FSMC_Bank1_TypeDef *Device, FSMC_NORSRAM_InitTypeDef *Init);
HAL_StatusTypeDef FSMC_NORSRAM_Timing_Init(FSMC_Bank1_TypeDef *Device, FSMC_NORSRAM_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef FSMC_NORSRAM_Extended_Timing_Init(FSMC_Bank1E_TypeDef *Device, FSMC_NORSRAM_TimingTypeDef *Timing, uint32_t Bank, uint32_t ExtendedMode);
HAL_StatusTypeDef FSMC_NORSRAM_DeInit(FSMC_Bank1_TypeDef *Device, FSMC_Bank1E_TypeDef *ExDevice, uint32_t Bank);







HAL_StatusTypeDef FSMC_NORSRAM_WriteOperation_Enable(FSMC_Bank1_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef FSMC_NORSRAM_WriteOperation_Disable(FSMC_Bank1_TypeDef *Device, uint32_t Bank);
# 992 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_fsmc.h"
HAL_StatusTypeDef FSMC_NAND_Init(FSMC_Bank2_3_TypeDef *Device, FSMC_NAND_InitTypeDef *Init);
HAL_StatusTypeDef FSMC_NAND_CommonSpace_Timing_Init(FSMC_Bank2_3_TypeDef *Device, FSMC_NAND_PCC_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef FSMC_NAND_AttributeSpace_Timing_Init(FSMC_Bank2_3_TypeDef *Device, FSMC_NAND_PCC_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef FSMC_NAND_DeInit(FSMC_Bank2_3_TypeDef *Device, uint32_t Bank);







HAL_StatusTypeDef FSMC_NAND_ECC_Enable(FSMC_Bank2_3_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef FSMC_NAND_ECC_Disable(FSMC_Bank2_3_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef FSMC_NAND_GetECC(FSMC_Bank2_3_TypeDef *Device, uint32_t *ECCval, uint32_t Bank, uint32_t Timeout);
# 1019 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_fsmc.h"
HAL_StatusTypeDef FSMC_PCCARD_Init(FSMC_Bank4_TypeDef *Device, FSMC_PCCARD_InitTypeDef *Init);
HAL_StatusTypeDef FSMC_PCCARD_CommonSpace_Timing_Init(FSMC_Bank4_TypeDef *Device, FSMC_NAND_PCC_TimingTypeDef *Timing);
HAL_StatusTypeDef FSMC_PCCARD_AttributeSpace_Timing_Init(FSMC_Bank4_TypeDef *Device, FSMC_NAND_PCC_TimingTypeDef *Timing);
HAL_StatusTypeDef FSMC_PCCARD_IOSpace_Timing_Init(FSMC_Bank4_TypeDef *Device, FSMC_NAND_PCC_TimingTypeDef *Timing);
HAL_StatusTypeDef FSMC_PCCARD_DeInit(FSMC_Bank4_TypeDef *Device);
# 50 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h" 2
# 79 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h"
typedef enum
{
  HAL_SRAM_STATE_RESET = 0x00U,
  HAL_SRAM_STATE_READY = 0x01U,
  HAL_SRAM_STATE_BUSY = 0x02U,
  HAL_SRAM_STATE_ERROR = 0x03U,
  HAL_SRAM_STATE_PROTECTED = 0x04U

}HAL_SRAM_StateTypeDef;




typedef struct
{
  FSMC_Bank1_TypeDef *Instance;

  FSMC_Bank1E_TypeDef *Extended;

  FSMC_NORSRAM_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_SRAM_StateTypeDef State;

  DMA_HandleTypeDef *hdma;

}SRAM_HandleTypeDef;
# 137 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h"
HAL_StatusTypeDef HAL_SRAM_Init(SRAM_HandleTypeDef *hsram, FSMC_NORSRAM_TimingTypeDef *Timing, FSMC_NORSRAM_TimingTypeDef *ExtTiming);
HAL_StatusTypeDef HAL_SRAM_DeInit(SRAM_HandleTypeDef *hsram);
void HAL_SRAM_MspInit(SRAM_HandleTypeDef *hsram);
void HAL_SRAM_MspDeInit(SRAM_HandleTypeDef *hsram);

void HAL_SRAM_DMA_XferCpltCallback(DMA_HandleTypeDef *hdma);
void HAL_SRAM_DMA_XferErrorCallback(DMA_HandleTypeDef *hdma);
# 152 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h"
HAL_StatusTypeDef HAL_SRAM_Read_8b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint8_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_8b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint8_t *pSrcBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Read_16b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint16_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_16b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint16_t *pSrcBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Read_32b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_32b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pSrcBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Read_DMA(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_DMA(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pSrcBuffer, uint32_t BufferSize);
# 168 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h"
HAL_StatusTypeDef HAL_SRAM_WriteOperation_Enable(SRAM_HandleTypeDef *hsram);
HAL_StatusTypeDef HAL_SRAM_WriteOperation_Disable(SRAM_HandleTypeDef *hsram);
# 178 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_sram.h"
HAL_SRAM_StateTypeDef HAL_SRAM_GetState(SRAM_HandleTypeDef *hsram);
# 62 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_nor.h" 1
# 78 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_nor.h"
typedef enum
{
  HAL_NOR_STATE_RESET = 0x00U,
  HAL_NOR_STATE_READY = 0x01U,
  HAL_NOR_STATE_BUSY = 0x02U,
  HAL_NOR_STATE_ERROR = 0x03U,
  HAL_NOR_STATE_PROTECTED = 0x04U
}HAL_NOR_StateTypeDef;




typedef enum
{
  HAL_NOR_STATUS_SUCCESS = 0U,
  HAL_NOR_STATUS_ONGOING,
  HAL_NOR_STATUS_ERROR,
  HAL_NOR_STATUS_TIMEOUT
}HAL_NOR_StatusTypeDef;




typedef struct
{
  uint16_t Manufacturer_Code;

  uint16_t Device_Code1;

  uint16_t Device_Code2;

  uint16_t Device_Code3;



}NOR_IDTypeDef;




typedef struct
{




  uint16_t CFI_1;

  uint16_t CFI_2;

  uint16_t CFI_3;

  uint16_t CFI_4;
}NOR_CFITypeDef;




typedef struct
{
  FSMC_Bank1_TypeDef *Instance;

  FSMC_Bank1E_TypeDef *Extended;

  FSMC_NORSRAM_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_NOR_StateTypeDef State;

}NOR_HandleTypeDef;
# 176 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_nor.h"
HAL_StatusTypeDef HAL_NOR_Init(NOR_HandleTypeDef *hnor, FSMC_NORSRAM_TimingTypeDef *Timing, FSMC_NORSRAM_TimingTypeDef *ExtTiming);
HAL_StatusTypeDef HAL_NOR_DeInit(NOR_HandleTypeDef *hnor);
void HAL_NOR_MspInit(NOR_HandleTypeDef *hnor);
void HAL_NOR_MspDeInit(NOR_HandleTypeDef *hnor);
void HAL_NOR_MspWait(NOR_HandleTypeDef *hnor, uint32_t Timeout);
# 189 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_nor.h"
HAL_StatusTypeDef HAL_NOR_Read_ID(NOR_HandleTypeDef *hnor, NOR_IDTypeDef *pNOR_ID);
HAL_StatusTypeDef HAL_NOR_ReturnToReadMode(NOR_HandleTypeDef *hnor);
HAL_StatusTypeDef HAL_NOR_Read(NOR_HandleTypeDef *hnor, uint32_t *pAddress, uint16_t *pData);
HAL_StatusTypeDef HAL_NOR_Program(NOR_HandleTypeDef *hnor, uint32_t *pAddress, uint16_t *pData);

HAL_StatusTypeDef HAL_NOR_ReadBuffer(NOR_HandleTypeDef *hnor, uint32_t uwAddress, uint16_t *pData, uint32_t uwBufferSize);
HAL_StatusTypeDef HAL_NOR_ProgramBuffer(NOR_HandleTypeDef *hnor, uint32_t uwAddress, uint16_t *pData, uint32_t uwBufferSize);

HAL_StatusTypeDef HAL_NOR_Erase_Block(NOR_HandleTypeDef *hnor, uint32_t BlockAddress, uint32_t Address);
HAL_StatusTypeDef HAL_NOR_Erase_Chip(NOR_HandleTypeDef *hnor, uint32_t Address);
HAL_StatusTypeDef HAL_NOR_Read_CFI(NOR_HandleTypeDef *hnor, NOR_CFITypeDef *pNOR_CFI);
# 208 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_nor.h"
HAL_StatusTypeDef HAL_NOR_WriteOperation_Enable(NOR_HandleTypeDef *hnor);
HAL_StatusTypeDef HAL_NOR_WriteOperation_Disable(NOR_HandleTypeDef *hnor);
# 218 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_nor.h"
HAL_NOR_StateTypeDef HAL_NOR_GetState(NOR_HandleTypeDef *hnor);
HAL_NOR_StatusTypeDef HAL_NOR_GetStatus(NOR_HandleTypeDef *hnor, uint32_t Address, uint32_t Timeout);
# 63 "./boards/stm32f4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/CMSIS/STM32F4xx/Include/stm32f407xx.h" 1
# 64 "./boards/stm32f4xx_hal_conf_base.h" 2
# 9 "boards/CoreBoardV2/stm32f4xx_hal_conf.h" 2
# 49 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h" 2
# 194 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h"
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void HAL_MspInit(void);
void HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick (uint32_t TickPriority);
# 207 "../../lib/stm32lib/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h"
void HAL_IncTick(void);
void HAL_Delay(volatile uint32_t Delay);
uint32_t HAL_GetTick(void);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);
uint32_t HAL_GetHalVersion(void);
uint32_t HAL_GetREVID(void);
uint32_t HAL_GetDEVID(void);
void HAL_DBGMCU_EnableDBGSleepMode(void);
void HAL_DBGMCU_DisableDBGSleepMode(void);
void HAL_DBGMCU_EnableDBGStopMode(void);
void HAL_DBGMCU_DisableDBGStopMode(void);
void HAL_DBGMCU_EnableDBGStandbyMode(void);
void HAL_DBGMCU_DisableDBGStandbyMode(void);
void HAL_EnableCompensationCell(void);
void HAL_DisableCompensationCell(void);
void HAL_GetUID(uint32_t *UID);
# 31 "./mpconfigboard_common.h" 2
# 33 "./mpconfigport.h" 2
# 171 "./mpconfigport.h"
extern const struct _mp_obj_module_t machine_module;
extern const struct _mp_obj_module_t pyb_module;
extern const struct _mp_obj_module_t stm_module;
extern const struct _mp_obj_module_t mp_module_ubinascii;
extern const struct _mp_obj_module_t mp_module_ure;
extern const struct _mp_obj_module_t mp_module_uzlib;
extern const struct _mp_obj_module_t mp_module_ujson;
extern const struct _mp_obj_module_t mp_module_uheapq;
extern const struct _mp_obj_module_t mp_module_uhashlib;
extern const struct _mp_obj_module_t mp_module_uos;
extern const struct _mp_obj_module_t mp_module_utime;
extern const struct _mp_obj_module_t mp_module_usocket;
extern const struct _mp_obj_module_t mp_module_network;
extern const struct _mp_obj_module_t mp_module_onewire;
# 256 "./mpconfigport.h"
extern const struct _mod_network_nic_type_t mod_network_nic_type_wiznet5k;
# 372 "./mpconfigport.h"
typedef int mp_int_t;
typedef unsigned int mp_uint_t;


typedef long mp_off_t;
# 386 "./mpconfigport.h"
static inline void enable_irq(mp_uint_t state) {
    __set_PRIMASK(state);
}

static inline mp_uint_t disable_irq(void) {
    mp_uint_t state = __get_PRIMASK();
    __disable_irq();
    return state;
}
# 451 "./mpconfigport.h"
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/alloca.h" 1 3
# 10 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/alloca.h" 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/_ansi.h" 1 3
# 15 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/_ansi.h" 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/newlib.h" 1 3
# 16 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/config.h" 1 3



# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/config.h" 2 3
# 17 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/_ansi.h" 2 3
# 11 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/alloca.h" 2 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 1 3
# 13 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stddef.h" 1 3 4
# 149 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stddef.h" 3 4

# 149 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 216 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 328 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 15 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 1 3
# 24 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/machine/_types.h" 1 3
# 25 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 2 3
# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/lock.h" 1 3





typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 26 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 88 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 129 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 3
typedef unsigned int __size_t;
# 145 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 3
typedef signed int _ssize_t;
# 156 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;


# 1 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stddef.h" 1 3 4
# 357 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/lib/gcc/arm-none-eabi/5.4.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;



typedef unsigned long __clock_t;


typedef long __time_t;


typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;




typedef char * __va_list;
# 16 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 287 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (* __cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;
  __FILE __sf[3];
};
# 766 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/usr/local/share/gcc-arm-none-eabi-5_4-2016q3/arm-none-eabi/include/alloca.h" 2 3
# 452 "./mpconfigport.h" 2



# 454 "./mpconfigport.h"
uint32_t rng_get(void);
# 63 "../../py/mpconfig.h" 2
# 769 "../../py/mpconfig.h"
typedef float mp_float_t;
# 30 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

Q()
Q(*)
Q(_)
Q(/)

Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
# 96 "<stdin>"
Q(/flash)
Q(/flash/lib)
Q(/sd)
Q(/sd/lib)


Q(/)



Q(VCP)
Q(MSC)
Q(VCP+MSC)
Q(VCP+HID)
Q(VCP+MSC+HID)
# 122 "<stdin>"
Q(A0)
Q(A1)
Q(A10)
Q(A11)
Q(A12)
Q(A13)
Q(A14)
Q(A15)
Q(A2)
Q(A3)
Q(A4)
Q(A5)
Q(A6)
Q(A7)
Q(A8)
Q(A9)
Q(AF1_TIM1)
Q(AF1_TIM2)
Q(AF2_TIM3)
Q(AF2_TIM4)
Q(AF2_TIM5)
Q(AF3_TIM10)
Q(AF3_TIM11)
Q(AF3_TIM8)
Q(AF3_TIM9)
# 157 "<stdin>"
Q(AF5_I2S2)





Q(AF5_SPI1)


Q(AF5_SPI2)


Q(AF6_I2S2)





Q(AF6_SPI3)





Q(AF7_USART1)


Q(AF7_USART2)
# 204 "<stdin>"
Q(AF9_TIM12)
Q(AF9_TIM13)
Q(AF9_TIM14)
Q(B0)
Q(B1)
Q(B10)
Q(B11)
Q(B12)
Q(B13)
Q(B14)
Q(B15)
Q(B2)
Q(B3)
Q(B4)
Q(B5)
Q(B6)
Q(B7)
Q(B8)
Q(B9)
Q(C0)
Q(C1)
Q(C10)
Q(C11)
Q(C12)
Q(C13)
Q(C14)
Q(C15)
Q(C2)
Q(C3)
Q(C4)
Q(C5)
Q(C6)
Q(C7)
Q(C8)
Q(C9)
Q(D0)
Q(D1)
Q(D10)
Q(D11)
Q(D12)
Q(D13)
Q(D14)
Q(D15)
Q(D2)
Q(D3)
Q(D4)
Q(D5)
Q(D6)
Q(D7)
Q(D8)
Q(D9)
Q(E0)
Q(E1)
Q(E10)
Q(E11)
Q(E12)
Q(E13)
Q(E14)
Q(E15)
Q(E2)
Q(E3)
Q(E4)
Q(E5)
Q(E6)
Q(E7)
Q(E8)
Q(E9)
Q(F0)
Q(F1)
Q(F10)
Q(F11)
Q(F12)
Q(F13)
Q(F14)
Q(F15)
Q(F2)
Q(F3)
Q(F4)
Q(F5)
Q(F6)
Q(F7)
Q(F8)
Q(F9)
Q(G0)
Q(G1)
Q(G10)
Q(G11)
Q(G12)
Q(G13)
Q(G14)
Q(G15)
Q(G2)
Q(G3)
Q(G4)
Q(G5)
Q(G6)
Q(G7)
Q(G8)
Q(G9)
Q(H0)
Q(H1)
Q(LED_BLUE)
Q(LED_GREEN)
Q(LED_ORANGE)
Q(LED_RED)
Q(PA0)
Q(PA1)
Q(PA10)
Q(PA13)
Q(PA14)
Q(PA15)
Q(PA2)
Q(PA3)
Q(PA4)
Q(PA5)
Q(PA6)
Q(PA7)
Q(PA8)
Q(PA9)
Q(PB0)
Q(PB1)
Q(PB10)
Q(PB11)
Q(PB12)
Q(PB13)
Q(PB14)
Q(PB15)
Q(PB2)
Q(PB3)
Q(PB4)
Q(PB5)
Q(PB6)
Q(PB7)
Q(PB8)
Q(PB9)
Q(PC0)
Q(PC1)
Q(PC10)
Q(PC11)
Q(PC12)
Q(PC13)
Q(PC14)
Q(PC15)
Q(PC2)
Q(PC3)
Q(PC4)
Q(PC5)
Q(PC6)
Q(PC7)
Q(PC8)
Q(PC9)
Q(PD0)
Q(PD1)
Q(PD10)
Q(PD11)
Q(PD12)
Q(PD13)
Q(PD14)
Q(PD15)
Q(PD2)
Q(PD3)
Q(PD4)
Q(PD5)
Q(PD6)
Q(PD7)
Q(PD8)
Q(PD9)
Q(PE0)
Q(PE1)
Q(PE10)
Q(PE11)
Q(PE12)
Q(PE13)
Q(PE14)
Q(PE15)
Q(PE2)
Q(PE3)
Q(PE4)
Q(PE5)
Q(PE6)
Q(PE7)
Q(PE8)
Q(PE9)
Q(PF0)
Q(PF1)
Q(PF10)
Q(PF11)
Q(PF12)
Q(PF13)
Q(PF14)
Q(PF15)
Q(PF2)
Q(PF3)
Q(PF4)
Q(PF5)
Q(PF6)
Q(PF7)
Q(PF8)
Q(PF9)
Q(PG0)
Q(PG1)
Q(PG10)
Q(PG11)
Q(PG12)
Q(PG13)
Q(PG14)
Q(PG15)
Q(PG2)
Q(PG3)
Q(PG4)
Q(PG5)
Q(PG6)
Q(PG7)
Q(PG8)
Q(PG9)
Q(PH0)
Q(PH1)
Q(SPIFLASH_CS)
Q(SPIFLASH_MISO)
Q(SPIFLASH_MOSI)
Q(SPIFLASH_SCK)
Q(SW)
Q(USB_DM)
Q(USB_DP)

Q(ADC1)
Q(ADC123_COMMON)
Q(ADC2)
Q(ADC3)
Q(ADC_CR1)
Q(ADC_CR2)
Q(ADC_DR)
Q(ADC_HTR)
Q(ADC_JDR1)
Q(ADC_JDR2)
Q(ADC_JDR3)
Q(ADC_JDR4)
Q(ADC_JOFR1)
Q(ADC_JOFR2)
Q(ADC_JOFR3)
Q(ADC_JOFR4)
Q(ADC_JSQR)
Q(ADC_LTR)
Q(ADC_SMPR1)
Q(ADC_SMPR2)
Q(ADC_SQR1)
Q(ADC_SQR2)
Q(ADC_SQR3)
Q(ADC_SR)
Q(CAN1)
Q(CAN2)
Q(CRC)
Q(CRC_CR)
Q(CRC_DR)
Q(CRC_IDR)
Q(DAC)
Q(DAC1)
Q(DAC_CR)
Q(DAC_DHR12L1)
Q(DAC_DHR12L2)
Q(DAC_DHR12LD)
Q(DAC_DHR12R1)
Q(DAC_DHR12R2)
Q(DAC_DHR12RD)
Q(DAC_DHR8R1)
Q(DAC_DHR8R2)
Q(DAC_DHR8RD)
Q(DAC_DOR1)
Q(DAC_DOR2)
Q(DAC_SR)
Q(DAC_SWTRIGR)
Q(DBGMCU)
Q(DBGMCU_APB1FZ)
Q(DBGMCU_APB2FZ)
Q(DBGMCU_CR)
Q(DBGMCU_IDCODE)
Q(DCMI)
Q(DMA1)
Q(DMA2)
Q(DMA_HIFCR)
Q(DMA_HISR)
Q(DMA_LIFCR)
Q(DMA_LISR)
Q(ETH)
Q(EXTI)
Q(EXTI_EMR)
Q(EXTI_FTSR)
Q(EXTI_IMR)
Q(EXTI_PR)
Q(EXTI_RTSR)
Q(EXTI_SWIER)
Q(FLASH)
Q(FLASH_ACR)
Q(FLASH_CR)
Q(FLASH_KEYR)
Q(FLASH_OPTCR)
Q(FLASH_OPTCR1)
Q(FLASH_OPTKEYR)
Q(FLASH_SR)
Q(GPIOA)
Q(GPIOB)
Q(GPIOC)
Q(GPIOD)
Q(GPIOE)
Q(GPIOF)
Q(GPIOG)
Q(GPIOH)
Q(GPIOI)
Q(GPIO_AFR0)
Q(GPIO_AFR1)
Q(GPIO_BSRR)
Q(GPIO_BSRRH)
Q(GPIO_BSRRL)
Q(GPIO_IDR)
Q(GPIO_LCKR)
Q(GPIO_MODER)
Q(GPIO_ODR)
Q(GPIO_OSPEEDR)
Q(GPIO_OTYPER)
Q(GPIO_PUPDR)
Q(I2C1)
Q(I2C2)
Q(I2C3)
Q(I2C_CCR)
Q(I2C_CR1)
Q(I2C_CR2)
Q(I2C_DR)
Q(I2C_OAR1)
Q(I2C_OAR2)
Q(I2C_SR1)
Q(I2C_SR2)
Q(I2C_TRISE)
Q(I2S2EXT)
Q(I2S3EXT)
Q(IWDG)
Q(IWDG_KR)
Q(IWDG_PR)
Q(IWDG_RLR)
Q(IWDG_SR)
Q(PWR)
Q(PWR_CR)
Q(PWR_CSR)
Q(RCC)
Q(RCC_AHB1ENR)
Q(RCC_AHB1LPENR)
Q(RCC_AHB1RSTR)
Q(RCC_AHB2ENR)
Q(RCC_AHB2LPENR)
Q(RCC_AHB2RSTR)
Q(RCC_AHB3ENR)
Q(RCC_AHB3LPENR)
Q(RCC_AHB3RSTR)
Q(RCC_APB1ENR)
Q(RCC_APB1LPENR)
Q(RCC_APB1RSTR)
Q(RCC_APB2ENR)
Q(RCC_APB2LPENR)
Q(RCC_APB2RSTR)
Q(RCC_BDCR)
Q(RCC_CFGR)
Q(RCC_CIR)
Q(RCC_CR)
Q(RCC_CSR)
Q(RCC_PLLCFGR)
Q(RCC_PLLI2SCFGR)
Q(RCC_SSCGR)
Q(RNG)
Q(RNG_CR)
Q(RNG_DR)
Q(RNG_SR)
Q(RTC)
Q(RTC_ALRMAR)
Q(RTC_ALRMASSR)
Q(RTC_ALRMBR)
Q(RTC_ALRMBSSR)
Q(RTC_BKP0R)
Q(RTC_BKP10R)
Q(RTC_BKP11R)
Q(RTC_BKP12R)
Q(RTC_BKP13R)
Q(RTC_BKP14R)
Q(RTC_BKP15R)
Q(RTC_BKP16R)
Q(RTC_BKP17R)
Q(RTC_BKP18R)
Q(RTC_BKP19R)
Q(RTC_BKP1R)
Q(RTC_BKP2R)
Q(RTC_BKP3R)
Q(RTC_BKP4R)
Q(RTC_BKP5R)
Q(RTC_BKP6R)
Q(RTC_BKP7R)
Q(RTC_BKP8R)
Q(RTC_BKP9R)
Q(RTC_CALIBR)
Q(RTC_CALR)
Q(RTC_CR)
Q(RTC_DR)
Q(RTC_ISR)
Q(RTC_PRER)
Q(RTC_SHIFTR)
Q(RTC_SSR)
Q(RTC_TAFCR)
Q(RTC_TR)
Q(RTC_TSDR)
Q(RTC_TSSSR)
Q(RTC_TSTR)
Q(RTC_WPR)
Q(RTC_WUTR)
Q(SDIO)
Q(SPI1)
Q(SPI2)
Q(SPI3)
Q(SPI_CR1)
Q(SPI_CR2)
Q(SPI_CRCPR)
Q(SPI_DR)
Q(SPI_I2SCFGR)
Q(SPI_I2SPR)
Q(SPI_RXCRCR)
Q(SPI_SR)
Q(SPI_TXCRCR)
Q(SYSCFG)
Q(SYSCFG_CMPCR)
Q(SYSCFG_EXTICR0)
Q(SYSCFG_EXTICR1)
Q(SYSCFG_EXTICR2)
Q(SYSCFG_EXTICR3)
Q(SYSCFG_MEMRMP)
Q(SYSCFG_PMC)
Q(TIM1)
Q(TIM10)
Q(TIM11)
Q(TIM12)
Q(TIM13)
Q(TIM14)
Q(TIM2)
Q(TIM3)
Q(TIM4)
Q(TIM5)
Q(TIM6)
Q(TIM7)
Q(TIM8)
Q(TIM9)
Q(TIM_ARR)
Q(TIM_BDTR)
Q(TIM_CCER)
Q(TIM_CCMR1)
Q(TIM_CCMR2)
Q(TIM_CCR1)
Q(TIM_CCR2)
Q(TIM_CCR3)
Q(TIM_CCR4)
Q(TIM_CNT)
Q(TIM_CR1)
Q(TIM_CR2)
Q(TIM_DCR)
Q(TIM_DIER)
Q(TIM_DMAR)
Q(TIM_EGR)
Q(TIM_OR)
Q(TIM_PSC)
Q(TIM_RCR)
Q(TIM_SMCR)
Q(TIM_SR)
Q(UART4)
Q(UART5)
Q(USART1)
Q(USART2)
Q(USART3)
Q(USART6)
Q(USART_BRR)
Q(USART_CR1)
Q(USART_CR2)
Q(USART_CR3)
Q(USART_DR)
Q(USART_GTPR)
Q(USART_SR)
Q(WWDG)
Q(WWDG_CFR)
Q(WWDG_CR)
Q(WWDG_SR)

Q(ADC)

Q(ADC)

Q(ADC)

Q(ADC)

Q(ADC1)

Q(ADC123_COMMON)

Q(ADC2)

Q(ADC3)

Q(ADCAll)

Q(ADCAll)

Q(ADC_CR1)

Q(ADC_CR2)

Q(ADC_DR)

Q(ADC_HTR)

Q(ADC_JDR1)

Q(ADC_JDR2)

Q(ADC_JDR3)

Q(ADC_JDR4)

Q(ADC_JOFR1)

Q(ADC_JOFR2)

Q(ADC_JOFR3)

Q(ADC_JOFR4)

Q(ADC_JSQR)

Q(ADC_LTR)

Q(ADC_SMPR1)

Q(ADC_SMPR2)

Q(ADC_SQR1)

Q(ADC_SQR2)

Q(ADC_SQR3)

Q(ADC_SR)

Q(AF1_TIM1)

Q(AF1_TIM2)

Q(AF2_TIM3)

Q(AF2_TIM4)

Q(AF2_TIM5)

Q(AF3_TIM10)

Q(AF3_TIM11)

Q(AF3_TIM8)

Q(AF3_TIM9)

Q(AF5_I2S2)

Q(AF5_SPI1)

Q(AF5_SPI2)

Q(AF6_I2S2)

Q(AF6_SPI3)

Q(AF7_USART1)

Q(AF7_USART2)

Q(AF9_TIM12)

Q(AF9_TIM13)

Q(AF9_TIM14)

Q(AF_INET)

Q(AF_INET6)

Q(AF_OD)

Q(AF_PP)

Q(ALT)

Q(ALT)

Q(ALT_OPEN_DRAIN)

Q(ALT_OPEN_DRAIN)

Q(AMP)

Q(ANALOG)

Q(AP_IF)

Q(ARRAY)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BFINT16)

Q(BFINT32)

Q(BFINT8)

Q(BFUINT16)

Q(BFUINT32)

Q(BFUINT8)

Q(BF_LEN)

Q(BF_POS)

Q(BIG_ENDIAN)

Q(BOTH)

Q(BRK_HIGH)

Q(BRK_LOW)

Q(BRK_OFF)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BytesIO)

Q(BytesIO)

Q(CAN1)

Q(CAN2)

Q(CENTER)

Q(CIRCULAR)

Q(CONTROLLER)

Q(CORE_TEMP)

Q(CORE_VBAT)

Q(CORE_VREF)

Q(CRC)

Q(CRC_CR)

Q(CRC_DR)

Q(CRC_IDR)

Q(CTS)

Q(CTS)

Q(CancelledError)

Q(DAC)

Q(DAC)

Q(DAC)

Q(DAC1)

Q(DAC_CR)

Q(DAC_DHR12L1)

Q(DAC_DHR12L2)

Q(DAC_DHR12LD)

Q(DAC_DHR12R1)

Q(DAC_DHR12R2)

Q(DAC_DHR12RD)

Q(DAC_DHR8R1)

Q(DAC_DHR8R2)

Q(DAC_DHR8RD)

Q(DAC_DOR1)

Q(DAC_DOR2)

Q(DAC_SR)

Q(DAC_SWTRIGR)

Q(DBGMCU)

Q(DBGMCU_APB1FZ)

Q(DBGMCU_APB2FZ)

Q(DBGMCU_CR)

Q(DBGMCU_IDCODE)

Q(DCMI)

Q(DEEPSLEEP_RESET)

Q(DMA1)

Q(DMA2)

Q(DMA_HIFCR)

Q(DMA_HISR)

Q(DMA_LIFCR)

Q(DMA_LISR)

Q(DOWN)

Q(DecompIO)

Q(DecompIO)

Q(DutyCycle)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(ENC_A)

Q(ENC_A)

Q(ENC_AB)

Q(ENC_AB)

Q(ENC_B)

Q(ENC_B)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOTCONN)

Q(ENOTCONN)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(ETH)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(EVT_FALLING)

Q(EVT_RISING)

Q(EVT_RISING_FALLING)

Q(EXTI)

Q(EXTI_EMR)

Q(EXTI_FTSR)

Q(EXTI_IMR)

Q(EXTI_PR)

Q(EXTI_RTSR)

Q(EXTI_SWIER)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(ExtInt)

Q(ExtInt)

Q(FALLING)

Q(FLASH)

Q(FLASH_ACR)

Q(FLASH_CR)

Q(FLASH_KEYR)

Q(FLASH_OPTCR)

Q(FLASH_OPTCR1)

Q(FLASH_OPTKEYR)

Q(FLASH_SR)

Q(FLOAT32)

Q(FLOAT64)

Q(FREQ)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(Flash)

Q(Flash)

Q(FrameBuffer)

Q(FrameBuffer)

Q(FrameBuffer1)

Q(Frequency)

Q(GPIOA)

Q(GPIOB)

Q(GPIOC)

Q(GPIOD)

Q(GPIOE)

Q(GPIOF)

Q(GPIOG)

Q(GPIOH)

Q(GPIOI)

Q(GPIO_AFR0)

Q(GPIO_AFR1)

Q(GPIO_BSRR)

Q(GPIO_BSRRH)

Q(GPIO_BSRRL)

Q(GPIO_IDR)

Q(GPIO_LCKR)

Q(GPIO_MODER)

Q(GPIO_ODR)

Q(GPIO_OSPEEDR)

Q(GPIO_OTYPER)

Q(GPIO_PUPDR)

Q(GS2_HMSB)

Q(GS4_HMSB)

Q(GS8)

Q(GeneratorExit)

Q(GeneratorExit)

Q(HARD_RESET)

Q(HIGH)

Q(I2C)

Q(I2C1)

Q(I2C2)

Q(I2C3)

Q(I2C_CCR)

Q(I2C_CR1)

Q(I2C_CR2)

Q(I2C_DR)

Q(I2C_OAR1)

Q(I2C_OAR2)

Q(I2C_SR1)

Q(I2C_SR2)

Q(I2C_TRISE)

Q(I2S)

Q(I2S)

Q(I2S2EXT)

Q(I2S3EXT)

Q(IC)

Q(IC)

Q(IN)

Q(IN)

Q(INT)

Q(INT16)

Q(INT32)

Q(INT64)

Q(INT8)

Q(IOBase)

Q(IOBase)

Q(IRQ_FALLING)

Q(IRQ_FALLING)

Q(IRQ_RISING)

Q(IRQ_RISING)

Q(IRQ_RISING_FALLING)

Q(IRQ_RX)

Q(IRQ_RXIDLE)

Q(IWDG)

Q(IWDG_KR)

Q(IWDG_PR)

Q(IWDG_RLR)

Q(IWDG_SR)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LITTLE_ENDIAN)

Q(LONG)

Q(LONGLONG)

Q(LOW)

Q(LSB)

Q(LSB)

Q(LockType)

Q(LookupError)

Q(LookupError)

Q(MASTER)

Q(MONO)

Q(MONO_HLSB)

Q(MONO_HMSB)

Q(MONO_VLSB)

Q(MSB)

Q(MSB)

Q(MSC)

Q(MVLSB)

Q(MemoryError)

Q(MemoryError)

Q(NATIVE)

Q(NORMAL)

Q(NameError)

Q(NameError)

Q(None)

Q(NoneType)

Q(NotImplemented)

Q(NotImplemented)

Q(NotImplementedError)

Q(NotImplementedError)

Q(OC_ACTIVE)

Q(OC_ACTIVE)

Q(OC_FORCED_ACTIVE)

Q(OC_FORCED_ACTIVE)

Q(OC_FORCED_INACTIVE)

Q(OC_FORCED_INACTIVE)

Q(OC_INACTIVE)

Q(OC_INACTIVE)

Q(OC_TIMING)

Q(OC_TIMING)

Q(OC_TOGGLE)

Q(OC_TOGGLE)

Q(ONE_SHOT)

Q(ONE_SHOT)

Q(OPEN_DRAIN)

Q(OPEN_DRAIN)

Q(OSError)

Q(OSError)

Q(OUT)

Q(OUT)

Q(OUT_OD)

Q(OUT_PP)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PERIODIC)

Q(PERIODIC)

Q(PERIPHERAL)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(PTR)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_NONE)

Q(PULL_UP)

Q(PULL_UP)

Q(PWM)

Q(PWM)

Q(PWM_INVERTED)

Q(PWM_INVERTED)

Q(PWR)

Q(PWRON_RESET)

Q(PWR_CR)

Q(PWR_CSR)

Q(Pin)

Q(Pin)

Q(Pin)

Q(PinAF)

Q(PinBase)

Q(RCC)

Q(RCC_AHB1ENR)

Q(RCC_AHB1LPENR)

Q(RCC_AHB1RSTR)

Q(RCC_AHB2ENR)

Q(RCC_AHB2LPENR)

Q(RCC_AHB2RSTR)

Q(RCC_AHB3ENR)

Q(RCC_AHB3LPENR)

Q(RCC_AHB3RSTR)

Q(RCC_APB1ENR)

Q(RCC_APB1LPENR)

Q(RCC_APB1RSTR)

Q(RCC_APB2ENR)

Q(RCC_APB2LPENR)

Q(RCC_APB2RSTR)

Q(RCC_BDCR)

Q(RCC_CFGR)

Q(RCC_CIR)

Q(RCC_CR)

Q(RCC_CSR)

Q(RCC_PLLCFGR)

Q(RCC_PLLI2SCFGR)

Q(RCC_SSCGR)

Q(RGB565)

Q(RISING)

Q(RNG)

Q(RNG_CR)

Q(RNG_DR)

Q(RNG_SR)

Q(RTC)

Q(RTC)

Q(RTC)

Q(RTC)

Q(RTC_ALRMAR)

Q(RTC_ALRMASSR)

Q(RTC_ALRMBR)

Q(RTC_ALRMBSSR)

Q(RTC_BKP0R)

Q(RTC_BKP10R)

Q(RTC_BKP11R)

Q(RTC_BKP12R)

Q(RTC_BKP13R)

Q(RTC_BKP14R)

Q(RTC_BKP15R)

Q(RTC_BKP16R)

Q(RTC_BKP17R)

Q(RTC_BKP18R)

Q(RTC_BKP19R)

Q(RTC_BKP1R)

Q(RTC_BKP2R)

Q(RTC_BKP3R)

Q(RTC_BKP4R)

Q(RTC_BKP5R)

Q(RTC_BKP6R)

Q(RTC_BKP7R)

Q(RTC_BKP8R)

Q(RTC_BKP9R)

Q(RTC_CALIBR)

Q(RTC_CALR)

Q(RTC_CR)

Q(RTC_DR)

Q(RTC_ISR)

Q(RTC_PRER)

Q(RTC_SHIFTR)

Q(RTC_SSR)

Q(RTC_TAFCR)

Q(RTC_TR)

Q(RTC_TSDR)

Q(RTC_TSSSR)

Q(RTC_TSTR)

Q(RTC_WPR)

Q(RTC_WUTR)

Q(RTS)

Q(RTS)

Q(RX)

Q(RuntimeError)

Q(RuntimeError)

Q(SDIO)

Q(SHORT)

Q(SLAVE)

Q(SOCK_DGRAM)

Q(SOCK_RAW)

Q(SOCK_STREAM)

Q(SOFT_RESET)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI1)

Q(SPI2)

Q(SPI3)

Q(SPI_CR1)

Q(SPI_CR2)

Q(SPI_CRCPR)

Q(SPI_DR)

Q(SPI_I2SCFGR)

Q(SPI_I2SPR)

Q(SPI_RXCRCR)

Q(SPI_SR)

Q(SPI_TXCRCR)

Q(STA_IF)

Q(STEREO)

Q(SYSCFG)

Q(SYSCFG_CMPCR)

Q(SYSCFG_EXTICR0)

Q(SYSCFG_EXTICR1)

Q(SYSCFG_EXTICR2)

Q(SYSCFG_EXTICR3)

Q(SYSCFG_MEMRMP)

Q(SYSCFG_PMC)

Q(Signal)

Q(Signal)

Q(SoftI2C)

Q(SoftI2C)

Q(SoftSPI)

Q(SoftSPI)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(THDN)

Q(TIM1)

Q(TIM10)

Q(TIM11)

Q(TIM12)

Q(TIM13)

Q(TIM14)

Q(TIM2)

Q(TIM3)

Q(TIM4)

Q(TIM5)

Q(TIM6)

Q(TIM7)

Q(TIM8)

Q(TIM9)

Q(TIM_ARR)

Q(TIM_BDTR)

Q(TIM_CCER)

Q(TIM_CCMR1)

Q(TIM_CCMR2)

Q(TIM_CCR1)

Q(TIM_CCR2)

Q(TIM_CCR3)

Q(TIM_CCR4)

Q(TIM_CNT)

Q(TIM_CR1)

Q(TIM_CR2)

Q(TIM_DCR)

Q(TIM_DIER)

Q(TIM_DMAR)

Q(TIM_EGR)

Q(TIM_OR)

Q(TIM_PSC)

Q(TIM_RCR)

Q(TIM_SMCR)

Q(TIM_SR)

Q(TX)

Q(Task)

Q(Task)

Q(TaskQueue)

Q(TaskQueue)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(Timer)

Q(Timer)

Q(Timer)

Q(Timer)

Q(TimerChannel)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UART)

Q(UART4)

Q(UART5)

Q(UINT)

Q(UINT16)

Q(UINT32)

Q(UINT64)

Q(UINT8)

Q(ULONG)

Q(ULONGLONG)

Q(UP)

Q(USART1)

Q(USART2)

Q(USART3)

Q(USART6)

Q(USART_BRR)

Q(USART_CR1)

Q(USART_CR2)

Q(USART_CR3)

Q(USART_DR)

Q(USART_GTPR)

Q(USART_SR)

Q(USB_HID)

Q(USB_HID)

Q(USB_VCP)

Q(USB_VCP)

Q(USHORT)

Q(UnicodeError)

Q(UnicodeError)

Q(VCP)

Q(VCP_plus_HID)

Q(VCP_plus_MSC)

Q(VCP_plus_MSC_plus_HID)

Q(VOID)

Q(VREF)

Q(ValueError)

Q(ValueError)

Q(VfsFat)

Q(VfsFat)

Q(ViperTypeError)

Q(ViperTypeError)

Q(WDT)

Q(WDT)

Q(WDT_RESET)

Q(WIZNET5K)

Q(WIZNET5K)

Q(WWDG)

Q(WWDG_CFR)

Q(WWDG_CR)

Q(WWDG_SR)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__dict__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__floordiv__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__globals__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__ne__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__radd__)

Q(__rand__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rfloordiv__)

Q(__rlshift__)

Q(__rmatmul__)

Q(__rmod__)

Q(__rmul__)

Q(__ror__)

Q(__rpow__)

Q(__rrshift__)

Q(__rshift__)

Q(__rsub__)

Q(__rtruediv__)

Q(__rxor__)

Q(__set__)

Q(__set__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(__truediv__)

Q(__xor__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_lt_dictcomp_gt_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_stdin_gt_)

Q(_lt_stdin_gt_)

Q(_lt_string_gt_)

Q(_onewire)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_flash)

Q(_slash_flash)

Q(_slash_flash_slash_lib)

Q(_slash_sd)

Q(_slash_sd_slash_lib)

Q(_space_)

Q(_star_)

Q(_star_)

Q(_star_)

Q(_task_queue)

Q(_thread)

Q(_thread)

Q(_uasyncio)

Q(_uasyncio)

Q(a2b_base64)

Q(abs)

Q(abs_tol)

Q(accept)

Q(acos)

Q(acosh)

Q(acquire)

Q(ad717x)

Q(ad717x)

Q(ad717x)

Q(add)

Q(add)

Q(add)

Q(addr)

Q(addressof)

Q(addrsize)

Q(aes)

Q(aes)

Q(af)

Q(af)

Q(af)

Q(af_list)

Q(align)

Q(all)

Q(alloc_emergency_exception_buf)

Q(allocate_lock)

Q(alt)

Q(and_)

Q(any)

Q(any)

Q(any)

Q(append)

Q(append)

Q(append)

Q(arg)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(asin)

Q(asinh)

Q(asm_thumb)

Q(asr)

Q(atan)

Q(atan2)

Q(atanh)

Q(b)

Q(b2a_base64)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(bin)

Q(bind)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bitstream)

Q(bl)

Q(blit)

Q(board)

Q(board)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bootloader)

Q(bootloader)

Q(bound_method)

Q(brk)

Q(buf)

Q(buffer)

Q(buffering)

Q(buffering)

Q(builtins)

Q(builtins)

Q(bx)

Q(bytearray)

Q(bytearray)

Q(bytearray_at)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes_at)

Q(calcsize)

Q(calibration)

Q(callable)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(cancel)

Q(capture)

Q(ceil)

Q(center)

Q(center)

Q(cert)

Q(ch)

Q(channel)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(choice)

Q(chr)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(clz)

Q(cmath)

Q(cmath)

Q(cmp)

Q(code)

Q(collect)

Q(compare)

Q(compare)

Q(compile)

Q(compile)

Q(complex)

Q(complex)

Q(connect)

Q(const)

Q(const)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copysign)

Q(coro)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(counter)

Q(counter)

Q(counter)

Q(counter)

Q(country)

Q(cpsid)

Q(cpsie)

Q(cpu)

Q(cpu)

Q(crc)

Q(crc32)

Q(crc8)

Q(cs)

Q(cur_task)

Q(cur_task)

Q(dFft)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(datalogger)

Q(datetime)

Q(deadtime)

Q(debug)

Q(decode)

Q(decode)

Q(decompress)

Q(decrypt)

Q(deepsleep)

Q(default)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delattr)

Q(delay)

Q(deleter)

Q(deque)

Q(deque)

Q(dht_readinto)

Q(dict)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference)

Q(difference_update)

Q(digest)

Q(digest)

Q(digest)

Q(dir)

Q(dir)

Q(disable)

Q(disable)

Q(disable_irq)

Q(disable_irq)

Q(discard)

Q(div)

Q(divmod)

Q(dmath)

Q(dmath)

Q(do_handshake)

Q(doc)

Q(done)

Q(dump)

Q(dumps)

Q(dupterm)

Q(e)

Q(e)

Q(elapsed_micros)

Q(elapsed_millis)

Q(enable)

Q(enable)

Q(enable_irq)

Q(enable_irq)

Q(encode)

Q(encoding)

Q(encoding)

Q(encrypt)

Q(end)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(erf)

Q(erfc)

Q(errno)

Q(errno)

Q(errorcode)

Q(eval)

Q(eval)

Q(exec)

Q(exec)

Q(execfile)

Q(exit)

Q(exit)

Q(exp)

Q(exp)

Q(expm1)

Q(extend)

Q(extend)

Q(fabs)

Q(factorial)

Q(fault_debug)

Q(feed)

Q(file)

Q(file)

Q(file)

Q(fill)

Q(fill_rect)

Q(filter)

Q(filter)

Q(find)

Q(find)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(flags)

Q(float)

Q(float)

Q(floor)

Q(flow)

Q(flow)

Q(flush)

Q(flush)

Q(fmod)

Q(format)

Q(format)

Q(format)

Q(framebuf)

Q(framebuf)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gamma)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get_ident)

Q(getaddrinfo)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getpeercert)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(globals)

Q(gmtime)

Q(gpio)

Q(group)

Q(handler)

Q(handler)

Q(handler)

Q(hard)

Q(hard)

Q(hard)

Q(hard_reset)

Q(hasattr)

Q(hash)

Q(have_cdc)

Q(heap_lock)

Q(heap_unlock)

Q(heapify)

Q(heappop)

Q(heappush)

Q(help)

Q(hex)

Q(hexlify)

Q(hid)

Q(hid)

Q(hid_keyboard)

Q(hid_mouse)

Q(high)

Q(hline)

Q(ibuf)

Q(id)

Q(id)

Q(id)

Q(id)

Q(idle)

Q(ifconfig)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(imag)

Q(implementation)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(indices)

Q(info)

Q(info)

Q(info)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(invert)

Q(invert)

Q(ioctl)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(irq)

Q(irq)

Q(irq)

Q(irq)

Q(irq)

Q(is_communication_ok)

Q(isalpha)

Q(isalpha)

Q(isclose)

Q(isconnected)

Q(isconnected)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(join)

Q(join)

Q(kbd_intr)

Q(keepends)

Q(key)

Q(key)

Q(key)

Q(keys)

Q(keys)

Q(label)

Q(ldexp)

Q(ldr)

Q(ldrb)

Q(ldrex)

Q(ldrh)

Q(len)

Q(len)

Q(lgamma)

Q(libc_ver)

Q(lightsleep)

Q(line)

Q(line)

Q(list)

Q(list)

Q(listdir)

Q(listen)

Q(little)

Q(little)

Q(little)

Q(little)

Q(load)

Q(loads)

Q(locals)

Q(localtime)

Q(lock)

Q(locked)

Q(log)

Q(log)

Q(log10)

Q(log10)

Q(log2)

Q(low)

Q(lower)

Q(lower)

Q(lsl)

Q(lsr)

Q(lstrip)

Q(lstrip)

Q(machine)

Q(machine)

Q(main)

Q(map)

Q(map)

Q(mapper)

Q(match)

Q(match)

Q(match)

Q(math)

Q(math)

Q(max)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(maxsize)

Q(md5)

Q(md5)

Q(measure_freq)

Q(mem)

Q(mem16)

Q(mem16)

Q(mem32)

Q(mem32)

Q(mem8)

Q(mem8)

Q(mem_alloc)

Q(mem_free)

Q(mem_info)

Q(memaddr)

Q(memoryview)

Q(memoryview)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micros)

Q(millis)

Q(min)

Q(miso)

Q(miso)

Q(miso)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(modules)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mov)

Q(mov)

Q(movt)

Q(movw)

Q(movwt)

Q(mpy)

Q(mrs)

Q(msc)

Q(name)

Q(name)

Q(name)

Q(namedtuple)

Q(names)

Q(native)

Q(network)

Q(network)

Q(next)

Q(nodename)

Q(noise)

Q(nop)

Q(nss)

Q(nums)

Q(object)

Q(object)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(off)

Q(off)

Q(on)

Q(on)

Q(onewire)

Q(open)

Q(open)

Q(open)

Q(open)

Q(opt)

Q(opt_level)

Q(ord)

Q(pack)

Q(pack_into)

Q(parity)

Q(partition)

Q(partition)

Q(path)

Q(peek)

Q(peektime)

Q(pend_throw)

Q(period)

Q(period)

Q(period)

Q(ph_key)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(pi)

Q(pi)

Q(pid)

Q(pin)

Q(pin)

Q(pin)

Q(pixel)

Q(platform)

Q(platform)

Q(polar)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(poll)

Q(poll)

Q(poll)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop_head)

Q(popitem)

Q(popleft)

Q(port)

Q(port)

Q(pow)

Q(pow)

Q(prescaler)

Q(prescaler)

Q(prescaler)

Q(print)

Q(print_exception)

Q(prm_fft)

Q(property)

Q(property)

Q(ptr)

Q(ptr)

Q(ptr16)

Q(ptr16)

Q(ptr32)

Q(ptr32)

Q(ptr8)

Q(ptr8)

Q(pull)

Q(pull)

Q(pull)

Q(pulse_width)

Q(pulse_width)

Q(pulse_width_percent)

Q(pulse_width_percent)

Q(push)

Q(push)

Q(push_head)

Q(push_sorted)

Q(pyb)

Q(pyb)

Q(pyb)

Q(python_compiler)

Q(qstr_info)

Q(r)

Q(r)

Q(radians)

Q(randint)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(rate)

Q(rate)

Q(rb)

Q(rbit)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_buf_len)

Q(read_channel)

Q(read_core_temp)

Q(read_core_vbat)

Q(read_core_vref)

Q(read_timed)

Q(read_timed_multi)

Q(read_u16)

Q(read_volt)

Q(read_vref)

Q(readbit)

Q(readblocks)

Q(readblocks)

Q(readbyte)

Q(readchar)

Q(readfrom)

Q(readfrom_into)

Q(readfrom_mem)

Q(readfrom_mem_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readlines)

Q(readonly)

Q(real)

Q(rect)

Q(rect)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recvfrom)

Q(reg)

Q(register)

Q(regs)

Q(regs)

Q(rel_tol)

Q(release)

Q(release)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(rename)

Q(rename)

Q(rename)

Q(repl_info)

Q(repl_uart)

Q(replace)

Q(replace)

Q(repr)

Q(reset)

Q(reset)

Q(reset_cause)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rng)

Q(rng)

Q(round)

Q(route)

Q(rpartition)

Q(rpartition)

Q(rsplit)

Q(rsplit)

Q(rstrip)

Q(rstrip)

Q(rxbuf)

Q(scan)

Q(schedule)

Q(sck)

Q(sck)

Q(sck)

Q(sck)

Q(scl)

Q(scroll)

Q(sd)

Q(sda)

Q(sdiv)

Q(search)

Q(search)

Q(seed)

Q(seek)

Q(seek)

Q(select)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send_recv)

Q(sendbreak)

Q(sendto)

Q(sep)

Q(sep)

Q(separators)

Q(server_hostname)

Q(server_side)

Q(set)

Q(set)

Q(set_sampling_rate)

Q(setattr)

Q(setblocking)

Q(setblocking)

Q(setblocking)

Q(setdefault)

Q(setinterrupt)

Q(setsockopt)

Q(setter)

Q(settimeout)

Q(sha1)

Q(sha1)

Q(sha256)

Q(sha256)

Q(shift)

Q(shift)

Q(sin)

Q(sin)

Q(single)

Q(sinh)

Q(sizeof)

Q(sleep)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(socket)

Q(socket)

Q(soft_reset)

Q(sort)

Q(sorted)

Q(source_freq)

Q(split)

Q(split)

Q(split)

Q(splitlines)

Q(splitlines)

Q(sqrt)

Q(sqrt)

Q(stack_size)

Q(stack_use)

Q(standby)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start_new_thread)

Q(startswith)

Q(startswith)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(state)

Q(state)

Q(staticmethod)

Q(staticmethod)

Q(status)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(stm)

Q(stm)

Q(stm)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(strb)

Q(strex)

Q(strh)

Q(strip)

Q(strip)

Q(struct)

Q(struct)

Q(sub)

Q(sub)

Q(sub)

Q(sub)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(swint)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sync)

Q(sync)

Q(sys)

Q(sysname)

Q(tan)

Q(tanh)

Q(tell)

Q(tell)

Q(text)

Q(threshold)

Q(throw)

Q(throw)

Q(ti)

Q(tick_hz)

Q(tick_hz)

Q(ticks_add)

Q(ticks_cpu)

Q(ticks_diff)

Q(ticks_ms)

Q(ticks_us)

Q(time)

Q(time_ns)

Q(time_pulse_us)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout_char)

Q(to_bytes)

Q(triangle)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trunc)

Q(tuple)

Q(tuple)

Q(tuple)

Q(type)

Q(type)

Q(uarray)

Q(uarray)

Q(ubinascii)

Q(ubinascii)

Q(ucollections)

Q(ucollections)

Q(ucryptolib)

Q(ucryptolib)

Q(uctypes)

Q(uctypes)

Q(uctypes)

Q(udelay)

Q(udiv)

Q(uerrno)

Q(uerrno)

Q(uhashlib)

Q(uhashlib)

Q(uheapq)

Q(uheapq)

Q(uint)

Q(uint)

Q(uint)

Q(uio)

Q(uio)

Q(ujson)

Q(ujson)

Q(umachine)

Q(umachine)

Q(umachine)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(unhexlify)

Q(uniform)

Q(union)

Q(union)

Q(unique_id)

Q(unique_id)

Q(unlink)

Q(unpack)

Q(unpack_from)

Q(unregister)

Q(uos)

Q(uos)

Q(update)

Q(update)

Q(update)

Q(update)

Q(update)

Q(uplatform)

Q(uplatform)

Q(upper)

Q(upper)

Q(urandom)

Q(urandom)

Q(urandom)

Q(ure)

Q(ure)

Q(ure)

Q(usb_mode)

Q(uselect)

Q(uselect)

Q(usocket)

Q(usocket)

Q(ussl)

Q(ussl)

Q(ussl)

Q(ustruct)

Q(ustruct)

Q(usys)

Q(utf_hyphen_8)

Q(utf_hyphen_8)

Q(utime)

Q(utime)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(uzlib)

Q(uzlib)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(vcmp)

Q(vcvt_f32_s32)

Q(vcvt_s32_f32)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(vid)

Q(viper)

Q(vldr)

Q(vline)

Q(vmov)

Q(vmrs)

Q(vneg)

Q(vsqrt)

Q(vstr)

Q(wakeup)

Q(wfi)

Q(wfi)

Q(wrap_socket)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_readinto)

Q(write_readinto)

Q(write_timed)

Q(writebit)

Q(writeblocks)

Q(writeblocks)

Q(writebyte)

Q(writechar)

Q(writeto)

Q(writeto_mem)

Q(writevto)

Q(ws)

Q(zip)

Q(zip)
