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
  100015 <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  100019 <main+0x4>              83 e4 f0                              andl $0xfffffff0,%esp
  10001c <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  10001f <main+0xa>              55                                    pushl %ebp
  100020 <main+0xb>              89 e5                                 movl %esp,%ebp
  100022 <main+0xd>              56                                    pushl %esi
  100023 <main+0xe>              53                                    pushl %ebx
  100024 <main+0xf>              51                                    pushl %ecx
  100025 <main+0x10>             83 ec 0c                              subl $0xc,%esp
  100028 <main+0x13>             8b 15 64 06 10 00                     movl 0x100664,%edx
  10002e <main+0x19>             a1 5c 06 10 00                        movl 0x10065c,%eax
  100033 <main+0x1e>             83 ec 08                              subl $0x8,%esp
  100036 <main+0x21>             52                                    pushl %edx
  100037 <main+0x22>             50                                    pushl %eax
  100038 <main+0x23>             e8 4f 01 00 00                        calll $0x14f
  10018c <strcmp+0x0>            57                                    pushl %edi
  10018d <strcmp+0x1>            56                                    pushl %esi
  10018e <strcmp+0x2>            8b 74 24 0c                           movl 0xc(%esp),%esi
  100192 <strcmp+0x6>            8b 7c 24 10                           movl 0x10(%esp),%edi
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%edi
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%edi
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0,%al
  100197 <strcmp+0xb>            ae                                    scasb 0,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  10019e <strcmp+0x12>           31 c0                                 xorl %eax,%eax
  1001a0 <strcmp+0x14>           eb 04                                 jmpb $0x4
  1001a6 <strcmp+0x1a>           5e                                    popl %esi
  1001a7 <strcmp+0x1b>           5f                                    popl %edi
  1001a8 <strcmp+0x1c>           c3                                    retl
  10003d <main+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <main+0x2b>             85 c0                                 testl %eax,%eax
  100042 <main+0x2d>             74 06                                 jzb $0x6
  10004a <main+0x35>             8b 15 60 06 10 00                     movl 0x100660,%edx
  100050 <main+0x3b>             a1 5c 06 10 00                        movl 0x10065c,%eax
  100055 <main+0x40>             83 ec 08                              subl $0x8,%esp
  100058 <main+0x43>             52                                    pushl %edx
  100059 <main+0x44>             50                                    pushl %eax
  10005a <main+0x45>             e8 2d 01 00 00                        calll $0x12d
  10018c <strcmp+0x0>            57                                    pushl %edi
  10018d <strcmp+0x1>            56                                    pushl %esi
  10018e <strcmp+0x2>            8b 74 24 0c                           movl 0xc(%esp),%esi
  100192 <strcmp+0x6>            8b 7c 24 10                           movl 0x10(%esp),%edi
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%edi
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%edi
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x62,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  1001a2 <strcmp+0x16>           19 c0                                 sbbl %eax,%eax
  1001a4 <strcmp+0x18>           0c 01                                 orb $0x1,%al
  1001a6 <strcmp+0x1a>           5e                                    popl %esi
  1001a7 <strcmp+0x1b>           5f                                    popl %edi
  1001a8 <strcmp+0x1c>           c3                                    retl
  10005f <main+0x4a>             83 c4 10                              addl $0x10,%esp
  100062 <main+0x4d>             83 f8 ff                              cmpl $0xffffffff,%eax
  100065 <main+0x50>             74 06                                 jzb $0x6
  10006d <main+0x58>             a1 60 06 10 00                        movl 0x100660,%eax
  100072 <main+0x5d>             8d 50 01                              leal 0x1(%eax),%edx
  100075 <main+0x60>             a1 5c 06 10 00                        movl 0x10065c,%eax
  10007a <main+0x65>             83 c0 01                              addl $0x1,%eax
  10007d <main+0x68>             83 ec 08                              subl $0x8,%esp
  100080 <main+0x6b>             52                                    pushl %edx
  100081 <main+0x6c>             50                                    pushl %eax
  100082 <main+0x6d>             e8 05 01 00 00                        calll $0x105
  10018c <strcmp+0x0>            57                                    pushl %edi
  10018d <strcmp+0x1>            56                                    pushl %esi
  10018e <strcmp+0x2>            8b 74 24 0c                           movl 0xc(%esp),%esi
  100192 <strcmp+0x6>            8b 7c 24 10                           movl 0x10(%esp),%edi
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%edi
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%edi
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x62,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  1001a2 <strcmp+0x16>           19 c0                                 sbbl %eax,%eax
  1001a4 <strcmp+0x18>           0c 01                                 orb $0x1,%al
  1001a6 <strcmp+0x1a>           5e                                    popl %esi
  1001a7 <strcmp+0x1b>           5f                                    popl %edi
  1001a8 <strcmp+0x1c>           c3                                    retl
  100087 <main+0x72>             83 c4 10                              addl $0x10,%esp
  10008a <main+0x75>             83 f8 ff                              cmpl $0xffffffff,%eax
  10008d <main+0x78>             74 06                                 jzb $0x6
  100095 <main+0x80>             a1 60 06 10 00                        movl 0x100660,%eax
  10009a <main+0x85>             8d 50 02                              leal 0x2(%eax),%edx
  10009d <main+0x88>             a1 5c 06 10 00                        movl 0x10065c,%eax
  1000a2 <main+0x8d>             83 c0 02                              addl $0x2,%eax
  1000a5 <main+0x90>             83 ec 08                              subl $0x8,%esp
  1000a8 <main+0x93>             52                                    pushl %edx
  1000a9 <main+0x94>             50                                    pushl %eax
  1000aa <main+0x95>             e8 dd 00 00 00                        calll $0xdd
  10018c <strcmp+0x0>            57                                    pushl %edi
  10018d <strcmp+0x1>            56                                    pushl %esi
  10018e <strcmp+0x2>            8b 74 24 0c                           movl 0xc(%esp),%esi
  100192 <strcmp+0x6>            8b 7c 24 10                           movl 0x10(%esp),%edi
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%edi
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%edi
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x62,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  1001a2 <strcmp+0x16>           19 c0                                 sbbl %eax,%eax
  1001a4 <strcmp+0x18>           0c 01                                 orb $0x1,%al
  1001a6 <strcmp+0x1a>           5e                                    popl %esi
  1001a7 <strcmp+0x1b>           5f                                    popl %edi
  1001a8 <strcmp+0x1c>           c3                                    retl
  1000af <main+0x9a>             83 c4 10                              addl $0x10,%esp
  1000b2 <main+0x9d>             83 f8 ff                              cmpl $0xffffffff,%eax
  1000b5 <main+0xa0>             74 06                                 jzb $0x6
  1000bd <main+0xa8>             a1 60 06 10 00                        movl 0x100660,%eax
  1000c2 <main+0xad>             8d 50 03                              leal 0x3(%eax),%edx
  1000c5 <main+0xb0>             a1 5c 06 10 00                        movl 0x10065c,%eax
  1000ca <main+0xb5>             83 c0 03                              addl $0x3,%eax
  1000cd <main+0xb8>             83 ec 08                              subl $0x8,%esp
  1000d0 <main+0xbb>             52                                    pushl %edx
  1000d1 <main+0xbc>             50                                    pushl %eax
  1000d2 <main+0xbd>             e8 b5 00 00 00                        calll $0xb5
  10018c <strcmp+0x0>            57                                    pushl %edi
  10018d <strcmp+0x1>            56                                    pushl %esi
  10018e <strcmp+0x2>            8b 74 24 0c                           movl 0xc(%esp),%esi
  100192 <strcmp+0x6>            8b 7c 24 10                           movl 0x10(%esp),%edi
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%edi
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%edi
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x61,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x61,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x62,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  1001a2 <strcmp+0x16>           19 c0                                 sbbl %eax,%eax
  1001a4 <strcmp+0x18>           0c 01                                 orb $0x1,%al
  1001a6 <strcmp+0x1a>           5e                                    popl %esi
  1001a7 <strcmp+0x1b>           5f                                    popl %edi
  1001a8 <strcmp+0x1c>           c3                                    retl
  1000d7 <main+0xc2>             83 c4 10                              addl $0x10,%esp
  1000da <main+0xc5>             83 f8 ff                              cmpl $0xffffffff,%eax
  1000dd <main+0xc8>             74 06                                 jzb $0x6
  1000e5 <main+0xd0>             8b 1d 6c 06 10 00                     movl 0x10066c,%ebx
  1000eb <main+0xd6>             8b 35 68 06 10 00                     movl 0x100668,%esi
  1000f1 <main+0xdc>             83 ec 08                              subl $0x8,%esp
  1000f4 <main+0xdf>             68 74 06 10 00                        pushl $0x100674
  1000f9 <main+0xe4>             68 7a 06 10 00                        pushl $0x10067a
  1000fe <main+0xe9>             e8 a6 00 00 00                        calll $0xa6
  1001a9 <strcpy+0x0>            57                                    pushl %edi
  1001aa <strcpy+0x1>            56                                    pushl %esi
  1001ab <strcpy+0x2>            8b 54 24 0c                           movl 0xc(%esp),%edx
  1001af <strcpy+0x6>            8b 74 24 10                           movl 0x10(%esp),%esi
  1001b3 <strcpy+0xa>            89 d7                                 movl %edx,%edi
  1001b5 <strcpy+0xc>            ac                                    lodsb 0x48,%edi
  1001b6 <strcpy+0xd>            aa                                    stosb %eax,%es:(%edi)
  1001b7 <strcpy+0xe>            84 c0                                 testb %al,%al
  1001b9 <strcpy+0x10>           75 fa                                 jnzb $0xfffffffa
  1001b5 <strcpy+0xc>            ac                                    lodsb 0x65,%al
  1001b6 <strcpy+0xd>            aa                                    stosb %eax,%es:(%edi)
  1001b7 <strcpy+0xe>            84 c0                                 testb %al,%al
  1001b9 <strcpy+0x10>           75 fa                                 jnzb $0xfffffffa
  1001b5 <strcpy+0xc>            ac                                    lodsb 0x6c,%al
  1001b6 <strcpy+0xd>            aa                                    stosb %eax,%es:(%edi)
  1001b7 <strcpy+0xe>            84 c0                                 testb %al,%al
  1001b9 <strcpy+0x10>           75 fa                                 jnzb $0xfffffffa
  1001b5 <strcpy+0xc>            ac                                    lodsb 0x6c,%al
  1001b6 <strcpy+0xd>            aa                                    stosb %eax,%es:(%edi)
  1001b7 <strcpy+0xe>            84 c0                                 testb %al,%al
  1001b9 <strcpy+0x10>           75 fa                                 jnzb $0xfffffffa
  1001b5 <strcpy+0xc>            ac                                    lodsb 0x6f,%al
  1001b6 <strcpy+0xd>            aa                                    stosb %eax,%es:(%edi)
  1001b7 <strcpy+0xe>            84 c0                                 testb %al,%al
  1001b9 <strcpy+0x10>           75 fa                                 jnzb $0xfffffffa
  1001b5 <strcpy+0xc>            ac                                    lodsb 0,%al
  1001b6 <strcpy+0xd>            aa                                    stosb %eax,%es:(%edi)
  1001b7 <strcpy+0xe>            84 c0                                 testb %al,%al
  1001b9 <strcpy+0x10>           75 fa                                 jnzb $0xfffffffa
  1001bb <strcpy+0x12>           89 d0                                 movl %edx,%eax
  1001bd <strcpy+0x14>           5e                                    popl %esi
  1001be <strcpy+0x15>           5f                                    popl %edi
  1001bf <strcpy+0x16>           c3                                    retl
  100103 <main+0xee>             83 c4 10                              addl $0x10,%esp
  100106 <main+0xf1>             83 ec 08                              subl $0x8,%esp
  100109 <main+0xf4>             56                                    pushl %esi
  10010a <main+0xf5>             50                                    pushl %eax
  10010b <main+0xf6>             e8 5d 00 00 00                        calll $0x5d
  10016d <__GI_strcat+0x0>       57                                    pushl %edi
  10016e <__GI_strcat+0x1>       56                                    pushl %esi
  10016f <__GI_strcat+0x2>       31 c0                                 xorl %eax,%eax
  100171 <__GI_strcat+0x4>       8b 54 24 0c                           movl 0xc(%esp),%edx
  100175 <__GI_strcat+0x8>       8b 74 24 10                           movl 0x10(%esp),%esi
  100179 <__GI_strcat+0xc>       83 c9 ff                              orl $0xffffffff,%ecx
  10017c <__GI_strcat+0xf>       89 d7                                 movl %edx,%edi
  10017e <__GI_strcat+0x11>      f2 ae                                 repnz scasb 0,%edi[cnt = 6]
  100180 <__GI_strcat+0x13>      4f                                    decl %edi
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x2c,%edi
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x20,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x57,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x6f,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x72,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x6c,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x64,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0x21,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0xa,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100181 <__GI_strcat+0x14>      ac                                    lodsb 0,%al
  100182 <__GI_strcat+0x15>      aa                                    stosb %eax,%es:(%edi)
  100183 <__GI_strcat+0x16>      84 c0                                 testb %al,%al
  100185 <__GI_strcat+0x18>      75 fa                                 jnzb $0xfffffffa
  100187 <__GI_strcat+0x1a>      89 d0                                 movl %edx,%eax
  100189 <__GI_strcat+0x1c>      5e                                    popl %esi
  10018a <__GI_strcat+0x1d>      5f                                    popl %edi
  10018b <__GI_strcat+0x1e>      c3                                    retl
  100110 <main+0xfb>             83 c4 10                              addl $0x10,%esp
  100113 <main+0xfe>             83 ec 08                              subl $0x8,%esp
  100116 <main+0x101>            53                                    pushl %ebx
  100117 <main+0x102>            50                                    pushl %eax
  100118 <main+0x103>            e8 6f 00 00 00                        calll $0x6f
  10018c <strcmp+0x0>            57                                    pushl %edi
  10018d <strcmp+0x1>            56                                    pushl %esi
  10018e <strcmp+0x2>            8b 74 24 0c                           movl 0xc(%esp),%esi
  100192 <strcmp+0x6>            8b 7c 24 10                           movl 0x10(%esp),%edi
  100196 <strcmp+0xa>            ac                                    lodsb 0x48,%edi
  100197 <strcmp+0xb>            ae                                    scasb 0x48,%edi
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x65,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x65,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x6c,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x6c,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x6c,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x6c,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x6f,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x6f,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x2c,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x2c,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x20,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x20,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x57,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x57,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x6f,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x6f,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x72,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x72,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x6c,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x6c,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x64,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x64,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0x21,%al
  100197 <strcmp+0xb>            ae                                    scasb 0x21,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0xa,%al
  100197 <strcmp+0xb>            ae                                    scasb 0xa,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  100196 <strcmp+0xa>            ac                                    lodsb 0,%al
  100197 <strcmp+0xb>            ae                                    scasb 0,%al
  100198 <strcmp+0xc>            75 08                                 jnzb $0x8
  10019a <strcmp+0xe>            84 c0                                 testb %al,%al
  10019c <strcmp+0x10>           75 f8                                 jnzb $0xfffffff8
  10019e <strcmp+0x12>           31 c0                                 xorl %eax,%eax
  1001a0 <strcmp+0x14>           eb 04                                 jmpb $0x4
  1001a6 <strcmp+0x1a>           5e                                    popl %esi
  1001a7 <strcmp+0x1b>           5f                                    popl %edi
  1001a8 <strcmp+0x1c>           c3                                    retl
  10011d <main+0x108>            83 c4 10                              addl $0x10,%esp
  100120 <main+0x10b>            85 c0                                 testl %eax,%eax
  100122 <main+0x10d>            74 06                                 jzb $0x6
  10012a <main+0x115>            8b 1d 70 06 10 00                     movl 0x100670,%ebx
  100130 <main+0x11b>            83 ec 04                              subl $0x4,%esp
  100133 <main+0x11e>            6a 05                                 pushb $0x5
  100135 <main+0x120>            6a 23                                 pushb $0x23
  100137 <main+0x122>            68 7a 06 10 00                        pushl $0x10067a
  10013c <main+0x127>            e8 7f 00 00 00                        calll $0x7f
  1001c0 <__GI_memset+0x0>       57                                    pushl %edi
  1001c1 <__GI_memset+0x1>       53                                    pushl %ebx
  1001c2 <__GI_memset+0x2>       8b 54 24 0c                           movl 0xc(%esp),%edx
  1001c6 <__GI_memset+0x6>       8b 4c 24 14                           movl 0x14(%esp),%ecx
  1001ca <__GI_memset+0xa>       8b 44 24 10                           movl 0x10(%esp),%eax
  1001ce <__GI_memset+0xe>       89 d7                                 movl %edx,%edi
  1001d0 <__GI_memset+0x10>      89 cb                                 movl %ecx,%ebx
  1001d2 <__GI_memset+0x12>      c1 e9 02                              shrl $0x2,%ecx
  1001d5 <__GI_memset+0x15>      74 0b                                 jzb $0xb
  1001d7 <__GI_memset+0x17>      0f b6 c0                              movzxl %al,%eax
  1001da <__GI_memset+0x1a>      69 c0 01 01 01 01                     imull $0x1010101,%eax,%eax
  1001e0 <__GI_memset+0x20>      f3 ab                                 rep stosl %eax,%es:(%edi)[cnt = 1]
  1001e2 <__GI_memset+0x22>      83 e3 03                              andl $0x3,%ebx
  1001e5 <__GI_memset+0x25>      74 04                                 jzb $0x4
  1001e7 <__GI_memset+0x27>      aa                                    stosb %eax,%es:(%edi)
  1001e8 <__GI_memset+0x28>      4b                                    decl %ebx
  1001e9 <__GI_memset+0x29>      75 fc                                 jnzb $0xfffffffc
  1001eb <__GI_memset+0x2b>      89 d0                                 movl %edx,%eax
  1001ed <__GI_memset+0x2d>      5b                                    popl %ebx
  1001ee <__GI_memset+0x2e>      5f                                    popl %edi
  1001ef <__GI_memset+0x2f>      c3                                    retl
  100141 <main+0x12c>            83 c4 10                              addl $0x10,%esp
  100144 <main+0x12f>            83 ec 04                              subl $0x4,%esp
  100147 <main+0x132>            6a 05                                 pushb $0x5
  100149 <main+0x134>            53                                    pushl %ebx
  10014a <main+0x135>            50                                    pushl %eax
  10014b <main+0x136>            e8 c4 00 00 00                        calll $0xc4
  100214 <__GI_memcmp+0x0>       55                                    pushl %ebp
  100215 <__GI_memcmp+0x1>       57                                    pushl %edi
  100216 <__GI_memcmp+0x2>       56                                    pushl %esi
  100217 <__GI_memcmp+0x3>       53                                    pushl %ebx
  100218 <__GI_memcmp+0x4>       83 ec 20                              subl $0x20,%esp
  10021b <__GI_memcmp+0x7>       83 7c 24 3c 0f                        cmpl $0xf,0x3c(%esp)
  100220 <__GI_memcmp+0xc>       8b 4c 24 34                           movl 0x34(%esp),%ecx
  100224 <__GI_memcmp+0x10>      8b 6c 24 38                           movl 0x38(%esp),%ebp
  100228 <__GI_memcmp+0x14>      0f 86 69 02 00 00                     jbel $0x269
  100497 <__GI_memcmp+0x283>     83 7c 24 3c 00                        cmpl $0x0,0x3c(%esp)
  10049c <__GI_memcmp+0x288>     75 e8                                 jnzb $0xffffffe8
  100486 <__GI_memcmp+0x272>     0f b6 01                              movzxl (%ecx),%eax
  100489 <__GI_memcmp+0x275>     0f b6 55 00                           movzxl 0(%ebp),%edx
  10048d <__GI_memcmp+0x279>     41                                    incl %ecx
  10048e <__GI_memcmp+0x27a>     45                                    incl %ebp
  10048f <__GI_memcmp+0x27b>     29 d0                                 subl %edx,%eax
  100491 <__GI_memcmp+0x27d>     75 0d                                 jnzb $0xd
  100493 <__GI_memcmp+0x27f>     ff 4c 24 3c                           decl 0x3c(%esp)
  100497 <__GI_memcmp+0x283>     83 7c 24 3c 00                        cmpl $0x0,0x3c(%esp)
  10049c <__GI_memcmp+0x288>     75 e8                                 jnzb $0xffffffe8
  100486 <__GI_memcmp+0x272>     0f b6 01                              movzxl (%ecx),%eax
  100489 <__GI_memcmp+0x275>     0f b6 55 00                           movzxl 0(%ebp),%edx
  10048d <__GI_memcmp+0x279>     41                                    incl %ecx
  10048e <__GI_memcmp+0x27a>     45                                    incl %ebp
  10048f <__GI_memcmp+0x27b>     29 d0                                 subl %edx,%eax
  100491 <__GI_memcmp+0x27d>     75 0d                                 jnzb $0xd
  100493 <__GI_memcmp+0x27f>     ff 4c 24 3c                           decl 0x3c(%esp)
  100497 <__GI_memcmp+0x283>     83 7c 24 3c 00                        cmpl $0x0,0x3c(%esp)
  10049c <__GI_memcmp+0x288>     75 e8                                 jnzb $0xffffffe8
  100486 <__GI_memcmp+0x272>     0f b6 01                              movzxl (%ecx),%eax
  100489 <__GI_memcmp+0x275>     0f b6 55 00                           movzxl 0(%ebp),%edx
  10048d <__GI_memcmp+0x279>     41                                    incl %ecx
  10048e <__GI_memcmp+0x27a>     45                                    incl %ebp
  10048f <__GI_memcmp+0x27b>     29 d0                                 subl %edx,%eax
  100491 <__GI_memcmp+0x27d>     75 0d                                 jnzb $0xd
  100493 <__GI_memcmp+0x27f>     ff 4c 24 3c                           decl 0x3c(%esp)
  100497 <__GI_memcmp+0x283>     83 7c 24 3c 00                        cmpl $0x0,0x3c(%esp)
  10049c <__GI_memcmp+0x288>     75 e8                                 jnzb $0xffffffe8
  100486 <__GI_memcmp+0x272>     0f b6 01                              movzxl (%ecx),%eax
  100489 <__GI_memcmp+0x275>     0f b6 55 00                           movzxl 0(%ebp),%edx
  10048d <__GI_memcmp+0x279>     41                                    incl %ecx
  10048e <__GI_memcmp+0x27a>     45                                    incl %ebp
  10048f <__GI_memcmp+0x27b>     29 d0                                 subl %edx,%eax
  100491 <__GI_memcmp+0x27d>     75 0d                                 jnzb $0xd
  100493 <__GI_memcmp+0x27f>     ff 4c 24 3c                           decl 0x3c(%esp)
  100497 <__GI_memcmp+0x283>     83 7c 24 3c 00                        cmpl $0x0,0x3c(%esp)
  10049c <__GI_memcmp+0x288>     75 e8                                 jnzb $0xffffffe8
  100486 <__GI_memcmp+0x272>     0f b6 01                              movzxl (%ecx),%eax
  100489 <__GI_memcmp+0x275>     0f b6 55 00                           movzxl 0(%ebp),%edx
  10048d <__GI_memcmp+0x279>     41                                    incl %ecx
  10048e <__GI_memcmp+0x27a>     45                                    incl %ebp
  10048f <__GI_memcmp+0x27b>     29 d0                                 subl %edx,%eax
  100491 <__GI_memcmp+0x27d>     75 0d                                 jnzb $0xd
  100493 <__GI_memcmp+0x27f>     ff 4c 24 3c                           decl 0x3c(%esp)
  100497 <__GI_memcmp+0x283>     83 7c 24 3c 00                        cmpl $0x0,0x3c(%esp)
  10049c <__GI_memcmp+0x288>     75 e8                                 jnzb $0xffffffe8
  10049e <__GI_memcmp+0x28a>     31 c0                                 xorl %eax,%eax
  1004a0 <__GI_memcmp+0x28c>     83 c4 20                              addl $0x20,%esp
  1004a3 <__GI_memcmp+0x28f>     5b                                    popl %ebx
  1004a4 <__GI_memcmp+0x290>     5e                                    popl %esi
  1004a5 <__GI_memcmp+0x291>     5f                                    popl %edi
  1004a6 <__GI_memcmp+0x292>     5d                                    popl %ebp
  1004a7 <__GI_memcmp+0x293>     c3                                    retl
  100150 <main+0x13b>            83 c4 10                              addl $0x10,%esp
  100153 <main+0x13e>            85 c0                                 testl %eax,%eax
  100155 <main+0x140>            74 06                                 jzb $0x6
  10015d <main+0x148>            b8 00 00 00 00                        movl $0x0,%eax
  100162 <main+0x14d>            8d 65 f4                              leal -0xc(%ebp),%esp
  100165 <main+0x150>            59                                    popl %ecx
  100166 <main+0x151>            5b                                    popl %ebx
  100167 <main+0x152>            5e                                    popl %esi
  100168 <main+0x153>            5d                                    popl %ebp
  100169 <main+0x154>            8d 61 fc                              leal -0x4(%ecx),%esp
  10016c <main+0x157>            c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
