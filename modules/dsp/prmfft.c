#include "stdint.h"
#include "stdio.h"

#include "py/obj.h"
#include "py/runtime.h"

#include "arm_math.h"

#define TEST_LENGTH_SAMPLES 4096

//*********************************windows*******************************************//
STATIC void window_blackman(float *inputData, int length, float *outputData)
{
    int k;
    float a0 = 0.42;
    float a1 = 0.5;
    float a2 = 0.08;
    // arm_cos_f32
    // arm_sin_f32
    for (k=0; k<length; k++){
        outputData[k] = (a0 
                        - a1 * arm_cos_f32(k*2 * PI * length)
                        + a2 * arm_cos_f32(k * 4 * PI /length))*inputData[k];
    }

}

STATIC void window_blackman_harris(float *inputData, int length, float *outputData)
{
    int k;
    float a0 = 0.35875;
    float a1 = 0.48829;
    float a2 = 0.14128;
    float a3 = 0.01168;
    // arm_cos_f32
    // arm_sin_f32
    for (k=0; k<length; k++){
        outputData[k] = (a0 
                        - a1 * arm_cos_f32(k * 2 * PI / length)
                        + a2 * arm_cos_f32(k * 4 * PI / length)
                        - a3 * arm_cos_f32(k * 6 * PI / length) ) *inputData[k];
    }
}

STATIC void window_blackman_nuttall(float *inputData, int length, float *outputData)
{
    int k;
    float a0 = 0.3635819;
    float a1 = 0.4891775;
    float a2 = 0.1365995;
    float a3 = 0.0106411;
    // arm_cos_f32
    // arm_sin_f32
    for (k=0; k<length; k++){
        outputData[k] = (a0 
                        - a1 * arm_cos_f32(k * 2 * PI / length)
                        + a2 * arm_cos_f32(k * 4 * PI / length)
                        - a3 * arm_cos_f32(k * 6 * PI / length) ) *inputData[k];
    }
}

STATIC void window_flat_top(float *inputData, int length, float *outputData)
{
    int k;
    float a0 = 0.21557895;
    float a1 = 0.41663158;
    float a2 = 0.277263158;
    float a3 = 0.083578947;
    float a4 = 0.006947368;
    // arm_cos_f32
    // arm_sin_f32
    for (k=0; k<length; k++){
        outputData[k] = (a0 
                        - a1 * arm_cos_f32(k * 2 * PI / length)
                        + a2 * arm_cos_f32(k * 4 * PI / length)
                        - a3 * arm_cos_f32(k * 6 * PI / length)
                        + a4 * arm_cos_f32(k * 8 * PI / length) ) * inputData[k];
    }
}

STATIC void window_hann(float *inputData, int length, float *outputData)
{
    int k;
    // arm_cos_f32
    // arm_sin_f32
    for (k=0; k<length; k++){
        outputData[k] = (0.5 * (1 - arm_cos_f32(k * 2 * PI / length))) * inputData[k];
    }
}

STATIC void window_nuttall(float *inputData, int length, float *outputData)
{
    int k;
    float a0 = 0.355768;
    float a1 = 0.487396;
    float a2 = 0.144232;
    float a3 = 0.012604;
    // arm_cos_f32
    // arm_sin_f32
    for (k=0; k<length; k++){
        outputData[k] = (a0 
                        - a1 * arm_cos_f32(k * 2 * PI / length)
                        + a2 * arm_cos_f32(k * 4 * PI / length)
                        - a3 * arm_cos_f32(k * 6 * PI / length)) * inputData[k];
    }
}

STATIC void window_nutall_mtlab(float *inputData, int length, float *outputData)
{
    int k;
    float a0 = 0.338946;
    float a1 = 0.481973;
    float a2 = 0.161054;
    float a3 = 0.018027;
    // arm_cos_f32
    // arm_sin_f32
    for (k=0; k<length; k++){
        outputData[k] = (a0 
                        - a1 * arm_cos_f32(k * 2 * PI / length)
                        + a2 * arm_cos_f32(k * 4 * PI / length)
                        - a3 * arm_cos_f32(k * 6 * PI / length)) * inputData[k];
    }
}




STATIC float average(float *inputData, int length){
    float sum = 0;
    for(int i=0; i<length; i++){
        sum += inputData[i];
    }
    return sum/(float) length;
}

