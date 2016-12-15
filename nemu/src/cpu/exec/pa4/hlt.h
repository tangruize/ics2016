#ifndef __HLT_H__
#define __HLT_H__

make_helper(hlt) {
  while (cpu.INTR == 0);
  return 1;
}

#endif
