#include "stdint.h"
#include "stdio.h"

#include "py/obj.h"
#include "py/runtime.h"

#include "arm_math.h"

#define TEST_LENGTH_SAMPLES 1024
#define FFT_LENGTH TEST_LENGTH_SAMPLES/2
/* -------------------------------------------------------------------
* External Input and Output buffer Declarations for FFT Bin Example
* ------------------------------------------------------------------- */
// extern float32_t testInput_f32_10khz[TEST_LENGTH_SAMPLES];
static float32_t testOutput[TEST_LENGTH_SAMPLES];
static float32_t testInput[TEST_LENGTH_SAMPLES];
static float32_t testOutputMag_f32[TEST_LENGTH_SAMPLES]={0};



STATIC mp_obj_t dFft(mp_obj_t x)
{

    arm_rfft_fast_instance_f32 scfft;

    for(int i=0;i<TEST_LENGTH_SAMPLES;i++)
    {
        testInput[i] = 1 + 10*arm_cos_f32(2*3.1415926f*50*i/1024 + 3.1415926f/3);
        
    }
    arm_rfft_fast_init_f32(&scfft,TEST_LENGTH_SAMPLES);
    arm_rfft_fast_f32(&scfft,testInput, testOutput, 0);
    arm_cmplx_mag_f32(testOutput,testOutputMag_f32,TEST_LENGTH_SAMPLES);

    mp_obj_tuple_t *tuple = MP_OBJ_TO_PTR(mp_obj_new_tuple(TEST_LENGTH_SAMPLES, NULL));

    for (int i=0; i< TEST_LENGTH_SAMPLES; i++)
    {
        tuple->items[i] = mp_obj_new_float(testOutputMag_f32[i]);
    }
    return tuple;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_1(dFft_obj, dFft);



// Define all properties of the module.
// Table entries are key/value pairs of the attribute name (a string)
// and the MicroPython object reference.
// All identifiers and strings are written as MP_QSTR_xxx and will be
// optimized to word-sized integers by the build system (interned strings).
STATIC const mp_rom_map_elem_t dmath_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_dmath) },

    { MP_ROM_QSTR(MP_QSTR_dFft), MP_ROM_PTR(&dFft_obj) },

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





