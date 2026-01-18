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
#include "timer.h"
#include "Counter.h"


TIM_HandleTypeDef TIM5_Handle;         

TIM_HandleTypeDef TIM3_Handle; 

const uint32_t channel_table[TIM_IC_MAX] =
{TIM_CHANNEL_1, TIM_CHANNEL_3};



STATIC const mp_hal_pin_obj_t pin_table[TIM_IC_MAX] =
{pin_A0, pin_A2};


STATIC const mp_obj_t qstr_table[TIM_IC_MAX*2] = 
{
    MP_OBJ_NEW_QSTR(MP_QSTR_channel0_first),
    MP_OBJ_NEW_QSTR(MP_QSTR_channel0_second),
    MP_OBJ_NEW_QSTR(MP_QSTR_channel1_first),
    MP_OBJ_NEW_QSTR(MP_QSTR_channel1_second),
};



tim_ic_info_t *counter;
STATIC void init_tim_ic_info(tim_ic_info_t *self);
STATIC void config_ic(tim_ic_info_t *self);
STATIC void config_timer(tim_ic_info_t *self, int duration_ms);


STATIC void config_timer(tim_ic_info_t *self, int duration_ms)
{
    __HAL_RCC_TIM3_CLK_ENABLE();
    TIM3_Handle.Instance=TIM3;                          
    TIM3_Handle.Init.Prescaler=8400-1;                    
    TIM3_Handle.Init.CounterMode=TIM_COUNTERMODE_UP;    
    TIM3_Handle.Init.Period= duration_ms*10 - 1;                     
    TIM3_Handle.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_Base_Init(&TIM3_Handle);
    __HAL_TIM_CLEAR_IT(&TIM3_Handle, TIM_IT_UPDATE);
        // set up and enable interrupt
    NVIC_SetPriority(TIM3_IRQn, IRQ_PRI_TIMX);
    HAL_NVIC_EnableIRQ(TIM3_IRQn);
    // self->timer_ready = 0;
    // self->freq_measure = 1;
}


STATIC void config_ic(tim_ic_info_t *self)
{
    TIM_IC_InitTypeDef TIM5_CH1Config;
    TIM5_Handle.Instance = TIM5;
    TIM5_Handle.Init.Period = 0xffffffff; // timer cycles at 50Hz
    TIM5_Handle.Init.Prescaler = 21-1;//(timer_get_source_freq(5) / 100000) - 1; // timer runs at 100kHz
    TIM5_Handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    TIM5_Handle.Init.CounterMode = TIM_COUNTERMODE_UP;
    HAL_TIM_IC_Init(&TIM5_Handle);
    TIM5_CH1Config.ICPolarity= TIM_ICPOLARITY_BOTHEDGE;    
    TIM5_CH1Config.ICSelection=TIM_ICSELECTION_DIRECTTI;
    TIM5_CH1Config.ICPrescaler=TIM_ICPSC_DIV1;          
    TIM5_CH1Config.ICFilter=0;                          

    for(uint8_t i=0; i< TIM_IC_MAX; i++)
    {
        HAL_TIM_IC_ConfigChannel(&TIM5_Handle, &TIM5_CH1Config, channel_table[i]);
    }
}

STATIC void init_tim_ic_info(tim_ic_info_t *self)
{
    self->cap_status = 0;
    self->timer_ready = 0;
    self->update_cnt = 0;
    for (uint8_t i=0; i<TIM_IC_MAX; i++)
    {
        self->cap_val_cur[i] = 0;
        self->cap_val_last[i] = 0;
    }
}


//Capture dispatch
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{
	if (htim == &TIM5_Handle) {
        if (counter->freq_measure == 0)
        {
            TIMCaptureChannelHandle(htim);
        }else
        {
            TIMCaptureChannelHandle1(htim);
        }
        
    }
}

void TIMCaptureChannelHandle1(TIM_HandleTypeDef *htim)
{
    counter->update_cnt += 1;
}

