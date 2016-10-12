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
  10000a <UNKNOWN>               e8 27 00 00 00                        calll $0x27
  100036 <main+0x0>              55                                    pushl %ebp
  100037 <main+0x1>              89 e5                                 movl %esp,%ebp
  100039 <main+0x3>              83 ec 10                              subl $0x10,%esp
  10003c <main+0x6>              c7 45 f4 00 00 00 00                  movl $0x0,-0xc(%ebp)
  100043 <main+0xd>              c7 45 f0 00 00 00 00                  movl $0x0,-0x10(%ebp)
  10004a <main+0x14>             c7 45 fc 00 00 00 00                  movl $0x0,-0x4(%ebp)
  100051 <main+0x1b>             eb 57                                 jmpb $0x57
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  100053 <main+0x1d>             c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  10005a <main+0x24>             eb 42                                 jmpb $0x42
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  100023 <max+0xe>               8b 45 08                              movl 0x8(%ebp),%eax
  100026 <max+0x11>              89 45 fc                              movl %eax,-0x4(%ebp)
  100029 <max+0x14>              eb 06                                 jmpb $0x6
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  10005c <main+0x26>             8b 45 f8                              movl -0x8(%ebp),%eax
  10005f <main+0x29>             8b 14 85 40 01 10 00                  movl 0x100140(,%eax,4),%edx
  100066 <main+0x30>             8b 45 fc                              movl -0x4(%ebp),%eax
  100069 <main+0x33>             8b 04 85 40 01 10 00                  movl 0x100140(,%eax,4),%eax
  100070 <main+0x3a>             52                                    pushl %edx
  100071 <main+0x3b>             50                                    pushl %eax
  100072 <main+0x3c>             e8 9e ff ff ff                        calll $0xffffff9e
  100015 <max+0x0>               55                                    pushl %ebp
  100016 <max+0x1>               89 e5                                 movl %esp,%ebp
  100018 <max+0x3>               83 ec 10                              subl $0x10,%esp
  10001b <max+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <max+0x9>               3b 45 0c                              cmpl 0xc(%ebp),%eax
  100021 <max+0xc>               7e 08                                 jleb $0x8
  10002b <max+0x16>              8b 45 0c                              movl 0xc(%ebp),%eax
  10002e <max+0x19>              89 45 fc                              movl %eax,-0x4(%ebp)
  100031 <max+0x1c>              8b 45 fc                              movl -0x4(%ebp),%eax
  100034 <max+0x1f>              c9                                    leave
  100035 <max+0x20>              c3                                    retl
  100077 <main+0x41>             83 c4 08                              addl $0x8,%esp
  10007a <main+0x44>             89 c1                                 movl %eax,%ecx
  10007c <main+0x46>             8b 45 f4                              movl -0xc(%ebp),%eax
  10007f <main+0x49>             8d 50 01                              leal 0x1(%eax),%edx
  100082 <main+0x4c>             89 55 f4                              movl %edx,-0xc(%ebp)
  100085 <main+0x4f>             8b 04 85 80 01 10 00                  movl 0x100180(,%eax,4),%eax
  10008c <main+0x56>             39 c1                                 cmpl %eax,%ecx
  10008e <main+0x58>             74 06                                 jzb $0x6
  100096 <main+0x60>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10009a <main+0x64>             83 45 f8 01                           addl $0x1,-0x8(%ebp)
  10009e <main+0x68>             8b 45 f8                              movl -0x8(%ebp),%eax
  1000a1 <main+0x6b>             83 f8 07                              cmpl $0x7,%eax
  1000a4 <main+0x6e>             76 b6                                 jbeb $0xffffffb6
  1000a6 <main+0x70>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  1000aa <main+0x74>             8b 45 fc                              movl -0x4(%ebp),%eax
  1000ad <main+0x77>             83 f8 07                              cmpl $0x7,%eax
  1000b0 <main+0x7a>             76 a1                                 jbeb $0xffffffa1
  1000b2 <main+0x7c>             83 7d f0 40                           cmpl $0x40,-0x10(%ebp)
  1000b6 <main+0x80>             74 06                                 jzb $0x6
  1000be <main+0x88>             b8 00 00 00 00                        movl $0x0,%eax
  1000c3 <main+0x8d>             c9                                    leave
  1000c4 <main+0x8e>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
