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
#include "Frequency.h"


TIM_HandleTypeDef TIM2_Handle; 
TIM_HandleTypeDef TIM4_Handle;
// void (*timer_callback)(void);	//timer call back
const mp_obj_type_t myfreq_type;

tim_ic_info_t_freq *freqter;

STATIC void config_timer(tim_ic_info_t_freq *self, int duration_ms)
{
    __HAL_RCC_TIM4_CLK_ENABLE();
    TIM4_Handle.Instance=TIM4;                          
    TIM4_Handle.Init.Prescaler=8400-1;                    
    TIM4_Handle.Init.CounterMode=TIM_COUNTERMODE_UP;    
    TIM4_Handle.Init.Period= duration_ms*10 - 1;                     
    TIM4_Handle.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_Base_Init(&TIM4_Handle);
    __HAL_TIM_CLEAR_IT(&TIM4_Handle, TIM_IT_UPDATE);
        // set up and enable interrupt
    NVIC_SetPriority(TIM4_IRQn, IRQ_PRI_TIMX);
    HAL_NVIC_EnableIRQ(TIM4_IRQn);
}
//TIM_ETRPRESCALER_DIV1                
//TIM_ETRPRESCALER_DIV2                 
//TIM_ETRPRESCALER_DIV4          
//TIM_ETRPRESCALER_DIV8                
STATIC void TIM2_CHx_Cap_Init(tim_ic_info_t_freq *self, uint32_t arr, uint16_t pcs)
{
    TIM_IC_InitTypeDef  TIM2_CHxConfig;
    TIM_ClockConfigTypeDef TIM2_ClockConfig;
    TIM2_Handle.Instance = TIM2;
    TIM2_Handle.Init.Prescaler = pcs;
    TIM2_Handle.Init.CounterMode = TIM_COUNTERMODE_UP;
    TIM2_Handle.Init.Period=arr;
    TIM2_Handle.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_IC_Init(&TIM2_Handle); //input init parameters for capture
    TIM2_CHxConfig.ICPolarity= TIM_ICPOLARITY_RISING; // rising   
    TIM2_CHxConfig.ICSelection=TIM_ICSELECTION_DIRECTTI; // TI1
    TIM2_CHxConfig.ICPrescaler=TIM_ICPSC_DIV1;       
    TIM2_CHxConfig.ICFilter=0;
    HAL_TIM_IC_ConfigChannel(&TIM2_Handle, &TIM2_CHxConfig, TIM_CHANNEL_1);

    TIM2_ClockConfig.ClockSource = TIM_CLOCKSOURCE_ETRMODE2;
    TIM2_ClockConfig.ClockPolarity = TIM_ETRPOLARITY_NONINVERTED;
    TIM2_ClockConfig.ClockPrescaler = self->prescaler;
    TIM2_ClockConfig.ClockFilter = 0x00;
    HAL_TIM_ConfigClockSource(&TIM2_Handle, &TIM2_ClockConfig);
}

// STATIC void process(void)
// {
//     uint32_t cnt;
//     counter->cnt4 ++; // every time enter into timer
//     cnt = __HAL_TIM_GET_COUNTER(&TIM3_Handle);
//     __HAL_TIM_SET_COUNTER(&TIM3_Handle,0);
//     counter->update_cnt += cnt;
//     if (counter->cnt4 == counter->duration){
//         HAL_TIM_Base_Stop_IT(&TIM5_Handle);
//         __HAL_TIM_DISABLE(&TIM3_Handle);  
//         counter->timer_ready = 1;    
//     }

// }
// // Interrupt dispatch
// void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {

//     if (htim == &TIM5_Handle) {
//         // __HAL_TIM_DISABLE(&TIM5_Handle);        
//         if (timer_callback != NULL) timer_callback();
//         // HAL_TIM_Base_Stop_IT(&TIM5_Handle);
//     }
// }

// void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim)
// {
//   /* TIM Update event */
  
//   if(TIM4->SR&0x0001)
//   {
//     if (htim == &TIM4_Handle) {
//             // if (timer_callback != NULL) timer_callback();
//             counter->update_cnt = TIM2->CNT;
//             HAL_TIM_Base_Stop_IT(&TIM4_Handle);
//             __HAL_TIM_DISABLE(&TIM2_Handle);  
//             counter->timer_ready = 1;    
//         }   
//     TIM4->SR&=~(1<<0);
//   }
// }