STATIC void max(float *inputData, int length, float *maxValue, int *maxIndex)
{
    float _maxValue = inputData[0];
    int _maxIndex = 1;
    for (int i=1; i< length; i++)
    {
        if (inputData[i] > _maxValue){
            _maxValue = inputData[i];
            _maxIndex = i;
        }
    }
    *maxIndex = _maxIndex;
    *maxValue = _maxValue;
}

STATIC void myswap(int *a, int *b){
    int x = *a + *b;
    int y = x - *b;
    x = x -y;
    *a = x;
    *b = y;
}





STATIC mp_obj_t prm_fft(mp_obj_t adc_array_in, mp_obj_t sample_rate)
{
    int i, k11,k12, SingleFrequencyPoint, fs, f20, f20k;
    int _average = 0;
    float y11, y12;
    float _valueSqrt, beta, alpha, fundamentalFreq, fundamentalAmp, fundaTHDN;
    double powerTotal, noiseTotal, signalTotal; 

    size_t nadcs;
    mp_obj_t *adc_array;
    mp_obj_dict_t *dt = MP_OBJ_TO_PTR(mp_obj_new_dict(3));

    mp_obj_get_array(adc_array_in, &nadcs, &adc_array);
    if (nadcs%2 == 1){
        mp_raise_ValueError(MP_ERROR_TEXT("data lenght is not dual"));
    }
    if (nadcs!= TEST_LENGTH_SAMPLES){
        mp_raise_ValueError(MP_ERROR_TEXT("data lenght is not 4096"));
    }
    // FFT start

    // mp_obj_array_t *o = array_new(BYTEARRAY_TYPECODE, n);
    // memcpy(o->items, items, n);
    // return MP_OBJ_FROM_PTR(o);


    float32_t  *testInput_f32 = m_new(float32_t, TEST_LENGTH_SAMPLES);
    memset(testInput_f32, 0, TEST_LENGTH_SAMPLES);
    float32_t  *testOutput_f32 = m_new(float32_t, TEST_LENGTH_SAMPLES);
    memset(testOutput_f32, 0, TEST_LENGTH_SAMPLES);
    float32_t  *testOutputMag_f32 = m_new(float32_t, TEST_LENGTH_SAMPLES);
    memset(testOutputMag_f32, 0, TEST_LENGTH_SAMPLES);
    _average = average(testInput_f32, nadcs);

    
    for (i=0; i< nadcs; i++){
        testOutput_f32[i] = (float32_t) (mp_obj_get_float(adc_array[i]) - _average);
    }

    window_nutall_mtlab(testOutput_f32, TEST_LENGTH_SAMPLES, testInput_f32);
    arm_rfft_fast_instance_f32 S;
    arm_rfft_fast_init_f32(&S, TEST_LENGTH_SAMPLES);
    arm_rfft_fast_f32(&S, testInput_f32, testOutput_f32, 0);
    arm_cmplx_mag_f32(testOutput_f32, testOutputMag_f32, TEST_LENGTH_SAMPLES/2);

    // PowerPhaseRadians_f32(testOutput_f32, Phase_f32, TEST_LENGTH_SAMPLES, 0.5f);
    // for(i =0; i<TEST_LENGTH_SAMPLES/2; i++){
    //     tuple->items[i] = mp_obj_new_float(testOutput_f32[i]);
    // }
    fs = mp_obj_get_int(sample_rate);
    max(testOutputMag_f32, TEST_LENGTH_SAMPLES/2, &y11, &k11);
    SingleFrequencyPoint = k11;
    f20 = (int) floorf(20.0/fs * TEST_LENGTH_SAMPLES);

    if (f20 > (k11 -8)){
        f20 = k11 - 8;
    }
    f20k = (int) floorf(20000.0/fs * TEST_LENGTH_SAMPLES);
    signalTotal = 0;
    for (i=k11-8; i<k11+8; i++)
    {
        signalTotal += testOutputMag_f32[i]*testOutputMag_f32[i];
    }

    powerTotal = 0;
    for (i=f20; i< f20k; i++){
        powerTotal += testOutputMag_f32[i]*testOutputMag_f32[i];
    }

    noiseTotal = powerTotal - signalTotal;
    testOutputMag_f32[SingleFrequencyPoint] = 0;
    max(testOutputMag_f32, TEST_LENGTH_SAMPLES/2 - 1, &y12, &k12);
    if (k11 > k12){
        myswap(k11, k12);
    }
    if ((y12 - y11) < 0 ){
        beta = -1 * (y12 - y11) / (y11 +y12);
    }else{
        beta = (y12 - y11)/(y11 +y12);
    }

    alpha = 2.95494514*beta + 0.17671943*beta*beta*beta + 0.09230694*beta*beta*beta*beta*beta;
    fundamentalFreq = (k11+0.5+alpha)*fs/TEST_LENGTH_SAMPLES;
    fundamentalAmp = (y11+y12)*(3.20976143+0.9187393*alpha*alpha+0.14734229*alpha*alpha*alpha*alpha)/TEST_LENGTH_SAMPLES;
    fundaTHDN = 10*log10f((float) noiseTotal/signalTotal);

    mp_obj_dict_store(dt, MP_OBJ_NEW_QSTR(MP_QSTR_FREQ), mp_obj_new_float(fundamentalFreq));
    mp_obj_dict_store(dt, MP_OBJ_NEW_QSTR(MP_QSTR_AMP), mp_obj_new_float(fundamentalAmp));
    mp_obj_dict_store(dt, MP_OBJ_NEW_QSTR(MP_QSTR_THDN), mp_obj_new_float(fundaTHDN));

    // delete buffer
    m_del(float32_t, testInput_f32, TEST_LENGTH_SAMPLES);
    m_del(float32_t, testOutput_f32, TEST_LENGTH_SAMPLES);
    m_del(float32_t, testOutputMag_f32, TEST_LENGTH_SAMPLES);
    // return mp_const_none; 
    return dt; 
}

