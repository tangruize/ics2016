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
  100018 <main+0x3>              83 ec 10                              subl $0x10,%esp
  10001b <main+0x6>              c7 45 fc 02 00 00 00                  movl $0x2,-0x4(%ebp)
  100022 <main+0xd>              eb 48                                 jmpb $0x48
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100024 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100027 <main+0x12>             83 e8 01                              subl $0x1,%eax
  10002a <main+0x15>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100031 <main+0x1c>             8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <main+0x1f>             83 e8 02                              subl $0x2,%eax
  100037 <main+0x22>             8b 04 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%eax
  10003e <main+0x29>             01 c2                                 addl %eax,%edx
  100040 <main+0x2b>             8b 45 fc                              movl -0x4(%ebp),%eax
  100043 <main+0x2e>             89 14 85 c0 00 10 00                  movl %edx,0x1000c0(,%eax,4)
  10004a <main+0x35>             8b 45 fc                              movl -0x4(%ebp),%eax
  10004d <main+0x38>             8b 14 85 c0 00 10 00                  movl 0x1000c0(,%eax,4),%edx
  100054 <main+0x3f>             8b 45 fc                              movl -0x4(%ebp),%eax
  100057 <main+0x42>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10005e <main+0x49>             39 c2                                 cmpl %eax,%edx
  100060 <main+0x4b>             74 06                                 jzb $0x6
  100068 <main+0x53>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10006c <main+0x57>             83 7d fc 27                           cmpl $0x27,-0x4(%ebp)
  100070 <main+0x5b>             7e b2                                 jleb $0xffffffb2
  100072 <main+0x5d>             83 7d fc 28                           cmpl $0x28,-0x4(%ebp)
  100076 <main+0x61>             74 06                                 jzb $0x6
  10007e <main+0x69>             b8 00 00 00 00                        movl $0x0,%eax
  100083 <main+0x6e>             c9                                    leave
  100084 <main+0x6f>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
