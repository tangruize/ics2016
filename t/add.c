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
  10000a <UNKNOWN>               e8 1c 00 00 00                        calll $0x1c
  10002b <main+0x0>              55                                    pushl %ebp
  10002c <main+0x1>              89 e5                                 movl %esp,%ebp
  10002e <main+0x3>              83 ec 10                              subl $0x10,%esp
  100031 <main+0x6>              c7 45 f4 00 00 00 00                  movl $0x0,-0xc(%ebp)
  100038 <main+0xd>              c7 45 f0 00 00 00 00                  movl $0x0,-0x10(%ebp)
  10003f <main+0x14>             c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100046 <main+0x1b>             eb 57                                 jmpb $0x57
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100048 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10004f <main+0x24>             eb 42                                 jmpb $0x42
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  100051 <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  100054 <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  10005b <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  10005e <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100065 <main+0x3a>             52                                    pushl %edx
  100066 <main+0x3b>             50                                    pushl %eax
  100067 <main+0x3c>             e8 a9 ff ff ff                        calll $0xffffffa9
  100015 <add+0x0>               55                                    pushl %ebp
  100016 <add+0x1>               89 e5                                 movl %esp,%ebp
  100018 <add+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <add+0x6>               8b 55 08                              movl 0x8(%ebp),%edx
  10001e <add+0x9>               8b 45 0c                              movl 0xc(%ebp),%eax
  100021 <add+0xc>               01 d0                                 addl %edx,%eax
  100023 <add+0xe>               89 45 fc                              movl %eax,-0x4(%ebp)
  100026 <add+0x11>              8b 45 fc                              movl -0x4(%ebp),%eax
  100029 <add+0x14>              c9                                    leave
  10002a <add+0x15>              c3                                    retl
  10006c <main+0x41>             83 c4 08                              addl $0x8,%esp
  10006f <main+0x44>             89 c1                                 movl %eax,%ecx
  100071 <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  100074 <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100077 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  10007a <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  100081 <main+0x56>             39 c1                                 cmpl %eax,%ecx
  100083 <main+0x58>             74 06                                 jzb $0x6
  10008b <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10008f <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  100093 <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  100096 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  100099 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10009b <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  10009f <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000a2 <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000a5 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  1000a7 <main+0x7c>             83 7d f0 40                           cmpl $0x40,-0x10(%ebp)
  1000ab <main+0x80>             74 06                                 jzb $0x6
  1000b3 <main+0x88>             b8 00 00 00 00                        movl $0x0,%eax
  1000b8 <main+0x8d>             c9                                    leave
  1000b9 <main+0x8e>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