STATIC MP_DEFINE_CONST_FUN_OBJ_2(prm_fft_obj, prm_fft);



STATIC mp_obj_t dFft(mp_obj_t adc_array_in, mp_obj_t length)
{

    uint8_t lsb, msb;
    size_t nadcs;
    mp_obj_t *adc_array;
    int lgth = mp_obj_get_int(length);
    signed short data;
    mp_obj_get_array(adc_array_in, &nadcs, &adc_array);
    // unsigned short  *testInput_f32 = m_new(unsigned short, lgth);
    mp_obj_tuple_t *tuple = MP_OBJ_TO_PTR(mp_obj_new_tuple(lgth, NULL));
    for (int i=0; i< lgth; i++)
    {
        data = mp_obj_get_int(adc_array[2*i+1]) <<8|mp_obj_get_int(adc_array[2*i]);
        tuple->items[i] = mp_obj_new_float(data);
    }
    
    // for (int i=0;i<lgth; i++){
    //     testInput_f32[i] = ;
    //     printf("testInput_f32[i]: %d\r\n", (signed short) (mp_obj_get_int(adc_array[2*i+1]) <<8|mp_obj_get_int(adc_array[2*i])));
    // }
    // m_del(unsigned short, testInput_f32, lgth);
    // return mp_const_none; 
    return tuple;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_2(dFft_obj, dFft);





// Define all properties of the module.
// Table entries are key/value pairs of the attribute name (a string)
// and the MicroPython object reference.
// All identifiers and strings are written as MP_QSTR_xxx and will be
// optimized to word-sized integers by the build system (interned strings).
STATIC const mp_rom_map_elem_t dmath_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_dmath) },
    { MP_ROM_QSTR(MP_QSTR_dFft), MP_ROM_PTR(&dFft_obj) },

    { MP_ROM_QSTR(MP_QSTR_prm_fft), MP_ROM_PTR(&prm_fft_obj) },

};
STATIC MP_DEFINE_CONST_DICT(dmath, dmath_globals_table);

// Define module object.
const mp_obj_module_t dmath_cmodule = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&dmath,
};

// Register the module to make it available in Python.
// Note: the "1" in the third argument means this module is always enabled.
// This "1" can be optionally replaced with a macro like MODULE_CEXAMPLE_ENABLED
// which can then be used to conditionally enable this module.
MP_REGISTER_MODULE(MP_QSTR_dmath, dmath_cmodule, 1);





