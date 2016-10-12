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
  10000a <UNKNOWN>               e8 64 00 00 00                        calll $0x64
  100073 <main+0x0>              55                                    pushl %ebp
  100074 <main+0x1>              89 e5                                 movl %esp,%ebp
  100076 <main+0x3>              83 ec 10                              subl $0x10,%esp
  100079 <main+0x6>              c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100080 <main+0xd>              eb 29                                 jmpb $0x29
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100066 <switch_case+0x51>      c7 45 fc ff ff ff ff                  movl $0xffffffff,-0x4(%ebp)
  10006d <switch_case+0x58>      90                                    nop
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100030 <switch_case+0x1b>      c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100037 <switch_case+0x22>      eb 35                                 jmpb $0x35
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100039 <switch_case+0x24>      c7 45 fc 02 00 00 00                  movl $0x2,-0x4(%ebp)
  100040 <switch_case+0x2b>      eb 2c                                 jmpb $0x2c
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100042 <switch_case+0x2d>      c7 45 fc 05 00 00 00                  movl $0x5,-0x4(%ebp)
  100049 <switch_case+0x34>      eb 23                                 jmpb $0x23
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100042 <switch_case+0x2d>      c7 45 fc 05 00 00 00                  movl $0x5,-0x4(%ebp)
  100049 <switch_case+0x34>      eb 23                                 jmpb $0x23
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  10004b <switch_case+0x36>      c7 45 fc 08 00 00 00                  movl $0x8,-0x4(%ebp)
  100052 <switch_case+0x3d>      eb 1a                                 jmpb $0x1a
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  10004b <switch_case+0x36>      c7 45 fc 08 00 00 00                  movl $0x8,-0x4(%ebp)
  100052 <switch_case+0x3d>      eb 1a                                 jmpb $0x1a
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  10004b <switch_case+0x36>      c7 45 fc 08 00 00 00                  movl $0x8,-0x4(%ebp)
  100052 <switch_case+0x3d>      eb 1a                                 jmpb $0x1a
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  10004b <switch_case+0x36>      c7 45 fc 08 00 00 00                  movl $0x8,-0x4(%ebp)
  100052 <switch_case+0x3d>      eb 1a                                 jmpb $0x1a
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100054 <switch_case+0x3f>      c7 45 fc 0a 00 00 00                  movl $0xa,-0x4(%ebp)
  10005b <switch_case+0x46>      eb 11                                 jmpb $0x11
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100054 <switch_case+0x3f>      c7 45 fc 0a 00 00 00                  movl $0xa,-0x4(%ebp)
  10005b <switch_case+0x46>      eb 11                                 jmpb $0x11
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100054 <switch_case+0x3f>      c7 45 fc 0a 00 00 00                  movl $0xa,-0x4(%ebp)
  10005b <switch_case+0x46>      eb 11                                 jmpb $0x11
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  100054 <switch_case+0x3f>      c7 45 fc 0a 00 00 00                  movl $0xa,-0x4(%ebp)
  10005b <switch_case+0x46>      eb 11                                 jmpb $0x11
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100021 <switch_case+0xc>       8b 45 08                              movl 0x8(%ebp),%eax
  100024 <switch_case+0xf>       c1 e0 02                              shll $0x2,%eax
  100027 <switch_case+0x12>      05 c4 00 10 00                        addl $0x1000c4,%eax
  10002c <switch_case+0x17>      8b 00                                 movl (%eax),%eax
  10002e <switch_case+0x19>      ff e0                                 jmpl *%eax
  10005d <switch_case+0x48>      c7 45 fc 0f 00 00 00                  movl $0xf,-0x4(%ebp)
  100064 <switch_case+0x4f>      eb 08                                 jmpb $0x8
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  100082 <main+0xf>              8b 45 fc                              movl -0x4(%ebp),%eax
  100085 <main+0x12>             83 e8 01                              subl $0x1,%eax
  100088 <main+0x15>             50                                    pushl %eax
  100089 <main+0x16>             e8 87 ff ff ff                        calll $0xffffff87
  100015 <switch_case+0x0>       55                                    pushl %ebp
  100016 <switch_case+0x1>       89 e5                                 movl %esp,%ebp
  100018 <switch_case+0x3>       83 ec 10                              subl $0x10,%esp
  10001b <switch_case+0x6>       83 7d 08 0c                           cmpl $0xc,0x8(%ebp)
  10001f <switch_case+0xa>       77 45                                 jnbeb $0x45
  100066 <switch_case+0x51>      c7 45 fc ff ff ff ff                  movl $0xffffffff,-0x4(%ebp)
  10006d <switch_case+0x58>      90                                    nop
  10006e <switch_case+0x59>      8b 45 fc                              movl -0x4(%ebp),%eax
  100071 <switch_case+0x5c>      c9                                    leave
  100072 <switch_case+0x5d>      c3                                    retl
  10008e <main+0x1b>             83 c4 04                              addl $0x4,%esp
  100091 <main+0x1e>             89 c2                                 movl %eax,%edx
  100093 <main+0x20>             8b 45 fc                              movl -0x4(%ebp),%eax
  100096 <main+0x23>             8b 04 85 60 01 10 00                  movl 0x100160(,%eax,4),%eax
  10009d <main+0x2a>             39 c2                                 cmpl %eax,%edx
  10009f <main+0x2c>             74 06                                 jzb $0x6
  1000a7 <main+0x34>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000ab <main+0x38>             83 7d fc 0e                           cmpl $0xe,-0x4(%ebp)
  1000af <main+0x3c>             7e d1                                 jleb $0xffffffd1
  1000b1 <main+0x3e>             83 7d fc 0f                           cmpl $0xf,-0x4(%ebp)
  1000b5 <main+0x42>             74 06                                 jzb $0x6
  1000bd <main+0x4a>             b8 00 00 00 00                        movl $0x0,%eax
  1000c2 <main+0x4f>             c9                                    leave
  1000c3 <main+0x50>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