void TIMCaptureChannelHandle(TIM_HandleTypeDef *htim)
{
    // uint8_t channel_num, channel;
    // tim_read_channel_num(htim, &channel_num, &channel);
    // if(channel_num == 0xFF)
    // {
    //     return ;
    // }
    uint8_t channel_num = (htim->Channel==HAL_TIM_ACTIVE_CHANNEL_1)?0:1;

    if((counter->cap_status&0x80) == 0)
    {
        if ((counter->cap_status)&0x40) 
        {
            if(channel_num){
                counter->cap_val_last[channel_num] = TIM5->CCR3;
                // counter->cp_cnt2 += 1;
            }else{
                counter->cap_val_last[channel_num] = TIM5->CCR1;
                // counter->cp_cnt1 += 1;
            }
            // TIM_RESET_CAPTUREPOLARITY(&TIM5_Handle,channel_num);   
            // TIM_SET_CAPTUREPOLARITY(&TIM5_Handle,channel_num, counter->first_edge_seq ? TIM_ICPOLARITY_RISING:TIM_ICPOLARITY_FALLING);
            //disabled by Clark @ 20240205
            HAL_TIM_IC_Stop_IT(&TIM5_Handle,channel_num);   
        }
        else
        {
            if(channel_num){
                counter->cap_val_cur[channel_num] = TIM5->CCR3;
            }else{
                counter->cap_val_cur[channel_num] = TIM5->CCR1;
            }
            counter->cap_status |= 0x40;
            // __HAL_TIM_DISABLE(&TIM5_Handle);       
            // __HAL_TIM_SET_COUNTER(&TIM5_Handle,0);
            // TIM_RESET_CAPTUREPOLARITY(&TIM5_Handle,channel_num);   
            // TIM_SET_CAPTUREPOLARITY(&TIM5_Handle,channel_num, counter->second_edge_seq ? TIM_ICPOLARITY_RISING:TIM_ICPOLARITY_FALLING);
            // __HAL_TIM_ENABLE(&TIM5_Handle);
        }
    }
    
}


void tim_read_channel_num(TIM_HandleTypeDef *htim, uint8_t* channel_num, uint8_t* channel)
{
    switch (htim->Channel)
    {
    case HAL_TIM_ACTIVE_CHANNEL_1:
        *channel_num = 0;
        *channel = TIM_CHANNEL_1;
        break;
    // case HAL_TIM_ACTIVE_CHANNEL_2:
    //     *channel_num = 1;
    //     *channel = TIM_CHANNEL_2;
    //     break;
    case HAL_TIM_ACTIVE_CHANNEL_3:
        *channel_num = 1;
        *channel = TIM_CHANNEL_3;
        break;
    // case HAL_TIM_ACTIVE_CHANNEL_4:
    //     *channel_num = 3;
    //     *channel = TIM_CHANNEL_4;
    //     break;
    default:
        *channel_num = 0xFF;
        *channel = 0xFF;
        break;
    }
}


mp_obj_t machine_counter_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *all_args)
{
     printf("machine odin make new");
    tim_ic_info_t *self = m_new_obj(tim_ic_info_t);
    self->base.type = &mycounter_type;
    for(int i=0; i < TIM_IC_MAX; i++){
        self->pin[i] = m_new_obj(pin_obj_t);
        self->pin[i] = pin_table[i];
        mp_hal_pin_config_speed(self->pin[i], MP_HAL_PIN_SPEED_VERY_HIGH);
        // GPIO configuration
        mp_hal_pin_config(self->pin[i], MP_HAL_PIN_MODE_ALT, MP_HAL_PIN_PULL_NONE, GPIO_AF2_TIM5);
        printf("self->pin[%d]: %d\n", i, self->pin[i]->pin);
        printf("self->port[%d]: %d\n", i, self->pin[i]->port);
    }
    //because IQR callback
    counter = self;
    // if TIM5 is disable, enable the clk
    if (__HAL_RCC_TIM5_IS_CLK_DISABLED()) {
        __HAL_RCC_TIM5_CLK_ENABLE();
        // set up and enable interrupt
        NVIC_SetPriority(TIM5_IRQn, IRQ_PRI_TIM5);
        HAL_NVIC_EnableIRQ(TIM5_IRQn);
        config_ic(self);
    }
    return MP_OBJ_FROM_PTR(self);
}

