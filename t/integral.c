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
  10000a <UNKNOWN>               e8 f5 01 00 00                        calll $0x1f5
  100204 <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  100208 <main+0x4>              83 e4 f0                              andl $0xfffffff0,%esp
  10020b <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  10020e <main+0xa>              55                                    pushl %ebp
  10020f <main+0xb>              89 e5                                 movl %esp,%ebp
  100211 <main+0xd>              53                                    pushl %ebx
  100212 <main+0xe>              51                                    pushl %ecx
  100213 <main+0xf>              83 ec 10                              subl $0x10,%esp
  100216 <main+0x12>             83 ec 0c                              subl $0xc,%esp
  100219 <main+0x15>             a1 50 04 10 00                        movl 0x100450,%eax
  10021e <main+0x1a>             50                                    pushl %eax
  10021f <main+0x1b>             e8 ac 00 00 00                        calll $0xac
  1002d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1002d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1002d6 <f2F+0x6>               a3 28 06 10 00                        movl %eax,0x100628
  1002db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1002dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1002e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1002e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1002e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1002e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1002ee <f2F+0x1e>              74 40                                 jzb $0x40
  1002f0 <f2F+0x20>              a1 28 06 10 00                        movl 0x100628,%eax
  1002f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1002f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1002fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100301 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100306 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10030c <f2F+0x3c>              78 42                                 jsb $0x42
  100350 <f2F+0x80>              f7 d9                                 negl %ecx
  100352 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100354 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100356 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100312 <f2F+0x42>              0f be 05 2b 06 10 00                  movsxl 0x10062b,%eax
  100319 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10031c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10031e <f2F+0x4e>              f7 d8                                 negl %eax
  100320 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100322 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100324 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100224 <main+0x20>             83 c4 10                              addl $0x10,%esp
  100227 <main+0x23>             89 c3                                 movl %eax,%ebx
  100229 <main+0x25>             83 ec 0c                              subl $0xc,%esp
  10022c <main+0x28>             a1 54 04 10 00                        movl 0x100454,%eax
  100231 <main+0x2d>             50                                    pushl %eax
  100232 <main+0x2e>             e8 99 00 00 00                        calll $0x99
  1002d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1002d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1002d6 <f2F+0x6>               a3 28 06 10 00                        movl %eax,0x100628
  1002db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1002dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1002e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1002e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1002e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1002e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1002ee <f2F+0x1e>              74 40                                 jzb $0x40
  1002f0 <f2F+0x20>              a1 28 06 10 00                        movl 0x100628,%eax
  1002f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1002f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1002fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100301 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100306 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10030c <f2F+0x3c>              78 42                                 jsb $0x42
  100350 <f2F+0x80>              f7 d9                                 negl %ecx
  100352 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100354 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100356 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100312 <f2F+0x42>              0f be 05 2b 06 10 00                  movsxl 0x10062b,%eax
  100319 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10031c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10031e <f2F+0x4e>              f7 d8                                 negl %eax
  100320 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100322 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100324 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100237 <main+0x33>             83 c4 10                              addl $0x10,%esp
  10023a <main+0x36>             68 38 00 10 00                        pushl $0x100038
  10023f <main+0x3b>             53                                    pushl %ebx
  100240 <main+0x3c>             50                                    pushl %eax
  100241 <main+0x3d>             6a 0a                                 pushb $0xa
  100243 <main+0x3f>             e8 b1 fe ff ff                        calll $0xfffffeb1
  1000f9 <computeT+0x0>          55                                    pushl %ebp
  1000fa <computeT+0x1>          89 e5                                 movl %esp,%ebp
  1000fc <computeT+0x3>          53                                    pushl %ebx
  1000fd <computeT+0x4>          83 ec 14                              subl $0x14,%esp
  100100 <computeT+0x7>          83 7d 08 0a                           cmpl $0xa,0x8(%ebp)
  100104 <computeT+0xb>          74 06                                 jzb $0x6
  10010c <computeT+0x13>         81 7d 0c 00 00 ff ff                  cmpl $0xffff0000,0xc(%ebp)
  100113 <computeT+0x1a>         74 06                                 jzb $0x6
  10011b <computeT+0x22>         81 7d 10 00 00 01 00                  cmpl $0x10000,0x10(%ebp)
  100122 <computeT+0x29>         74 06                                 jzb $0x6
  10012a <computeT+0x31>         8b 45 10                              movl 0x10(%ebp),%eax
  10012d <computeT+0x34>         2b 45 0c                              subl 0xc(%ebp),%eax
  100130 <computeT+0x37>         ff 75 08                              pushl 0x8(%ebp)
  100133 <computeT+0x3a>         50                                    pushl %eax
  100134 <computeT+0x3b>         e8 f3 fe ff ff                        calll $0xfffffef3
  10002c <F_div_int+0x0>         55                                    pushl %ebp
  10002d <F_div_int+0x1>         89 e5                                 movl %esp,%ebp
  10002f <F_div_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100032 <F_div_int+0x6>         99                                    cltd
  100033 <F_div_int+0x7>         f7 7d 0c                              idivl 0xc(%ebp)
  100036 <F_div_int+0xa>         5d                                    popl %ebp
  100037 <F_div_int+0xb>         c3                                    retl
  100139 <computeT+0x40>         83 c4 08                              addl $0x8,%esp
  10013c <computeT+0x43>         89 45 ec                              movl %eax,-0x14(%ebp)
  10013f <computeT+0x46>         81 7d ec 33 33 00 00                  cmpl $0x3333,-0x14(%ebp)
  100146 <computeT+0x4d>         74 06                                 jzb $0x6
  10014e <computeT+0x55>         83 ec 0c                              subl $0xc,%esp
  100151 <computeT+0x58>         ff 75 0c                              pushl 0xc(%ebp)
  100154 <computeT+0x5b>         8b 45 14                              movl 0x14(%ebp),%eax
  100157 <computeT+0x5e>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  100159 <computeT+0x60>         83 c4 10                              addl $0x10,%esp
  10015c <computeT+0x63>         89 c3                                 movl %eax,%ebx
  10015e <computeT+0x65>         83 ec 0c                              subl $0xc,%esp
  100161 <computeT+0x68>         ff 75 10                              pushl 0x10(%ebp)
  100164 <computeT+0x6b>         8b 45 14                              movl 0x14(%ebp),%eax
  100167 <computeT+0x6e>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10005b <f+0x23>                81 7d f4 00 00 01 00                  cmpl $0x10000,-0xc(%ebp)
  100062 <f+0x2a>                74 06                                 jzb $0x6
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100086 <f+0x4e>                81 7d f4 00 00 19 00                  cmpl $0x190000,-0xc(%ebp)
  10008d <f+0x55>                74 06                                 jzb $0x6
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000ae <f+0x76>                81 7d f4 00 00 1a 00                  cmpl $0x1a0000,-0xc(%ebp)
  1000b5 <f+0x7d>                74 06                                 jzb $0x6
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000e5 <f+0xad>                81 7d f4 d8 09 00 00                  cmpl $0x9d8,-0xc(%ebp)
  1000ec <f+0xb4>                74 06                                 jzb $0x6
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  100169 <computeT+0x70>         83 c4 10                              addl $0x10,%esp
  10016c <computeT+0x73>         01 d8                                 addl %ebx,%eax
  10016e <computeT+0x75>         83 ec 08                              subl $0x8,%esp
  100171 <computeT+0x78>         6a 02                                 pushb $0x2
  100173 <computeT+0x7a>         50                                    pushl %eax
  100174 <computeT+0x7b>         e8 b3 fe ff ff                        calll $0xfffffeb3
  10002c <F_div_int+0x0>         55                                    pushl %ebp
  10002d <F_div_int+0x1>         89 e5                                 movl %esp,%ebp
  10002f <F_div_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100032 <F_div_int+0x6>         99                                    cltd
  100033 <F_div_int+0x7>         f7 7d 0c                              idivl 0xc(%ebp)
  100036 <F_div_int+0xa>         5d                                    popl %ebp
  100037 <F_div_int+0xb>         c3                                    retl
  100179 <computeT+0x80>         83 c4 10                              addl $0x10,%esp
  10017c <computeT+0x83>         89 45 f0                              movl %eax,-0x10(%ebp)
  10017f <computeT+0x86>         81 7d f0 d8 09 00 00                  cmpl $0x9d8,-0x10(%ebp)
  100186 <computeT+0x8d>         74 06                                 jzb $0x6
  10018e <computeT+0x95>         c7 45 f4 01 00 00 00                  movl $0x1,-0xc(%ebp)
  100195 <computeT+0x9c>         eb 2b                                 jmpb $0x2b
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  100197 <computeT+0x9e>         83 ec 08                              subl $0x8,%esp
  10019a <computeT+0xa1>         ff 75 f4                              pushl -0xc(%ebp)
  10019d <computeT+0xa4>         ff 75 ec                              pushl -0x14(%ebp)
  1001a0 <computeT+0xa7>         e8 7b fe ff ff                        calll $0xfffffe7b
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  1001a5 <computeT+0xac>         83 c4 10                              addl $0x10,%esp
  1001a8 <computeT+0xaf>         89 c2                                 movl %eax,%edx
  1001aa <computeT+0xb1>         8b 45 0c                              movl 0xc(%ebp),%eax
  1001ad <computeT+0xb4>         01 d0                                 addl %edx,%eax
  1001af <computeT+0xb6>         83 ec 0c                              subl $0xc,%esp
  1001b2 <computeT+0xb9>         50                                    pushl %eax
  1001b3 <computeT+0xba>         8b 45 14                              movl 0x14(%ebp),%eax
  1001b6 <computeT+0xbd>         ff d0                                 calll *%eax
  100038 <f+0x0>                 55                                    pushl %ebp
  100039 <f+0x1>                 89 e5                                 movl %esp,%ebp
  10003b <f+0x3>                 83 ec 18                              subl $0x18,%esp
  10003e <f+0x6>                 83 ec 08                              subl $0x8,%esp
  100041 <f+0x9>                 ff 75 08                              pushl 0x8(%ebp)
  100044 <f+0xc>                 ff 75 08                              pushl 0x8(%ebp)
  100047 <f+0xf>                 e8 54 02 00 00                        calll $0x254
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  10004c <f+0x14>                83 c4 10                              addl $0x10,%esp
  10004f <f+0x17>                89 45 f4                              movl %eax,-0xc(%ebp)
  100052 <f+0x1a>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100059 <f+0x21>                75 0f                                 jnzb $0xf
  10006a <f+0x32>                83 ec 08                              subl $0x8,%esp
  10006d <f+0x35>                6a 19                                 pushb $0x19
  10006f <f+0x37>                ff 75 f4                              pushl -0xc(%ebp)
  100072 <f+0x3a>                e8 a9 ff ff ff                        calll $0xffffffa9
  100020 <F_mul_int+0x0>         55                                    pushl %ebp
  100021 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100023 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  100026 <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10002a <F_mul_int+0xa>         5d                                    popl %ebp
  10002b <F_mul_int+0xb>         c3                                    retl
  100077 <f+0x3f>                83 c4 10                              addl $0x10,%esp
  10007a <f+0x42>                89 45 f4                              movl %eax,-0xc(%ebp)
  10007d <f+0x45>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  100084 <f+0x4c>                75 0f                                 jnzb $0xf
  100095 <f+0x5d>                83 ec 0c                              subl $0xc,%esp
  100098 <f+0x60>                6a 01                                 pushb $0x1
  10009a <f+0x62>                e8 76 ff ff ff                        calll $0xffffff76
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  10009f <f+0x67>                83 c4 10                              addl $0x10,%esp
  1000a2 <f+0x6a>                01 45 f4                              addl %eax,-0xc(%ebp)
  1000a5 <f+0x6d>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000ac <f+0x74>                75 0f                                 jnzb $0xf
  1000bd <f+0x85>                83 ec 0c                              subl $0xc,%esp
  1000c0 <f+0x88>                6a 01                                 pushb $0x1
  1000c2 <f+0x8a>                e8 4e ff ff ff                        calll $0xffffff4e
  100015 <int2F+0x0>             55                                    pushl %ebp
  100016 <int2F+0x1>             89 e5                                 movl %esp,%ebp
  100018 <int2F+0x3>             8b 45 08                              movl 0x8(%ebp),%eax
  10001b <int2F+0x6>             c1 e0 10                              shll $0x10,%eax
  10001e <int2F+0x9>             5d                                    popl %ebp
  10001f <int2F+0xa>             c3                                    retl
  1000c7 <f+0x8f>                83 c4 10                              addl $0x10,%esp
  1000ca <f+0x92>                83 ec 08                              subl $0x8,%esp
  1000cd <f+0x95>                ff 75 f4                              pushl -0xc(%ebp)
  1000d0 <f+0x98>                50                                    pushl %eax
  1000d1 <f+0x99>                e8 da 01 00 00                        calll $0x1da
  1002b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1002b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1002b8 <F_div_F+0x8>           99                                    cltd
  1002b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1002bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1002c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1002c2 <F_div_F+0x12>          c3                                    retl
  1000d6 <f+0x9e>                83 c4 10                              addl $0x10,%esp
  1000d9 <f+0xa1>                89 45 f4                              movl %eax,-0xc(%ebp)
  1000dc <f+0xa4>                81 7d 08 00 00 01 00                  cmpl $0x10000,0x8(%ebp)
  1000e3 <f+0xab>                75 0f                                 jnzb $0xf
  1000f4 <f+0xbc>                8b 45 f4                              movl -0xc(%ebp),%eax
  1000f7 <f+0xbf>                c9                                    leave
  1000f8 <f+0xc0>                c3                                    retl
  1001b8 <computeT+0xbf>         83 c4 10                              addl $0x10,%esp
  1001bb <computeT+0xc2>         01 45 f0                              addl %eax,-0x10(%ebp)
  1001be <computeT+0xc5>         83 45 f4 01                           addl $0x1,-0xc(%ebp)
  1001c2 <computeT+0xc9>         8b 45 f4                              movl -0xc(%ebp),%eax
  1001c5 <computeT+0xcc>         3b 45 08                              cmpl 0x8(%ebp),%eax
  1001c8 <computeT+0xcf>         7c cd                                 jlb $0xffffffcd
  1001ca <computeT+0xd1>         81 7d f0 9a c1 02 00                  cmpl $0x2c19a,-0x10(%ebp)
  1001d1 <computeT+0xd8>         74 06                                 jzb $0x6
  1001d9 <computeT+0xe0>         83 ec 08                              subl $0x8,%esp
  1001dc <computeT+0xe3>         ff 75 ec                              pushl -0x14(%ebp)
  1001df <computeT+0xe6>         ff 75 f0                              pushl -0x10(%ebp)
  1001e2 <computeT+0xe9>         e8 b9 00 00 00                        calll $0xb9
  1002a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1002a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1002a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1002ac <F_mul_F+0xc>           c3                                    retl
  1001e7 <computeT+0xee>         83 c4 10                              addl $0x10,%esp
  1001ea <computeT+0xf1>         89 45 f0                              movl %eax,-0x10(%ebp)
  1001ed <computeT+0xf4>         81 7d f0 1e 8d 00 00                  cmpl $0x8d1e,-0x10(%ebp)
  1001f4 <computeT+0xfb>         74 06                                 jzb $0x6
  1001fc <computeT+0x103>        8b 45 f0                              movl -0x10(%ebp),%eax
  1001ff <computeT+0x106>        8b 5d fc                              movl -0x4(%ebp),%ebx
  100202 <computeT+0x109>        c9                                    leave
  100203 <computeT+0x10a>        c3                                    retl
  100248 <main+0x44>             83 c4 10                              addl $0x10,%esp
  10024b <main+0x47>             89 45 f4                              movl %eax,-0xc(%ebp)
  10024e <main+0x4a>             83 ec 0c                              subl $0xc,%esp
  100251 <main+0x4d>             a1 58 04 10 00                        movl 0x100458,%eax
  100256 <main+0x52>             50                                    pushl %eax
  100257 <main+0x53>             e8 74 00 00 00                        calll $0x74
  1002d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1002d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1002d6 <f2F+0x6>               a3 28 06 10 00                        movl %eax,0x100628
  1002db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1002dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1002e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1002e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1002e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1002e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1002ee <f2F+0x1e>              74 40                                 jzb $0x40
  1002f0 <f2F+0x20>              a1 28 06 10 00                        movl 0x100628,%eax
  1002f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1002f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1002fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100301 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100306 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10030c <f2F+0x3c>              78 42                                 jsb $0x42
  100350 <f2F+0x80>              f7 d9                                 negl %ecx
  100352 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100354 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100356 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100312 <f2F+0x42>              0f be 05 2b 06 10 00                  movsxl 0x10062b,%eax
  100319 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10031c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10031e <f2F+0x4e>              f7 d8                                 negl %eax
  100320 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100322 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100324 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  10025c <main+0x58>             83 c4 10                              addl $0x10,%esp
  10025f <main+0x5b>             89 45 f0                              movl %eax,-0x10(%ebp)
  100262 <main+0x5e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100265 <main+0x61>             2b 45 f0                              subl -0x10(%ebp),%eax
  100268 <main+0x64>             83 ec 0c                              subl $0xc,%esp
  10026b <main+0x67>             50                                    pushl %eax
  10026c <main+0x68>             e8 ef 00 00 00                        calll $0xef
  100360 <Fabs+0x0>              8b 54 24 04                           movl 0x4(%esp),%edx
  100364 <Fabs+0x4>              89 d1                                 movl %edx,%ecx
  100366 <Fabs+0x6>              89 15 28 06 10 00                     movl %edx,0x100628
  10036c <Fabs+0xc>              c1 e9 1f                              shrl $0x1f,%ecx
  10036f <Fabs+0xf>              89 c8                                 movl %ecx,%eax
  100371 <Fabs+0x11>             f7 d8                                 negl %eax
  100373 <Fabs+0x13>             31 c2                                 xorl %eax,%edx
  100375 <Fabs+0x15>             8d 04 0a                              leal (%edx,%ecx,1),%eax
  100378 <Fabs+0x18>             c3                                    retl
  100271 <main+0x6d>             83 c4 10                              addl $0x10,%esp
  100274 <main+0x70>             89 c3                                 movl %eax,%ebx
  100276 <main+0x72>             83 ec 0c                              subl $0xc,%esp
  100279 <main+0x75>             a1 5c 04 10 00                        movl 0x10045c,%eax
  10027e <main+0x7a>             50                                    pushl %eax
  10027f <main+0x7b>             e8 4c 00 00 00                        calll $0x4c
  1002d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1002d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1002d6 <f2F+0x6>               a3 28 06 10 00                        movl %eax,0x100628
  1002db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1002dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1002e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1002e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1002e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1002e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1002ee <f2F+0x1e>              74 40                                 jzb $0x40
  1002f0 <f2F+0x20>              a1 28 06 10 00                        movl 0x100628,%eax
  1002f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1002f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1002fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100301 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100306 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10030c <f2F+0x3c>              78 42                                 jsb $0x42
  100350 <f2F+0x80>              f7 d9                                 negl %ecx
  100352 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100354 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100356 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100312 <f2F+0x42>              0f be 05 2b 06 10 00                  movsxl 0x10062b,%eax
  100319 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10031c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10031e <f2F+0x4e>              f7 d8                                 negl %eax
  100320 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100322 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100324 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100284 <main+0x80>             83 c4 10                              addl $0x10,%esp
  100287 <main+0x83>             39 c3                                 cmpl %eax,%ebx
  100289 <main+0x85>             7c 06                                 jlb $0x6
  100291 <main+0x8d>             b8 00 00 00 00                        movl $0x0,%eax
  100296 <main+0x92>             8d 65 f8                              leal -0x8(%ebp),%esp
  100299 <main+0x95>             59                                    popl %ecx
  10029a <main+0x96>             5b                                    popl %ebx
  10029b <main+0x97>             5d                                    popl %ebp
  10029c <main+0x98>             8d 61 fc                              leal -0x4(%ecx),%esp
  10029f <main+0x9b>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
