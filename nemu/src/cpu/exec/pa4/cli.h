#ifndef __CLI_H__
#define __CLI_H__

make_helper(cli) {
  eflags(IF) = 0;
  print_asm("cli");
  return 1;
}
make_helper(sti) {
  eflags(IF) = 1;
  print_asm("sti");
  return 1;
}

#endif
