#include "cpu/exec/helper.h"

#define DATA_BYTE 4
#include "movcr-template.h"
#undef DATA_BYTE

make_helper(movcr_r2rm);
make_helper(movcr_rm2r);
