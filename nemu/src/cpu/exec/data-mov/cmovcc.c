#include "cpu/exec/helper.h"
#include "cpu/set_flags.h"



#define DATA_BYTE 2

#define instr cmovo
#define cc_func cc_o
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovno
#define cc_func cc_no
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovb
#define cc_func cc_b
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnb
#define cc_func cc_nb
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovz
#define cc_func cc_z
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnz
#define cc_func cc_nz
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovbe
#define cc_func cc_be
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnbe
#define cc_func cc_nbe
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovs
#define cc_func cc_s
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovns
#define cc_func cc_ns
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovp
#define cc_func cc_p
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnp
#define cc_func cc_np
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovl
#define cc_func cc_l
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnl
#define cc_func cc_nl
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovle
#define cc_func cc_le
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnle
#define cc_func cc_nle
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#undef DATA_BYTE

#define DATA_BYTE 4

#define instr cmovo
#define cc_func cc_o
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovno
#define cc_func cc_no
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovb
#define cc_func cc_b
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnb
#define cc_func cc_nb
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovz
#define cc_func cc_z
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnz
#define cc_func cc_nz
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovbe
#define cc_func cc_be
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnbe
#define cc_func cc_nbe
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovs
#define cc_func cc_s
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovns
#define cc_func cc_ns
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovp
#define cc_func cc_p
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnp
#define cc_func cc_np
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovl
#define cc_func cc_l
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnl
#define cc_func cc_nl
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovle
#define cc_func cc_le
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#define instr cmovnle
#define cc_func cc_nle
#include "cmovcc-template.h"
#undef instr
#undef cc_func

#undef DATA_BYTE

make_helper_v(cmovo_rm2r)
make_helper_v(cmovno_rm2r)
make_helper_v(cmovb_rm2r)
make_helper_v(cmovnb_rm2r)
make_helper_v(cmovz_rm2r)
make_helper_v(cmovnz_rm2r)
make_helper_v(cmovbe_rm2r)
make_helper_v(cmovnbe_rm2r)
make_helper_v(cmovs_rm2r)
make_helper_v(cmovns_rm2r)
make_helper_v(cmovp_rm2r)
make_helper_v(cmovnp_rm2r)
make_helper_v(cmovl_rm2r)
make_helper_v(cmovnl_rm2r)
make_helper_v(cmovle_rm2r)
make_helper_v(cmovnle_rm2r)
