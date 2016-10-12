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
  10001b <main+0x6>              c7 45 fc 01 00 00 00                  movl $0x1,-0x4(%ebp)
  100022 <main+0xd>              c7 45 f8 00 00 00 00                  movl $0x0,-0x8(%ebp)
  100029 <main+0x14>             eb 0a                                 jmpb $0xa
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10002b <main+0x16>             8b 45 fc                              movl -0x4(%ebp),%eax
  10002e <main+0x19>             01 45 f8                              addl %eax,-0x8(%ebp)
  100031 <main+0x1c>             83 45 fc 01                           addl $0x1,-0x4(%ebp)
  100035 <main+0x20>             83 7d fc 64                           cmpl $0x64,-0x4(%ebp)
  100039 <main+0x24>             7e f0                                 jleb $0xfffffff0
  10003b <main+0x26>             81 7d f8 ba 13 00 00                  cmpl $0x13ba,-0x8(%ebp)
  100042 <main+0x2d>             74 06                                 jzb $0x6
  10004a <main+0x35>             b8 00 00 00 00                        movl $0x0,%eax
  10004f <main+0x3a>             c9                                    leave
  100050 <main+0x3b>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
