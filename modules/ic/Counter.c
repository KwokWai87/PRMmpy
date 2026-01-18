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
const mp_obj_type_t mycounter_type;

tim_ic_info_t *counter;
STATIC void init_tim_ic_info(tim_ic_info_t *self);
STATIC void config_ic(tim_ic_info_t *self);

STATIC void config_ic(tim_ic_info_t *self)
{
    TIM_SlaveConfigTypeDef sSlaveConfig = {0};
    TIM_IC_InitTypeDef sConfigIC = {0};

    TIM5_Handle.Instance = TIM5;
    TIM5_Handle.Init.Period = 0xffffffff; // timer cycles at 50Hz
    TIM5_Handle.Init.Prescaler = 21-1;//(timer_get_source_freq(5) / 100000) - 1; // timer runs at 100kHz
    TIM5_Handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    TIM5_Handle.Init.CounterMode = TIM_COUNTERMODE_UP;
    // TIM5_Handle.Init.Autoreload = 0xffffffff;


    HAL_TIM_Base_Init(&TIM5_Handle);

    sConfigIC.ICPrescaler = TIM_ICPSC_DIV1;
    sConfigIC.ICFilter = 8;
    sConfigIC.ICPolarity = TIM_ICPOLARITY_RISING; 
    sConfigIC.ICSelection = TIM_ICSELECTION_DIRECTTI;
    HAL_TIM_IC_ConfigChannel(&TIM5_Handle, &sConfigIC, TIM_CHANNEL_1);

    sConfigIC.ICPolarity = TIM_ICPOLARITY_FALLING; 
    sConfigIC.ICSelection = TIM_ICSELECTION_INDIRECTTI;
    HAL_TIM_IC_ConfigChannel(&TIM5_Handle, &sConfigIC, TIM_CHANNEL_2);

    sSlaveConfig.SlaveMode = TIM_SLAVEMODE_RESET;
    sSlaveConfig.InputTrigger = TIM_TS_TI1FP1;
    HAL_TIM_SlaveConfigSynchronization(&TIM5_Handle, &sSlaveConfig);

    HAL_TIM_Base_Start(&TIM5_Handle);


}

STATIC void init_tim_ic_info(tim_ic_info_t *self)
{
    self->freq = 0;
    self->dutycycle = 0;
    self->isfinish = 0;
    self->cap_val_ch1 = 0;
    self->cap_val_ch2 = 0;
}


//Capture dispatch
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1) {
        counter->cap_val_ch1 = TIM5->CCR1;
        counter->cap_val_ch2 = TIM5->CCR2;
        if(counter->cap_val_ch1 != 0){

            counter->dutycycle = (float)(counter->cap_val_ch2 + 1)*100/(counter->cap_val_ch1 + 1);
            counter->freq = 84000000/21/(float)(counter->cap_val_ch1+1);
            counter->isfinish = 1;  
        }
        
    } 
}


mp_obj_t machine_counter_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *all_args)
{
    tim_ic_info_t *self = m_new_obj(tim_ic_info_t);
    self->base.type = &mycounter_type;
    self->pin = m_new_obj(pin_obj_t);
    self->pin = pin_A0;
    mp_hal_pin_config_speed(self->pin, MP_HAL_PIN_SPEED_VERY_HIGH);
    // GPIO configuration
    mp_hal_pin_config(self->pin, MP_HAL_PIN_MODE_ALT, MP_HAL_PIN_PULL_NONE, GPIO_AF2_TIM5);
    // printf("self->pin[%d]: %d\n", 0, self->pin[0]->pin);
    // printf("self->port[%d]: %d\n", 0, self->pin[0]->port);
    // for(int i=0; i < TIM_IC_MAX; i++){
    // }
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
    int time_out = 100;
    __HAL_TIM_DISABLE(&TIM5_Handle);        
    __HAL_TIM_SET_COUNTER(&TIM5_Handle, 0);
    __HAL_TIM_SET_COMPARE(&TIM5_Handle, TIM_CHANNEL_1, 0);
    __HAL_TIM_SET_COMPARE(&TIM5_Handle, TIM_CHANNEL_2, 0);
    __HAL_TIM_CLEAR_IT(&TIM5_Handle, TIM_IT_CC1);
    __HAL_TIM_CLEAR_IT(&TIM5_Handle, TIM_IT_CC2);
    //two_channel_enable is 0 means single channel
    //two_channel_enable is 1 means double channel
    tim_ic_info_t *self = MP_OBJ_TO_PTR(self_in);
    //init time ic info struct
    init_tim_ic_info(self);
    // config_ic(self);
    HAL_TIM_IC_Start_IT(&TIM5_Handle, TIM_CHANNEL_1);
    HAL_TIM_IC_Start_IT(&TIM5_Handle, TIM_CHANNEL_2);
    mp_hal_delay_ms(time_out);
    // while(!self->isfinish && time_out)
    // {
    //     mp_hal_delay_ms(1);
    //     time_out --;
    // }
    mp_obj_dict_t *dt = MP_OBJ_TO_PTR(mp_obj_new_dict(2));
    mp_obj_dict_store(dt, MP_OBJ_NEW_QSTR(MP_QSTR_DutyCycle), mp_obj_new_float(self->dutycycle));
    mp_obj_dict_store(dt,  MP_OBJ_NEW_QSTR(MP_QSTR_Frequency),  mp_obj_new_float(self->freq));
    return dt; 
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(trigger_config_obj, trigger_config);



STATIC const mp_rom_map_elem_t counter_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_counter) },
    { MP_ROM_QSTR(MP_QSTR_trigger), MP_ROM_PTR(&trigger_config_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(counter_locals_dict, counter_locals_dict_table);


const mp_obj_type_t mycounter_type = {
    .base={ &mp_type_type }, 
    .name = MP_QSTR_counter,
    .make_new=machine_counter_make_new,    
    .locals_dict = (mp_obj_dict_t*)&counter_locals_dict,
};

MP_REGISTER_MODULE(MP_QSTR_counter, mycounter_type, 1);






