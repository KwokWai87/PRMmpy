/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-06-19     Administrator       the first version
 */
#include "py/mphal.h"
#include "py/runtime.h"
#include "AD7175.h"

st_reg AD7175_regs[] =
{
    {0x00, 0x00,   1},  //Status_Register
    {0x01, 0x0080, 2},  //ADC_Mode_Register
    {0x02, 0x0000, 2},  //Interface_Mode_Register
    {0X03, 0x0000, 3},  //REGCHECK
    {0x04, 0x0000, 3},  //Data_Register
    {0x06, 0x0008, 2},  //GPIOCON
    {0x07, 0x0000, 2},  //ID_st_reg
    {0x10, 0x0180, 2},  //CH_Map_1
    {0x11, 0x0100, 2},  //CH_Map_2
    {0x12, 0x0100, 2},  //CH_Map_3
    {0x13, 0x0100, 2},  //CH_Map_4
    {0x20, 0x2003, 2},  //Setup_Config_1
    {0x21, 0x2003, 2},  //Setup_Config_2
    {0x22, 0x2003, 2},  //Setup_Config_3
    {0x23, 0x2003, 2},  //Setup_Config_4
    {0x28, 0x0005, 2},  //Filter_Config_1
    {0x29, 0x0005, 2},  //Filter_Config_2
    {0x2a, 0x0005, 2},  //Filter_Config_3
    {0x2b, 0x0005, 2},  //Filter_Config_4
    {0x30, 0x000080, 3},    //Offset_1
    {0x31, 0x000080, 3},    //Offset_2
    {0x32, 0x000080, 3},    //Offset_3
    {0x33, 0x000080, 3},    //Offset_4
    {0x38, 0x000050, 3},    //Gain_1
    {0x39, 0x000050, 3},    //Gain_2
    {0x3a, 0x000050, 3},    //Gain_3
    {0x3b, 0x000050, 3},    //Gain_4
    {0xFF, 0x000050, 1}     //Communications_Register
};

sample_rate_t AD7175_rates_table[] = {
    {RATE_250000HZ, 250000},  //250kHz samplerates
    {RATE_125000HZ, 125000},  //125kHz samplerates
    {RATE_62500HZ, 62500},  //62.5kHz samplerates
    {RATE_50000HZ, 50000},  //50kHz samplerates
    {RATE_31250HZ, 31250},  //31.25kHz samplerates
    {RATE_25000HZ, 25000},  //25kHz samplerates
    {RATE_15625HZ, 15625},  //15.625kHz samplerates
    {RATE_10000HZ, 10000},  //10kHz samplerates
    {RATE_5000HZ, 5000},  //5kHz samplerates
    {RATE_2500HZ, 2500},  //2.5kHz samplerates
    {RATE_1000HZ, 1000},  //1kHz samplerates
    {RATE_500HZ, 500},  //500Hz samplerates
    {RATE_397P5HZ, 397.5},  //397.5Hz samplerates
    {RATE_200HZ, 200},  //200Hz samplerates
    {RATE_100HZ, 100},  //100Hz samplerates
    {RATE_59P92HZ, 59.92},  //59.92Hz samplerates
    {RATE_49P96HZ, 49.96},  //49.96Hz samplerates
    {RATE_20HZ, 20},  //20Hz samplerates
    {RATE_16P66HZ, 16.66},  //16.66Hz samplerates
    {RATE_10HZ, 10},  //10Hz samplerates
    {RATE_5HZ, 5},  //5Hz samplerates
};

st_reg AD7175_regs[AD7175_REG_NO];
sample_rate_t AD7175_rates_table[AD7175_RATES_NO];


// ad7175 ic driver
STATIC uint8_t get_cmd(uint8_t cmd, uint8_t wirte_bit);
STATIC int ad7175_ioctl(void *self_in, uint32_t cmd);

STATIC void reverse(uint8_t a[], uint8_t len)
{
    uint8_t left=0;
    uint8_t right = len - 1;
    uint8_t b;
    while (left < right)
    {
        b = a[right];
        a[right] = a[left];
        a[left] = b;
        left++;
        right --;
    }
}

STATIC uint8_t get_cmd(uint8_t cmd, uint8_t wirte_bit)
{
    uint8_t _cmd;
    if (wirte_bit == 0)
    {
        _cmd = 0x3f & cmd;
    }else{
        _cmd = (0x3f & cmd)|(0x01 << 6);
    }
    return _cmd;
}

