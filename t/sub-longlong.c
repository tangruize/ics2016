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
  10000a <UNKNOWN>               e8 3e 00 00 00                        calll $0x3e
  10004d <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  100051 <main+0x4>              83 e4 f8                              andl $0xfffffff8,%esp
  100054 <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  100057 <main+0xa>              55                                    pushl %ebp
  100058 <main+0xb>              89 e5                                 movl %esp,%ebp
  10005a <main+0xd>              56                                    pushl %esi
  10005b <main+0xe>              53                                    pushl %ebx
  10005c <main+0xf>              51                                    pushl %ecx
  10005d <main+0x10>             83 ec 14                              subl $0x14,%esp
  100060 <main+0x13>             c7 45 e4 00 00 00 00                  movl $0x0,-0x1c(%ebp)
  100067 <main+0x1a>             c7 45 e0 00 00 00 00                  movl $0x0,-0x20(%ebp)
  10006e <main+0x21>             c7 45 ec 00 00 00 00                  movl $0x0,-0x14(%ebp)
  100075 <main+0x28>             eb 78                                 jmpb $0x78
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  100077 <main+0x2a>             c7 45 e8 00 00 00 00                  movl $0x0,-0x18(%ebp)
  10007e <main+0x31>             eb 63                                 jmpb $0x63
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  100080 <main+0x33>             8b 45 e8                              movl -0x18(%ebp),%eax
  100083 <main+0x36>             8b 0c c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%ecx
  10008a <main+0x3d>             8b 1c c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%ebx
  100091 <main+0x44>             8b 45 ec                              movl -0x14(%ebp),%eax
  100094 <main+0x47>             8b 14 c5 c4 01 10 00                  movl 0x1001c4(,%eax,8),%edx
  10009b <main+0x4e>             8b 04 c5 c0 01 10 00                  movl 0x1001c0(,%eax,8),%eax
  1000a2 <main+0x55>             53                                    pushl %ebx
  1000a3 <main+0x56>             51                                    pushl %ecx
  1000a4 <main+0x57>             52                                    pushl %edx
  1000a5 <main+0x58>             50                                    pushl %eax
  1000a6 <main+0x59>             e8 6a ff ff ff                        calll $0xffffff6a
  100015 <sub+0x0>               55                                    pushl %ebp
  100016 <sub+0x1>               89 e5                                 movl %esp,%ebp
  100018 <sub+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <sub+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <sub+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <sub+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <sub+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <sub+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <sub+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <sub+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <sub+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <sub+0x1e>              8b 45 e8                              movl -0x18(%ebp),%eax
  100036 <sub+0x21>              8b 55 ec                              movl -0x14(%ebp),%edx
  100039 <sub+0x24>              2b 45 e0                              subl -0x20(%ebp),%eax
  10003c <sub+0x27>              1b 55 e4                              sbbl -0x1c(%ebp),%edx
  10003f <sub+0x2a>              89 45 f8                              movl %eax,-0x8(%ebp)
  100042 <sub+0x2d>              89 55 fc                              movl %edx,-0x4(%ebp)
  100045 <sub+0x30>              8b 45 f8                              movl -0x8(%ebp),%eax
  100048 <sub+0x33>              8b 55 fc                              movl -0x4(%ebp),%edx
  10004b <sub+0x36>              c9                                    leave
  10004c <sub+0x37>              c3                                    retl
  1000ab <main+0x5e>             83 c4 10                              addl $0x10,%esp
  1000ae <main+0x61>             89 c1                                 movl %eax,%ecx
  1000b0 <main+0x63>             89 d3                                 movl %edx,%ebx
  1000b2 <main+0x65>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000b5 <main+0x68>             8d 50 01                              leal 0x1(%eax),%edx
  1000b8 <main+0x6b>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000bb <main+0x6e>             8b 14 c5 04 02 10 00                  movl 0x100204(,%eax,8),%edx
  1000c2 <main+0x75>             8b 04 c5 00 02 10 00                  movl 0x100200(,%eax,8),%eax
  1000c9 <main+0x7c>             89 de                                 movl %ebx,%esi
  1000cb <main+0x7e>             31 d6                                 xorl %edx,%esi
  1000cd <main+0x80>             31 c8                                 xorl %ecx,%eax
  1000cf <main+0x82>             09 f0                                 orl %esi,%eax
  1000d1 <main+0x84>             85 c0                                 testl %eax,%eax
  1000d3 <main+0x86>             74 06                                 jzb $0x6
  1000db <main+0x8e>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000df <main+0x92>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000e3 <main+0x96>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000e6 <main+0x99>             83 f8 07                              cmpl $0x7,%eax
  1000e9 <main+0x9c>             76 95                                 jbeb $0xffffff95
  1000eb <main+0x9e>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000ef <main+0xa2>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000f2 <main+0xa5>             83 f8 07                              cmpl $0x7,%eax
  1000f5 <main+0xa8>             76 80                                 jbeb $0xffffff80
  1000f7 <main+0xaa>             83 7d e0 40                           cmpl $0x40,-0x20(%ebp)
  1000fb <main+0xae>             74 06                                 jzb $0x6
  100103 <main+0xb6>             b8 00 00 00 00                        movl $0x0,%eax
  100108 <main+0xbb>             8d 65 f4                              leal -0xc(%ebp),%esp
  10010b <main+0xbe>             59                                    popl %ecx
  10010c <main+0xbf>             5b                                    popl %ebx
  10010d <main+0xc0>             5e                                    popl %esi
  10010e <main+0xc1>             5d                                    popl %ebp
  10010f <main+0xc2>             8d 61 fc                              leal -0x4(%ecx),%esp
  100112 <main+0xc5>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
