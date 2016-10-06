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

int set_sf(int to_check, int size) {
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

int set_cf(int left, int right, int size) {
  int tmp = left + right;
  if (size == 1) {
    tmp &= 0xff;
  }
  else if (size == 2) {
    tmp &= 0xffff;
  }
  else if (size != 4) {
    assert(0);
  }
  if ((unsigned)tmp < (unsigned)left) {
    return 1;
  }
  else {
    return 0;
  }
}

int set_of(int left, int right, int size) {
  if (size == 1) {
    int8_t x = left;
    int8_t y = right;
    int8_t sum = x+y;
    int8_t neg_over = x < 0 && y < 0 && sum >= 0;
    int8_t pos_over = x >= 0 && y >= 0 && sum < 0;
    return neg_over || pos_over;
  }
  else if (size == 2) {
    int16_t x = left;
    int16_t y = right;
    int16_t sum = x+y;
    int16_t neg_over = x < 0 && y < 0 && sum >= 0;
    int16_t pos_over = x >= 0 && y >= 0 && sum < 0;
    return neg_over || pos_over;
  }
  else {
    int32_t x = left;
    int32_t y = right;
    int32_t sum = x+y;
    int32_t neg_over = x < 0 && y < 0 && sum >= 0;
    int32_t pos_over = x >= 0 && y >= 0 && sum < 0;
    return neg_over || pos_over;
  }
}

int set_sub_of(int left, int right, int size) {
  if (right == (0x1 << (size * 8 - 1))) {
    if (size == 1) {
      int8_t x = left;
      if (x < 0) {
        return 0;
      }
      else {
        return 1;
      }
    }
    else if (size == 2) {
      int16_t x = left;
      if (x < 0) {
        return 0;
      }
      else {
        return 1;
      }
    }
    else {
      int32_t x = left;
      if (x < 0) {
        return 0;
      }
      else {
        return 1;
      }
    }
  }
  return set_of(left, -right, size);
}

/*int set_of(int left, int right, int size) {
  if (size == 1){
    int8_t a=(int8_t)left;
    int8_t b=(int8_t)right;
    long long t=a+b;
    if (((a < 0) == (b < 0)) && (((int8_t)t < 0) != (a < 0))) {
      return 1;
    }
    else {
      return 0;
    }
  }
  else if (size ==2) {
    int16_t a=(int16_t)left;
    int16_t b=(int16_t)right;
    long long t=a+b;
    if (((a < 0) == (b < 0)) && (((int16_t)t < 0) != (a < 0))) {
      return 1;
    }
    else {
      return 0;
    }
  }
  else if (size == 4) {
    int32_t a=(int32_t)left;
    int32_t b=(int32_t)right;
    long long t=a+b;
    if (((a < 0) == (b < 0)) && (((int32_t)t < 0) != (a < 0))) {
      return 1;
    }
    else {
      return 0;
    }
  }
  else {
    assert(0);
    return 0;
  }
}
*/

uint8_t cc_nbe() {
  if (eflags(CF) == 0 && eflags(ZF) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_nb() {
  if (eflags(CF) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_b() {
  if (eflags(CF) == 1) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_be() {
  if (eflags(CF) == 1 || eflags(ZF) == 1) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_z() {
  if (eflags(ZF) == 1) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_nle() {
  if (eflags(ZF) == 0 && eflags(SF) == eflags(OF)) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_nl() {
  if (eflags(SF) == eflags(OF)) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_l() {
  if (eflags(SF) != eflags(OF)) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_le() {
  if (eflags(ZF) == 1 || eflags(SF) != eflags(OF)) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_nz() {
  if (eflags(ZF) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_no() {
  if (eflags(OF) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_np() {
  if (eflags(PF) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_ns() {
  if (eflags(SF) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_o() {
  if (eflags(OF) == 1) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_p() {
  if (eflags(PF) == 1) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_s() {
  if (eflags(SF) == 1) {
    return 1;
  }
  else {
    return 0;
  }
}

uint8_t cc_cxz() {
  if (cpu.gpr[R_CX]._16 == 0) {
    return true;
  }
  else {
    return false;
  }
}

uint8_t cc_ecxz() {
  if (cpu.gpr[R_ECX]._32 == 0) {
    return true;
  }
  else {
    return false;
  }
}
