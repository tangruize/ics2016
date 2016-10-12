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
  10000a <UNKNOWN>               e8 12 00 00 00                        calll $0x12
  100021 <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  100025 <main+0x4>              83 e4 f0                              andl $0xfffffff0,%esp
  100028 <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  10002b <main+0xa>              55                                    pushl %ebp
  10002c <main+0xb>              89 e5                                 movl %esp,%ebp
  10002e <main+0xd>              53                                    pushl %ebx
  10002f <main+0xe>              51                                    pushl %ecx
  100030 <main+0xf>              83 ec 30                              subl $0x30,%esp
  100033 <main+0x12>             83 ec 0c                              subl $0xc,%esp
  100036 <main+0x15>             a1 50 03 10 00                        movl 0x100350,%eax
  10003b <main+0x1a>             50                                    pushl %eax
  10003c <main+0x1b>             e8 8f 01 00 00                        calll $0x18f
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100041 <main+0x20>             83 c4 10                              addl $0x10,%esp
  100044 <main+0x23>             89 45 f4                              movl %eax,-0xc(%ebp)
  100047 <main+0x26>             83 ec 0c                              subl $0xc,%esp
  10004a <main+0x29>             a1 50 03 10 00                        movl 0x100350,%eax
  10004f <main+0x2e>             50                                    pushl %eax
  100050 <main+0x2f>             e8 7b 01 00 00                        calll $0x17b
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100055 <main+0x34>             83 c4 10                              addl $0x10,%esp
  100058 <main+0x37>             89 45 f0                              movl %eax,-0x10(%ebp)
  10005b <main+0x3a>             83 ec 0c                              subl $0xc,%esp
  10005e <main+0x3d>             a1 54 03 10 00                        movl 0x100354,%eax
  100063 <main+0x42>             50                                    pushl %eax
  100064 <main+0x43>             e8 67 01 00 00                        calll $0x167
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100069 <main+0x48>             83 c4 10                              addl $0x10,%esp
  10006c <main+0x4b>             89 45 ec                              movl %eax,-0x14(%ebp)
  10006f <main+0x4e>             83 ec 08                              subl $0x8,%esp
  100072 <main+0x51>             ff 75 f0                              pushl -0x10(%ebp)
  100075 <main+0x54>             ff 75 f0                              pushl -0x10(%ebp)
  100078 <main+0x57>             e8 23 01 00 00                        calll $0x123
  1001a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1001a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1001a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1001ac <F_mul_F+0xc>           c3                                    retl
  10007d <main+0x5c>             83 c4 10                              addl $0x10,%esp
  100080 <main+0x5f>             89 c3                                 movl %eax,%ebx
  100082 <main+0x61>             83 ec 08                              subl $0x8,%esp
  100085 <main+0x64>             6a 04                                 pushb $0x4
  100087 <main+0x66>             ff 75 f4                              pushl -0xc(%ebp)
  10008a <main+0x69>             e8 86 ff ff ff                        calll $0xffffff86
  100015 <F_mul_int+0x0>         55                                    pushl %ebp
  100016 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100018 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  10001b <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10001f <F_mul_int+0xa>         5d                                    popl %ebp
  100020 <F_mul_int+0xb>         c3                                    retl
  10008f <main+0x6e>             83 c4 10                              addl $0x10,%esp
  100092 <main+0x71>             83 ec 08                              subl $0x8,%esp
  100095 <main+0x74>             ff 75 ec                              pushl -0x14(%ebp)
  100098 <main+0x77>             50                                    pushl %eax
  100099 <main+0x78>             e8 02 01 00 00                        calll $0x102
  1001a0 <F_mul_F+0x0>           8b 44 24 08                           movl 0x8(%esp),%eax
  1001a4 <F_mul_F+0x4>           f7 6c 24 04                           imull 0x4(%esp)
  1001a8 <F_mul_F+0x8>           0f ac d0 10                           shrdl $0x10,%edx,%eax
  1001ac <F_mul_F+0xc>           c3                                    retl
  10009e <main+0x7d>             83 c4 10                              addl $0x10,%esp
  1000a1 <main+0x80>             29 c3                                 subl %eax,%ebx
  1000a3 <main+0x82>             89 d8                                 movl %ebx,%eax
  1000a5 <main+0x84>             89 45 e8                              movl %eax,-0x18(%ebp)
  1000a8 <main+0x87>             83 ec 0c                              subl $0xc,%esp
  1000ab <main+0x8a>             ff 75 e8                              pushl -0x18(%ebp)
  1000ae <main+0x8d>             e8 cd 01 00 00                        calll $0x1cd
  100280 <sqrt+0x0>              55                                    pushl %ebp
  100281 <sqrt+0x1>              57                                    pushl %edi
  100282 <sqrt+0x2>              56                                    pushl %esi
  100283 <sqrt+0x3>              53                                    pushl %ebx
  100284 <sqrt+0x4>              bb 00 00 02 00                        movl $0x20000,%ebx
  100289 <sqrt+0x9>              83 ec 04                              subl $0x4,%esp
  10028c <sqrt+0xc>              8b 74 24 18                           movl 0x18(%esp),%esi
  100290 <sqrt+0x10>             89 f7                                 movl %esi,%edi
  100292 <sqrt+0x12>             c1 ff 1f                              sarl $0x1f,%edi
  100295 <sqrt+0x15>             0f a4 f7 10                           shldl $0x10,%esi,%edi
  100299 <sqrt+0x19>             c1 e6 10                              shll $0x10,%esi
  10029c <sqrt+0x1c>             8d 74 26 00                           leal 0(%esi),%esi
  1002a0 <sqrt+0x20>             89 f0                                 movl %esi,%eax
  1002a2 <sqrt+0x22>             89 fa                                 movl %edi,%edx
  1002a4 <sqrt+0x24>             f7 fb                                 idivl %ebx
  1002a6 <sqrt+0x26>             29 d8                                 subl %ebx,%eax
  1002a8 <sqrt+0x28>             68 17 b7 d1 38                        pushl $0x38d1b717
  1002ad <sqrt+0x2d>             89 c1                                 movl %eax,%ecx
  1002af <sqrt+0x2f>             c1 e8 1f                              shrl $0x1f,%eax
  1002b2 <sqrt+0x32>             01 c1                                 addl %eax,%ecx
  1002b4 <sqrt+0x34>             d1 f9                                 sarl $1,%ecx
  1002b6 <sqrt+0x36>             89 ca                                 movl %ecx,%edx
  1002b8 <sqrt+0x38>             01 cb                                 addl %ecx,%ebx
  1002ba <sqrt+0x3a>             89 0d ac 04 10 00                     movl %ecx,0x1004ac
  1002c0 <sqrt+0x40>             c1 ea 1f                              shrl $0x1f,%edx
  1002c3 <sqrt+0x43>             89 d0                                 movl %edx,%eax
  1002c5 <sqrt+0x45>             f7 d8                                 negl %eax
  1002c7 <sqrt+0x47>             31 c1                                 xorl %eax,%ecx
  1002c9 <sqrt+0x49>             8d 2c 11                              leal (%ecx,%edx,1),%ebp
  1002cc <sqrt+0x4c>             e8 ff fe ff ff                        calll $0xfffffeff
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  1002d1 <sqrt+0x51>             39 e8                                 cmpl %ebp,%eax
  1002d3 <sqrt+0x53>             5a                                    popl %edx
  1002d4 <sqrt+0x54>             7c ca                                 jlb $0xffffffca
  1002a0 <sqrt+0x20>             89 f0                                 movl %esi,%eax
  1002a2 <sqrt+0x22>             89 fa                                 movl %edi,%edx
  1002a4 <sqrt+0x24>             f7 fb                                 idivl %ebx
  1002a6 <sqrt+0x26>             29 d8                                 subl %ebx,%eax
  1002a8 <sqrt+0x28>             68 17 b7 d1 38                        pushl $0x38d1b717
  1002ad <sqrt+0x2d>             89 c1                                 movl %eax,%ecx
  1002af <sqrt+0x2f>             c1 e8 1f                              shrl $0x1f,%eax
  1002b2 <sqrt+0x32>             01 c1                                 addl %eax,%ecx
  1002b4 <sqrt+0x34>             d1 f9                                 sarl $1,%ecx
  1002b6 <sqrt+0x36>             89 ca                                 movl %ecx,%edx
  1002b8 <sqrt+0x38>             01 cb                                 addl %ecx,%ebx
  1002ba <sqrt+0x3a>             89 0d ac 04 10 00                     movl %ecx,0x1004ac
  1002c0 <sqrt+0x40>             c1 ea 1f                              shrl $0x1f,%edx
  1002c3 <sqrt+0x43>             89 d0                                 movl %edx,%eax
  1002c5 <sqrt+0x45>             f7 d8                                 negl %eax
  1002c7 <sqrt+0x47>             31 c1                                 xorl %eax,%ecx
  1002c9 <sqrt+0x49>             8d 2c 11                              leal (%ecx,%edx,1),%ebp
  1002cc <sqrt+0x4c>             e8 ff fe ff ff                        calll $0xfffffeff
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  1002d1 <sqrt+0x51>             39 e8                                 cmpl %ebp,%eax
  1002d3 <sqrt+0x53>             5a                                    popl %edx
  1002d4 <sqrt+0x54>             7c ca                                 jlb $0xffffffca
  1002a0 <sqrt+0x20>             89 f0                                 movl %esi,%eax
  1002a2 <sqrt+0x22>             89 fa                                 movl %edi,%edx
  1002a4 <sqrt+0x24>             f7 fb                                 idivl %ebx
  1002a6 <sqrt+0x26>             29 d8                                 subl %ebx,%eax
  1002a8 <sqrt+0x28>             68 17 b7 d1 38                        pushl $0x38d1b717
  1002ad <sqrt+0x2d>             89 c1                                 movl %eax,%ecx
  1002af <sqrt+0x2f>             c1 e8 1f                              shrl $0x1f,%eax
  1002b2 <sqrt+0x32>             01 c1                                 addl %eax,%ecx
  1002b4 <sqrt+0x34>             d1 f9                                 sarl $1,%ecx
  1002b6 <sqrt+0x36>             89 ca                                 movl %ecx,%edx
  1002b8 <sqrt+0x38>             01 cb                                 addl %ecx,%ebx
  1002ba <sqrt+0x3a>             89 0d ac 04 10 00                     movl %ecx,0x1004ac
  1002c0 <sqrt+0x40>             c1 ea 1f                              shrl $0x1f,%edx
  1002c3 <sqrt+0x43>             89 d0                                 movl %edx,%eax
  1002c5 <sqrt+0x45>             f7 d8                                 negl %eax
  1002c7 <sqrt+0x47>             31 c1                                 xorl %eax,%ecx
  1002c9 <sqrt+0x49>             8d 2c 11                              leal (%ecx,%edx,1),%ebp
  1002cc <sqrt+0x4c>             e8 ff fe ff ff                        calll $0xfffffeff
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  1002d1 <sqrt+0x51>             39 e8                                 cmpl %ebp,%eax
  1002d3 <sqrt+0x53>             5a                                    popl %edx
  1002d4 <sqrt+0x54>             7c ca                                 jlb $0xffffffca
  1002a0 <sqrt+0x20>             89 f0                                 movl %esi,%eax
  1002a2 <sqrt+0x22>             89 fa                                 movl %edi,%edx
  1002a4 <sqrt+0x24>             f7 fb                                 idivl %ebx
  1002a6 <sqrt+0x26>             29 d8                                 subl %ebx,%eax
  1002a8 <sqrt+0x28>             68 17 b7 d1 38                        pushl $0x38d1b717
  1002ad <sqrt+0x2d>             89 c1                                 movl %eax,%ecx
  1002af <sqrt+0x2f>             c1 e8 1f                              shrl $0x1f,%eax
  1002b2 <sqrt+0x32>             01 c1                                 addl %eax,%ecx
  1002b4 <sqrt+0x34>             d1 f9                                 sarl $1,%ecx
  1002b6 <sqrt+0x36>             89 ca                                 movl %ecx,%edx
  1002b8 <sqrt+0x38>             01 cb                                 addl %ecx,%ebx
  1002ba <sqrt+0x3a>             89 0d ac 04 10 00                     movl %ecx,0x1004ac
  1002c0 <sqrt+0x40>             c1 ea 1f                              shrl $0x1f,%edx
  1002c3 <sqrt+0x43>             89 d0                                 movl %edx,%eax
  1002c5 <sqrt+0x45>             f7 d8                                 negl %eax
  1002c7 <sqrt+0x47>             31 c1                                 xorl %eax,%ecx
  1002c9 <sqrt+0x49>             8d 2c 11                              leal (%ecx,%edx,1),%ebp
  1002cc <sqrt+0x4c>             e8 ff fe ff ff                        calll $0xfffffeff
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  1002d1 <sqrt+0x51>             39 e8                                 cmpl %ebp,%eax
  1002d3 <sqrt+0x53>             5a                                    popl %edx
  1002d4 <sqrt+0x54>             7c ca                                 jlb $0xffffffca
  1002d6 <sqrt+0x56>             83 c4 04                              addl $0x4,%esp
  1002d9 <sqrt+0x59>             89 d8                                 movl %ebx,%eax
  1002db <sqrt+0x5b>             5b                                    popl %ebx
  1002dc <sqrt+0x5c>             5e                                    popl %esi
  1002dd <sqrt+0x5d>             5f                                    popl %edi
  1002de <sqrt+0x5e>             5d                                    popl %ebp
  1002df <sqrt+0x5f>             c3                                    retl
  1000b3 <main+0x92>             83 c4 10                              addl $0x10,%esp
  1000b6 <main+0x95>             89 45 e4                              movl %eax,-0x1c(%ebp)
  1000b9 <main+0x98>             83 ec 08                              subl $0x8,%esp
  1000bc <main+0x9b>             6a 02                                 pushb $0x2
  1000be <main+0x9d>             ff 75 f4                              pushl -0xc(%ebp)
  1000c1 <main+0xa0>             e8 4f ff ff ff                        calll $0xffffff4f
  100015 <F_mul_int+0x0>         55                                    pushl %ebp
  100016 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100018 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  10001b <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10001f <F_mul_int+0xa>         5d                                    popl %ebp
  100020 <F_mul_int+0xb>         c3                                    retl
  1000c6 <main+0xa5>             83 c4 10                              addl $0x10,%esp
  1000c9 <main+0xa8>             89 c2                                 movl %eax,%edx
  1000cb <main+0xaa>             8b 45 e4                              movl -0x1c(%ebp),%eax
  1000ce <main+0xad>             2b 45 f0                              subl -0x10(%ebp),%eax
  1000d1 <main+0xb0>             83 ec 08                              subl $0x8,%esp
  1000d4 <main+0xb3>             52                                    pushl %edx
  1000d5 <main+0xb4>             50                                    pushl %eax
  1000d6 <main+0xb5>             e8 d5 00 00 00                        calll $0xd5
  1001b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1001b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1001b8 <F_div_F+0x8>           99                                    cltd
  1001b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1001bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1001c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1001c2 <F_div_F+0x12>          c3                                    retl
  1000db <main+0xba>             83 c4 10                              addl $0x10,%esp
  1000de <main+0xbd>             89 45 e0                              movl %eax,-0x20(%ebp)
  1000e1 <main+0xc0>             83 ec 08                              subl $0x8,%esp
  1000e4 <main+0xc3>             6a 02                                 pushb $0x2
  1000e6 <main+0xc5>             ff 75 f4                              pushl -0xc(%ebp)
  1000e9 <main+0xc8>             e8 27 ff ff ff                        calll $0xffffff27
  100015 <F_mul_int+0x0>         55                                    pushl %ebp
  100016 <F_mul_int+0x1>         89 e5                                 movl %esp,%ebp
  100018 <F_mul_int+0x3>         8b 45 08                              movl 0x8(%ebp),%eax
  10001b <F_mul_int+0x6>         0f af 45 0c                           imull 0xc(%ebp),%eax,%eax
  10001f <F_mul_int+0xa>         5d                                    popl %ebp
  100020 <F_mul_int+0xb>         c3                                    retl
  1000ee <main+0xcd>             83 c4 10                              addl $0x10,%esp
  1000f1 <main+0xd0>             89 c2                                 movl %eax,%edx
  1000f3 <main+0xd2>             8b 45 f0                              movl -0x10(%ebp),%eax
  1000f6 <main+0xd5>             f7 d8                                 negl %eax
  1000f8 <main+0xd7>             2b 45 e4                              subl -0x1c(%ebp),%eax
  1000fb <main+0xda>             83 ec 08                              subl $0x8,%esp
  1000fe <main+0xdd>             52                                    pushl %edx
  1000ff <main+0xde>             50                                    pushl %eax
  100100 <main+0xdf>             e8 ab 00 00 00                        calll $0xab
  1001b0 <F_div_F+0x0>           8b 44 24 04                           movl 0x4(%esp),%eax
  1001b4 <F_div_F+0x4>           8b 4c 24 08                           movl 0x8(%esp),%ecx
  1001b8 <F_div_F+0x8>           99                                    cltd
  1001b9 <F_div_F+0x9>           0f a4 c2 10                           shldl $0x10,%eax,%edx
  1001bd <F_div_F+0xd>           c1 e0 10                              shll $0x10,%eax
  1001c0 <F_div_F+0x10>          f7 f9                                 idivl %ecx
  1001c2 <F_div_F+0x12>          c3                                    retl
  100105 <main+0xe4>             83 c4 10                              addl $0x10,%esp
  100108 <main+0xe7>             89 45 dc                              movl %eax,-0x24(%ebp)
  10010b <main+0xea>             83 ec 0c                              subl $0xc,%esp
  10010e <main+0xed>             a1 58 03 10 00                        movl 0x100358,%eax
  100113 <main+0xf2>             50                                    pushl %eax
  100114 <main+0xf3>             e8 b7 00 00 00                        calll $0xb7
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100119 <main+0xf8>             83 c4 10                              addl $0x10,%esp
  10011c <main+0xfb>             89 45 d8                              movl %eax,-0x28(%ebp)
  10011f <main+0xfe>             83 ec 0c                              subl $0xc,%esp
  100122 <main+0x101>            a1 5c 03 10 00                        movl 0x10035c,%eax
  100127 <main+0x106>            50                                    pushl %eax
  100128 <main+0x107>            e8 a3 00 00 00                        calll $0xa3
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  10012d <main+0x10c>            83 c4 10                              addl $0x10,%esp
  100130 <main+0x10f>            89 45 d4                              movl %eax,-0x2c(%ebp)
  100133 <main+0x112>            8b 45 d8                              movl -0x28(%ebp),%eax
  100136 <main+0x115>            2b 45 e0                              subl -0x20(%ebp),%eax
  100139 <main+0x118>            83 ec 0c                              subl $0xc,%esp
  10013c <main+0x11b>            50                                    pushl %eax
  10013d <main+0x11c>            e8 1e 01 00 00                        calll $0x11e
  100260 <Fabs+0x0>              8b 54 24 04                           movl 0x4(%esp),%edx
  100264 <Fabs+0x4>              89 d1                                 movl %edx,%ecx
  100266 <Fabs+0x6>              89 15 ac 04 10 00                     movl %edx,0x1004ac
  10026c <Fabs+0xc>              c1 e9 1f                              shrl $0x1f,%ecx
  10026f <Fabs+0xf>              89 c8                                 movl %ecx,%eax
  100271 <Fabs+0x11>             f7 d8                                 negl %eax
  100273 <Fabs+0x13>             31 c2                                 xorl %eax,%edx
  100275 <Fabs+0x15>             8d 04 0a                              leal (%edx,%ecx,1),%eax
  100278 <Fabs+0x18>             c3                                    retl
  100142 <main+0x121>            83 c4 10                              addl $0x10,%esp
  100145 <main+0x124>            89 c3                                 movl %eax,%ebx
  100147 <main+0x126>            83 ec 0c                              subl $0xc,%esp
  10014a <main+0x129>            a1 60 03 10 00                        movl 0x100360,%eax
  10014f <main+0x12e>            50                                    pushl %eax
  100150 <main+0x12f>            e8 7b 00 00 00                        calll $0x7b
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100155 <main+0x134>            83 c4 10                              addl $0x10,%esp
  100158 <main+0x137>            39 c3                                 cmpl %eax,%ebx
  10015a <main+0x139>            7c 06                                 jlb $0x6
  100162 <main+0x141>            8b 45 d4                              movl -0x2c(%ebp),%eax
  100165 <main+0x144>            2b 45 dc                              subl -0x24(%ebp),%eax
  100168 <main+0x147>            83 ec 0c                              subl $0xc,%esp
  10016b <main+0x14a>            50                                    pushl %eax
  10016c <main+0x14b>            e8 ef 00 00 00                        calll $0xef
  100260 <Fabs+0x0>              8b 54 24 04                           movl 0x4(%esp),%edx
  100264 <Fabs+0x4>              89 d1                                 movl %edx,%ecx
  100266 <Fabs+0x6>              89 15 ac 04 10 00                     movl %edx,0x1004ac
  10026c <Fabs+0xc>              c1 e9 1f                              shrl $0x1f,%ecx
  10026f <Fabs+0xf>              89 c8                                 movl %ecx,%eax
  100271 <Fabs+0x11>             f7 d8                                 negl %eax
  100273 <Fabs+0x13>             31 c2                                 xorl %eax,%edx
  100275 <Fabs+0x15>             8d 04 0a                              leal (%edx,%ecx,1),%eax
  100278 <Fabs+0x18>             c3                                    retl
  100171 <main+0x150>            83 c4 10                              addl $0x10,%esp
  100174 <main+0x153>            89 c3                                 movl %eax,%ebx
  100176 <main+0x155>            83 ec 0c                              subl $0xc,%esp
  100179 <main+0x158>            a1 60 03 10 00                        movl 0x100360,%eax
  10017e <main+0x15d>            50                                    pushl %eax
  10017f <main+0x15e>            e8 4c 00 00 00                        calll $0x4c
  1001d0 <f2F+0x0>               8b 44 24 04                           movl 0x4(%esp),%eax
  1001d4 <f2F+0x4>               89 c1                                 movl %eax,%ecx
  1001d6 <f2F+0x6>               a3 ac 04 10 00                        movl %eax,0x1004ac
  1001db <f2F+0xb>               31 c0                                 xorl %eax,%eax
  1001dd <f2F+0xd>               c1 e9 10                              shrl $0x10,%ecx
  1001e0 <f2F+0x10>              89 ca                                 movl %ecx,%edx
  1001e2 <f2F+0x12>              66 81 e2 80 7f                        andw $0x7f80,%dx
  1001e7 <f2F+0x17>              74 3b                                 jzb $0x3b
  1001e9 <f2F+0x19>              66 81 fa 80 7f                        cmpw $0x7f80,%dx
  1001ee <f2F+0x1e>              74 40                                 jzb $0x40
  1001f0 <f2F+0x20>              a1 ac 04 10 00                        movl 0x1004ac,%eax
  1001f5 <f2F+0x25>              66 c1 e9 07                           shrw $0x7,%cx
  1001f9 <f2F+0x29>              0f b6 c9                              movzxl %cl,%ecx
  1001fc <f2F+0x2c>              25 ff ff 7f 00                        andl $0x7fffff,%eax
  100201 <f2F+0x31>              0d 00 00 80 00                        orl $0x800000,%eax
  100206 <f2F+0x36>              81 e9 86 00 00 00                     subl $0x86,%ecx
  10020c <f2F+0x3c>              78 42                                 jsb $0x42
  100250 <f2F+0x80>              f7 d9                                 negl %ecx
  100252 <f2F+0x82>              d3 e8                                 shrl %cl,%eax
  100254 <f2F+0x84>              89 c1                                 movl %eax,%ecx
  100256 <f2F+0x86>              eb ba                                 jmpb $0xffffffba
  100212 <f2F+0x42>              0f be 05 af 04 10 00                  movsxl 0x1004af,%eax
  100219 <f2F+0x49>              c1 e8 1f                              shrl $0x1f,%eax
  10021c <f2F+0x4c>              89 c2                                 movl %eax,%edx
  10021e <f2F+0x4e>              f7 d8                                 negl %eax
  100220 <f2F+0x50>              31 c8                                 xorl %ecx,%eax
  100222 <f2F+0x52>              01 d0                                 addl %edx,%eax
  100224 <f2F+0x54>              f3                                    rep retl[cnt = 0]
  100184 <main+0x163>            83 c4 10                              addl $0x10,%esp
  100187 <main+0x166>            39 c3                                 cmpl %eax,%ebx
  100189 <main+0x168>            7c 06                                 jlb $0x6
  100191 <main+0x170>            b8 00 00 00 00                        movl $0x0,%eax
  100196 <main+0x175>            8d 65 f8                              leal -0x8(%ebp),%esp
  100199 <main+0x178>            59                                    popl %ecx
  10019a <main+0x179>            5b                                    popl %ebx
  10019b <main+0x17a>            5d                                    popl %ebp
  10019c <main+0x17b>            8d 61 fc                              leal -0x4(%ecx),%esp
  10019f <main+0x17e>            c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