// Interrupt dispatch
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    
    // if (htim == &TIM3_Handle) {
    //     counter->timer_ready += 1;
    //     __HAL_TIM_DISABLE(&TIM5_Handle);        
    //     HAL_TIM_IC_Stop_IT(&TIM5_Handle,channel_table[0]);   
    //     HAL_TIM_IC_Stop_IT(&TIM5_Handle,channel_table[1]);   
    //     HAL_TIM_Base_Stop_IT(&TIM3_Handle);
    // }
    // else 
    if (htim == &TIM4_Handle) {
        // if (timer_callback != NULL) timer_callback();
        freqter->update_cnt = TIM2->CNT;
        HAL_TIM_Base_Stop_IT(&TIM4_Handle);
        __HAL_TIM_DISABLE(&TIM2_Handle);  
        freqter->timer_ready = 1; 
        // printf("freqter->update_cnt: %d\r\n", freqter->update_cnt);
    }
}

/********************Micropython Function****************************/
mp_obj_t machine_frequency_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *all_args)
{
    tim_ic_info_t_freq *self = m_new_obj(tim_ic_info_t_freq);
    self->base.type = &myfreq_type;
    self->pin = m_new_obj(pin_obj_t);
    self->pin = pin_A15;
    mp_hal_pin_config_speed(self->pin, MP_HAL_PIN_SPEED_VERY_HIGH);
    // GPIO configuration
    mp_hal_pin_config(self->pin, MP_HAL_PIN_MODE_ALT, MP_HAL_PIN_PULL_NONE, GPIO_AF1_TIM2);
    //because IQR callback
    freqter = self;
        // if TIM4 is disable, enable the clk

    if (__HAL_RCC_TIM2_IS_CLK_DISABLED()) {
        __HAL_RCC_TIM2_CLK_ENABLE();
        // set up and enable interrupt
        NVIC_SetPriority(TIM2_IRQn, IRQ_PRI_TIMX);
        HAL_NVIC_EnableIRQ(TIM2_IRQn);
    }
    return MP_OBJ_FROM_PTR(self);
}

STATIC mp_obj_t measure_freq(mp_obj_t self_in, mp_obj_t duration_ms, mp_obj_t polarity)
{

    tim_ic_info_t_freq *self = MP_OBJ_TO_PTR(self_in);
    uint8_t multiplier;
    self->timer_ready = 0;
    self->update_cnt = 0;
    if (mp_obj_get_int(polarity)==0){
        self->prescaler = TIM_ETRPRESCALER_DIV1;
    }else{
       
        self->prescaler = TIM_ETRPRESCALER_DIV8;
    }
     //TIM_ETRPRESCALER_DIV8/TIM_ETRPRESCALER_DIV1 default is divide 0
    TIM2_CHx_Cap_Init(self, 0xFFFFFFFF, 0);
    // timer_callback = process; // add callback function to it;
    __HAL_TIM_DISABLE(&TIM2_Handle);       
    __HAL_TIM_SET_COUNTER(&TIM2_Handle,0);
    HAL_TIM_Base_Stop_IT(&TIM4_Handle);
    self->duration = mp_obj_get_int(duration_ms);
    config_timer(self, self->duration);// 1ms interrupt
    /* Enable the Peripheral */  
   __HAL_TIM_ENABLE_IT(&TIM4_Handle, TIM_IT_UPDATE); //enable timer10 IT
    __HAL_TIM_ENABLE(&TIM4_Handle);//enable TIMER10
    __HAL_TIM_ENABLE(&TIM2_Handle);  //enable TIMER4
    int time_out = self->duration+100;
    while(!self->timer_ready && time_out)
    {
        mp_hal_delay_ms(1);
        time_out --;
    }
    switch(self->prescaler) {
        default:
            multiplier = 1;
            break;
        // case TIM_ETRPRESCALER_DIV1:
        //     self->update_cnt *= (1000.0/self->duration)
        //     break;
        // case TIM_ETRPRESCALER_DIV2:
        //     self->update_cnt *= (1000.0/self->duration)*2
        //     break;
        // case TIM_ETRPRESCALER_DIV4:
        //     self->update_cnt *= (1000.0/self->duration)*4
        //     break;
        case TIM_ETRPRESCALER_DIV8:
            multiplier = 8;
            break;
    }
    return mp_obj_new_float(time_out ? (float)(self->update_cnt*(1000.0/self->duration)*multiplier): -99999);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(measure_freq_obj, measure_freq);


STATIC const mp_rom_map_elem_t freqer_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_freq) },  
    { MP_ROM_QSTR(MP_QSTR_measure_freq), MP_ROM_PTR(&measure_freq_obj) },   

    
};

STATIC MP_DEFINE_CONST_DICT(freqer_locals_dict, freqer_locals_dict_table);


const mp_obj_type_t myfreq_type = {
    .base={ &mp_type_type }, 
    .name = MP_QSTR_freq,
    .make_new=machine_frequency_make_new,    
    .locals_dict = (mp_obj_dict_t*)&freqer_locals_dict,
};

MP_REGISTER_MODULE(MP_QSTR_freq, myfreq_type, 1);