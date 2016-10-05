#include "cpu/exec/helper.h"
#include "cpu/set_flags.h"



#define DATA_BYTE 1

#define instr jo
#define cc_func cc_o
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jno
#define cc_func cc_no
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jb
#define cc_func cc_b
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnb
#define cc_func cc_nb
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jz
#define cc_func cc_z
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnz
#define cc_func cc_nz
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jbe
#define cc_func cc_be
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnbe
#define cc_func cc_nbe
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr js
#define cc_func cc_s
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jns
#define cc_func cc_ns
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jp
#define cc_func cc_p
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnp
#define cc_func cc_np
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jl
#define cc_func cc_l
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnl
#define cc_func cc_nl
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jle
#define cc_func cc_le
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnle
#define cc_func cc_nle
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jcxz
#define cc_func cc_cxz
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jecxz
#define cc_func cc_ecxz
#include "jcc-template.h"
#undef instr
#undef cc_func

#undef DATA_BYTE


#define DATA_BYTE 2

#define instr jo
#define cc_func cc_o
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jno
#define cc_func cc_no
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jb
#define cc_func cc_b
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnb
#define cc_func cc_nb
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jz
#define cc_func cc_z
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnz
#define cc_func cc_nz
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jbe
#define cc_func cc_be
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnbe
#define cc_func cc_nbe
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr js
#define cc_func cc_s
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jns
#define cc_func cc_ns
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jp
#define cc_func cc_p
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnp
#define cc_func cc_np
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jl
#define cc_func cc_l
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnl
#define cc_func cc_nl
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jle
#define cc_func cc_le
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnle
#define cc_func cc_nle
#include "jcc-template.h"
#undef instr
#undef cc_func

#undef DATA_BYTE


#define DATA_BYTE 4

#define instr jo
#define cc_func cc_o
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jno
#define cc_func cc_no
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jb
#define cc_func cc_b
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnb
#define cc_func cc_nb
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jz
#define cc_func cc_z
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnz
#define cc_func cc_nz
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jbe
#define cc_func cc_be
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnbe
#define cc_func cc_nbe
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr js
#define cc_func cc_s
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jns
#define cc_func cc_ns
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jp
#define cc_func cc_p
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnp
#define cc_func cc_np
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jl
#define cc_func cc_l
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnl
#define cc_func cc_nl
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jle
#define cc_func cc_le
#include "jcc-template.h"
#undef instr
#undef cc_func

#define instr jnle
#define cc_func cc_nle
#include "jcc-template.h"
#undef instr
#undef cc_func

#undef DATA_BYTE

/* for instruction encoding overloading */

make_helper_v(jo_i)
make_helper_v(jno_i)
make_helper_v(jb_i)
make_helper_v(jnb_i)
make_helper_v(jz_i)
make_helper_v(jnz_i)
make_helper_v(jbe_i)
make_helper_v(jnbe_i)
make_helper_v(js_i)
make_helper_v(jns_i)
make_helper_v(jp_i)
make_helper_v(jnp_i)
make_helper_v(jl_i)
make_helper_v(jnl_i)
make_helper_v(jle_i)
make_helper_v(jnle_i)


//special rule, note that _b does not stand for byte
make_helper(jcxz_si_v) {
  return (ops_decoded.is_operand_size_16 ? jcxz_si_b : jecxz_si_b) (eip);
}