STATIC int ad7175_ioctl(void *self_in, uint32_t cmd) {
    ad7175_handler *self = (ad7175_handler *)self_in;
    switch (cmd) {
        case MP_AD7175_IOCTL_DEFAULT:
            self->resolution = RESOLUTION;
            self->mvref = 5000.0;
            self->code_polar = bipolar;
            self->reference = external;
            self->buffer_flag = enable;
            self->clock = c_internal;
            self->rate = RATE_5HZ;
            self->ch[0].p = AIN0;
            self->ch[0].n = AIN1;
            self->ch[1].p = AIN2;
            self->ch[1].n = AIN3;
            break;
    }
    return 0;
}

float value_2_mvolt(ad7175_handler *self, float code)
{
    float volt;
    if (self->code_polar == bipolar){
        volt = (float)(code - (1 << (self->resolution -1))) * 0x400000 / GAIN;
//        volt = (tmp + (OFFSET - 0x800000)) / (1 << self->resolution -1) * self->mvref / 0.75;
    }else {
        volt = code /2.0*0x400000/GAIN;
    }
    return (volt + (OFFSET - 0x800000)) / (1 << (self->resolution -1)) * self->mvref /0.75;
}

sample_rate_t search_sample_rate(ad7175_handler *self, float sp)
{
    float min= (float)((1 << 30)-1);
    int8_t index=0;
    sample_rate_t t;
    t = AD7175_rates_table[0];
    float diff=0;
    if (sp >= t.rate)
    {
        return t;
    }
    for (int8_t i=0; i< AD7175_RATES_NO; i++){
        t = AD7175_rates_table[i];
        diff = t.rate - sp;
        if (diff < 0){
            diff = -diff;
        }
        if (diff < min){
            min = diff;
            index = i;
        }
    }
    t = AD7175_rates_table[index];
    return t;
}

STATIC void write_register(ad7175_handler *self, uint8_t reg_addr, uint8_t *reg_data, size_t len)
{
    if (reg_addr == 0x00 || reg_addr == 0x03 || reg_addr == 0x04)
    {
        return;
    }
    uint8_t wd_data[len + 1];
    memset(wd_data, 0, len + 1);
    wd_data[0] = get_cmd(reg_addr, 0);
    // reverse(reg_data, len);
    memcpy(&wd_data[1], reg_data, len);
    mp_hal_pin_write(self->cs, 0);
    spi_proto.transfer(self->spi, len+1, wd_data, NULL);
    mp_hal_pin_write(self->cs, 1);
}

STATIC void read_register(ad7175_handler *self, uint8_t reg_addr, void *recv_buf, size_t len)
{
    uint8_t wd_data[len + 1];
    memset(wd_data, 0, len + 1);
    wd_data[0] = get_cmd(reg_addr, 1);
    mp_hal_pin_write(self->cs, 0);
    spi_proto.transfer(self->spi, 1, &wd_data[0], NULL);
    spi_proto.transfer(self->spi, len, NULL, recv_buf);
    mp_hal_pin_write(self->cs, 1);
}


//int mvref, POLARS code_polar, REFERENCES reference,  BUFFERS buffer_flag, CLOCKSEL clock
void ad7175_init(ad7175_handler *self, mp_hal_pin_obj_t cs, mp_hal_pin_obj_t status)
{
    self->status = status;
    self->cs = cs,
    // config the cs pin
    mp_hal_pin_output(self->cs);
    mp_hal_pin_write(self->cs, 1);

    //config the status pin
    mp_hal_pin_config_speed(self->status, MP_HAL_PIN_SPEED_VERY_HIGH);
    mp_hal_pin_config(self->status, MP_HAL_PIN_MODE_INPUT, MP_HAL_PIN_PULL_UP, 0);
    // mp_hal_pin_config(self->status, MP_HAL_PIN_MODE_INPUT, MP_HAL_PIN_PULL_UP, 0);
    // printf("status: %d\n", mp_hal_pin_read(self->status));
    ad7175_ioctl(self, MP_AD7175_IOCTL_DEFAULT);
    reset(self);
    ic_init(self);
}

void ic_init(ad7175_handler *self)
{
    set_setup_register(self, ch0, bipolar, external, enable);
    set_setup_register(self, ch1, bipolar, external, enable);
}

void reset(ad7175_handler *self)
{
    uint8_t reset_data[12];
    memset(reset_data, 0xff, 12);
    mp_hal_pin_write(self->cs, 0);
    spi_proto.transfer(self->spi, 12, reset_data, NULL);
    mp_hal_pin_write(self->cs, 1);
    mp_hal_delay_ms(1);
}