STATIC mp_obj_t trigger_config(mp_obj_t self_in)
{

    __HAL_TIM_DISABLE(&TIM5_Handle);        
    __HAL_TIM_SET_COUNTER(&TIM5_Handle, 0);
    for(uint8_t i=0; i<TIM_IC_MAX; i++)
    {
       __HAL_TIM_SET_COMPARE(&TIM5_Handle, channel_table[i], 0);
    }
    __HAL_TIM_CLEAR_IT(&TIM5_Handle, TIM_IT_CC1);
    __HAL_TIM_CLEAR_IT(&TIM5_Handle, TIM_IT_CC3);
    //two_channel_enable is 0 means single channel
    //two_channel_enable is 1 means double channel
    tim_ic_info_t *self = MP_OBJ_TO_PTR(self_in);
    self->freq_measure = 0;
    //init time ic info struct
    init_tim_ic_info(self);

    for (uint8_t i=0; i< TIM_IC_MAX; i++)
    {
        TIM_RESET_CAPTUREPOLARITY(&TIM5_Handle,channel_table[i]);   
        TIM_SET_CAPTUREPOLARITY(&TIM5_Handle,channel_table[i], TIM_ICPOLARITY_BOTHEDGE);
        // TIM_SET_CAPTUREPOLARITY(&TIM5_Handle,channel_table[i], counter->first_edge_seq ? TIM_ICPOLARITY_RISING:TIM_ICPOLARITY_FALLING);
    }
    for(uint8_t i=0; i<TIM_IC_MAX; i++)
    {
        HAL_TIM_IC_Start_IT(&TIM5_Handle, channel_table[i]);   
    }
    __HAL_TIM_ENABLE(&TIM5_Handle);  

    return mp_const_none; 
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(trigger_config_obj, trigger_config);


STATIC mp_obj_t measure_freq(mp_obj_t self_in, mp_obj_t duration_ms, mp_obj_t channel)
{
    int ch = mp_obj_get_int(channel);
    if (ch > 1)
    {
        mp_raise_ValueError(MP_ERROR_TEXT("only channel1 PA0 and Channel2 PA2 is enable"));  
    }
    tim_ic_info_t *self = MP_OBJ_TO_PTR(self_in);
    __HAL_TIM_DISABLE(&TIM5_Handle);       
    __HAL_TIM_SET_COUNTER(&TIM5_Handle,0);
    __HAL_TIM_SET_COMPARE(&TIM5_Handle, channel_table[ch], 0);
    if (ch ==0){
        __HAL_TIM_CLEAR_IT(&TIM5_Handle, TIM_IT_CC1);
    }else{
        __HAL_TIM_CLEAR_IT(&TIM5_Handle, TIM_IT_CC3);
    }
    HAL_TIM_Base_Stop_IT(&TIM3_Handle);
    self->freq_measure = 1;
    //init time ic info struct
    init_tim_ic_info(self);
    TIM_RESET_CAPTUREPOLARITY(&TIM5_Handle,channel_table[ch]);
    TIM_SET_CAPTUREPOLARITY(&TIM5_Handle,channel_table[ch], TIM_ICPOLARITY_RISING);
    int timeout_ms = mp_obj_get_int(duration_ms);
    config_timer(self, timeout_ms);
    // __HAL_TIM_ENABLE(&TIM5_Handle);   
    if(ch==0){
        __HAL_TIM_ENABLE_IT(&TIM5_Handle, TIM_IT_CC1);
    }else{
        __HAL_TIM_ENABLE_IT(&TIM5_Handle, TIM_IT_CC3);
    }
  /* Enable the Input Capture channel */
    TIM_CCxChannelCmd(TIM5_Handle.Instance, channel_table[ch], TIM_CCx_ENABLE);
    // HAL_TIM_IC_Start_IT(&TIM5_Handle, channel_table[ch]);  
    HAL_TIM_Base_Start_IT(&TIM3_Handle);
    /* Enable the Peripheral */
    __HAL_TIM_ENABLE(&TIM5_Handle);
    
    int time_out = timeout_ms+100;
    while(!self->timer_ready && time_out)
    {
        mp_hal_delay_ms(1);
        time_out --;
    }
    // mp_obj_new_int(self->update_cnt);
    return mp_obj_new_float(time_out ? (self->update_cnt)*(1000.0/timeout_ms): -99999);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(measure_freq_obj, measure_freq);



STATIC mp_obj_t read_data(mp_obj_t self_in)
{
    tim_ic_info_t *self = MP_OBJ_TO_PTR(self_in);
    //disable
    __HAL_TIM_DISABLE(&TIM5_Handle);   
    for(uint8_t i=0; i<TIM_IC_MAX; i++)
    {
        HAL_TIM_IC_Stop_IT(&TIM5_Handle, channel_table[i]);
    }
    mp_obj_dict_t *dt = MP_OBJ_TO_PTR(mp_obj_new_dict(TIM_IC_MAX*2));

    for(uint8_t i=0; i< TIM_IC_MAX; i++)
    {
        mp_obj_dict_store(dt, qstr_table[2*i], mp_obj_new_float(self->cap_val_cur[i]/4));
        mp_obj_dict_store(dt, qstr_table[2*i+1],  mp_obj_new_float(self->cap_val_last[i]/4));
    }
    return dt;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(read_data_obj, read_data);


STATIC const mp_rom_map_elem_t counter_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_counter) },
    { MP_ROM_QSTR(MP_QSTR_trigger), MP_ROM_PTR(&trigger_config_obj) },   
    { MP_ROM_QSTR(MP_QSTR_read_data), MP_ROM_PTR(&read_data_obj) },   
    { MP_ROM_QSTR(MP_QSTR_measure_freq), MP_ROM_PTR(&measure_freq_obj) },   

    
};

STATIC MP_DEFINE_CONST_DICT(counter_locals_dict, counter_locals_dict_table);


const mp_obj_type_t mycounter_type = {
    .base={ &mp_type_type }, 
    .name = MP_QSTR_counter,
    .make_new=machine_counter_make_new,    
    .locals_dict = (mp_obj_dict_t*)&counter_locals_dict,
};

MP_REGISTER_MODULE(MP_QSTR_counter, mycounter_type, 1);






