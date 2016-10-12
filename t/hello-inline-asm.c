+ as testcase/src/start.S
+ cc testcase/src/tmp.c
+ ld obj/testcase/tmp
objcopy -S -O binary obj/testcase/tmp entry
obj/nemu/nemu obj/testcase/tmp
Welcome to NEMU!
The executable is obj/testcase/tmp.
For help, type "help"
(nemu) si 9999999
  100000 <UNKNOWN>               bd 00 00 00 00                        movl $0x0,%ebp
  100005 <UNKNOWN>               bc f0 ff ff 07                        movl $0x7fffff0,%esp
  10000a <UNKNOWN>               e8 06 00 00 00                        calll $0x6
  100015 <main+0x0>              55                                    pushl %ebp
  100016 <main+0x1>              89 e5                                 movl %esp,%ebp
  100018 <main+0x3>              b8 04 00 00 00                        movl $0x4,%eax
  10001d <main+0x8>              bb 01 00 00 00                        movl $0x1,%ebx
  100022 <main+0xd>              b9 35 00 10 00                        movl $0x100035,%ecx
  100027 <main+0x12>             ba 0e 00 00 00                        movl $0xe,%edx
invalid opcode(eip = 0x0010002c): cd 80 b8 00 00 00 00 5d ...

There are two cases which will trigger this unexpected exception:
1. The instruction at eip = 0x0010002c is not implemented.
2. Something is implemented incorrectly.
Find this eip value(0x0010002c) in the disassembling result to distinguish which case it is.

[1;31mIf it is the first case, see
 _ ____   ___    __    __  __                         _ 
(_)___ \ / _ \  / /   |  \/  |                       | |
 _  __) | (_) |/ /_   | \  / | __ _ _ __  _   _  __ _| |
| ||__ < > _ <| '_ \  | |\/| |/ _` | '_ \| | | |/ _` | |
| |___) | (_) | (_) | | |  | | (_| | | | | |_| | (_| | |
|_|____/ \___/ \___/  |_|  |_|\__,_|_| |_|\__,_|\__,_|_|

for more details.

If it is the second case, remember:
* The machine is always right!
* Every line of untested code is always wrong![0m

Makefile:63: recipe for target 'run' failed
