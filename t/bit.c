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
  10000a <UNKNOWN>               e8 9c 00 00 00                        calll $0x9c
  1000ab <main+0x0>              55                                    pushl %ebp
  1000ac <main+0x1>              89 e5                                 movl %esp,%ebp
  1000ae <main+0x3>              83 ec 10                              subl $0x10,%esp
  1000b1 <main+0x6>              c6 45 fe aa                           movb $0xaa,-0x2(%ebp)
  1000b5 <main+0xa>              6a 00                                 pushb $0x0
  1000b7 <main+0xc>              8d 45 fe                              leal -0x2(%ebp),%eax
  1000ba <main+0xf>              50                                    pushl %eax
  1000bb <main+0x10>             e8 55 ff ff ff                        calll $0xffffff55
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  1000c0 <main+0x15>             83 c4 08                              addl $0x8,%esp
  1000c3 <main+0x18>             84 c0                                 testb %al,%al
  1000c5 <main+0x1a>             74 06                                 jzb $0x6
  1000cd <main+0x22>             6a 01                                 pushb $0x1
  1000cf <main+0x24>             8d 45 fe                              leal -0x2(%ebp),%eax
  1000d2 <main+0x27>             50                                    pushl %eax
  1000d3 <main+0x28>             e8 3d ff ff ff                        calll $0xffffff3d
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  1000d8 <main+0x2d>             83 c4 08                              addl $0x8,%esp
  1000db <main+0x30>             3c 01                                 cmpb $0x1,%al
  1000dd <main+0x32>             74 06                                 jzb $0x6
  1000e5 <main+0x3a>             6a 02                                 pushb $0x2
  1000e7 <main+0x3c>             8d 45 fe                              leal -0x2(%ebp),%eax
  1000ea <main+0x3f>             50                                    pushl %eax
  1000eb <main+0x40>             e8 25 ff ff ff                        calll $0xffffff25
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  1000f0 <main+0x45>             83 c4 08                              addl $0x8,%esp
  1000f3 <main+0x48>             84 c0                                 testb %al,%al
  1000f5 <main+0x4a>             74 06                                 jzb $0x6
  1000fd <main+0x52>             6a 03                                 pushb $0x3
  1000ff <main+0x54>             8d 45 fe                              leal -0x2(%ebp),%eax
  100102 <main+0x57>             50                                    pushl %eax
  100103 <main+0x58>             e8 0d ff ff ff                        calll $0xffffff0d
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  100108 <main+0x5d>             83 c4 08                              addl $0x8,%esp
  10010b <main+0x60>             3c 01                                 cmpb $0x1,%al
  10010d <main+0x62>             74 06                                 jzb $0x6
  100115 <main+0x6a>             6a 04                                 pushb $0x4
  100117 <main+0x6c>             8d 45 fe                              leal -0x2(%ebp),%eax
  10011a <main+0x6f>             50                                    pushl %eax
  10011b <main+0x70>             e8 f5 fe ff ff                        calll $0xfffffef5
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  100120 <main+0x75>             83 c4 08                              addl $0x8,%esp
  100123 <main+0x78>             84 c0                                 testb %al,%al
  100125 <main+0x7a>             74 06                                 jzb $0x6
  10012d <main+0x82>             6a 05                                 pushb $0x5
  10012f <main+0x84>             8d 45 fe                              leal -0x2(%ebp),%eax
  100132 <main+0x87>             50                                    pushl %eax
  100133 <main+0x88>             e8 dd fe ff ff                        calll $0xfffffedd
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  100138 <main+0x8d>             83 c4 08                              addl $0x8,%esp
  10013b <main+0x90>             3c 01                                 cmpb $0x1,%al
  10013d <main+0x92>             74 06                                 jzb $0x6
  100145 <main+0x9a>             6a 06                                 pushb $0x6
  100147 <main+0x9c>             8d 45 fe                              leal -0x2(%ebp),%eax
  10014a <main+0x9f>             50                                    pushl %eax
  10014b <main+0xa0>             e8 c5 fe ff ff                        calll $0xfffffec5
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  100150 <main+0xa5>             83 c4 08                              addl $0x8,%esp
  100153 <main+0xa8>             84 c0                                 testb %al,%al
  100155 <main+0xaa>             74 06                                 jzb $0x6
  10015d <main+0xb2>             6a 07                                 pushb $0x7
  10015f <main+0xb4>             8d 45 fe                              leal -0x2(%ebp),%eax
  100162 <main+0xb7>             50                                    pushl %eax
  100163 <main+0xb8>             e8 ad fe ff ff                        calll $0xfffffead
  100015 <getbit+0x0>            55                                    pushl %ebp
  100016 <getbit+0x1>            89 e5                                 movl %esp,%ebp
  100018 <getbit+0x3>            83 ec 10                              subl $0x10,%esp
  10001b <getbit+0x6>            8b 45 0c                              movl 0xc(%ebp),%eax
  10001e <getbit+0x9>            c1 f8 03                              sarl $0x3,%eax
  100021 <getbit+0xc>            89 45 fc                              movl %eax,-0x4(%ebp)
  100024 <getbit+0xf>            83 65 0c 07                           andl $0x7,0xc(%ebp)
  100028 <getbit+0x13>           8b 45 0c                              movl 0xc(%ebp),%eax
  10002b <getbit+0x16>           ba 01 00 00 00                        movl $0x1,%edx
  100030 <getbit+0x1b>           89 c1                                 movl %eax,%ecx
  100032 <getbit+0x1d>           d3 e2                                 shll %cl,%edx
  100034 <getbit+0x1f>           89 d0                                 movl %edx,%eax
  100036 <getbit+0x21>           88 45 fb                              movb %al,-0x5(%ebp)
  100039 <getbit+0x24>           8b 55 fc                              movl -0x4(%ebp),%edx
  10003c <getbit+0x27>           8b 45 08                              movl 0x8(%ebp),%eax
  10003f <getbit+0x2a>           01 d0                                 addl %edx,%eax
  100041 <getbit+0x2c>           0f b6 00                              movzxl (%eax),%eax
  100044 <getbit+0x2f>           22 45 fb                              andb -0x5(%ebp),%al
  100047 <getbit+0x32>           84 c0                                 testb %al,%al
  100049 <getbit+0x34>           0f 95 c0                              setnzb %al
  10004c <getbit+0x37>           c9                                    leave
  10004d <getbit+0x38>           c3                                    retl
  100168 <main+0xbd>             83 c4 08                              addl $0x8,%esp
  10016b <main+0xc0>             3c 01                                 cmpb $0x1,%al
  10016d <main+0xc2>             74 06                                 jzb $0x6
  100175 <main+0xca>             6a 01                                 pushb $0x1
  100177 <main+0xcc>             6a 08                                 pushb $0x8
  100179 <main+0xce>             8d 45 fe                              leal -0x2(%ebp),%eax
  10017c <main+0xd1>             50                                    pushl %eax
  10017d <main+0xd2>             e8 cc fe ff ff                        calll $0xfffffecc
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10009e <setbit+0x50>           8b 45 f4                              movl -0xc(%ebp),%eax
  1000a1 <setbit+0x53>           0f b6 00                              movzxl (%eax),%eax
  1000a4 <setbit+0x56>           0a 45 fb                              orb -0x5(%ebp),%al
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  100182 <main+0xd7>             83 c4 0c                              addl $0xc,%esp
  100185 <main+0xda>             6a 00                                 pushb $0x0
  100187 <main+0xdc>             6a 09                                 pushb $0x9
  100189 <main+0xde>             8d 45 fe                              leal -0x2(%ebp),%eax
  10018c <main+0xe1>             50                                    pushl %eax
  10018d <main+0xe2>             e8 bc fe ff ff                        calll $0xfffffebc
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10008c <setbit+0x3e>           8b 45 f4                              movl -0xc(%ebp),%eax
  10008f <setbit+0x41>           0f b6 00                              movzxl (%eax),%eax
  100092 <setbit+0x44>           89 c1                                 movl %eax,%ecx
  100094 <setbit+0x46>           0f b6 45 fb                           movzxl -0x5(%ebp),%eax
  100098 <setbit+0x4a>           f7 d0                                 notl %eax
  10009a <setbit+0x4c>           21 c8                                 andl %ecx,%eax
  10009c <setbit+0x4e>           eb 09                                 jmpb $0x9
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  100192 <main+0xe7>             83 c4 0c                              addl $0xc,%esp
  100195 <main+0xea>             6a 01                                 pushb $0x1
  100197 <main+0xec>             6a 0a                                 pushb $0xa
  100199 <main+0xee>             8d 45 fe                              leal -0x2(%ebp),%eax
  10019c <main+0xf1>             50                                    pushl %eax
  10019d <main+0xf2>             e8 ac fe ff ff                        calll $0xfffffeac
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10009e <setbit+0x50>           8b 45 f4                              movl -0xc(%ebp),%eax
  1000a1 <setbit+0x53>           0f b6 00                              movzxl (%eax),%eax
  1000a4 <setbit+0x56>           0a 45 fb                              orb -0x5(%ebp),%al
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  1001a2 <main+0xf7>             83 c4 0c                              addl $0xc,%esp
  1001a5 <main+0xfa>             6a 00                                 pushb $0x0
  1001a7 <main+0xfc>             6a 0b                                 pushb $0xb
  1001a9 <main+0xfe>             8d 45 fe                              leal -0x2(%ebp),%eax
  1001ac <main+0x101>            50                                    pushl %eax
  1001ad <main+0x102>            e8 9c fe ff ff                        calll $0xfffffe9c
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10008c <setbit+0x3e>           8b 45 f4                              movl -0xc(%ebp),%eax
  10008f <setbit+0x41>           0f b6 00                              movzxl (%eax),%eax
  100092 <setbit+0x44>           89 c1                                 movl %eax,%ecx
  100094 <setbit+0x46>           0f b6 45 fb                           movzxl -0x5(%ebp),%eax
  100098 <setbit+0x4a>           f7 d0                                 notl %eax
  10009a <setbit+0x4c>           21 c8                                 andl %ecx,%eax
  10009c <setbit+0x4e>           eb 09                                 jmpb $0x9
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  1001b2 <main+0x107>            83 c4 0c                              addl $0xc,%esp
  1001b5 <main+0x10a>            6a 01                                 pushb $0x1
  1001b7 <main+0x10c>            6a 0c                                 pushb $0xc
  1001b9 <main+0x10e>            8d 45 fe                              leal -0x2(%ebp),%eax
  1001bc <main+0x111>            50                                    pushl %eax
  1001bd <main+0x112>            e8 8c fe ff ff                        calll $0xfffffe8c
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10009e <setbit+0x50>           8b 45 f4                              movl -0xc(%ebp),%eax
  1000a1 <setbit+0x53>           0f b6 00                              movzxl (%eax),%eax
  1000a4 <setbit+0x56>           0a 45 fb                              orb -0x5(%ebp),%al
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  1001c2 <main+0x117>            83 c4 0c                              addl $0xc,%esp
  1001c5 <main+0x11a>            6a 00                                 pushb $0x0
  1001c7 <main+0x11c>            6a 0d                                 pushb $0xd
  1001c9 <main+0x11e>            8d 45 fe                              leal -0x2(%ebp),%eax
  1001cc <main+0x121>            50                                    pushl %eax
  1001cd <main+0x122>            e8 7c fe ff ff                        calll $0xfffffe7c
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10008c <setbit+0x3e>           8b 45 f4                              movl -0xc(%ebp),%eax
  10008f <setbit+0x41>           0f b6 00                              movzxl (%eax),%eax
  100092 <setbit+0x44>           89 c1                                 movl %eax,%ecx
  100094 <setbit+0x46>           0f b6 45 fb                           movzxl -0x5(%ebp),%eax
  100098 <setbit+0x4a>           f7 d0                                 notl %eax
  10009a <setbit+0x4c>           21 c8                                 andl %ecx,%eax
  10009c <setbit+0x4e>           eb 09                                 jmpb $0x9
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  1001d2 <main+0x127>            83 c4 0c                              addl $0xc,%esp
  1001d5 <main+0x12a>            6a 01                                 pushb $0x1
  1001d7 <main+0x12c>            6a 0e                                 pushb $0xe
  1001d9 <main+0x12e>            8d 45 fe                              leal -0x2(%ebp),%eax
  1001dc <main+0x131>            50                                    pushl %eax
  1001dd <main+0x132>            e8 6c fe ff ff                        calll $0xfffffe6c
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10009e <setbit+0x50>           8b 45 f4                              movl -0xc(%ebp),%eax
  1000a1 <setbit+0x53>           0f b6 00                              movzxl (%eax),%eax
  1000a4 <setbit+0x56>           0a 45 fb                              orb -0x5(%ebp),%al
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  1001e2 <main+0x137>            83 c4 0c                              addl $0xc,%esp
  1001e5 <main+0x13a>            6a 00                                 pushb $0x0
  1001e7 <main+0x13c>            6a 0f                                 pushb $0xf
  1001e9 <main+0x13e>            8d 45 fe                              leal -0x2(%ebp),%eax
  1001ec <main+0x141>            50                                    pushl %eax
  1001ed <main+0x142>            e8 5c fe ff ff                        calll $0xfffffe5c
  10004e <setbit+0x0>            55                                    pushl %ebp
  10004f <setbit+0x1>            89 e5                                 movl %esp,%ebp
  100051 <setbit+0x3>            83 ec 14                              subl $0x14,%esp
  100054 <setbit+0x6>            8b 45 10                              movl 0x10(%ebp),%eax
  100057 <setbit+0x9>            88 45 ec                              movb %al,-0x14(%ebp)
  10005a <setbit+0xc>            8b 45 0c                              movl 0xc(%ebp),%eax
  10005d <setbit+0xf>            c1 f8 03                              sarl $0x3,%eax
  100060 <setbit+0x12>           89 45 fc                              movl %eax,-0x4(%ebp)
  100063 <setbit+0x15>           83 65 0c 07                           andl $0x7,0xc(%ebp)
  100067 <setbit+0x19>           8b 45 0c                              movl 0xc(%ebp),%eax
  10006a <setbit+0x1c>           ba 01 00 00 00                        movl $0x1,%edx
  10006f <setbit+0x21>           89 c1                                 movl %eax,%ecx
  100071 <setbit+0x23>           d3 e2                                 shll %cl,%edx
  100073 <setbit+0x25>           89 d0                                 movl %edx,%eax
  100075 <setbit+0x27>           88 45 fb                              movb %al,-0x5(%ebp)
  100078 <setbit+0x2a>           8b 55 fc                              movl -0x4(%ebp),%edx
  10007b <setbit+0x2d>           8b 45 08                              movl 0x8(%ebp),%eax
  10007e <setbit+0x30>           01 d0                                 addl %edx,%eax
  100080 <setbit+0x32>           89 45 f4                              movl %eax,-0xc(%ebp)
  100083 <setbit+0x35>           8b 55 f4                              movl -0xc(%ebp),%edx
  100086 <setbit+0x38>           80 7d ec 00                           cmpb $0x0,-0x14(%ebp)
  10008a <setbit+0x3c>           75 12                                 jnzb $0x12
  10008c <setbit+0x3e>           8b 45 f4                              movl -0xc(%ebp),%eax
  10008f <setbit+0x41>           0f b6 00                              movzxl (%eax),%eax
  100092 <setbit+0x44>           89 c1                                 movl %eax,%ecx
  100094 <setbit+0x46>           0f b6 45 fb                           movzxl -0x5(%ebp),%eax
  100098 <setbit+0x4a>           f7 d0                                 notl %eax
  10009a <setbit+0x4c>           21 c8                                 andl %ecx,%eax
  10009c <setbit+0x4e>           eb 09                                 jmpb $0x9
  1000a7 <setbit+0x59>           88 02                                 movb %al,(%edx)
  1000a9 <setbit+0x5b>           c9                                    leave
  1000aa <setbit+0x5c>           c3                                    retl
  1001f2 <main+0x147>            83 c4 0c                              addl $0xc,%esp
  1001f5 <main+0x14a>            0f b6 45 ff                           movzxl -0x1(%ebp),%eax
  1001f9 <main+0x14e>            3c 55                                 cmpb $0x55,%al
  1001fb <main+0x150>            74 06                                 jzb $0x6
  100203 <main+0x158>            b8 00 00 00 00                        movl $0x0,%eax
  100208 <main+0x15d>            c9                                    leave
  100209 <main+0x15e>            c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
