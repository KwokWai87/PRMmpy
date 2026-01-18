#ifndef __COUNTER_H__
#define __COUNTER_H__

#include <stdio.h>
#include <string.h>
#include "pin.h"
#include "irq.h"



/* IC capture edge define*/
#define        IC_RISE_EDGE_FIRST                   0
#define        IC_RISE_EDGE_SECOND                  1
#define        TIM_IC_MAX                           (2)

#define        TIM_ICOF_MAX                         0x32


typedef struct _freq_rate_t{
    uint8_t rate;
    uint32_t arr;
    uint32_t psc;
}freq_rate_t;

typedef struct tim_ic_info_st
{
    mp_obj_base_t base;
    const pin_obj_t* pin;
    // uint8_t timer_ready;
    // uint8_t freq_measure; // 1 enable, 0 disable;
    // uint8_t  first_edge_seq;
    // uint8_t  second_edge_seq;
    // uint8_t cap_status;
    // uint32_t update_cnt;
    float freq;
    float dutycycle;
    uint8_t isfinish;
    uint32_t cap_val_ch1;
    uint32_t cap_val_ch2;
}tim_ic_info_t;

// extern tim_ic_info_t *counter;
// extern const uint32_t channel_table[TIM_IC_MAX];

extern TIM_HandleTypeDef TIM5_Handle;
// extern TIM_HandleTypeDef TIM4_Handle;



#endif