void set_setup_register(ad7175_handler *self, int ch, POLARS code_polar, REFERENCES reference,  BUFFERS buffer_flag)
{
    if (ch > 3 || ch < 0)
    {
         mp_raise_ValueError(MP_ERROR_TEXT("Channel is from 0 to 3"));
    }

    st_reg reg_t =  AD7175_regs[Setup_Config_1 + ch];
    uint16_t value = 0;
    uint8_t rd_data[2];
    self->code_polar = code_polar;
    self->reference = reference;
    self->buffer_flag = buffer_flag;
    value |= self->code_polar <<12 | self->buffer_flag <<8 | self->reference <<4;
    rd_data[0] = value >> 8;
    rd_data[1] = value & 0x00ff;
    write_register(self, reg_t.addr, rd_data, 2);
    read_register(self, reg_t.addr, rd_data, reg_t.size);
}

uint8_t id_detect(ad7175_handler *self, uint32_t timeout)
{
    st_reg reg_t =  AD7175_regs[ID_st_reg];
    uint8_t rd_data[2]={0};
    int8_t ready = 0;
    uint16_t id;
    mp_hal_pin_write(self->cs, 1);
    while (!ready && --timeout)
    {
        read_register(self, reg_t.addr, rd_data, reg_t.size);
        id = (rd_data[0] << 8 | rd_data[1]);
        // printf("id is: %04x\n", id);
        ready =  ((id & 0xfff0) == 0x0cd0);
        if (!ready)
        {
            reset(self);

        }
    }
    return timeout ? MP_PASS : MP_FAIL;
}

float get_sample_rate(ad7175_handler *self)
{
    return AD7175_rates_table[self->rate].rate;
}

bool set_sample_rate(ad7175_handler *self, int ch, AD7175_rates rate)
{
    if (ch > 3 || ch < 0)
    {
         mp_raise_ValueError(MP_ERROR_TEXT("Channel is from 0 to 3"));
    }
    uint8_t rd_data[2];
    AD7175_rates before_rate;
    st_reg reg_t =  AD7175_regs[Filter_Config_1 + ch];
    before_rate = self->rate;
    self->rate = rate;
    read_register(self, reg_t.addr, rd_data, reg_t.size);
    // printf("read_rate: %02x,%02x\n", rd_data[0], rd_data[1]);
    rd_data[1] = ((rd_data[1]) & (~0x1f))| self->rate;
    // printf("write_rate: %02x,%02x\n", rd_data[0], rd_data[1]);
    write_register(self, reg_t.addr, rd_data, reg_t.size);
    read_register(self, reg_t.addr, rd_data, reg_t.size);
    if (self->rate == (rd_data[1] & 0x1f)){
        return true;
    }
    self->rate = before_rate;
    return false;
}


void set_channel_state(ad7175_handler *self, int ch, char *state)
{
    if (ch > 3 || ch < 0)
    {
         mp_raise_ValueError(MP_ERROR_TEXT("Channel is from 0 to 3"));
    }

    
    st_reg reg_t = reg_t = AD7175_regs[CH_Map_1 + ch];
    c_u16_t t;
    t.value = 0;
    if (strcmp(state, "enable")==0)
    {
        t.value |= 0x01 << 15;
    }
    t.value |= ch << 12;
    t.value |= self->ch[ch].p << 5;
    t.value |= self->ch[ch].n;
    reverse(t.reg, 2);
    // printf("set_channel_state \n");
    // printf("address: %02x, value[0]:%02x, value[1]: %02x \n", reg_t.addr, t.reg[0], t.reg[1]);
    write_register(self, reg_t.addr, (uint8_t*) &t.value, reg_t.size);
}

void select_single_channel(ad7175_handler *self, int ch)
{
    if (ch > 3 || ch < 0)
    {
         mp_raise_ValueError(MP_ERROR_TEXT("Channel is from 0 to 3"));
    }
    set_channel_state(self, 0, "disable");
    set_channel_state(self, 1, "disable");
    set_channel_state(self, ch, "enable");
}

float read_volt(ad7175_handler *self, int ch)
{

    if (ch > 3 || ch < 0)
    {
         mp_raise_ValueError(MP_ERROR_TEXT("Channel is from 0 to 3"));
    }
    float data=0;
    uint16_t timeout = 1000;
    uint8_t wd_data[3];
    c_u16_t wd_data_16;
    st_reg reg_t = AD7175_regs[Interface_Mode_Register];
    // set setup register
    ic_init(self);
    //TODO: may be &reg_t.value is not right ,need test it 
    write_register(self, reg_t.addr, (uint8_t*) &reg_t.value, reg_t.size);
    select_single_channel(self, ch);

    //set samplerate
    // set_sample_rate(self, ch, rate);

    wd_data_16.value = 0x0000;
    wd_data_16.value = ((wd_data_16.value & 0xff0f) | 0x0010);
    wd_data_16.value &= ~CLOCKSEL_MASK;
    wd_data_16.value |= self->clock;
    reg_t = AD7175_regs[ADC_Mode_Register];
    reverse(wd_data_16.reg, 2);
    write_register(self, reg_t.addr, &wd_data_16.reg[0], reg_t.size);
    // waite 400ms until convert is finished, the max timeout is 400ms
    while(timeout--)
    {
        if (mp_hal_pin_read(self->status) == 0){
            break;
        }
        mp_hal_delay_ms(1);
    }
    if (!timeout){
        // we need raise the timeout fail here
        mp_raise_ValueError(MP_ERROR_TEXT("read_volt timeout: 400000us"));
        return -99999999.0;
    }
    reg_t = AD7175_regs[Data_Register];
    // need test u8 *reg and int u32 *reg
    read_register(self, reg_t.addr, wd_data, reg_t.size);
    if (self->resolution == 24)
    {
        data = wd_data[0]<< 16| wd_data[1]<<8| wd_data[2];
    }
    return value_2_mvolt(self, data);
}

