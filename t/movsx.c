+ as testcase/src/start.S
+ cc testcase/src/tmp.c
+ ld obj/testcase/tmp
objcopy -S -O binary obj/testcase/tmp entry
obj/nemu/nemu obj/testcase/tmp
Welcome to NEMU!
The executable is obj/testcase/tmp.
For help, type "help"
(nemu) si 99999
  100000 <UNKNOWN>               bd 00 00 00 00                        movl $0x0,%ebp
  100005 <UNKNOWN>               bc f0 ff ff 07                        movl $0x7fffff0,%esp
  10000a <UNKNOWN>               e8 06 00 00 00                        calll $0x6
  100015 <main+0x0>              55                                    pushl %ebp
  100016 <main+0x1>              89 e5                                 movl %esp,%ebp
  100018 <main+0x3>              c7 05 c0 01 10 00 00 00 00 00         movl $0x0,0x1001c0
  100022 <main+0xd>              c7 05 c4 01 10 00 01 00 00 00         movl $0x1,0x1001c4
  10002c <main+0x17>             c7 05 c8 01 10 00 02 00 00 00         movl $0x2,0x1001c8
  100036 <main+0x21>             c7 05 cc 01 10 00 03 00 00 00         movl $0x3,0x1001cc
  100040 <main+0x2b>             c7 05 d0 01 10 00 04 00 00 00         movl $0x4,0x1001d0
  10004a <main+0x35>             a1 cc 01 10 00                        movl 0x1001cc,%eax
  10004f <main+0x3a>             a3 a0 01 10 00                        movl %eax,0x1001a0
  100054 <main+0x3f>             a1 a0 01 10 00                        movl 0x1001a0,%eax
  100059 <main+0x44>             a3 d4 01 10 00                        movl %eax,0x1001d4
  10005e <main+0x49>             c6 05 e8 01 10 00 61                  movb $0x61,0x1001e8
  100065 <main+0x50>             0f b6 05 e8 01 10 00                  movzxl 0x1001e8,%eax
  10006c <main+0x57>             3c 61                                 cmpb $0x61,%al
  10006e <main+0x59>             74 06                                 jzb $0x6
  100076 <main+0x61>             0f b6 05 e8 01 10 00                  movzxl 0x1001e8,%eax
  10007d <main+0x68>             a2 e9 01 10 00                        movb %al,0x1001e9
  100082 <main+0x6d>             0f b6 05 e9 01 10 00                  movzxl 0x1001e9,%eax
  100089 <main+0x74>             3c 61                                 cmpb $0x61,%al
  10008b <main+0x76>             74 06                                 jzb $0x6
  100093 <main+0x7e>             0f b6 05 e8 01 10 00                  movzxl 0x1001e8,%eax
  10009a <main+0x85>             0f be c0                              movsxl %al,%eax
  10009d <main+0x88>             a3 c0 01 10 00                        movl %eax,0x1001c0
  1000a2 <main+0x8d>             a1 c0 01 10 00                        movl 0x1001c0,%eax
  1000a7 <main+0x92>             83 f8 61                              cmpl $0x61,%eax
  1000aa <main+0x95>             74 06                                 jzb $0x6
  1000b2 <main+0x9d>             c6 05 e9 01 10 00 80                  movb $0x80,0x1001e9
  1000b9 <main+0xa4>             0f b6 05 e9 01 10 00                  movzxl 0x1001e9,%eax
  1000c0 <main+0xab>             0f be c0                              movsxl %al,%eax
  1000c3 <main+0xae>             a3 c0 01 10 00                        movl %eax,0x1001c0
  1000c8 <main+0xb3>             a1 c4 01 10 00                        movl 0x1001c4,%eax
  1000cd <main+0xb8>             83 f8 01                              cmpl $0x1,%eax
  1000d0 <main+0xbb>             74 06                                 jzb $0x6
  1000d8 <main+0xc3>             a1 c8 01 10 00                        movl 0x1001c8,%eax
  1000dd <main+0xc8>             83 f8 02                              cmpl $0x2,%eax
  1000e0 <main+0xcb>             74 06                                 jzb $0x6
  1000e8 <main+0xd3>             a1 cc 01 10 00                        movl 0x1001cc,%eax
  1000ed <main+0xd8>             83 f8 03                              cmpl $0x3,%eax
  1000f0 <main+0xdb>             74 06                                 jzb $0x6
  1000f8 <main+0xe3>             a1 d0 01 10 00                        movl 0x1001d0,%eax
  1000fd <main+0xe8>             83 f8 04                              cmpl $0x4,%eax
  100100 <main+0xeb>             74 06                                 jzb $0x6
  100108 <main+0xf3>             a1 a0 01 10 00                        movl 0x1001a0,%eax
  10010d <main+0xf8>             83 f8 03                              cmpl $0x3,%eax
  100110 <main+0xfb>             74 06                                 jzb $0x6
  100118 <main+0x103>            a1 d4 01 10 00                        movl 0x1001d4,%eax
  10011d <main+0x108>            83 f8 03                              cmpl $0x3,%eax
  100120 <main+0x10b>            74 06                                 jzb $0x6
  100128 <main+0x113>            0f b6 05 e9 01 10 00                  movzxl 0x1001e9,%eax
  10012f <main+0x11a>            3c 80                                 cmpb $0x80,%al
  100131 <main+0x11c>            74 06                                 jzb $0x6
  100139 <main+0x124>            a1 c0 01 10 00                        movl 0x1001c0,%eax
  10013e <main+0x129>            83 f8 80                              cmpl $0xffffff80,%eax
  100141 <main+0x12c>            74 06                                 jzb $0x6
  100149 <main+0x134>            b8 00 00 00 00                        movl $0x0,%eax
  10014e <main+0x139>            5d                                    popl %ebp
  10014f <main+0x13a>            c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
