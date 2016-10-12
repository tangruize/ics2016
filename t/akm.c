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
  10000a <UNKNOWN>               e8 62 00 00 00                        calll $0x62
  100071 <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  100075 <main+0x4>              83 e4 f0                              andl $0xfffffff0,%esp
  100078 <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  10007b <main+0xa>              55                                    pushl %ebp
  10007c <main+0xb>              89 e5                                 movl %esp,%ebp
  10007e <main+0xd>              51                                    pushl %ecx
  10007f <main+0xe>              83 ec 14                              subl $0x14,%esp
  100082 <main+0x11>             83 ec 08                              subl $0x8,%esp
  100085 <main+0x14>             6a 04                                 pushb $0x4
  100087 <main+0x16>             6a 02                                 pushb $0x2
  100089 <main+0x18>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  10002f <akm+0x1a>              8b 45 08                              movl 0x8(%ebp),%eax
  100032 <akm+0x1d>              83 e8 01                              subl $0x1,%eax
  100035 <akm+0x20>              83 ec 08                              subl $0x8,%esp
  100038 <akm+0x23>              6a 01                                 pushb $0x1
  10003a <akm+0x25>              50                                    pushl %eax
  10003b <akm+0x26>              e8 d5 ff ff ff                        calll $0xffffffd5
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  10002f <akm+0x1a>              8b 45 08                              movl 0x8(%ebp),%eax
  100032 <akm+0x1d>              83 e8 01                              subl $0x1,%eax
  100035 <akm+0x20>              83 ec 08                              subl $0x8,%esp
  100038 <akm+0x23>              6a 01                                 pushb $0x1
  10003a <akm+0x25>              50                                    pushl %eax
  10003b <akm+0x26>              e8 d5 ff ff ff                        calll $0xffffffd5
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100040 <akm+0x2b>              83 c4 10                              addl $0x10,%esp
  100043 <akm+0x2e>              eb 2a                                 jmpb $0x2a
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100040 <akm+0x2b>              83 c4 10                              addl $0x10,%esp
  100043 <akm+0x2e>              eb 2a                                 jmpb $0x2a
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  10002f <akm+0x1a>              8b 45 08                              movl 0x8(%ebp),%eax
  100032 <akm+0x1d>              83 e8 01                              subl $0x1,%eax
  100035 <akm+0x20>              83 ec 08                              subl $0x8,%esp
  100038 <akm+0x23>              6a 01                                 pushb $0x1
  10003a <akm+0x25>              50                                    pushl %eax
  10003b <akm+0x26>              e8 d5 ff ff ff                        calll $0xffffffd5
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100040 <akm+0x2b>              83 c4 10                              addl $0x10,%esp
  100043 <akm+0x2e>              eb 2a                                 jmpb $0x2a
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  10002f <akm+0x1a>              8b 45 08                              movl 0x8(%ebp),%eax
  100032 <akm+0x1d>              83 e8 01                              subl $0x1,%eax
  100035 <akm+0x20>              83 ec 08                              subl $0x8,%esp
  100038 <akm+0x23>              6a 01                                 pushb $0x1
  10003a <akm+0x25>              50                                    pushl %eax
  10003b <akm+0x26>              e8 d5 ff ff ff                        calll $0xffffffd5
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100040 <akm+0x2b>              83 c4 10                              addl $0x10,%esp
  100043 <akm+0x2e>              eb 2a                                 jmpb $0x2a
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  10002f <akm+0x1a>              8b 45 08                              movl 0x8(%ebp),%eax
  100032 <akm+0x1d>              83 e8 01                              subl $0x1,%eax
  100035 <akm+0x20>              83 ec 08                              subl $0x8,%esp
  100038 <akm+0x23>              6a 01                                 pushb $0x1
  10003a <akm+0x25>              50                                    pushl %eax
  10003b <akm+0x26>              e8 d5 ff ff ff                        calll $0xffffffd5
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100040 <akm+0x2b>              83 c4 10                              addl $0x10,%esp
  100043 <akm+0x2e>              eb 2a                                 jmpb $0x2a
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  100045 <akm+0x30>              8b 45 0c                              movl 0xc(%ebp),%eax
  100048 <akm+0x33>              83 e8 01                              subl $0x1,%eax
  10004b <akm+0x36>              83 ec 08                              subl $0x8,%esp
  10004e <akm+0x39>              50                                    pushl %eax
  10004f <akm+0x3a>              ff 75 08                              pushl 0x8(%ebp)
  100052 <akm+0x3d>              e8 be ff ff ff                        calll $0xffffffbe
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100029 <akm+0x14>              83 7d 0c 00                           cmpl $0x0,0xc(%ebp)
  10002d <akm+0x18>              75 16                                 jnzb $0x16
  10002f <akm+0x1a>              8b 45 08                              movl 0x8(%ebp),%eax
  100032 <akm+0x1d>              83 e8 01                              subl $0x1,%eax
  100035 <akm+0x20>              83 ec 08                              subl $0x8,%esp
  100038 <akm+0x23>              6a 01                                 pushb $0x1
  10003a <akm+0x25>              50                                    pushl %eax
  10003b <akm+0x26>              e8 d5 ff ff ff                        calll $0xffffffd5
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100040 <akm+0x2b>              83 c4 10                              addl $0x10,%esp
  100043 <akm+0x2e>              eb 2a                                 jmpb $0x2a
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  100057 <akm+0x42>              83 c4 10                              addl $0x10,%esp
  10005a <akm+0x45>              89 c2                                 movl %eax,%edx
  10005c <akm+0x47>              8b 45 08                              movl 0x8(%ebp),%eax
  10005f <akm+0x4a>              83 e8 01                              subl $0x1,%eax
  100062 <akm+0x4d>              83 ec 08                              subl $0x8,%esp
  100065 <akm+0x50>              52                                    pushl %edx
  100066 <akm+0x51>              50                                    pushl %eax
  100067 <akm+0x52>              e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <akm+0x0>               55                                    pushl %ebp
  100016 <akm+0x1>               89 e5                                 movl %esp,%ebp
  100018 <akm+0x3>               83 ec 08                              subl $0x8,%esp
  10001b <akm+0x6>               83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <akm+0xa>               75 08                                 jnzb $0x8
  100021 <akm+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <akm+0xf>               83 c0 01                              addl $0x1,%eax
  100027 <akm+0x12>              eb 46                                 jmpb $0x46
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10006c <akm+0x57>              83 c4 10                              addl $0x10,%esp
  10006f <akm+0x5a>              c9                                    leave
  100070 <akm+0x5b>              c3                                    retl
  10008e <main+0x1d>             83 c4 10                              addl $0x10,%esp
  100091 <main+0x20>             89 45 f4                              movl %eax,-0xc(%ebp)
  100094 <main+0x23>             83 7d f4 0b                           cmpl $0xb,-0xc(%ebp)
  100098 <main+0x27>             74 06                                 jzb $0x6
  1000a0 <main+0x2f>             b8 00 00 00 00                        movl $0x0,%eax
  1000a5 <main+0x34>             8b 4d fc                              movl -0x4(%ebp),%ecx
  1000a8 <main+0x37>             c9                                    leave
  1000a9 <main+0x38>             8d 61 fc                              leal -0x4(%ecx),%esp
  1000ac <main+0x3b>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
