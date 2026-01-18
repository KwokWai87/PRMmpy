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
#include "ad717x.h"


STATIC mp_obj_t prm_datalogger_helper(ad717x_t *selfin,
                                         size_t n_args,
                                         const mp_obj_t *pos_args,
                                         mp_map_t *kw_args)
{
    enum {ARG_ch, ARG_rate, ARG_nums};
    
    static const mp_arg_t allowed_args[] =
    {
        { MP_QSTR_ch,    MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 0 } }, 
        { MP_QSTR_rate,  MP_ARG_INT, {.u_int = 1000 } }, 
        { MP_QSTR_nums,  MP_ARG_INT, {.u_int = 1024 } }, 
        // { MP_QSTR_upload,  MP_ARG_KW_ONLY|MP_ARG_BOOL, {.u_bool = false } }, 
    };
    ad717x_t *self = MP_OBJ_TO_PTR(selfin);
   
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    
    // mp_obj_dict_t *dt = MP_OBJ_TO_PTR(mp_obj_new_dict(3));

    sample_rate_t t;
    t = search_sample_rate(self->ad7175, args[ARG_rate].u_int);
    c_u32_t  *raw_data = m_new(c_u32_t, args[ARG_nums].u_int);
    bool result = datalogger(self->ad7175, args[ARG_ch].u_int, t.value, raw_data, args[ARG_nums].u_int);
    if (result){
        mp_obj_list_t *list = mp_obj_new_list(args[ARG_nums].u_int, NULL);
        for(int i=0; i< args[ARG_nums].u_int; i++)
        {
            list->items[i] = mp_obj_new_float(value_2_mvolt(self->ad7175, (float)(raw_data[i].reg[0]<<16|raw_data[i].reg[1]<<8|raw_data[i].reg[2])));
        }
        m_del(c_u32_t, raw_data, args[ARG_nums].u_int);
        return list;
    }
    
    return mp_obj_new_bool(false);
}

STATIC mp_obj_t prm_datalogger(size_t n_args, const mp_obj_t *args, mp_map_t *kw_args)
{
    return prm_datalogger_helper(args[0], n_args - 1, args + 1, kw_args);
}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(prm_datalogger_obj, 1, prm_datalogger);

STATIC mp_obj_t prm_id_detect(mp_obj_t self_in)
{   
    ad717x_t *self = MP_OBJ_TO_PTR(self_in);
    return mp_obj_new_bool( !id_detect(self->ad7175, 5) ? true : false);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(prm_id_detect_obj, prm_id_detect);

STATIC mp_obj_t prm_read_volt(mp_obj_t self_in, mp_obj_t ch)
{   
    
    ad717x_t *self = MP_OBJ_TO_PTR(self_in);
    int channel = mp_obj_get_int(ch);
    float value = read_volt(self->ad7175, channel);
    return mp_obj_new_float(value);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(prm_read_volt_obj, prm_read_volt);


STATIC mp_obj_t prm_set_sampling_rate(mp_obj_t self_in, mp_obj_t ch, mp_obj_t rate)
{    
    ad717x_t *self = MP_OBJ_TO_PTR(self_in);
    int channel = mp_obj_get_int(ch);
    int sample_rate = mp_obj_get_int(rate);
    sample_rate_t t;
    t = search_sample_rate(self->ad7175, sample_rate);
    return mp_obj_new_bool(set_sample_rate(self->ad7175, channel, t.value));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(prm_set_sampling_rate_obj, prm_set_sampling_rate);

STATIC mp_obj_t prm_get_sampling_rate(mp_obj_t self_in)
{    
    ad717x_t *self = MP_OBJ_TO_PTR(self_in);
    return mp_obj_new_float(get_sample_rate(self->ad7175));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(prm_get_sampling_rate_obj, prm_get_sampling_rate);



mp_obj_t machine_ad717x_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *all_args) {
    enum {ARG_id, ARG_cs, ARG_status, ARG_baudrate};
    static const mp_arg_t allowed_args[] = {
        {MP_QSTR_id, MP_ARG_REQUIRED | MP_ARG_INT , {.u_int = 1}},
        {MP_QSTR_cs, MP_ARG_REQUIRED | MP_ARG_OBJ , {.u_obj = MP_OBJ_NULL}},
        {MP_QSTR_status, MP_ARG_REQUIRED | MP_ARG_OBJ , {.u_obj = MP_OBJ_NULL}},
        {MP_QSTR_baudrate, MP_ARG_INT , {.u_int = 5000000}},
    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all_kw_array(n_args, n_kw, all_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);
    ad717x_t *self = m_new_obj(ad717x_t);
    self->base.type = &ad717x_type;
    ad7175_handler *ad7175 = m_new_obj(ad7175_handler);
    ad7175->spi = m_new_obj(spi_proto_cfg_t);
    if (args[ARG_cs].u_obj == MP_OBJ_NULL || args[ARG_status].u_obj == MP_OBJ_NULL) {
        mp_raise_ValueError(MP_ERROR_TEXT("explicit choice of cs/status is not implemented"));
    }
    hw_spi_init(ad7175->spi, args[ARG_id].u_int, args[ARG_baudrate].u_int, 1, 1);
    ad7175_init(ad7175, mp_hal_get_pin_obj(args[ARG_cs].u_obj), mp_hal_get_pin_obj(args[ARG_status].u_obj));
    self->ad7175 = ad7175;
    return MP_OBJ_FROM_PTR(self);
}


STATIC const mp_rom_map_elem_t ad717x_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_ad717x) },
    { MP_ROM_QSTR(MP_QSTR_is_communication_ok), MP_ROM_PTR(&prm_id_detect_obj) },
    { MP_ROM_QSTR(MP_QSTR_read_volt), MP_ROM_PTR(&prm_read_volt_obj) },
    { MP_ROM_QSTR(MP_QSTR_set_sampling_rate), MP_ROM_PTR(&prm_set_sampling_rate_obj) },
    // { MP_ROM_QSTR(MP_QSTR_get_sampling_rate), MP_ROM_PTR(&prm_get_sampling_rate_obj) },
    { MP_ROM_QSTR(MP_QSTR_datalogger), MP_ROM_PTR(&prm_datalogger_obj) },  
};


STATIC MP_DEFINE_CONST_DICT(ad717x_locals_dict, ad717x_locals_dict_table);


const mp_obj_type_t ad717x_type = {
    .base={ &mp_type_type }, 
    .name = MP_QSTR_ad717x,
    .make_new=machine_ad717x_make_new,       
    .locals_dict = (mp_obj_dict_t*)&ad717x_locals_dict,
};

MP_REGISTER_MODULE(MP_QSTR_ad717x, ad717x_type, 1);