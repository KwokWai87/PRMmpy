#ifndef __AD7175_H__
#define __AD7175_H__

#include <stdio.h>
#include <string.h>
// #include "drivers/bus/spi.h"
#include "spi.h"
#include "myspi.h"
#include "common.h"


enum {
    MP_AD7175_IOCTL_DEFAULT,
};

/*! AD7175 registers list*/
typedef enum
{
    Status_Register = 0x00,
    ADC_Mode_Register,
    Interface_Mode_Register,
    REGCHECK,
    Data_Register,
    GPIOCON,
    ID_st_reg,
    CH_Map_1,
    CH_Map_2,
    CH_Map_3,
    CH_Map_4,
    Setup_Config_1,
    Setup_Config_2,
    Setup_Config_3,
    Setup_Config_4,
    Filter_Config_1,
    Filter_Config_2,
    Filter_Config_3,
    Filter_Config_4,
    Offset_1,
    Offset_2,
    Offset_3,
    Offset_4,
    Gain_1,
    Gain_2,
    Gain_3,
    Gain_4,
    Communications_Register,
    AD7175_REG_NO
}AD7175_registers;
/*! Array holding the info for the AD7175 registers - address, initial value, size */
// st_reg AD7175_regs[] =
// {
//     {0x00, 0x00,   1},  //Status_Register
//     {0x01, 0x8000, 2},  //ADC_Mode_Register
//     {0x02, 0x0000, 2},  //Interface_Mode_Register
//     {0X03, 0x0000, 3},  //REGCHECK
//     {0x04, 0x0000, 3},  //Data_Register
//     {0x06, 0x0800, 2},  //GPIOCON
//     {0x07, 0x0000, 2},  //ID_st_reg
//     {0x10, 0x8001, 2},  //CH_Map_1
//     {0x11, 0x0001, 2},  //CH_Map_2
//     {0x12, 0x0001, 2},  //CH_Map_3
//     {0x13, 0x0001, 2},  //CH_Map_4
//     {0x20, 0x0320, 2},  //Setup_Config_1
//     {0x21, 0x0320, 2},  //Setup_Config_2
//     {0x22, 0x0320, 2},  //Setup_Config_3
//     {0x23, 0x0320, 2},  //Setup_Config_4
//     {0x28, 0x0500, 2},  //Filter_Config_1
//     {0x29, 0x0500, 2},  //Filter_Config_2
//     {0x2a, 0x0500, 2},  //Filter_Config_3
//     {0x2b, 0x0500, 2},  //Filter_Config_4
//     {0x30, 0x800000, 3},    //Offset_1
//     {0x31, 0x800000, 3},    //Offset_2
//     {0x32, 0x800000, 3},    //Offset_3
//     {0x33, 0x800000, 3},    //Offset_4
//     {0x38, 0x500000, 3},    //Gain_1
//     {0x39, 0x500000, 3},    //Gain_2
//     {0x3a, 0x500000, 3},    //Gain_3
//     {0x3b, 0x500000, 3},    //Gain_4
//     {0xFF, 0x500000, 1}     //Communications_Register
// };

typedef enum{
    RATE_250000HZ=0x00,
    RATE_125000HZ,
    RATE_62500HZ,
    RATE_50000HZ,
    RATE_31250HZ,
    RATE_25000HZ,
    RATE_15625HZ,
    RATE_10000HZ,
    RATE_5000HZ,
    RATE_2500HZ,
    RATE_1000HZ,
    RATE_500HZ,
    RATE_397P5HZ,
    RATE_200HZ,
    RATE_100HZ,
    RATE_59P92HZ,
    RATE_49P96HZ,
    RATE_20HZ,
    RATE_16P66HZ,
    RATE_10HZ,
    RATE_5HZ,
    AD7175_RATES_NO
}AD7175_rates;

typedef struct _sample_rate_t{
    AD7175_rates value;
    float rate;
}sample_rate_t;



typedef enum {
    ch0=0x00,
    ch1,
    ch2,
    ch3,
}AD7175_channel;



/*
c_u16_t 
eg:
c_u16_t t;
t.value = 0x0f55;
t.reg[0] = 0x55;
t.reg[1] = 0x0f;
*/
typedef union{
    uint16_t value;
    uint8_t reg[2];
} c_u16_t;

typedef union{
    float value;
    uint8_t reg[4];
} c_u32_t;

#define GAIN    0x555555
#define OFFSET  0x800000
#define RESOLUTION  24
#define AD7175_CHIP_ID  0x0cd0
#define DEFAULT_TIMEOUT_MS 400

#define MP_PASS      0
#define MP_FAIL     -1

//#define DEFAULE_TIMEOUT 1
//#define DEFAULT_TIMEOUT_MS      400
//#define DEFAULT_DELAY           0.001
//
//#define ADC_MODE_REG_ADDR           0x01
//#define DEFAULT_DELAY           0.001
//
//
#define CLOCKSEL_MASK 0x0c

typedef enum{
    unipolar = 0x00,
    bipolar = 0x01,
}POLARS;


typedef enum{
    disable=0x00,
    enable=0x0f,
}BUFFERS;



typedef enum{
    external=0x00,
    internal=0x02,
    AVDD_AVSS=0x03,
}REFERENCES;

typedef enum{
    AIN0=0x00,
    AIN1=0x01,
    AIN2=0x02,
    AIN3=0x03,
    AIN4=0x04,
    Temp_p=0x11,
    Temp_n=0x12,
    AVDD1=0x13,
    AVSS=0x14,
    REF_p=0x15,
    REF_n=0x16,
}AINS;

typedef enum{
    c_internal=0x00,
    output=0x04,
    c_external=0x08,
    crystal=0x0c

}CLOCKSEL;

typedef struct{
    AINS p;
    AINS n;
}adc_ch;


typedef struct{
    mp_obj_base_t base;
    int mvref;
    POLARS code_polar;
    REFERENCES reference;
    BUFFERS buffer_flag;
    CLOCKSEL clock;
    adc_ch ch[2];
    unsigned char resolution;
    AD7175_rates rate;
    mp_hal_pin_obj_t status; //status pin ,0.23us/every read
    mp_hal_pin_obj_t cs;
    spi_proto_cfg_t *spi;
}ad7175_handler;

extern const mp_obj_type_t ad7175_type;


void ad7175_init(ad7175_handler *self, mp_hal_pin_obj_t cs, mp_hal_pin_obj_t status);
void ic_init(ad7175_handler *self);
// void write_register(ad7175_handler *self, uint8_t reg_addr, uint8_t *reg_data, size_t len);
// void read_register(ad7175_handler *self, uint8_t reg_addr, void *recv_buf, size_t len);
void reset(ad7175_handler *self);
void set_setup_register(ad7175_handler *self, int ch, POLARS code_polar, REFERENCES reference,  BUFFERS buffer_flag);
uint8_t id_detect(ad7175_handler *self, uint32_t timeout);
//timeout us
float get_sample_rate(ad7175_handler *self);
bool set_sample_rate(ad7175_handler *self, int ch, AD7175_rates rate);
void set_channel_state(ad7175_handler *self, int ch, char *state);
void select_single_channel(ad7175_handler *self, int ch);
float read_volt(ad7175_handler *self, int ch);
bool datalogger(ad7175_handler *self, int ch, AD7175_rates rate, c_u32_t *raw_data, uint32_t nums);
sample_rate_t search_sample_rate(ad7175_handler *self, float sp);
float value_2_mvolt(ad7175_handler *self, float code);
#endif
