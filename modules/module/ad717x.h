#ifndef __AD717x_H__
#define __AD717x_H__

#include <stdio.h>
#include <string.h>
#include "AD7175.h"


typedef struct{
    mp_obj_base_t base;
    ad7175_handler* ad7175;
}ad717x_t;


extern const mp_obj_type_t ad717x_type;
#endif
