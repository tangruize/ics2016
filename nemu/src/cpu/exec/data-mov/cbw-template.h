#include "cpu/exec/template-start.h"

make_helper(concat(cbw_, SUFFIX)) {
  #if DATA_BYTE == 2
  REG(R_EAX) = (int16_t)reg_b(R_AL);
  #else
  REG(R_EAX) = (int32_t)reg_w(R_AX);
  #endif
  return 1;
}

#include "cpu/exec/template-end.h"
