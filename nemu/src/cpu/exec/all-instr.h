#include "prefix/prefix.h"

#include "data-mov/mov.h"
#include "data-mov/xchg.h"
#include "data-mov/push.h"
#include "data-mov/pop.h"
#include "data-mov/leave.h"
#include "data-mov/movsx.h"
#include "data-mov/movzx.h"
#include "data-mov/cwdq.h"
#include "data-mov/cmovcc.h"


#include "arith/dec.h"
#include "arith/inc.h"
#include "arith/neg.h"
#include "arith/imul.h"
#include "arith/mul.h"
#include "arith/idiv.h"
#include "arith/div.h"
#include "arith/addc.h"
#include "arith/subb.h"

#include "logic/and.h"
#include "logic/or.h"
#include "logic/not.h"
#include "logic/xor.h"
#include "logic/sar.h"
#include "logic/shl.h"
#include "logic/shr.h"
#include "logic/shrd.h"
#include "logic/setcc.h"
#include "logic/shld.h"

#include "string/rep.h"
#include "string/movs.h"
#include "string/lods.h"
#include "string/stos.h"
#include "string/scas.h"
#include "string/std.h"

#include "misc/misc.h"

#include "special/special.h"

#include "control-trans/call.h"
#include "control-trans/ret.h"
#include "control-trans/jcc.h"
#include "control-trans/jmp.h"

#include "condition/test.h"
#include "condition/cmp.h"

#include "segment/lgdt.h"
#include "segment/movcr.h"
#include "segment/movsreg.h"

#include "pa4/int.h"
#include "pa4/pusha.h"
