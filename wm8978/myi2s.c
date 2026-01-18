#include "i2s.h"
#include "py/dynruntime.h"
#include "py/mphal.h"
#include <stdint.h> 
#include <stm32f407xx.h>
#include <stm32f4xx_hal_i2s.h>
#include <stm32f4xx_hal_dma.h>
#include <stm32f4xx_hal_rcc_ex.h>

// #include "py/runtime.h"


I2S_HandleTypeDef I2S2_Handler;			
DMA_HandleTypeDef I2S2_TXDMA_Handler;   
DMA_HandleTypeDef I2S2_RXDMA_Handler;   


void I2S2_Init(uint32_t I2S_Standard,uint32_t I2S_Mode,uint32_t I2S_Clock_Polarity,uint32_t I2S_DataFormat)
{
	I2S2_Handler.Instance=SPI2;
	I2S2_Handler.Init.Mode=I2S_Mode;					
	I2S2_Handler.Init.Standard=I2S_Standard;			
	I2S2_Handler.Init.DataFormat=I2S_DataFormat;		
	I2S2_Handler.Init.MCLKOutput=I2S_MCLKOUTPUT_ENABLE;	
	I2S2_Handler.Init.AudioFreq=I2S_AUDIOFREQ_DEFAULT;	
	I2S2_Handler.Init.CPOL=I2S_Clock_Polarity;			
	I2S2_Handler.Init.ClockSource=I2S_CLOCK_PLL;		
	I2S2_Handler.Init.FullDuplexMode=I2S_FULLDUPLEXMODE_ENABLE;	
	HAL_I2S_Init(&I2S2_Handler); 
	
	SPI2->CR2|=1<<1;									
	I2S2ext->CR2|=1<<0;									
	__HAL_I2S_ENABLE(&I2S2_Handler);					
	__HAL_I2SEXT_ENABLE(&I2S2_Handler);					
}


const uint16_t I2S_PSC_TBL[][5]=
{
	{800 ,256,5,12,1},		//8KhzSampleRate 
	{1102,429,4,19,0},		//11.025KhzSampleRate 
	{1600,213,2,13,0},		//16KhzSampleRate
	{2205,429,4, 9,1},		//22.05KhzSampleRate
	{3200,213,2, 6,1},		//32KhzSampleRate
	{4410,271,2, 6,0},		//44.1KhzSampleRate
	{4800,258,3, 3,1},		//48KhzSampleRate
	{8820,316,2, 3,1},		//88.2KhzSampleRate
	{9600,344,2, 3,1},  	//96KhzSampleRate
	{17640,361,2,2,0},  	//176.4KhzSampleRate 
	{19200,393,2,2,0},  	//192KhzSampleRate
};


void I2S_DMA_Enable(void)
{
    uint32_t tempreg=0;
    tempreg=SPI2->CR2;    	
	tempreg|=1<<1;			
	SPI2->CR2=tempreg;		
}

uint8_t I2S2_SampleRate_Set(uint32_t samplerate)
{   
    uint8_t i=0; 
	uint32_t tempreg=0;
    RCC_PeriphCLKInitTypeDef RCCI2S2_ClkInitSture;  
	
	for(i=0;i<(sizeof(I2S_PSC_TBL)/10);i++)
	{
		if((samplerate/10)==I2S_PSC_TBL[i][0])break;
	}
    if(i==(sizeof(I2S_PSC_TBL)/10))return 1;
	
    RCCI2S2_ClkInitSture.PeriphClockSelection=RCC_PERIPHCLK_I2S;	
    RCCI2S2_ClkInitSture.PLLI2S.PLLI2SN=(uint32_t)I2S_PSC_TBL[i][1];    	
    RCCI2S2_ClkInitSture.PLLI2S.PLLI2SR=(uint32_t)I2S_PSC_TBL[i][2];    
    HAL_RCCEx_PeriphCLKConfig(&RCCI2S2_ClkInitSture);             	
	
	RCC->CR|=1<<26;					
	while((RCC->CR&1<<27)==0);		
	tempreg=I2S_PSC_TBL[i][3]<<0;	
	tempreg|=I2S_PSC_TBL[i][4]<<8;	
	tempreg|=1<<9;					
	SPI2->I2SPR=tempreg;			
	return 0;
}  


