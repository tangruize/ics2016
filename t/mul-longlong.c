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
  10000a <UNKNOWN>               e8 55 00 00 00                        calll $0x55
  100064 <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  100068 <main+0x4>              83 e4 f8                              andl $0xfffffff8,%esp
  10006b <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  10006e <main+0xa>              55                                    pushl %ebp
  10006f <main+0xb>              89 e5                                 movl %esp,%ebp
  100071 <main+0xd>              57                                    pushl %edi
  100072 <main+0xe>              56                                    pushl %esi
  100073 <main+0xf>              53                                    pushl %ebx
  100074 <main+0x10>             51                                    pushl %ecx
  100075 <main+0x11>             83 ec 10                              subl $0x10,%esp
  100078 <main+0x14>             c7 45 e4 00 00 00 00                  movl $0x0,-0x1c(%ebp)
  10007f <main+0x1b>             c7 45 e0 00 00 00 00                  movl $0x0,-0x20(%ebp)
  100086 <main+0x22>             c7 45 ec 00 00 00 00                  movl $0x0,-0x14(%ebp)
  10008d <main+0x29>             eb 6d                                 jmpb $0x6d
  1000fc <main+0x98>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000ff <main+0x9b>             83 f8 03                              cmpl $0x3,%eax
  100102 <main+0x9e>             76 8b                                 jbeb $0xffffff8b
  10008f <main+0x2b>             8b 45 ec                              movl -0x14(%ebp),%eax
  100092 <main+0x2e>             89 45 e8                              movl %eax,-0x18(%ebp)
  100095 <main+0x31>             eb 59                                 jmpb $0x59
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  1000f8 <main+0x94>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000fc <main+0x98>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000ff <main+0x9b>             83 f8 03                              cmpl $0x3,%eax
  100102 <main+0x9e>             76 8b                                 jbeb $0xffffff8b
  10008f <main+0x2b>             8b 45 ec                              movl -0x14(%ebp),%eax
  100092 <main+0x2e>             89 45 e8                              movl %eax,-0x18(%ebp)
  100095 <main+0x31>             eb 59                                 jmpb $0x59
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  1000f8 <main+0x94>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000fc <main+0x98>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000ff <main+0x9b>             83 f8 03                              cmpl $0x3,%eax
  100102 <main+0x9e>             76 8b                                 jbeb $0xffffff8b
  10008f <main+0x2b>             8b 45 ec                              movl -0x14(%ebp),%eax
  100092 <main+0x2e>             89 45 e8                              movl %eax,-0x18(%ebp)
  100095 <main+0x31>             eb 59                                 jmpb $0x59
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  1000f8 <main+0x94>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000fc <main+0x98>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000ff <main+0x9b>             83 f8 03                              cmpl $0x3,%eax
  100102 <main+0x9e>             76 8b                                 jbeb $0xffffff8b
  10008f <main+0x2b>             8b 45 ec                              movl -0x14(%ebp),%eax
  100092 <main+0x2e>             89 45 e8                              movl %eax,-0x18(%ebp)
  100095 <main+0x31>             eb 59                                 jmpb $0x59
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  100097 <main+0x33>             8b 45 e4                              movl -0x1c(%ebp),%eax
  10009a <main+0x36>             8d 50 01                              leal 0x1(%eax),%edx
  10009d <main+0x39>             89 55 e4                              movl %edx,-0x1c(%ebp)
  1000a0 <main+0x3c>             8b 34 c5 00 02 10 00                  movl 0x100200(,%eax,8),%esi
  1000a7 <main+0x43>             8b 3c c5 04 02 10 00                  movl 0x100204(,%eax,8),%edi
  1000ae <main+0x4a>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000b1 <main+0x4d>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000b8 <main+0x54>             89 c1                                 movl %eax,%ecx
  1000ba <main+0x56>             89 c3                                 movl %eax,%ebx
  1000bc <main+0x58>             c1 fb 1f                              sarl $0x1f,%ebx
  1000bf <main+0x5b>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000c2 <main+0x5e>             8b 04 85 c0 01 10 00                  movl 0x1001c0(,%eax,4),%eax
  1000c9 <main+0x65>             99                                    cltd
  1000ca <main+0x66>             53                                    pushl %ebx
  1000cb <main+0x67>             51                                    pushl %ecx
  1000cc <main+0x68>             52                                    pushl %edx
  1000cd <main+0x69>             50                                    pushl %eax
  1000ce <main+0x6a>             e8 42 ff ff ff                        calll $0xffffff42
  100015 <mul+0x0>               55                                    pushl %ebp
  100016 <mul+0x1>               89 e5                                 movl %esp,%ebp
  100018 <mul+0x3>               83 ec 20                              subl $0x20,%esp
  10001b <mul+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <mul+0x9>               89 45 e8                              movl %eax,-0x18(%ebp)
  100021 <mul+0xc>               8b 45 0c                              movl 0xc(%ebp),%eax
  100024 <mul+0xf>               89 45 ec                              movl %eax,-0x14(%ebp)
  100027 <mul+0x12>              8b 45 10                              movl 0x10(%ebp),%eax
  10002a <mul+0x15>              89 45 e0                              movl %eax,-0x20(%ebp)
  10002d <mul+0x18>              8b 45 14                              movl 0x14(%ebp),%eax
  100030 <mul+0x1b>              89 45 e4                              movl %eax,-0x1c(%ebp)
  100033 <mul+0x1e>              8b 45 ec                              movl -0x14(%ebp),%eax
  100036 <mul+0x21>              0f af 45 e0                           imull -0x20(%ebp),%eax,%eax
  10003a <mul+0x25>              89 c2                                 movl %eax,%edx
  10003c <mul+0x27>              8b 45 e4                              movl -0x1c(%ebp),%eax
  10003f <mul+0x2a>              0f af 45 e8                           imull -0x18(%ebp),%eax,%eax
  100043 <mul+0x2e>              8d 0c 02                              leal (%edx,%eax,1),%ecx
  100046 <mul+0x31>              8b 45 e0                              movl -0x20(%ebp),%eax
  100049 <mul+0x34>              f7 65 e8                              mull -0x18(%ebp)
  10004c <mul+0x37>              01 d1                                 addl %edx,%ecx
  10004e <mul+0x39>              89 ca                                 movl %ecx,%edx
  100050 <mul+0x3b>              89 45 f8                              movl %eax,-0x8(%ebp)
  100053 <mul+0x3e>              89 55 fc                              movl %edx,-0x4(%ebp)
  100056 <mul+0x41>              89 45 f8                              movl %eax,-0x8(%ebp)
  100059 <mul+0x44>              89 55 fc                              movl %edx,-0x4(%ebp)
  10005c <mul+0x47>              8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <mul+0x4a>              8b 55 fc                              movl -0x4(%ebp),%edx
  100062 <mul+0x4d>              c9                                    leave
  100063 <mul+0x4e>              c3                                    retl
  1000d3 <main+0x6f>             83 c4 10                              addl $0x10,%esp
  1000d6 <main+0x72>             89 f9                                 movl %edi,%ecx
  1000d8 <main+0x74>             31 d1                                 xorl %edx,%ecx
  1000da <main+0x76>             31 f0                                 xorl %esi,%eax
  1000dc <main+0x78>             09 c8                                 orl %ecx,%eax
  1000de <main+0x7a>             85 c0                                 testl %eax,%eax
  1000e0 <main+0x7c>             74 06                                 jzb $0x6
  1000e8 <main+0x84>             83 45 e0 01                           addl $0x1,-0x20(%ebp)
  1000ec <main+0x88>             83 45 e8 01                           addl $0x1,-0x18(%ebp)
  1000f0 <main+0x8c>             8b 45 e8                              movl -0x18(%ebp),%eax
  1000f3 <main+0x8f>             83 f8 03                              cmpl $0x3,%eax
  1000f6 <main+0x92>             76 9f                                 jbeb $0xffffff9f
  1000f8 <main+0x94>             83 45 ec 01                           addl $0x1,-0x14(%ebp)
  1000fc <main+0x98>             8b 45 ec                              movl -0x14(%ebp),%eax
  1000ff <main+0x9b>             83 f8 03                              cmpl $0x3,%eax
  100102 <main+0x9e>             76 8b                                 jbeb $0xffffff8b
  100104 <main+0xa0>             83 7d e0 0a                           cmpl $0xa,-0x20(%ebp)
  100108 <main+0xa4>             74 06                                 jzb $0x6
  100110 <main+0xac>             b8 00 00 00 00                        movl $0x0,%eax
  100115 <main+0xb1>             8d 65 f0                              leal -0x10(%ebp),%esp
  100118 <main+0xb4>             59                                    popl %ecx
  100119 <main+0xb5>             5b                                    popl %ebx
  10011a <main+0xb6>             5e                                    popl %esi
  10011b <main+0xb7>             5f                                    popl %edi
  10011c <main+0xb8>             5d                                    popl %ebp
  10011d <main+0xb9>             8d 61 fc                              leal -0x4(%ecx),%esp
  100120 <main+0xbc>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
