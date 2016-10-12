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
  10000a <UNKNOWN>               e8 5a 00 00 00                        calll $0x5a
  100069 <main+0x0>              55                                    pushl %ebp
  10006a <main+0x1>              89 e5                                 movl %esp,%ebp
  10006c <main+0x3>              83 ec 10                              subl $0x10,%esp
  10006f <main+0x6>              c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  100076 <main+0xd>              c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  10007d <main+0x14>             eb 33                                 jmpb $0x33
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  10004e <if_else+0x39>          83 7d 08 32                           cmpl $0x32,0x8(%ebp)
  100052 <if_else+0x3d>          7e 09                                 jleb $0x9
  10005d <if_else+0x48>          c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  10004e <if_else+0x39>          83 7d 08 32                           cmpl $0x32,0x8(%ebp)
  100052 <if_else+0x3d>          7e 09                                 jleb $0x9
  10005d <if_else+0x48>          c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  10004e <if_else+0x39>          83 7d 08 32                           cmpl $0x32,0x8(%ebp)
  100052 <if_else+0x3d>          7e 09                                 jleb $0x9
  10005d <if_else+0x48>          c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  10004e <if_else+0x39>          83 7d 08 32                           cmpl $0x32,0x8(%ebp)
  100052 <if_else+0x3d>          7e 09                                 jleb $0x9
  10005d <if_else+0x48>          c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  10004e <if_else+0x39>          83 7d 08 32                           cmpl $0x32,0x8(%ebp)
  100052 <if_else+0x3d>          7e 09                                 jleb $0x9
  100054 <if_else+0x3f>          c7 45 fc 32 00 00 00                  movl $0x32,-0x4(%ebp)
  10005b <if_else+0x46>          eb 07                                 jmpb $0x7
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  10004e <if_else+0x39>          83 7d 08 32                           cmpl $0x32,0x8(%ebp)
  100052 <if_else+0x3d>          7e 09                                 jleb $0x9
  100054 <if_else+0x3f>          c7 45 fc 32 00 00 00                  movl $0x32,-0x4(%ebp)
  10005b <if_else+0x46>          eb 07                                 jmpb $0x7
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  10004e <if_else+0x39>          83 7d 08 32                           cmpl $0x32,0x8(%ebp)
  100052 <if_else+0x3d>          7e 09                                 jleb $0x9
  100054 <if_else+0x3f>          c7 45 fc 32 00 00 00                  movl $0x32,-0x4(%ebp)
  10005b <if_else+0x46>          eb 07                                 jmpb $0x7
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  100045 <if_else+0x30>          c7 45 fc 4b 00 00 00                  movl $0x4b,-0x4(%ebp)
  10004c <if_else+0x37>          eb 16                                 jmpb $0x16
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  100045 <if_else+0x30>          c7 45 fc 4b 00 00 00                  movl $0x4b,-0x4(%ebp)
  10004c <if_else+0x37>          eb 16                                 jmpb $0x16
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  10003f <if_else+0x2a>          83 7d 08 64                           cmpl $0x64,0x8(%ebp)
  100043 <if_else+0x2e>          7e 09                                 jleb $0x9
  100045 <if_else+0x30>          c7 45 fc 4b 00 00 00                  movl $0x4b,-0x4(%ebp)
  10004c <if_else+0x37>          eb 16                                 jmpb $0x16
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  100036 <if_else+0x21>          c7 45 fc 64 00 00 00                  movl $0x64,-0x4(%ebp)
  10003d <if_else+0x28>          eb 25                                 jmpb $0x25
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  100036 <if_else+0x21>          c7 45 fc 64 00 00 00                  movl $0x64,-0x4(%ebp)
  10003d <if_else+0x28>          eb 25                                 jmpb $0x25
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  10002d <if_else+0x18>          81 7d 08 2c 01 00 00                  cmpl $0x12c,0x8(%ebp)
  100034 <if_else+0x1f>          7e 09                                 jleb $0x9
  100036 <if_else+0x21>          c7 45 fc 64 00 00 00                  movl $0x64,-0x4(%ebp)
  10003d <if_else+0x28>          eb 25                                 jmpb $0x25
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  10007f <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  100082 <main+0x19>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100089 <main+0x20>             50                                    pushl %eax
  10008a <main+0x21>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <if_else+0x0>           55                                    pushl %ebp
  100016 <if_else+0x1>           89 e5                                 movl %esp,%ebp
  100018 <if_else+0x3>           83 ec 10                              subl $0x10,%esp
  10001b <if_else+0x6>           81 7d 08 f4 01 00 00                  cmpl $0x1f4,0x8(%ebp)
  100022 <if_else+0xd>           7e 09                                 jleb $0x9
  100024 <if_else+0xf>           c7 45 fc 96 00 00 00                  movl $0x96,-0x4(%ebp)
  10002b <if_else+0x16>          eb 37                                 jmpb $0x37
  100064 <if_else+0x4f>          8b 45 fc                              movl -0x4(%ebp),%eax
  100067 <if_else+0x52>          c9                                    leave
  100068 <if_else+0x53>          c3                                    retl
  10008f <main+0x26>             83 c4 04                              addl $0x4,%esp
  100092 <main+0x29>             89 c1                                 movl %eax,%ecx
  100094 <main+0x2b>             8b 45 f8                              movl -0x8(%ebp),%eax
  100097 <main+0x2e>             8d 50 01                              leal 0x1(%eax),%edx
  10009a <main+0x31>             89 55 f8                              movl %edx,-0x8(%ebp)
  10009d <main+0x34>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  1000a4 <main+0x3b>             39 c1                                 cmpl %eax,%ecx
  1000a6 <main+0x3d>             74 06                                 jzb $0x6
  1000ae <main+0x45>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000b2 <main+0x49>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000b5 <main+0x4c>             83 f8 0d                              cmpl $0xd,%eax
  1000b8 <main+0x4f>             76 c5                                 jbeb $0xffffffc5
  1000ba <main+0x51>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000be <main+0x55>             74 06                                 jzb $0x6
  1000c6 <main+0x5d>             b8 00 00 00 00                        movl $0x0,%eax
  1000cb <main+0x62>             c9                                    leave
  1000cc <main+0x63>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