void I2S2_TX_DMA_Init(uint8_t* buf0,uint8_t *buf1,uint16_t num)
{  
    __HAL_RCC_DMA1_CLK_ENABLE();                                    		
    __HAL_LINKDMA(&I2S2_Handler,hdmatx,I2S2_TXDMA_Handler);         		
	
    I2S2_TXDMA_Handler.Instance=DMA1_Stream4;                       		                   
    I2S2_TXDMA_Handler.Init.Channel=DMA_CHANNEL_0;                  		
    I2S2_TXDMA_Handler.Init.Direction=DMA_MEMORY_TO_PERIPH;         		
    I2S2_TXDMA_Handler.Init.PeriphInc=DMA_PINC_DISABLE;             		
    I2S2_TXDMA_Handler.Init.MemInc=DMA_MINC_ENABLE;                 		
    I2S2_TXDMA_Handler.Init.PeriphDataAlignment=DMA_PDATAALIGN_HALFWORD;   	
    I2S2_TXDMA_Handler.Init.MemDataAlignment=DMA_MDATAALIGN_HALFWORD;    	
    I2S2_TXDMA_Handler.Init.Mode=DMA_CIRCULAR;                      		
    I2S2_TXDMA_Handler.Init.Priority=DMA_PRIORITY_HIGH;             		
    I2S2_TXDMA_Handler.Init.FIFOMode=DMA_FIFOMODE_DISABLE;          		
    I2S2_TXDMA_Handler.Init.MemBurst=DMA_MBURST_SINGLE;             		
    I2S2_TXDMA_Handler.Init.PeriphBurst=DMA_PBURST_SINGLE;          		
    HAL_DMA_DeInit(&I2S2_TXDMA_Handler);                            		
    HAL_DMA_Init(&I2S2_TXDMA_Handler);	                            		

    HAL_DMAEx_MultiBufferStart(&I2S2_TXDMA_Handler,(uint32_t)buf0,(uint32_t)&SPI2->DR,(uint32_t)buf1,num);
    __HAL_DMA_DISABLE(&I2S2_TXDMA_Handler);                         		
    mp_hal_delay_us(10);                                                   		
    __HAL_DMA_ENABLE_IT(&I2S2_TXDMA_Handler,DMA_IT_TC);             		
    __HAL_DMA_CLEAR_FLAG(&I2S2_TXDMA_Handler,DMA_FLAG_TCIF0_4);     		
	
	HAL_NVIC_SetPriority(DMA1_Stream4_IRQn,0,0);                    		
    HAL_NVIC_EnableIRQ(DMA1_Stream4_IRQn);
}


