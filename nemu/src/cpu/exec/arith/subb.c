#include "cpu/exec/helper.h"

#define instr sub

#define DATA_BYTE 1
#include "subb-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "subb-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "subb-template.h"
#undef DATA_BYTE

#undef instr
#define instr sbb
#define __SBB__

#define DATA_BYTE 1
#include "subb-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "subb-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "subb-template.h"
#undef DATA_BYTE

/* for instruction encoding overloading */

make_helper_v(sub_i2a)
make_helper_v(sub_i2rm)
make_helper_v(sub_si2rm)
make_helper_v(sub_r2rm)
make_helper_v(sub_rm2r)

make_helper_v(sbb_i2a)
make_helper_v(sbb_i2rm)
make_helper_v(sbb_si2rm)
make_helper_v(sbb_r2rm)
make_helper_v(sbb_rm2r)
