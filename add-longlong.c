+ as testcase/src/start.S
+ cc testcase/src/tmp.c
+ cc obj/lib-common/FLOAT/FLOAT.o
+ cc obj/lib-common/FLOAT/FLOAT_vfprintf.o
+ ld obj/testcase/tmp
objcopy -S -O binary obj/testcase/tmp entry
obj/nemu/nemu obj/testcase/tmp
Welcome to NEMU!
The executable is obj/testcase/tmp.
For help, type "help"
(nemu) c

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
(nemu) q
