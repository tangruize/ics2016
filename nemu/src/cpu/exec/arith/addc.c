#include "cpu/exec/helper.h"

#define instr add

#define DATA_BYTE 1
#include "addc-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "addc-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "addc-template.h"
#undef DATA_BYTE

#undef instr
#define instr adc
#define __ADC__

#define DATA_BYTE 1
#include "addc-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "addc-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "addc-template.h"
#undef DATA_BYTE

/* for instruction encoding overloading */

make_helper_v(add_i2a)
make_helper_v(add_i2rm)
make_helper_v(add_si2rm)
make_helper_v(add_r2rm)
make_helper_v(add_rm2r)

make_helper_v(adc_i2a)
make_helper_v(adc_i2rm)
make_helper_v(adc_si2rm)
make_helper_v(adc_r2rm)
make_helper_v(adc_rm2r)
