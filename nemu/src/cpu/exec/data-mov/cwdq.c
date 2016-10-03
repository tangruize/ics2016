#include "cpu/exec/helper.h"

/*#define DATA_BYTE 1
#include "cwdq-template.h"
#undef DATA_BYTE*/

#define DATA_BYTE 2
#include "cwdq-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "cwdq-template.h"
#undef DATA_BYTE

/* for instruction encoding overloading */

make_helper(cwdq) {
  return (ops_decoded.is_operand_size_16 ? cwtl : cltd) (eip); 
}
