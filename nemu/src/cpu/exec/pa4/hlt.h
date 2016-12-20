#ifndef __HLT_H__
#define __HLT_H__

make_helper(hlt) {
  Assert(eflags(IF) == 1, "Bad cpu.IF value 0");
  while (!cpu.INTR){}
  print_asm("hlt");
  return 1;
}

#endif
