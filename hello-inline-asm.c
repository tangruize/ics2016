+ as testcase/src/start.S
+ cc testcase/src/tmp.c
+ ld obj/testcase/tmp
objcopy -S -O binary obj/testcase/tmp entry
obj/nemu/nemu obj/testcase/tmp
Welcome to NEMU!
The executable is obj/testcase/tmp.
For help, type "help"
(nemu) c
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
