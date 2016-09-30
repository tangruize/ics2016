#include "cpu/exec/helper.h"
#include "cpu/set_flags.h"

int set_pf(unsigned to_check) {
  union {
    struct {
      unsigned l0 :1;
      unsigned l1 :1;
      unsigned l2 :1;
      unsigned l3 :1;
      unsigned l4 :1;
      unsigned l5 :1;
      unsigned l6 :1;
      unsigned l7 :1;
      unsigned   :24;
    } ;
    unsigned result;
  } l;
  l.result = to_check;
  if ((l.l0 + l.l1 + l.l2 + l.l3 + l.l4 + l.l5 + l.l6 + l.l7) % 2 == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

inline int set_zf(unsigned to_check) {
  return !to_check;
}

int set_sf(unsigned to_check, int size) {
  if (size == 1) {
    uint8_t tmp = (uint8_t)to_check;
    return tmp >> ((size << 3) - 1);
  }
  else if (size == 2) {
    uint16_t tmp = (uint16_t)to_check;
    return tmp >> ((size << 3) - 1);
  }
  else if (size == 4) {
    uint32_t tmp = (uint32_t)to_check;
    return tmp >> ((size << 3) - 1);
  }
  else {
    assert(0);
    return 0;
  }
}
