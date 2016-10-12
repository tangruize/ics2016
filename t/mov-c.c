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
  100018 <main+0x3>              c7 05 40 01 10 00 00 00 00 00         movl $0x0,0x100140
  100022 <main+0xd>              c7 05 44 01 10 00 01 00 00 00         movl $0x1,0x100144
  10002c <main+0x17>             c7 05 48 01 10 00 02 00 00 00         movl $0x2,0x100148
  100036 <main+0x21>             c7 05 4c 01 10 00 03 00 00 00         movl $0x3,0x10014c
  100040 <main+0x2b>             c7 05 50 01 10 00 04 00 00 00         movl $0x4,0x100150
  10004a <main+0x35>             a1 4c 01 10 00                        movl 0x10014c,%eax
  10004f <main+0x3a>             a3 20 01 10 00                        movl %eax,0x100120
  100054 <main+0x3f>             a1 20 01 10 00                        movl 0x100120,%eax
  100059 <main+0x44>             a3 54 01 10 00                        movl %eax,0x100154
  10005e <main+0x49>             a1 40 01 10 00                        movl 0x100140,%eax
  100063 <main+0x4e>             85 c0                                 testl %eax,%eax
  100065 <main+0x50>             74 06                                 jzb $0x6
  10006d <main+0x58>             a1 44 01 10 00                        movl 0x100144,%eax
  100072 <main+0x5d>             83 f8 01                              cmpl $0x1,%eax
  100075 <main+0x60>             74 06                                 jzb $0x6
  10007d <main+0x68>             a1 48 01 10 00                        movl 0x100148,%eax
  100082 <main+0x6d>             83 f8 02                              cmpl $0x2,%eax
  100085 <main+0x70>             74 06                                 jzb $0x6
  10008d <main+0x78>             a1 4c 01 10 00                        movl 0x10014c,%eax
  100092 <main+0x7d>             83 f8 03                              cmpl $0x3,%eax
  100095 <main+0x80>             74 06                                 jzb $0x6
  10009d <main+0x88>             a1 50 01 10 00                        movl 0x100150,%eax
  1000a2 <main+0x8d>             83 f8 04                              cmpl $0x4,%eax
  1000a5 <main+0x90>             74 06                                 jzb $0x6
  1000ad <main+0x98>             a1 20 01 10 00                        movl 0x100120,%eax
  1000b2 <main+0x9d>             83 f8 03                              cmpl $0x3,%eax
  1000b5 <main+0xa0>             74 06                                 jzb $0x6
  1000bd <main+0xa8>             a1 54 01 10 00                        movl 0x100154,%eax
  1000c2 <main+0xad>             83 f8 03                              cmpl $0x3,%eax
  1000c5 <main+0xb0>             74 06                                 jzb $0x6
  1000cd <main+0xb8>             b8 00 00 00 00                        movl $0x0,%eax
  1000d2 <main+0xbd>             5d                                    popl %ebp
  1000d3 <main+0xbe>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
