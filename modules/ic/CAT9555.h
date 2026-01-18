#ifndef __CAT9555_H__
#define __CAT9555_H__

#include <stdio.h>
#include <string.h>
#include "myi2c.h"
#include "common.h"




typedef  struct _cat9555_t
{
    uint8_t addr;
    my_soft_i2c_obj_t *i2c;
}cat9555_t;

typedef enum
{
    Input_Port_0 = 0x00,
    Input_Port_1,
    Output_Port_0,
    Output_Port_1,
    Polarity_Inversion_Port_0,
    Polarity_Inversion_Port_1,
    Configuration_Port_0,
    Configuration_Port_1,
    CAT9555_REG_NO
}CAT9555_registers;


st_reg AD7175_regs[] =
{
    {0x00, 0x00,   1},  //Input_Port_0 read only
    {0x01, 0x00,   1},  //Input_Port_1 read only
    {0x02, 0x01,   1},  //Output_Port_0
    {0X03, 0x01,   1},  //Output_Port_1
    {0x04, 0x00,   1},  //Polarity_Inversion_Port_0
    {0x05, 0x00,   1},  //Polarity_Inversion_Port_1
    {0x06, 0x01,   1},  //Configuration_Port_0
    {0x07, 0x01,   1},  //Configuration_Port_1
};

st_reg AD7175_regs[CAT9555_REG_NO];

#endif
