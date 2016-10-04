#include "cpu/exec/helper.h"
#include "cpu/set_flags.h"



#define DATA_BYTE 1

#define instr seto
#define cc_func cc_o
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setno
#define cc_func cc_no
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setb
#define cc_func cc_b
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setnb
#define cc_func cc_nb
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setz
#define cc_func cc_z
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setnz
#define cc_func cc_nz
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setbe
#define cc_func cc_be
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setnbe
#define cc_func cc_nbe
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr sets
#define cc_func cc_s
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setns
#define cc_func cc_ns
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setp
#define cc_func cc_p
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setnp
#define cc_func cc_np
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setl
#define cc_func cc_l
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setnl
#define cc_func cc_nl
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setle
#define cc_func cc_le
#include "setcc-template.h"
#undef instr
#undef cc_func

#define instr setnle
#define cc_func cc_nle
#include "setcc-template.h"
#undef instr
#undef cc_func

#undef DATA_BYTE
