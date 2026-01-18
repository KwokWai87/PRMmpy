#ifndef __I2S_H
#define __I2S_H


#define MICROPY_MPHALPORT_H 1

extern void (*i2s_tx_callback)(void);		
extern void (*i2s_rx_callback)(void);	

void I2S2_Init(uint32_t I2S_Standard,uint32_t I2S_Mode,uint32_t I2S_Clock_Polarity,uint32_t I2S_DataFormat);
//void I2S2ext_Init(u32 I2S_Standard,u32 I2S_Mode,u32 I2S_Clock_Polarity,u32 I2S_DataFormat);
void I2S2ext_Init(uint8_t std,uint8_t mode,uint8_t cpol,uint8_t datalen);
uint8_t I2S2_SampleRate_Set(u32 samplerate);
void I2S2_TX_DMA_Init(uint8_t* buf0,uint8_t *buf1,uint16_t num); 
void I2S2ext_RX_DMA_Init(uint8_t* buf0,uint8_t *buf1,uint16_t num);
void I2S_Play_Start(void); 
void I2S_Rec_Start(void);
void I2S_Play_Stop(void);
void I2S_Rec_Stop(void);
#endif