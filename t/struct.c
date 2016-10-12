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
  10000a <UNKNOWN>               e8 2b 00 00 00                        calll $0x2b
  10003a <main+0x0>              55                                    pushl %ebp
  10003b <main+0x1>              89 e5                                 movl %esp,%ebp
  10003d <main+0x3>              57                                    pushl %edi
  10003e <main+0x4>              56                                    pushl %esi
  10003f <main+0x5>              53                                    pushl %ebx
  100040 <main+0x6>              81 ec 04 02 00 00                     subl $0x204,%esp
  100046 <main+0xc>              c7 45 f0 00 00 00 00                  movl $0x0,-0x10(%ebp)
  10004d <main+0x13>             eb 2b                                 jmpb $0x2b
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  10004f <main+0x15>             8b 45 f0                              movl -0x10(%ebp),%eax
  100052 <main+0x18>             8d 90 80 00 00 00                     leal 0x80(%eax),%edx
  100058 <main+0x1e>             8b 45 f0                              movl -0x10(%ebp),%eax
  10005b <main+0x21>             89 14 85 c0 01 10 00                  movl %edx,0x1001c0(,%eax,4)
  100062 <main+0x28>             8b 45 f0                              movl -0x10(%ebp),%eax
  100065 <main+0x2b>             89 c2                                 movl %eax,%edx
  100067 <main+0x2d>             8b 45 f0                              movl -0x10(%ebp),%eax
  10006a <main+0x30>             05 90 01 00 00                        addl $0x190,%eax
  10006f <main+0x35>             05 c0 01 10 00                        addl $0x1001c0,%eax
  100074 <main+0x3a>             88 10                                 movb %dl,(%eax)
  100076 <main+0x3c>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  10007a <main+0x40>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  10007e <main+0x44>             7e cf                                 jleb $0xffffffcf
  100080 <main+0x46>             8d 85 fc fd ff ff                     leal -0x204(%ebp),%eax
  100086 <main+0x4c>             89 85 f0 fd ff ff                     movl %eax,-0x210(%ebp)
  10008c <main+0x52>             81 ec f4 01 00 00                     subl $0x1f4,%esp
  100092 <main+0x58>             89 e0                                 movl %esp,%eax
  100094 <main+0x5a>             89 c2                                 movl %eax,%edx
  100096 <main+0x5c>             bb c0 01 10 00                        movl $0x1001c0,%ebx
  10009b <main+0x61>             b8 7d 00 00 00                        movl $0x7d,%eax
  1000a0 <main+0x66>             89 d7                                 movl %edx,%edi
  1000a2 <main+0x68>             89 de                                 movl %ebx,%esi
  1000a4 <main+0x6a>             89 c1                                 movl %eax,%ecx
  1000a6 <main+0x6c>             f3 a5                                 rep movsl 0x63626160,%es:(%edi)[cnt = 125]
  1000a8 <main+0x6e>             ff b5 f0 fd ff ff                     pushl -0x210(%ebp)
  1000ae <main+0x74>             e8 62 ff ff ff                        calll $0xffffff62
  100015 <fun+0x0>               55                                    pushl %ebp
  100016 <fun+0x1>               89 e5                                 movl %esp,%ebp
  100018 <fun+0x3>               57                                    pushl %edi
  100019 <fun+0x4>               56                                    pushl %esi
  10001a <fun+0x5>               53                                    pushl %ebx
  10001b <fun+0x6>               8b 45 08                              movl 0x8(%ebp),%eax
  10001e <fun+0x9>               89 c3                                 movl %eax,%ebx
  100020 <fun+0xb>               8d 45 0c                              leal 0xc(%ebp),%eax
  100023 <fun+0xe>               ba 7d 00 00 00                        movl $0x7d,%edx
  100028 <fun+0x13>              89 df                                 movl %ebx,%edi
  10002a <fun+0x15>              89 c6                                 movl %eax,%esi
  10002c <fun+0x17>              89 d1                                 movl %edx,%ecx
  10002e <fun+0x19>              f3 a5                                 rep movsl 0x63626160,%es:(%edi)[cnt = 125]
  100030 <fun+0x1b>              8b 45 08                              movl 0x8(%ebp),%eax
  100033 <fun+0x1e>              5b                                    popl %ebx
  100034 <fun+0x1f>              5e                                    popl %esi
  100035 <fun+0x20>              5f                                    popl %edi
  100036 <fun+0x21>              5d                                    popl %ebp
  100037 <fun+0x22>              c2 04 00                              retl $0x4
  1000b3 <main+0x79>             81 c4 f4 01 00 00                     addl $0x1f4,%esp
  1000b9 <main+0x7f>             c7 45 f0 00 00 00 00                  movl $0x0,-0x10(%ebp)
  1000c0 <main+0x86>             eb 37                                 jmpb $0x37
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000c2 <main+0x88>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000c5 <main+0x8b>             8b 84 85 fc fd ff ff                  movl -0x204(%ebp,%eax,4),%eax
  1000cc <main+0x92>             8b 55 f0                              movl -0x10(%ebp),%edx
  1000cf <main+0x95>             83 ea 80                              subl $0xffffff80,%edx
  1000d2 <main+0x98>             39 d0                                 cmpl %edx,%eax
  1000d4 <main+0x9a>             74 06                                 jzb $0x6
  1000dc <main+0xa2>             8d 55 8c                              leal -0x74(%ebp),%edx
  1000df <main+0xa5>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000e2 <main+0xa8>             01 d0                                 addl %edx,%eax
  1000e4 <main+0xaa>             0f b6 00                              movzxl (%eax),%eax
  1000e7 <main+0xad>             0f be c0                              movsxl %al,%eax
  1000ea <main+0xb0>             3b 45 f0                              cmpl -0x10(%ebp),%eax
  1000ed <main+0xb3>             74 06                                 jzb $0x6
  1000f5 <main+0xbb>             83 45 f0 01                           addl $0x1,-0x10(%ebp)
  1000f9 <main+0xbf>             83 7d f0 63                           cmpl $0x63,-0x10(%ebp)
  1000fd <main+0xc3>             7e c3                                 jleb $0xffffffc3
  1000ff <main+0xc5>             83 7d f0 64                           cmpl $0x64,-0x10(%ebp)
  100103 <main+0xc9>             74 06                                 jzb $0x6
  10010b <main+0xd1>             b8 00 00 00 00                        movl $0x0,%eax
  100110 <main+0xd6>             8d 65 f4                              leal -0xc(%ebp),%esp
  100113 <main+0xd9>             5b                                    popl %ebx
  100114 <main+0xda>             5e                                    popl %esi
  100115 <main+0xdb>             5f                                    popl %edi
  100116 <main+0xdc>             5d                                    popl %ebp
  100117 <main+0xdd>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