void I2S2ext_RX_DMA_Init(uint8_t* buf0,uint8_t *buf1,uint16_t num)
{  
	__HAL_RCC_DMA1_CLK_ENABLE();                                    		
    __HAL_LINKDMA(&I2S2_Handler,hdmarx,I2S2_RXDMA_Handler);         		
	
    I2S2_RXDMA_Handler.Instance=DMA1_Stream3;                       		             
    I2S2_RXDMA_Handler.Init.Channel=DMA_CHANNEL_3;                  		
    I2S2_RXDMA_Handler.Init.Direction=DMA_PERIPH_TO_MEMORY;         		
    I2S2_RXDMA_Handler.Init.PeriphInc=DMA_PINC_DISABLE;             		
    I2S2_RXDMA_Handler.Init.MemInc=DMA_MINC_ENABLE;                 		
    I2S2_RXDMA_Handler.Init.PeriphDataAlignment=DMA_PDATAALIGN_HALFWORD;   	
    I2S2_RXDMA_Handler.Init.MemDataAlignment=DMA_MDATAALIGN_HALFWORD;    	
    I2S2_RXDMA_Handler.Init.Mode=DMA_CIRCULAR;                      		
    I2S2_RXDMA_Handler.Init.Priority=DMA_PRIORITY_MEDIUM;             		
    I2S2_RXDMA_Handler.Init.FIFOMode=DMA_FIFOMODE_DISABLE;          		
    I2S2_RXDMA_Handler.Init.MemBurst=DMA_MBURST_SINGLE;             		
    I2S2_RXDMA_Handler.Init.PeriphBurst=DMA_PBURST_SINGLE;          		
    HAL_DMA_DeInit(&I2S2_RXDMA_Handler);                            		
    HAL_DMA_Init(&I2S2_RXDMA_Handler);	                            		

    HAL_DMAEx_MultiBufferStart(&I2S2_RXDMA_Handler,(uint32_t)&I2S2ext->DR,(uint32_t)buf0,(uint32_t)buf1,num);
    __HAL_DMA_DISABLE(&I2S2_RXDMA_Handler);                         		
    mp_hal_delay_us(10);                                                   		
    __HAL_DMA_ENABLE_IT(&I2S2_RXDMA_Handler,DMA_IT_TC);             		
    __HAL_DMA_CLEAR_FLAG(&I2S2_RXDMA_Handler,DMA_FLAG_TCIF3_7);     		
	HAL_NVIC_SetPriority(DMA1_Stream3_IRQn,0,1);  
    HAL_NVIC_EnableIRQ(DMA1_Stream3_IRQn);	
} 

void (*i2s_tx_callback)(void);	
void (*i2s_rx_callback)(void);	

void DMA1_Stream4_IRQHandler(void)
{  
    if(__HAL_DMA_GET_FLAG(&I2S2_TXDMA_Handler,DMA_FLAG_TCIF0_4)!=RESET) 
    {
        __HAL_DMA_CLEAR_FLAG(&I2S2_TXDMA_Handler,DMA_FLAG_TCIF0_4);     
		if(i2s_tx_callback!=NULL) i2s_tx_callback();	
    } 
} 

void DMA1_Stream3_IRQHandler(void)
{ 
    if(__HAL_DMA_GET_FLAG(&I2S2_RXDMA_Handler,DMA_FLAG_TCIF3_7)!=RESET) 
    {
        __HAL_DMA_CLEAR_FLAG(&I2S2_RXDMA_Handler,DMA_FLAG_TCIF3_7);     
		if(i2s_rx_callback!=NULL) i2s_rx_callback();	
    } 											 
} 

