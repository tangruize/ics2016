#include "cpu/exec/helper.h"
#include "device/port-io.h"

#define DATA_BYTE 1
#include "out-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "out-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "out-template.h"
#undef DATA_BYTE


/* for instruction encoding overloading */

make_helper_v(out)
