#ifndef __FREQUENCY_H__
#define __FREQUENCY_H__

#include <stdio.h>
#include <string.h>
#include "pin.h"
#include "irq.h"

typedef struct tim_ic_info_st_freq
{
    mp_obj_base_t base;
    const pin_obj_t* pin;
    uint8_t timer_ready;
    uint32_t prescaler;
    uint32_t update_cnt;
    int duration;

}tim_ic_info_t_freq;

extern TIM_HandleTypeDef TIM4_Handle; // timer11 only have one channel, just use it as a common timer
extern TIM_HandleTypeDef TIM2_Handle;
// extern TIM_HandleTypeDef TIM4_Handle;

// void (*timer_callback)(void);	//timer call back


extern tim_ic_info_t_freq *freqter;

void TIMCaptureChannelHandle(TIM_HandleTypeDef *htim);
void TIMCaptureChannelHandle1(TIM_HandleTypeDef *htim);
void tim_read_channel_num(TIM_HandleTypeDef *htim, uint8_t* channel_num, uint8_t* channel);


#endif