void I2S_Play_Start(void)
{   	
	__HAL_DMA_ENABLE(&I2S2_TXDMA_Handler);

void I2S_Play_Stop(void)
{ 
	__HAL_DMA_DISABLE(&I2S2_TXDMA_Handler);
} 

void I2S_Rec_Start(void)
{ 
	__HAL_DMA_ENABLE(&I2S2_RXDMA_Handler); 	
}

void I2S_Rec_Stop(void)
{   
	__HAL_DMA_DISABLE(&I2S2_RXDMA_Handler); 
}



/*****************************************/

STATIC mp_obj_t myi2s_init_helper(odin_t *selfin,
                                         size_t n_args,
                                         const mp_obj_t *pos_args,
                                         mp_map_t *kw_args)
{
    enum {ARG_sck, ARG_ws, ARG_sd, ARG_mclk};
    static const mp_arg_t allowed_args[] =
    {
        // { MP_QSTR_id,    MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 0 } }, 
        { MP_QSTR_sck,      MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_OBJ,   {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_ws,       MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_OBJ,   {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_sd,       MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_OBJ,   {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_mclk,     MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_OBJ,   {.u_obj = MP_OBJ_NULL} },
        // { MP_QSTR_mode,     MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_INT,   {.u_int = -1} },
        // { MP_QSTR_bits,     MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_INT,   {.u_int = -1} },
        // { MP_QSTR_format,   MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_INT,   {.u_int = -1} },
        // { MP_QSTR_rate,     MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_INT,   {.u_int = -1} },
        // { MP_QSTR_ibuf,     MP_ARG_KW_ONLY | MP_ARG_REQUIRED | MP_ARG_INT,   {.u_int = -1} },
    };
    // odin_t *self = MP_OBJ_TO_PTR(selfin);

    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // are I2S pin assignments valid?
    const pin_af_obj_t *pin_af;
    // is SCK valid?
    if (mp_obj_is_type(args[ARG_sck].u_obj, &pin_type)) {
        pin_af = pin_find_af(MP_OBJ_TO_PTR(args[ARG_sck].u_obj), AF_FN_I2S, self->i2s_id);
        if (pin_af->type != AF_PIN_TYPE_I2S_CK) {
            mp_raise_ValueError(MP_ERROR_TEXT("invalid SCK pin"));
        }
    } else {
        mp_raise_ValueError(MP_ERROR_TEXT("SCK not a Pin type"));
    }

    // is WS valid?
    if (mp_obj_is_type(args[ARG_ws].u_obj, &pin_type)) {
        pin_af = pin_find_af(MP_OBJ_TO_PTR(args[ARG_ws].u_obj), AF_FN_I2S, self->i2s_id);
        if (pin_af->type != AF_PIN_TYPE_I2S_WS) {
            mp_raise_ValueError(MP_ERROR_TEXT("invalid WS pin"));
        }
    } else {
        mp_raise_ValueError(MP_ERROR_TEXT("WS not a Pin type"));
    }

    // is SD valid?
    if (mp_obj_is_type(args[ARG_sd].u_obj, &pin_type)) {
        pin_af = pin_find_af(MP_OBJ_TO_PTR(args[ARG_sd].u_obj), AF_FN_I2S, self->i2s_id);
        if (pin_af->type != AF_PIN_TYPE_I2S_SD) {
            mp_raise_ValueError(MP_ERROR_TEXT("invalid SD pin"));
        }
    } else {
        mp_raise_ValueError(MP_ERROR_TEXT("SD not a Pin type"));
    }

    // is MCLK valid?
    if (mp_obj_is_type(args[ARG_mclk].u_obj, &pin_type)) {
        pin_af = pin_find_af(MP_OBJ_TO_PTR(args[ARG_mclk].u_obj), AF_FN_I2S, self->i2s_id);
        if (pin_af->type != AF_PIN_TYPE_I2S_MCK) {
            mp_raise_ValueError(MP_ERROR_TEXT("invalid MCLK pin"));
        }
    } else {
        mp_raise_ValueError(MP_ERROR_TEXT("MCLK not a Pin type"));
    }

    I2S2_Init(I2S_STANDARD_PHILIPS,I2S_MODE_MASTER_TX,I2S_CPOL_LOW,I2S_DATAFORMAT_16B);
    I2S2_SampleRate_Set(16000);
}



STATIC mp_obj_t myi2s_init(size_t n_args, const mp_obj_t *args, mp_map_t *kw_args)
{
    
    return myi2s_init_helper(args[0], n_args - 1, args + 1, kw_args);
}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(myi2s_obj, 1, myi2s_init);



// This is the entry point and is called when the module is imported
mp_obj_t mpy_init(mp_obj_fun_bc_t *self, size_t n_args, size_t n_kw, mp_obj_t *args) {
    // This must be first, it sets up the globals dict and other things
    MP_DYNRUNTIME_INIT_ENTRY
    // Make the function available in the module's namespace
    mp_store_global(MP_QSTR_myi2s, MP_OBJ_FROM_PTR(&myi2s_obj));

    // This must be last, it restores the globals dict
    MP_DYNRUNTIME_INIT_EXIT
}