bool datalogger(ad7175_handler *self, int ch, AD7175_rates rate, c_u32_t *raw_data, uint32_t nums)
{
    if (ch > 3 || ch < 0)
    {
         mp_raise_ValueError(MP_ERROR_TEXT("Channel is from 0 to 3"));
    }

    c_u16_t wd_data_16;

    uint8_t wd_data[4]={0};
    uint8_t readDataAddress;
    uint32_t delay_us;
    uint32_t timeout=0;
    //malloc enough size to save the raw data;
    // c_u32_t  *raw_data = m_new(c_u32_t, nums);
    // memset(raw_data, 0, nums);
    // set setup register
    ic_init(self);
    //default is the continuse convert mode
    // set this mode first
    st_reg reg_t = AD7175_regs[ADC_Mode_Register];
    //TODO: may be &reg_t.value is not right ,need test it 
    write_register(self, reg_t.addr, (uint8_t*) &reg_t.value, reg_t.size);
    // set the single channel
    select_single_channel(self, ch);
    // set samplerate
    set_sample_rate(self, ch, rate);
    delay_us = (uint32_t) ((1000000.0 / AD7175_rates_table[self->rate].rate) * 0.5);

    // printf("delay_us: %d\n", delay_us);
    //set continuse read mode
    wd_data_16.value = 0x0000;
    // CONTRED and DATA_STAT enabled 0x00c0
    // wd_data_16.value = ((wd_data_16.value & 0xff0f) | 0x00c0);
    wd_data_16.value = ((wd_data_16.value & 0xff0f) | 0x0080);
    wd_data_16.value &= ~CLOCKSEL_MASK;
    wd_data_16.value |= self->clock;
    reg_t = AD7175_regs[Interface_Mode_Register];
    readDataAddress = get_cmd(AD7175_regs[Data_Register].addr, 1);

    // write_register(self, reg_t.addr, &wd_data_16, reg_t.size);
    // reverse(reg_data, len);
    // memcpy(&wd_data[1], reg_data, len);
    wd_data[0] = reg_t.addr;
    wd_data[1] = wd_data_16.reg[1];
    wd_data[2] = wd_data_16.reg[0];
    //# cs low and begin to start continuse read
    mp_hal_pin_write(self->cs, 0);
    spi_proto.transfer(self->spi, 3, wd_data, NULL);
    for (int i=0; i< nums; i++){
        //default timeout is 500ms
        timeout = delay_us * 3;
        while(timeout){
            if (mp_hal_pin_read(self->status) == 0){
                spi_proto.transfer(self->spi, 1, &readDataAddress, NULL);
                spi_proto.transfer(self->spi, 3, NULL, &raw_data[i].reg[0]);
                // reg_t = AD7175_regs[Data_Register];
                while(!mp_hal_pin_read(self->status));
                break;
            }
            mp_hal_delay_us(1);
            timeout--;
        }
        if (!timeout){
            goto ERROR;
        }
        continue;
    }   
ERROR:
    // reg_t = AD7175_regs[Data_Register];
    // // read_register(self, reg_t.addr, wd_data, reg_t.size);
    // for (int i=0; i< nums; i++){
    //     printf("voltage0: %f\n", value_2_mvolt(self, (float)(raw_data[i].reg[0]<<16|raw_data[i].reg[1]<<8|raw_data[i].reg[2])));
    //     // printf("%d: %02d-%02d-%02d-%02d\n", i, raw_data[i].reg[0],raw_data[i].reg[1],raw_data[i].reg[2],raw_data[i].reg[3]);
    // }
    // m_del(c_u32_t, raw_data, nums);
    while(!mp_hal_pin_read(self->status));
    reset(self);
    mp_hal_pin_write(self->cs, 1);
    // if (!timeout){
    //     mp_raise_ValueError(MP_ERROR_TEXT("datalogger is timeout"));
    // }
    // printf("fffffffffffffff\n");
    return timeout ? true : false;
}