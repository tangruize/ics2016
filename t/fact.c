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
  10000a <UNKNOWN>               e8 37 00 00 00                        calll $0x37
  100046 <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  10004a <main+0x4>              83 e4 f0                              andl $0xfffffff0,%esp
  10004d <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  100050 <main+0xa>              55                                    pushl %ebp
  100051 <main+0xb>              89 e5                                 movl %esp,%ebp
  100053 <main+0xd>              51                                    pushl %ecx
  100054 <main+0xe>              83 ec 14                              subl $0x14,%esp
  100057 <main+0x11>             c7 45 f4 00 00 00 00                  movl $0x0,-0xc(%ebp)
  10005e <main+0x18>             eb 3c                                 jmpb $0x3c
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  100060 <main+0x1a>             83 ec 0c                              subl $0xc,%esp
  100063 <main+0x1d>             ff 75 f4                              pushl -0xc(%ebp)
  100066 <main+0x20>             e8 aa ff ff ff                        calll $0xffffffaa
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  10002e <fact+0x19>             8b 45 08                              movl 0x8(%ebp),%eax
  100031 <fact+0x1c>             83 e8 01                              subl $0x1,%eax
  100034 <fact+0x1f>             83 ec 0c                              subl $0xc,%esp
  100037 <fact+0x22>             50                                    pushl %eax
  100038 <fact+0x23>             e8 d8 ff ff ff                        calll $0xffffffd8
  100015 <fact+0x0>              55                                    pushl %ebp
  100016 <fact+0x1>              89 e5                                 movl %esp,%ebp
  100018 <fact+0x3>              83 ec 08                              subl $0x8,%esp
  10001b <fact+0x6>              83 7d 08 00                           cmpl $0x0,0x8(%ebp)
  10001f <fact+0xa>              74 06                                 jzb $0x6
  100021 <fact+0xc>              83 7d 08 01                           cmpl $0x1,0x8(%ebp)
  100025 <fact+0x10>             75 07                                 jnzb $0x7
  100027 <fact+0x12>             b8 01 00 00 00                        movl $0x1,%eax
  10002c <fact+0x17>             eb 16                                 jmpb $0x16
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10003d <fact+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <fact+0x2b>             0f af 45 08                           imull 0x8(%ebp),%eax,%eax
  100044 <fact+0x2f>             c9                                    leave
  100045 <fact+0x30>             c3                                    retl
  10006b <main+0x25>             83 c4 10                              addl $0x10,%esp
  10006e <main+0x28>             89 c2                                 movl %eax,%edx
  100070 <main+0x2a>             8b 45 f4                              movl -0xc(%ebp),%eax
  100073 <main+0x2d>             89 14 85 60 01 10 00                  movl %edx,0x100160(,%eax,4)
  10007a <main+0x34>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007d <main+0x37>             8b 14 85 60 01 10 00                  movl 0x100160(,%eax,4),%edx
  100084 <main+0x3e>             8b 45 f4                              movl -0xc(%ebp),%eax
  100087 <main+0x41>             8b 04 85 20 01 10 00                  movl 0x100120(,%eax,4),%eax
  10008e <main+0x48>             39 c2                                 cmpl %eax,%edx
  100090 <main+0x4a>             74 06                                 jzb $0x6
  100098 <main+0x52>             83 45 f4 01                           addl $0x1,-0xc(%ebp)
  10009c <main+0x56>             83 7d f4 0c                           cmpl $0xc,-0xc(%ebp)
  1000a0 <main+0x5a>             7e be                                 jleb $0xffffffbe
  1000a2 <main+0x5c>             83 7d f4 0d                           cmpl $0xd,-0xc(%ebp)
  1000a6 <main+0x60>             74 06                                 jzb $0x6
  1000ae <main+0x68>             b8 00 00 00 00                        movl $0x0,%eax
  1000b3 <main+0x6d>             8b 4d fc                              movl -0x4(%ebp),%ecx
  1000b6 <main+0x70>             c9                                    leave
  1000b7 <main+0x71>             8d 61 fc                              leal -0x4(%ecx),%esp
  1000ba <main+0x74>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
