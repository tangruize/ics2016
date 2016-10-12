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
  100022 <main+0xd>              51                                    pushl %ecx
  100023 <main+0xe>              83 ec 04                              subl $0x4,%esp
  100026 <main+0x11>             83 ec 04                              subl $0x4,%esp
  100029 <main+0x14>             68 00 1a 10 00                        pushl $0x101a00
  10002e <main+0x19>             68 0e 1a 10 00                        pushl $0x101a0e
  100033 <main+0x1e>             68 80 29 10 00                        pushl $0x102980
  100038 <main+0x23>             e8 a3 00 00 00                        calll $0xa3
  1000e0 <__GI_sprint+0x0>       83 ec 0c                              subl $0xc,%esp
  1000e3 <__GI_sprint+0x3>       8d 44 24 18                           leal 0x18(%esp),%eax
  1000e7 <__GI_sprint+0x7>       50                                    pushl %eax
  1000e8 <__GI_sprint+0x8>       ff 74 24 18                           pushl 0x18(%esp)
  1000ec <__GI_sprint+0xc>       6a ff                                 pushb $0xffffffff
  1000ee <__GI_sprint+0xe>       ff 74 24 1c                           pushl 0x1c(%esp)
  1000f2 <__GI_sprint+0x12>      e8 04 00 00 00                        calll $0x4
  1000fb <__GI_vsnpri+0x0>       56                                    pushl %esi
  1000fc <__GI_vsnpri+0x1>       53                                    pushl %ebx
  1000fd <__GI_vsnpri+0x2>       83 ec 50                              subl $0x50,%esp
  100100 <__GI_vsnpri+0x5>       8d 44 24 34                           leal 0x34(%esp),%eax
  100104 <__GI_vsnpri+0x9>       8b 5c 24 5c                           movl 0x5c(%esp),%ebx
  100108 <__GI_vsnpri+0xd>       c7 44 24 10 fe ff ff ff               movl $0xfffffffe,0x10(%esp)
  100110 <__GI_vsnpri+0x15>      66 c7 44 24 0c d0 00                  movw $0xd0,0xc(%esp)
  100117 <__GI_vsnpri+0x1c>      c7 44 24 30 01 00 00 00               movl $0x1,0x30(%esp)
  10011f <__GI_vsnpri+0x24>      50                                    pushl %eax
  100120 <__GI_vsnpri+0x25>      89 de                                 movl %ebx,%esi
  100122 <__GI_vsnpri+0x27>      e8 68 00 00 00                        calll $0x68
  10018f <__stdio_ini+0x0>       57                                    pushl %edi
  100190 <__stdio_ini+0x1>       56                                    pushl %esi
  100191 <__stdio_ini+0x2>       be 38 1a 10 00                        movl $0x101a38,%esi
  100196 <__stdio_ini+0x7>       8b 7c 24 0c                           movl 0xc(%esp),%edi
  10019a <__stdio_ini+0xb>       a5                                    movsl 0,%es:(%edi)
  10019b <__stdio_ini+0xc>       a5                                    movsl 0,%es:(%edi)
  10019c <__stdio_ini+0xd>       a5                                    movsl 0,%es:(%edi)
  10019d <__stdio_ini+0xe>       a5                                    movsl 0x1,%es:(%edi)
  10019e <__stdio_ini+0xf>       a5                                    movsl 0,%es:(%edi)
  10019f <__stdio_ini+0x10>      a5                                    movsl 0,%es:(%edi)
  1001a0 <__stdio_ini+0x11>      5e                                    popl %esi
  1001a1 <__stdio_ini+0x12>      5f                                    popl %edi
  1001a2 <__stdio_ini+0x13>      c3                                    retl
  100127 <__GI_vsnpri+0x2c>      c7 44 24 30 00 00 00 00               movl $0x0,0x30(%esp)
  10012f <__GI_vsnpri+0x34>      83 c4 10                              addl $0x10,%esp
  100132 <__GI_vsnpri+0x37>      f7 d6                                 notl %esi
  100134 <__GI_vsnpri+0x39>      3b 74 24 54                           cmpl 0x54(%esp),%esi
  100138 <__GI_vsnpri+0x3d>      76 04                                 jbeb $0x4
  10013a <__GI_vsnpri+0x3f>      8b 74 24 54                           movl 0x54(%esp),%esi
  10013e <__GI_vsnpri+0x43>      8d 04 33                              leal (%ebx,%esi,1),%eax
  100141 <__GI_vsnpri+0x46>      89 5c 24 08                           movl %ebx,0x8(%esp)
  100145 <__GI_vsnpri+0x4a>      89 5c 24 10                           movl %ebx,0x10(%esp)
  100149 <__GI_vsnpri+0x4e>      89 5c 24 14                           movl %ebx,0x14(%esp)
  10014d <__GI_vsnpri+0x52>      89 5c 24 18                           movl %ebx,0x18(%esp)
  100151 <__GI_vsnpri+0x56>      89 44 24 0c                           movl %eax,0xc(%esp)
  100155 <__GI_vsnpri+0x5a>      89 44 24 1c                           movl %eax,0x1c(%esp)
  100159 <__GI_vsnpri+0x5e>      50                                    pushl %eax
  10015a <__GI_vsnpri+0x5f>      ff 74 24 60                           pushl 0x60(%esp)
  10015e <__GI_vsnpri+0x63>      ff 74 24 60                           pushl 0x60(%esp)
  100162 <__GI_vsnpri+0x67>      8d 44 24 0c                           leal 0xc(%esp),%eax
  100166 <__GI_vsnpri+0x6b>      50                                    pushl %eax
  100167 <__GI_vsnpri+0x6c>      e8 ce 01 00 00                        calll $0x1ce
  10033a <_vfprintf_i+0x0>       55                                    pushl %ebp
  10033b <_vfprintf_i+0x1>       57                                    pushl %edi
  10033c <_vfprintf_i+0x2>       56                                    pushl %esi
  10033d <_vfprintf_i+0x3>       53                                    pushl %ebx
  10033e <_vfprintf_i+0x4>       81 ec 64 01 00 00                     subl $0x164,%esp
  100344 <_vfprintf_i+0xa>       8b 9c 24 7c 01 00 00                  movl 0x17c(%esp),%ebx
  10034b <_vfprintf_i+0x11>      53                                    pushl %ebx
  10034c <_vfprintf_i+0x12>      8d b4 24 a0 00 00 00                  leal 0xa0(%esp),%esi
  100353 <_vfprintf_i+0x19>      56                                    pushl %esi
  100354 <_vfprintf_i+0x1a>      e8 9c 04 00 00                        calll $0x49c
  1007f5 <_ppfs_init+0x0>        57                                    pushl %edi
  1007f6 <_ppfs_init+0x1>        56                                    pushl %esi
  1007f7 <_ppfs_init+0x2>        b9 2f 00 00 00                        movl $0x2f,%ecx
  1007fc <_ppfs_init+0x7>        53                                    pushl %ebx
  1007fd <_ppfs_init+0x8>        8b 5c 24 10                           movl 0x10(%esp),%ebx
  100801 <_ppfs_init+0xc>        31 c0                                 xorl %eax,%eax
  100803 <_ppfs_init+0xe>        8b 74 24 14                           movl 0x14(%esp),%esi
  100807 <_ppfs_init+0x12>       89 df                                 movl %ebx,%edi
  100809 <_ppfs_init+0x14>       f3 ab                                 rep stosl %eax,%es:(%edi)[cnt = 47]
  10080b <_ppfs_init+0x16>       ff 4b 18                              decl 0x18(%ebx)
  10080e <_ppfs_init+0x19>       8d 53 28                              leal 0x28(%ebx),%edx
  100811 <_ppfs_init+0x1c>       89 33                                 movl %esi,(%ebx)
  100813 <_ppfs_init+0x1e>       b0 09                                 movb $0x9,%al
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100821 <_ppfs_init+0x2c>       89 f0                                 movl %esi,%eax
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10082e <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100832 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100835 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  100837 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10083a <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10083c <_ppfs_init+0x47>       53                                    pushl %ebx
  10083d <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bab <_ppfs_parse+0x1f4>     f7 c5 00 04 00 00                     testl $0x400,%ebp
  100bb1 <_ppfs_parse+0x1fa>     74 03                                 jzb $0x3
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  100842 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100845 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  100847 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  100849 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10084b <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100852 <_ppfs_init+0x5d>       89 33                                 movl %esi,(%ebx)
  100854 <_ppfs_init+0x5f>       31 c0                                 xorl %eax,%eax
  100856 <_ppfs_init+0x61>       eb 03                                 jmpb $0x3
  10085b <_ppfs_init+0x66>       5b                                    popl %ebx
  10085c <_ppfs_init+0x67>       5e                                    popl %esi
  10085d <_ppfs_init+0x68>       5f                                    popl %edi
  10085e <_ppfs_init+0x69>       c3                                    retl
  100359 <_vfprintf_i+0x1f>      83 c4 10                              addl $0x10,%esp
  10035c <_vfprintf_i+0x22>      85 c0                                 testl %eax,%eax
  10035e <_vfprintf_i+0x24>      79 3a                                 jnsb $0x3a
  10039a <_vfprintf_i+0x60>      50                                    pushl %eax
  10039b <_vfprintf_i+0x61>      50                                    pushl %eax
  10039c <_vfprintf_i+0x62>      ff b4 24 80 01 00 00                  pushl 0x180(%esp)
  1003a3 <_vfprintf_i+0x69>      56                                    pushl %esi
  1003a4 <_vfprintf_i+0x6a>      e8 b6 04 00 00                        calll $0x4b6
  10085f <_ppfs_prepa+0x0>       56                                    pushl %esi
  100860 <_ppfs_prepa+0x1>       53                                    pushl %ebx
  100861 <_ppfs_prepa+0x2>       52                                    pushl %edx
  100862 <_ppfs_prepa+0x3>       8b 5c 24 10                           movl 0x10(%esp),%ebx
  100866 <_ppfs_prepa+0x7>       8b 44 24 14                           movl 0x14(%esp),%eax
  10086a <_ppfs_prepa+0xb>       8b 73 18                              movl 0x18(%ebx),%esi
  10086d <_ppfs_prepa+0xe>       89 43 4c                              movl %eax,0x4c(%ebx)
  100870 <_ppfs_prepa+0x11>      85 f6                                 testl %esi,%esi
  100872 <_ppfs_prepa+0x13>      7e 27                                 jleb $0x27
  10089b <_ppfs_prepa+0x3c>      58                                    popl %eax
  10089c <_ppfs_prepa+0x3d>      5b                                    popl %ebx
  10089d <_ppfs_prepa+0x3e>      5e                                    popl %esi
  10089e <_ppfs_prepa+0x3f>      c3                                    retl
  1003a9 <_vfprintf_i+0x6f>      83 c4 10                              addl $0x10,%esp
  1003ac <_vfprintf_i+0x72>      89 da                                 movl %ebx,%edx
  1003ae <_vfprintf_i+0x74>      c7 44 24 08 00 00 00 00               movl $0x0,0x8(%esp)
  1003b6 <_vfprintf_i+0x7c>      89 74 24 0c                           movl %esi,0xc(%esp)
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1003fc <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100400 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100403 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100409 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100410 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100413 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100417 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bab <_ppfs_parse+0x1f4>     f7 c5 00 04 00 00                     testl $0x400,%ebp
  100bb1 <_ppfs_parse+0x1fa>     74 03                                 jzb $0x3
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  10041c <_vfprintf_i+0xe2>      58                                    popl %eax
  10041d <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100421 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  10089f <_ppfs_setar+0x0>       55                                    pushl %ebp
  1008a0 <_ppfs_setar+0x1>       57                                    pushl %edi
  1008a1 <_ppfs_setar+0x2>       56                                    pushl %esi
  1008a2 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1008a3 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1008a7 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1008ab <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1008ae <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1008b4 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1008bb <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  1008ce <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  1008d5 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  1008e8 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008f3 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  1008f7 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  1008fa <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  1008fd <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  1008ff <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100902 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100904 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100907 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100909 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  10090b <_ppfs_setar+0x6c>      83 fb 07                              cmpl $0x7,%ebx
  10090e <_ppfs_setar+0x6f>      75 44                                 jnzb $0x44
  100954 <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  100957 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  10095a <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  10095c <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  10095e <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  100961 <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  100963 <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100993 <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100996 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100998 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  1009b2 <_ppfs_setar+0x113>     5b                                    popl %ebx
  1009b3 <_ppfs_setar+0x114>     5e                                    popl %esi
  1009b4 <_ppfs_setar+0x115>     5f                                    popl %edi
  1009b5 <_ppfs_setar+0x116>     5d                                    popl %ebp
  1009b6 <_ppfs_setar+0x117>     c3                                    retl
  100426 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  10042e <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  100432 <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  100435 <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  10043d <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  100444 <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  100452 <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  100454 <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  10045f <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  100461 <_vfprintf_i+0x127>     41                                    incl %ecx
  100462 <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  100465 <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  100467 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  10046e <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  100470 <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100499 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  10049c <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  10060f <_vfprintf_i+0x2d5>     83 f8 0f                              cmpl $0xf,%eax
  100612 <_vfprintf_i+0x2d8>     77 45                                 jnbeb $0x45
  100659 <_vfprintf_i+0x31f>     8d 48 ee                              leal -0x12(%eax),%ecx
  10065c <_vfprintf_i+0x322>     83 f9 01                              cmpl $0x1,%ecx
  10065f <_vfprintf_i+0x325>     0f 87 6d 01 00 00                     jnbel $0x16d
  100665 <_vfprintf_i+0x32b>     83 f8 13                              cmpl $0x13,%eax
  100668 <_vfprintf_i+0x32e>     75 4e                                 jnzb $0x4e
  10066a <_vfprintf_i+0x330>     8b 3a                                 movl (%edx),%edi
  10066c <_vfprintf_i+0x332>     85 ff                                 testl %edi,%edi
  10066e <_vfprintf_i+0x334>     74 27                                 jzb $0x27
  100670 <_vfprintf_i+0x336>     8b 94 24 98 00 00 00                  movl 0x98(%esp),%edx
  100677 <_vfprintf_i+0x33d>     83 c8 ff                              orl $0xffffffff,%eax
  10067a <_vfprintf_i+0x340>     85 d2                                 testl %edx,%edx
  10067c <_vfprintf_i+0x342>     78 02                                 jsb $0x2
  100680 <_vfprintf_i+0x346>     51                                    pushl %ecx
  100681 <_vfprintf_i+0x347>     51                                    pushl %ecx
  100682 <_vfprintf_i+0x348>     bd 0b 00 00 00                        movl $0xb,%ebp
  100687 <_vfprintf_i+0x34d>     50                                    pushl %eax
  100688 <_vfprintf_i+0x34e>     57                                    pushl %edi
  100689 <_vfprintf_i+0x34f>     e8 3e 07 00 00                        calll $0x73e
  100dcc <__GI_strnle+0x0>       8b 44 24 08                           movl 0x8(%esp),%eax
  100dd0 <__GI_strnle+0x4>       8b 4c 24 04                           movl 0x4(%esp),%ecx
  100dd4 <__GI_strnle+0x8>       8d 50 01                              leal 0x1(%eax),%edx
  100dd7 <__GI_strnle+0xb>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100dda <__GI_strnle+0xe>       40                                    incl %eax
  100ddb <__GI_strnle+0xf>       4a                                    decl %edx
  100ddc <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100dde <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100de1 <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100de3 <__GI_strnle+0x17>      29 c8                                 subl %ecx,%eax
  100de5 <__GI_strnle+0x19>      c3                                    retl
  10068e <_vfprintf_i+0x354>     83 c4 10                              addl $0x10,%esp
  100691 <_vfprintf_i+0x357>     89 c6                                 movl %eax,%esi
  100693 <_vfprintf_i+0x359>     b1 20                                 movb $0x20,%cl
  100695 <_vfprintf_i+0x35b>     eb 40                                 jmpb $0x40
  1006d7 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  1006d9 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  1006dc <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  1006df <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  1006ed <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  1006f4 <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006fc <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  1006fe <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100706 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  10070a <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  10070e <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  100711 <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  100715 <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  100723 <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  10072b <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  10072d <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  100731 <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100738 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  10073d <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  100742 <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  100746 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  10074c <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100754 <_vfprintf_i+0x41a>     8d 85 50 1a 10 00                     leal 0x101a50(%ebp),%eax
  10075a <_vfprintf_i+0x420>     52                                    pushl %edx
  10075b <_vfprintf_i+0x421>     52                                    pushl %edx
  10075c <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  100763 <_vfprintf_i+0x429>     50                                    pushl %eax
  100764 <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100d01 <__GI_fputs_+0x0>       56                                    pushl %esi
  100d02 <__GI_fputs_+0x1>       53                                    pushl %ebx
  100d03 <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100d06 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d0a <__GI_fputs_+0x9>       56                                    pushl %esi
  100d0b <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d9c <__GI_strlen+0x0>       57                                    pushl %edi
  100d9d <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100da0 <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100da4 <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100da6 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100da8 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100daa <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dad <__GI_strlen+0x11>      5f                                    popl %edi
  100dae <__GI_strlen+0x12>      c3                                    retl
  100d10 <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100d13 <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100d15 <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100d19 <__GI_fputs_+0x18>      50                                    pushl %eax
  100d1a <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100d1c <__GI_fputs_+0x1b>      56                                    pushl %esi
  100d1d <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100d34 <fwrite_unlo+0x0>       57                                    pushl %edi
  100d35 <fwrite_unlo+0x1>       56                                    pushl %esi
  100d36 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100d37 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d3b <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100d3f <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100d43 <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100d46 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100d48 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100d4a <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100d4c <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100d4e <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100d50 <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d96 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d98 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d99 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d9a <fwrite_unlo+0x66>      5f                                    popl %edi
  100d9b <fwrite_unlo+0x67>      c3                                    retl
  100d22 <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100d24 <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100d27 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100d2a <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100d2c <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100d2e <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100d30 <__GI_fputs_+0x2f>      5a                                    popl %edx
  100d31 <__GI_fputs_+0x30>      5b                                    popl %ebx
  100d32 <__GI_fputs_+0x31>      5e                                    popl %esi
  100d33 <__GI_fputs_+0x32>      c3                                    retl
  100769 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  100770 <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  100772 <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  100777 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10077c <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  10077f <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  100781 <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  100783 <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  100785 <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  1007a4 <_vfprintf_i+0x46a>     50                                    pushl %eax
  1007a5 <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1007ac <_vfprintf_i+0x472>     56                                    pushl %esi
  1007ad <_vfprintf_i+0x473>     57                                    pushl %edi
  1007ae <_vfprintf_i+0x474>     e8 7a 07 00 00                        calll $0x77a
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep movsl 0x21646c72,%es:(%edi)[cnt = 3]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0xa,%es:(%edi)[cnt = 1]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1007b3 <_vfprintf_i+0x479>     83 c4 10                              addl $0x10,%esp
  1007b6 <_vfprintf_i+0x47c>     39 f0                                 cmpl %esi,%eax
  1007b8 <_vfprintf_i+0x47e>     75 18                                 jnzb $0x18
  1007ba <_vfprintf_i+0x480>     eb cb                                 jmpb $0xffffffcb
  100787 <_vfprintf_i+0x44d>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10078b <_vfprintf_i+0x451>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100792 <_vfprintf_i+0x458>     ba 20 00 00 00                        movl $0x20,%edx
  100797 <_vfprintf_i+0x45d>     e8 ff fa ff ff                        calll $0xfffffaff
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10079c <_vfprintf_i+0x462>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1007a0 <_vfprintf_i+0x466>     74 1a                                 jzb $0x1a
  1007bc <_vfprintf_i+0x482>     8b 9c 24 94 00 00 00                  movl 0x94(%esp),%ebx
  1007c3 <_vfprintf_i+0x489>     89 da                                 movl %ebx,%edx
  1007c5 <_vfprintf_i+0x48b>     e9 f0 fb ff ff                        jmpl $0xfffffbf0
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1007e6 <_vfprintf_i+0x4ac>     8b 44 24 08                           movl 0x8(%esp),%eax
  1007ea <_vfprintf_i+0x4b0>     81 c4 5c 01 00 00                     addl $0x15c,%esp
  1007f0 <_vfprintf_i+0x4b6>     5b                                    popl %ebx
  1007f1 <_vfprintf_i+0x4b7>     5e                                    popl %esi
  1007f2 <_vfprintf_i+0x4b8>     5f                                    popl %edi
  1007f3 <_vfprintf_i+0x4b9>     5d                                    popl %ebp
  1007f4 <_vfprintf_i+0x4ba>     c3                                    retl
  10016c <__GI_vsnpri+0x71>      83 c4 10                              addl $0x10,%esp
  10016f <__GI_vsnpri+0x74>      85 f6                                 testl %esi,%esi
  100171 <__GI_vsnpri+0x76>      74 16                                 jzb $0x16
  100173 <__GI_vsnpri+0x78>      8b 54 24 10                           movl 0x10(%esp),%edx
  100177 <__GI_vsnpri+0x7c>      3b 54 24 0c                           cmpl 0xc(%esp),%edx
  10017b <__GI_vsnpri+0x80>      75 05                                 jnzb $0x5
  100182 <__GI_vsnpri+0x87>      8b 54 24 10                           movl 0x10(%esp),%edx
  100186 <__GI_vsnpri+0x8b>      c6 02 00                              movb $0x0,(%edx)
  100189 <__GI_vsnpri+0x8e>      83 c4 44                              addl $0x44,%esp
  10018c <__GI_vsnpri+0x91>      5b                                    popl %ebx
  10018d <__GI_vsnpri+0x92>      5e                                    popl %esi
  10018e <__GI_vsnpri+0x93>      c3                                    retl
  1000f7 <__GI_sprint+0x17>      83 c4 1c                              addl $0x1c,%esp
  1000fa <__GI_sprint+0x1a>      c3                                    retl
  10003d <main+0x28>             83 c4 10                              addl $0x10,%esp
  100040 <main+0x2b>             83 ec 08                              subl $0x8,%esp
  100043 <main+0x2e>             68 00 1a 10 00                        pushl $0x101a00
  100048 <main+0x33>             68 80 29 10 00                        pushl $0x102980
  10004d <main+0x38>             e8 5d 0d 00 00                        calll $0xd5d
  100daf <__GI_strcol+0x0>       57                                    pushl %edi
  100db0 <__GI_strcol+0x1>       56                                    pushl %esi
  100db1 <__GI_strcol+0x2>       8b 74 24 0c                           movl 0xc(%esp),%esi
  100db5 <__GI_strcol+0x6>       8b 7c 24 10                           movl 0x10(%esp),%edi
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x48,%edi
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x48,%edi
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x65,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x65,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x6c,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x6c,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x6c,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x6c,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x6f,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x6f,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x77,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x77,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x6f,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x6f,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x72,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x72,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x6c,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x6c,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x64,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x64,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x21,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x21,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0xa,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0xa,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100dc1 <__GI_strcol+0x12>      31 c0                                 xorl %eax,%eax
  100dc3 <__GI_strcol+0x14>      eb 04                                 jmpb $0x4
  100dc9 <__GI_strcol+0x1a>      5e                                    popl %esi
  100dca <__GI_strcol+0x1b>      5f                                    popl %edi
  100dcb <__GI_strcol+0x1c>      c3                                    retl
  100052 <main+0x3d>             83 c4 10                              addl $0x10,%esp
  100055 <main+0x40>             85 c0                                 testl %eax,%eax
  100057 <main+0x42>             74 06                                 jzb $0x6
  10005f <main+0x4a>             83 ec 0c                              subl $0xc,%esp
  100062 <main+0x4d>             6a 02                                 pushb $0x2
  100064 <main+0x4f>             6a 01                                 pushb $0x1
  100066 <main+0x51>             6a 01                                 pushb $0x1
  100068 <main+0x53>             68 11 1a 10 00                        pushl $0x101a11
  10006d <main+0x58>             68 80 29 10 00                        pushl $0x102980
  100072 <main+0x5d>             e8 69 00 00 00                        calll $0x69
  1000e0 <__GI_sprint+0x0>       83 ec 0c                              subl $0xc,%esp
  1000e3 <__GI_sprint+0x3>       8d 44 24 18                           leal 0x18(%esp),%eax
  1000e7 <__GI_sprint+0x7>       50                                    pushl %eax
  1000e8 <__GI_sprint+0x8>       ff 74 24 18                           pushl 0x18(%esp)
  1000ec <__GI_sprint+0xc>       6a ff                                 pushb $0xffffffff
  1000ee <__GI_sprint+0xe>       ff 74 24 1c                           pushl 0x1c(%esp)
  1000f2 <__GI_sprint+0x12>      e8 04 00 00 00                        calll $0x4
  1000fb <__GI_vsnpri+0x0>       56                                    pushl %esi
  1000fc <__GI_vsnpri+0x1>       53                                    pushl %ebx
  1000fd <__GI_vsnpri+0x2>       83 ec 50                              subl $0x50,%esp
  100100 <__GI_vsnpri+0x5>       8d 44 24 34                           leal 0x34(%esp),%eax
  100104 <__GI_vsnpri+0x9>       8b 5c 24 5c                           movl 0x5c(%esp),%ebx
  100108 <__GI_vsnpri+0xd>       c7 44 24 10 fe ff ff ff               movl $0xfffffffe,0x10(%esp)
  100110 <__GI_vsnpri+0x15>      66 c7 44 24 0c d0 00                  movw $0xd0,0xc(%esp)
  100117 <__GI_vsnpri+0x1c>      c7 44 24 30 01 00 00 00               movl $0x1,0x30(%esp)
  10011f <__GI_vsnpri+0x24>      50                                    pushl %eax
  100120 <__GI_vsnpri+0x25>      89 de                                 movl %ebx,%esi
  100122 <__GI_vsnpri+0x27>      e8 68 00 00 00                        calll $0x68
  10018f <__stdio_ini+0x0>       57                                    pushl %edi
  100190 <__stdio_ini+0x1>       56                                    pushl %esi
  100191 <__stdio_ini+0x2>       be 38 1a 10 00                        movl $0x101a38,%esi
  100196 <__stdio_ini+0x7>       8b 7c 24 0c                           movl 0xc(%esp),%edi
  10019a <__stdio_ini+0xb>       a5                                    movsl 0,%es:(%edi)
  10019b <__stdio_ini+0xc>       a5                                    movsl 0,%es:(%edi)
  10019c <__stdio_ini+0xd>       a5                                    movsl 0,%es:(%edi)
  10019d <__stdio_ini+0xe>       a5                                    movsl 0x1,%es:(%edi)
  10019e <__stdio_ini+0xf>       a5                                    movsl 0,%es:(%edi)
  10019f <__stdio_ini+0x10>      a5                                    movsl 0,%es:(%edi)
  1001a0 <__stdio_ini+0x11>      5e                                    popl %esi
  1001a1 <__stdio_ini+0x12>      5f                                    popl %edi
  1001a2 <__stdio_ini+0x13>      c3                                    retl
  100127 <__GI_vsnpri+0x2c>      c7 44 24 30 00 00 00 00               movl $0x0,0x30(%esp)
  10012f <__GI_vsnpri+0x34>      83 c4 10                              addl $0x10,%esp
  100132 <__GI_vsnpri+0x37>      f7 d6                                 notl %esi
  100134 <__GI_vsnpri+0x39>      3b 74 24 54                           cmpl 0x54(%esp),%esi
  100138 <__GI_vsnpri+0x3d>      76 04                                 jbeb $0x4
  10013a <__GI_vsnpri+0x3f>      8b 74 24 54                           movl 0x54(%esp),%esi
  10013e <__GI_vsnpri+0x43>      8d 04 33                              leal (%ebx,%esi,1),%eax
  100141 <__GI_vsnpri+0x46>      89 5c 24 08                           movl %ebx,0x8(%esp)
  100145 <__GI_vsnpri+0x4a>      89 5c 24 10                           movl %ebx,0x10(%esp)
  100149 <__GI_vsnpri+0x4e>      89 5c 24 14                           movl %ebx,0x14(%esp)
  10014d <__GI_vsnpri+0x52>      89 5c 24 18                           movl %ebx,0x18(%esp)
  100151 <__GI_vsnpri+0x56>      89 44 24 0c                           movl %eax,0xc(%esp)
  100155 <__GI_vsnpri+0x5a>      89 44 24 1c                           movl %eax,0x1c(%esp)
  100159 <__GI_vsnpri+0x5e>      50                                    pushl %eax
  10015a <__GI_vsnpri+0x5f>      ff 74 24 60                           pushl 0x60(%esp)
  10015e <__GI_vsnpri+0x63>      ff 74 24 60                           pushl 0x60(%esp)
  100162 <__GI_vsnpri+0x67>      8d 44 24 0c                           leal 0xc(%esp),%eax
  100166 <__GI_vsnpri+0x6b>      50                                    pushl %eax
  100167 <__GI_vsnpri+0x6c>      e8 ce 01 00 00                        calll $0x1ce
  10033a <_vfprintf_i+0x0>       55                                    pushl %ebp
  10033b <_vfprintf_i+0x1>       57                                    pushl %edi
  10033c <_vfprintf_i+0x2>       56                                    pushl %esi
  10033d <_vfprintf_i+0x3>       53                                    pushl %ebx
  10033e <_vfprintf_i+0x4>       81 ec 64 01 00 00                     subl $0x164,%esp
  100344 <_vfprintf_i+0xa>       8b 9c 24 7c 01 00 00                  movl 0x17c(%esp),%ebx
  10034b <_vfprintf_i+0x11>      53                                    pushl %ebx
  10034c <_vfprintf_i+0x12>      8d b4 24 a0 00 00 00                  leal 0xa0(%esp),%esi
  100353 <_vfprintf_i+0x19>      56                                    pushl %esi
  100354 <_vfprintf_i+0x1a>      e8 9c 04 00 00                        calll $0x49c
  1007f5 <_ppfs_init+0x0>        57                                    pushl %edi
  1007f6 <_ppfs_init+0x1>        56                                    pushl %esi
  1007f7 <_ppfs_init+0x2>        b9 2f 00 00 00                        movl $0x2f,%ecx
  1007fc <_ppfs_init+0x7>        53                                    pushl %ebx
  1007fd <_ppfs_init+0x8>        8b 5c 24 10                           movl 0x10(%esp),%ebx
  100801 <_ppfs_init+0xc>        31 c0                                 xorl %eax,%eax
  100803 <_ppfs_init+0xe>        8b 74 24 14                           movl 0x14(%esp),%esi
  100807 <_ppfs_init+0x12>       89 df                                 movl %ebx,%edi
  100809 <_ppfs_init+0x14>       f3 ab                                 rep stosl %eax,%es:(%edi)[cnt = 47]
  10080b <_ppfs_init+0x16>       ff 4b 18                              decl 0x18(%ebx)
  10080e <_ppfs_init+0x19>       8d 53 28                              leal 0x28(%ebx),%edx
  100811 <_ppfs_init+0x1c>       89 33                                 movl %esi,(%ebx)
  100813 <_ppfs_init+0x1e>       b0 09                                 movb $0x9,%al
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100821 <_ppfs_init+0x2c>       89 f0                                 movl %esi,%eax
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10082e <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100832 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100835 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  100837 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10083a <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10083c <_ppfs_init+0x47>       53                                    pushl %ebx
  10083d <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  100842 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100845 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  100847 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  100849 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10084b <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10082e <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100832 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100835 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  100837 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10083a <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10083c <_ppfs_init+0x47>       53                                    pushl %ebx
  10083d <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  100842 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100845 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  100847 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  100849 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10084b <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10082e <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100832 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100835 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  100837 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10083a <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10083c <_ppfs_init+0x47>       53                                    pushl %ebx
  10083d <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  100842 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100845 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  100847 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  100849 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10084b <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100852 <_ppfs_init+0x5d>       89 33                                 movl %esi,(%ebx)
  100854 <_ppfs_init+0x5f>       31 c0                                 xorl %eax,%eax
  100856 <_ppfs_init+0x61>       eb 03                                 jmpb $0x3
  10085b <_ppfs_init+0x66>       5b                                    popl %ebx
  10085c <_ppfs_init+0x67>       5e                                    popl %esi
  10085d <_ppfs_init+0x68>       5f                                    popl %edi
  10085e <_ppfs_init+0x69>       c3                                    retl
  100359 <_vfprintf_i+0x1f>      83 c4 10                              addl $0x10,%esp
  10035c <_vfprintf_i+0x22>      85 c0                                 testl %eax,%eax
  10035e <_vfprintf_i+0x24>      79 3a                                 jnsb $0x3a
  10039a <_vfprintf_i+0x60>      50                                    pushl %eax
  10039b <_vfprintf_i+0x61>      50                                    pushl %eax
  10039c <_vfprintf_i+0x62>      ff b4 24 80 01 00 00                  pushl 0x180(%esp)
  1003a3 <_vfprintf_i+0x69>      56                                    pushl %esi
  1003a4 <_vfprintf_i+0x6a>      e8 b6 04 00 00                        calll $0x4b6
  10085f <_ppfs_prepa+0x0>       56                                    pushl %esi
  100860 <_ppfs_prepa+0x1>       53                                    pushl %ebx
  100861 <_ppfs_prepa+0x2>       52                                    pushl %edx
  100862 <_ppfs_prepa+0x3>       8b 5c 24 10                           movl 0x10(%esp),%ebx
  100866 <_ppfs_prepa+0x7>       8b 44 24 14                           movl 0x14(%esp),%eax
  10086a <_ppfs_prepa+0xb>       8b 73 18                              movl 0x18(%ebx),%esi
  10086d <_ppfs_prepa+0xe>       89 43 4c                              movl %eax,0x4c(%ebx)
  100870 <_ppfs_prepa+0x11>      85 f6                                 testl %esi,%esi
  100872 <_ppfs_prepa+0x13>      7e 27                                 jleb $0x27
  10089b <_ppfs_prepa+0x3c>      58                                    popl %eax
  10089c <_ppfs_prepa+0x3d>      5b                                    popl %ebx
  10089d <_ppfs_prepa+0x3e>      5e                                    popl %esi
  10089e <_ppfs_prepa+0x3f>      c3                                    retl
  1003a9 <_vfprintf_i+0x6f>      83 c4 10                              addl $0x10,%esp
  1003ac <_vfprintf_i+0x72>      89 da                                 movl %ebx,%edx
  1003ae <_vfprintf_i+0x74>      c7 44 24 08 00 00 00 00               movl $0x0,0x8(%esp)
  1003b6 <_vfprintf_i+0x7c>      89 74 24 0c                           movl %esi,0xc(%esp)
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1003fc <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100400 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100403 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100409 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100410 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100413 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100417 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  10041c <_vfprintf_i+0xe2>      58                                    popl %eax
  10041d <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100421 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  10089f <_ppfs_setar+0x0>       55                                    pushl %ebp
  1008a0 <_ppfs_setar+0x1>       57                                    pushl %edi
  1008a1 <_ppfs_setar+0x2>       56                                    pushl %esi
  1008a2 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1008a3 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1008a7 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1008ab <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1008ae <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1008b4 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1008bb <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  1008ce <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  1008d5 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  1008e8 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008f3 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  1008f7 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  1008fa <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  1008fd <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  1008ff <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100902 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100904 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100907 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100909 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100954 <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  100957 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  10095a <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  10095c <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  10095e <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  100961 <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  100963 <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100993 <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100996 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100998 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  1009b2 <_ppfs_setar+0x113>     5b                                    popl %ebx
  1009b3 <_ppfs_setar+0x114>     5e                                    popl %esi
  1009b4 <_ppfs_setar+0x115>     5f                                    popl %edi
  1009b5 <_ppfs_setar+0x116>     5d                                    popl %ebp
  1009b6 <_ppfs_setar+0x117>     c3                                    retl
  100426 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  10042e <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  100432 <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  100435 <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  10043d <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  100444 <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  100452 <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  100454 <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  10045f <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  100461 <_vfprintf_i+0x127>     41                                    incl %ecx
  100462 <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  100465 <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  100467 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  10046e <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  100470 <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100499 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  10049c <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  1004a2 <_vfprintf_i+0x168>     0f b6 b0 5b 1a 10 00                  movzxl 0x101a5b(%eax),%esi
  1004a9 <_vfprintf_i+0x16f>     bb 57 00 00 00                        movl $0x57,%ebx
  1004ae <_vfprintf_i+0x174>     83 fe 0a                              cmpl $0xa,%esi
  1004b1 <_vfprintf_i+0x177>     75 1f                                 jnzb $0x1f
  1004b3 <_vfprintf_i+0x179>     8b bc 24 a4 00 00 00                  movl 0xa4(%esp),%edi
  1004ba <_vfprintf_i+0x180>     89 f9                                 movl %edi,%ecx
  1004bc <_vfprintf_i+0x182>     83 e1 20                              andl $0x20,%ecx
  1004bf <_vfprintf_i+0x185>     83 f9 01                              cmpl $0x1,%ecx
  1004c2 <_vfprintf_i+0x188>     19 db                                 sbbl %ebx,%ebx
  1004c4 <_vfprintf_i+0x18a>     83 e3 2b                              andl $0x2b,%ebx
  1004c7 <_vfprintf_i+0x18d>     83 c3 2c                              addl $0x2c,%ebx
  1004ca <_vfprintf_i+0x190>     83 e7 40                              andl $0x40,%edi
  1004cd <_vfprintf_i+0x193>     74 03                                 jzb $0x3
  1004d2 <_vfprintf_i+0x198>     83 f8 05                              cmpl $0x5,%eax
  1004d5 <_vfprintf_i+0x19b>     77 18                                 jnbeb $0x18
  1004ef <_vfprintf_i+0x1b5>     f7 de                                 negl %esi
  1004f1 <_vfprintf_i+0x1b7>     bd 0b 00 00 00                        movl $0xb,%ebp
  1004f6 <_vfprintf_i+0x1bc>     83 bc 24 98 00 00 00 00               cmpl $0x0,0x98(%esp)
  1004fe <_vfprintf_i+0x1c4>     b1 20                                 movb $0x20,%cl
  100500 <_vfprintf_i+0x1c6>     79 07                                 jnsb $0x7
  100502 <_vfprintf_i+0x1c8>     8a 8c 24 a8 00 00 00                  movb 0xa8(%esp),%cl
  100509 <_vfprintf_i+0x1cf>     48                                    decl %eax
  10050a <_vfprintf_i+0x1d0>     bf 00 04 00 00                        movl $0x400,%edi
  10050f <_vfprintf_i+0x1d5>     74 11                                 jzb $0x11
  100511 <_vfprintf_i+0x1d7>     8b 44 24 04                           movl 0x4(%esp),%eax
  100515 <_vfprintf_i+0x1db>     8b bc 84 b8 00 00 00                  movl 0xb8(%esp,%eax,4),%edi
  10051c <_vfprintf_i+0x1e2>     81 e7 00 0f 00 00                     andl $0xf00,%edi
  100522 <_vfprintf_i+0x1e8>     88 4c 24 04                           movb %cl,0x4(%esp)
  100526 <_vfprintf_i+0x1ec>     50                                    pushl %eax
  100527 <_vfprintf_i+0x1ed>     56                                    pushl %esi
  100528 <_vfprintf_i+0x1ee>     52                                    pushl %edx
  100529 <_vfprintf_i+0x1ef>     57                                    pushl %edi
  10052a <_vfprintf_i+0x1f0>     e8 73 0b 00 00                        calll $0xb73
  1010a2 <_load_intty+0x0>       83 7c 24 0c 00                        cmpl $0x0,0xc(%esp)
  1010a7 <_load_intty+0x5>       8b 54 24 04                           movl 0x4(%esp),%edx
  1010ab <_load_intty+0x9>       8b 44 24 08                           movl 0x8(%esp),%eax
  1010af <_load_intty+0xd>       78 22                                 jsb $0x22
  1010d3 <_load_intty+0x31>      f6 c6 08                              testb $0x8,%dh
  1010d6 <_load_intty+0x34>      74 06                                 jzb $0x6
  1010de <_load_intty+0x3c>      81 fa 00 01 00 00                     cmpl $0x100,%edx
  1010e4 <_load_intty+0x42>      8b 00                                 movl (%eax),%eax
  1010e6 <_load_intty+0x44>      75 05                                 jnzb $0x5
  1010ed <_load_intty+0x4b>      81 fa 00 02 00 00                     cmpl $0x200,%edx
  1010f3 <_load_intty+0x51>      75 01                                 jnzb $0x1
  1010f6 <_load_intty+0x54>      99                                    cltd
  1010f7 <_load_intty+0x55>      c3                                    retl
  10052f <_vfprintf_i+0x1f5>     89 1c 24                              movl %ebx,(%esp)
  100532 <_vfprintf_i+0x1f8>     56                                    pushl %esi
  100533 <_vfprintf_i+0x1f9>     52                                    pushl %edx
  100534 <_vfprintf_i+0x1fa>     50                                    pushl %eax
  100535 <_vfprintf_i+0x1fb>     8d 84 24 af 00 00 00                  leal 0xaf(%esp),%eax
  10053c <_vfprintf_i+0x202>     50                                    pushl %eax
  10053d <_vfprintf_i+0x203>     e8 f3 0b 00 00                        calll $0xbf3
  101135 <_uintmaxtos+0x0>       55                                    pushl %ebp
  101136 <_uintmaxtos+0x1>       57                                    pushl %edi
  101137 <_uintmaxtos+0x2>       31 ed                                 xorl %ebp,%ebp
  101139 <_uintmaxtos+0x4>       56                                    pushl %esi
  10113a <_uintmaxtos+0x5>       53                                    pushl %ebx
  10113b <_uintmaxtos+0x6>       83 ec 14                              subl $0x14,%esp
  10113e <_uintmaxtos+0x9>       8b 4c 24 34                           movl 0x34(%esp),%ecx
  101142 <_uintmaxtos+0xd>       8b 5c 24 28                           movl 0x28(%esp),%ebx
  101146 <_uintmaxtos+0x11>      8b 74 24 2c                           movl 0x2c(%esp),%esi
  10114a <_uintmaxtos+0x15>      8b 7c 24 30                           movl 0x30(%esp),%edi
  10114e <_uintmaxtos+0x19>      85 c9                                 testl %ecx,%ecx
  101150 <_uintmaxtos+0x1b>      79 11                                 jnsb $0x11
  101152 <_uintmaxtos+0x1d>      f7 d9                                 negl %ecx
  101154 <_uintmaxtos+0x1f>      85 ff                                 testl %edi,%edi
  101156 <_uintmaxtos+0x21>      79 0b                                 jnsb $0xb
  101163 <_uintmaxtos+0x2e>      83 c8 ff                              orl $0xffffffff,%eax
  101166 <_uintmaxtos+0x31>      31 d2                                 xorl %edx,%edx
  101168 <_uintmaxtos+0x33>      c6 03 00                              movb $0x0,(%ebx)
  10116b <_uintmaxtos+0x36>      f7 f1                                 divl %ecx
  10116d <_uintmaxtos+0x38>      89 44 24 08                           movl %eax,0x8(%esp)
  101171 <_uintmaxtos+0x3c>      8d 42 01                              leal 0x1(%edx),%eax
  101174 <_uintmaxtos+0x3f>      39 c8                                 cmpl %ecx,%eax
  101176 <_uintmaxtos+0x41>      89 44 24 04                           movl %eax,0x4(%esp)
  10117a <_uintmaxtos+0x45>      75 0c                                 jnzb $0xc
  101188 <_uintmaxtos+0x53>      89 34 24                              movl %esi,(%esp)
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  1011e6 <_uintmaxtos+0xb1>      85 ed                                 testl %ebp,%ebp
  1011e8 <_uintmaxtos+0xb3>      74 05                                 jzb $0x5
  1011ef <_uintmaxtos+0xba>      83 c4 14                              addl $0x14,%esp
  1011f2 <_uintmaxtos+0xbd>      89 d8                                 movl %ebx,%eax
  1011f4 <_uintmaxtos+0xbf>      5b                                    popl %ebx
  1011f5 <_uintmaxtos+0xc0>      5e                                    popl %esi
  1011f6 <_uintmaxtos+0xc1>      5f                                    popl %edi
  1011f7 <_uintmaxtos+0xc2>      5d                                    popl %ebp
  1011f8 <_uintmaxtos+0xc3>      c3                                    retl
  100542 <_vfprintf_i+0x208>     89 c7                                 movl %eax,%edi
  100544 <_vfprintf_i+0x20a>     8b 84 24 d4 00 00 00                  movl 0xd4(%esp),%eax
  10054b <_vfprintf_i+0x211>     83 c4 20                              addl $0x20,%esp
  10054e <_vfprintf_i+0x214>     8a 4c 24 04                           movb 0x4(%esp),%cl
  100552 <_vfprintf_i+0x218>     83 f8 05                              cmpl $0x5,%eax
  100555 <_vfprintf_i+0x21b>     76 2f                                 jbeb $0x2f
  100557 <_vfprintf_i+0x21d>     80 3f 2d                              cmpb $0x2d,(%edi)
  10055a <_vfprintf_i+0x220>     75 10                                 jnzb $0x10
  10056c <_vfprintf_i+0x232>     8b 94 24 a4 00 00 00                  movl 0xa4(%esp),%edx
  100573 <_vfprintf_i+0x239>     f6 c2 02                              testb $0x2,%dl
  100576 <_vfprintf_i+0x23c>     75 0c                                 jnzb $0xc
  100578 <_vfprintf_i+0x23e>     80 e2 01                              andb $0x1,%dl
  10057b <_vfprintf_i+0x241>     74 09                                 jzb $0x9
  100586 <_vfprintf_i+0x24c>     8b 9c 24 98 00 00 00                  movl 0x98(%esp),%ebx
  10058d <_vfprintf_i+0x253>     8d b4 24 93 00 00 00                  leal 0x93(%esp),%esi
  100594 <_vfprintf_i+0x25a>     29 fe                                 subl %edi,%esi
  100596 <_vfprintf_i+0x25c>     85 db                                 testl %ebx,%ebx
  100598 <_vfprintf_i+0x25e>     79 05                                 jnsb $0x5
  10059a <_vfprintf_i+0x260>     bb 01 00 00 00                        movl $0x1,%ebx
  10059f <_vfprintf_i+0x265>     f6 84 24 a4 00 00 00 10               testb $0x10,0xa4(%esp)
  1005a7 <_vfprintf_i+0x26d>     74 2b                                 jzb $0x2b
  1005d4 <_vfprintf_i+0x29a>     80 3f 30                              cmpb $0x30,(%edi)
  1005d7 <_vfprintf_i+0x29d>     75 27                                 jnzb $0x27
  100600 <_vfprintf_i+0x2c6>     39 f3                                 cmpl %esi,%ebx
  100602 <_vfprintf_i+0x2c8>     0f 86 cf 00 00 00                     jbel $0xcf
  1006d7 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  1006d9 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  1006dc <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  1006df <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  1006ed <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  1006f4 <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006fc <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  1006fe <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100706 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  10070a <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  10070e <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  100711 <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  100715 <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  100723 <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  10072b <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  10072d <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  100731 <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100738 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  10073d <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  100742 <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  100746 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  10074c <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100754 <_vfprintf_i+0x41a>     8d 85 50 1a 10 00                     leal 0x101a50(%ebp),%eax
  10075a <_vfprintf_i+0x420>     52                                    pushl %edx
  10075b <_vfprintf_i+0x421>     52                                    pushl %edx
  10075c <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  100763 <_vfprintf_i+0x429>     50                                    pushl %eax
  100764 <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100d01 <__GI_fputs_+0x0>       56                                    pushl %esi
  100d02 <__GI_fputs_+0x1>       53                                    pushl %ebx
  100d03 <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100d06 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d0a <__GI_fputs_+0x9>       56                                    pushl %esi
  100d0b <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d9c <__GI_strlen+0x0>       57                                    pushl %edi
  100d9d <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100da0 <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100da4 <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100da6 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100da8 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100daa <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dad <__GI_strlen+0x11>      5f                                    popl %edi
  100dae <__GI_strlen+0x12>      c3                                    retl
  100d10 <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100d13 <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100d15 <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100d19 <__GI_fputs_+0x18>      50                                    pushl %eax
  100d1a <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100d1c <__GI_fputs_+0x1b>      56                                    pushl %esi
  100d1d <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100d34 <fwrite_unlo+0x0>       57                                    pushl %edi
  100d35 <fwrite_unlo+0x1>       56                                    pushl %esi
  100d36 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100d37 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d3b <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100d3f <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100d43 <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100d46 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100d48 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100d4a <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100d4c <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100d4e <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100d50 <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d96 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d98 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d99 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d9a <fwrite_unlo+0x66>      5f                                    popl %edi
  100d9b <fwrite_unlo+0x67>      c3                                    retl
  100d22 <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100d24 <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100d27 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100d2a <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100d2c <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100d2e <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100d30 <__GI_fputs_+0x2f>      5a                                    popl %edx
  100d31 <__GI_fputs_+0x30>      5b                                    popl %ebx
  100d32 <__GI_fputs_+0x31>      5e                                    popl %esi
  100d33 <__GI_fputs_+0x32>      c3                                    retl
  100769 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  100770 <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  100772 <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  100777 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10077c <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  10077f <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  100781 <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  100783 <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  100785 <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  1007a4 <_vfprintf_i+0x46a>     50                                    pushl %eax
  1007a5 <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1007ac <_vfprintf_i+0x472>     56                                    pushl %esi
  1007ad <_vfprintf_i+0x473>     57                                    pushl %edi
  1007ae <_vfprintf_i+0x474>     e8 7a 07 00 00                        calll $0x77a
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x31,%es:(%edi)[cnt = 1]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1007b3 <_vfprintf_i+0x479>     83 c4 10                              addl $0x10,%esp
  1007b6 <_vfprintf_i+0x47c>     39 f0                                 cmpl %esi,%eax
  1007b8 <_vfprintf_i+0x47e>     75 18                                 jnzb $0x18
  1007ba <_vfprintf_i+0x480>     eb cb                                 jmpb $0xffffffcb
  100787 <_vfprintf_i+0x44d>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10078b <_vfprintf_i+0x451>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100792 <_vfprintf_i+0x458>     ba 20 00 00 00                        movl $0x20,%edx
  100797 <_vfprintf_i+0x45d>     e8 ff fa ff ff                        calll $0xfffffaff
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10079c <_vfprintf_i+0x462>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1007a0 <_vfprintf_i+0x466>     74 1a                                 jzb $0x1a
  1007bc <_vfprintf_i+0x482>     8b 9c 24 94 00 00 00                  movl 0x94(%esp),%ebx
  1007c3 <_vfprintf_i+0x489>     89 da                                 movl %ebx,%edx
  1007c5 <_vfprintf_i+0x48b>     e9 f0 fb ff ff                        jmpl $0xfffffbf0
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003cb <_vfprintf_i+0x91>      89 de                                 movl %ebx,%esi
  1003cd <_vfprintf_i+0x93>      31 c0                                 xorl %eax,%eax
  1003cf <_vfprintf_i+0x95>      29 d6                                 subl %edx,%esi
  1003d1 <_vfprintf_i+0x97>      85 f6                                 testl %esi,%esi
  1003d3 <_vfprintf_i+0x99>      7e 12                                 jleb $0x12
  1003d5 <_vfprintf_i+0x9b>      50                                    pushl %eax
  1003d6 <_vfprintf_i+0x9c>      ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1003dd <_vfprintf_i+0xa3>      56                                    pushl %esi
  1003de <_vfprintf_i+0xa4>      52                                    pushl %edx
  1003df <_vfprintf_i+0xa5>      e8 49 0b 00 00                        calll $0xb49
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x20,%es:(%edi)[cnt = 3]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1003e4 <_vfprintf_i+0xaa>      83 c4 10                              addl $0x10,%esp
  1003e7 <_vfprintf_i+0xad>      39 f0                                 cmpl %esi,%eax
  1003e9 <_vfprintf_i+0xaf>      0f 85 e3 03 00 00                     jnzl $0x3e3
  1003ef <_vfprintf_i+0xb5>      01 44 24 08                           addl %eax,0x8(%esp)
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1003fc <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100400 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100403 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100409 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100410 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100413 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100417 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  10041c <_vfprintf_i+0xe2>      58                                    popl %eax
  10041d <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100421 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  10089f <_ppfs_setar+0x0>       55                                    pushl %ebp
  1008a0 <_ppfs_setar+0x1>       57                                    pushl %edi
  1008a1 <_ppfs_setar+0x2>       56                                    pushl %esi
  1008a2 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1008a3 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1008a7 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1008ab <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1008ae <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1008b4 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1008bb <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  1008ce <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  1008d5 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  1008e8 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008f3 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  1008f7 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  1008fa <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  1008fd <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  1008ff <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100902 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100904 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100907 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100909 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100954 <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  100957 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  10095a <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  10095c <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  10095e <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  100961 <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  100963 <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100993 <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100996 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100998 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  1009b2 <_ppfs_setar+0x113>     5b                                    popl %ebx
  1009b3 <_ppfs_setar+0x114>     5e                                    popl %esi
  1009b4 <_ppfs_setar+0x115>     5f                                    popl %edi
  1009b5 <_ppfs_setar+0x116>     5d                                    popl %ebp
  1009b6 <_ppfs_setar+0x117>     c3                                    retl
  100426 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  10042e <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  100432 <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  100435 <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  10043d <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  100444 <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  100452 <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  100454 <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  10045f <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  100461 <_vfprintf_i+0x127>     41                                    incl %ecx
  100462 <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  100465 <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  100467 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  10046e <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  100470 <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100499 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  10049c <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  1004a2 <_vfprintf_i+0x168>     0f b6 b0 5b 1a 10 00                  movzxl 0x101a5b(%eax),%esi
  1004a9 <_vfprintf_i+0x16f>     bb 57 00 00 00                        movl $0x57,%ebx
  1004ae <_vfprintf_i+0x174>     83 fe 0a                              cmpl $0xa,%esi
  1004b1 <_vfprintf_i+0x177>     75 1f                                 jnzb $0x1f
  1004b3 <_vfprintf_i+0x179>     8b bc 24 a4 00 00 00                  movl 0xa4(%esp),%edi
  1004ba <_vfprintf_i+0x180>     89 f9                                 movl %edi,%ecx
  1004bc <_vfprintf_i+0x182>     83 e1 20                              andl $0x20,%ecx
  1004bf <_vfprintf_i+0x185>     83 f9 01                              cmpl $0x1,%ecx
  1004c2 <_vfprintf_i+0x188>     19 db                                 sbbl %ebx,%ebx
  1004c4 <_vfprintf_i+0x18a>     83 e3 2b                              andl $0x2b,%ebx
  1004c7 <_vfprintf_i+0x18d>     83 c3 2c                              addl $0x2c,%ebx
  1004ca <_vfprintf_i+0x190>     83 e7 40                              andl $0x40,%edi
  1004cd <_vfprintf_i+0x193>     74 03                                 jzb $0x3
  1004d2 <_vfprintf_i+0x198>     83 f8 05                              cmpl $0x5,%eax
  1004d5 <_vfprintf_i+0x19b>     77 18                                 jnbeb $0x18
  1004ef <_vfprintf_i+0x1b5>     f7 de                                 negl %esi
  1004f1 <_vfprintf_i+0x1b7>     bd 0b 00 00 00                        movl $0xb,%ebp
  1004f6 <_vfprintf_i+0x1bc>     83 bc 24 98 00 00 00 00               cmpl $0x0,0x98(%esp)
  1004fe <_vfprintf_i+0x1c4>     b1 20                                 movb $0x20,%cl
  100500 <_vfprintf_i+0x1c6>     79 07                                 jnsb $0x7
  100502 <_vfprintf_i+0x1c8>     8a 8c 24 a8 00 00 00                  movb 0xa8(%esp),%cl
  100509 <_vfprintf_i+0x1cf>     48                                    decl %eax
  10050a <_vfprintf_i+0x1d0>     bf 00 04 00 00                        movl $0x400,%edi
  10050f <_vfprintf_i+0x1d5>     74 11                                 jzb $0x11
  100511 <_vfprintf_i+0x1d7>     8b 44 24 04                           movl 0x4(%esp),%eax
  100515 <_vfprintf_i+0x1db>     8b bc 84 b8 00 00 00                  movl 0xb8(%esp,%eax,4),%edi
  10051c <_vfprintf_i+0x1e2>     81 e7 00 0f 00 00                     andl $0xf00,%edi
  100522 <_vfprintf_i+0x1e8>     88 4c 24 04                           movb %cl,0x4(%esp)
  100526 <_vfprintf_i+0x1ec>     50                                    pushl %eax
  100527 <_vfprintf_i+0x1ed>     56                                    pushl %esi
  100528 <_vfprintf_i+0x1ee>     52                                    pushl %edx
  100529 <_vfprintf_i+0x1ef>     57                                    pushl %edi
  10052a <_vfprintf_i+0x1f0>     e8 73 0b 00 00                        calll $0xb73
  1010a2 <_load_intty+0x0>       83 7c 24 0c 00                        cmpl $0x0,0xc(%esp)
  1010a7 <_load_intty+0x5>       8b 54 24 04                           movl 0x4(%esp),%edx
  1010ab <_load_intty+0x9>       8b 44 24 08                           movl 0x8(%esp),%eax
  1010af <_load_intty+0xd>       78 22                                 jsb $0x22
  1010d3 <_load_intty+0x31>      f6 c6 08                              testb $0x8,%dh
  1010d6 <_load_intty+0x34>      74 06                                 jzb $0x6
  1010de <_load_intty+0x3c>      81 fa 00 01 00 00                     cmpl $0x100,%edx
  1010e4 <_load_intty+0x42>      8b 00                                 movl (%eax),%eax
  1010e6 <_load_intty+0x44>      75 05                                 jnzb $0x5
  1010ed <_load_intty+0x4b>      81 fa 00 02 00 00                     cmpl $0x200,%edx
  1010f3 <_load_intty+0x51>      75 01                                 jnzb $0x1
  1010f6 <_load_intty+0x54>      99                                    cltd
  1010f7 <_load_intty+0x55>      c3                                    retl
  10052f <_vfprintf_i+0x1f5>     89 1c 24                              movl %ebx,(%esp)
  100532 <_vfprintf_i+0x1f8>     56                                    pushl %esi
  100533 <_vfprintf_i+0x1f9>     52                                    pushl %edx
  100534 <_vfprintf_i+0x1fa>     50                                    pushl %eax
  100535 <_vfprintf_i+0x1fb>     8d 84 24 af 00 00 00                  leal 0xaf(%esp),%eax
  10053c <_vfprintf_i+0x202>     50                                    pushl %eax
  10053d <_vfprintf_i+0x203>     e8 f3 0b 00 00                        calll $0xbf3
  101135 <_uintmaxtos+0x0>       55                                    pushl %ebp
  101136 <_uintmaxtos+0x1>       57                                    pushl %edi
  101137 <_uintmaxtos+0x2>       31 ed                                 xorl %ebp,%ebp
  101139 <_uintmaxtos+0x4>       56                                    pushl %esi
  10113a <_uintmaxtos+0x5>       53                                    pushl %ebx
  10113b <_uintmaxtos+0x6>       83 ec 14                              subl $0x14,%esp
  10113e <_uintmaxtos+0x9>       8b 4c 24 34                           movl 0x34(%esp),%ecx
  101142 <_uintmaxtos+0xd>       8b 5c 24 28                           movl 0x28(%esp),%ebx
  101146 <_uintmaxtos+0x11>      8b 74 24 2c                           movl 0x2c(%esp),%esi
  10114a <_uintmaxtos+0x15>      8b 7c 24 30                           movl 0x30(%esp),%edi
  10114e <_uintmaxtos+0x19>      85 c9                                 testl %ecx,%ecx
  101150 <_uintmaxtos+0x1b>      79 11                                 jnsb $0x11
  101152 <_uintmaxtos+0x1d>      f7 d9                                 negl %ecx
  101154 <_uintmaxtos+0x1f>      85 ff                                 testl %edi,%edi
  101156 <_uintmaxtos+0x21>      79 0b                                 jnsb $0xb
  101163 <_uintmaxtos+0x2e>      83 c8 ff                              orl $0xffffffff,%eax
  101166 <_uintmaxtos+0x31>      31 d2                                 xorl %edx,%edx
  101168 <_uintmaxtos+0x33>      c6 03 00                              movb $0x0,(%ebx)
  10116b <_uintmaxtos+0x36>      f7 f1                                 divl %ecx
  10116d <_uintmaxtos+0x38>      89 44 24 08                           movl %eax,0x8(%esp)
  101171 <_uintmaxtos+0x3c>      8d 42 01                              leal 0x1(%edx),%eax
  101174 <_uintmaxtos+0x3f>      39 c8                                 cmpl %ecx,%eax
  101176 <_uintmaxtos+0x41>      89 44 24 04                           movl %eax,0x4(%esp)
  10117a <_uintmaxtos+0x45>      75 0c                                 jnzb $0xc
  101188 <_uintmaxtos+0x53>      89 34 24                              movl %esi,(%esp)
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  1011e6 <_uintmaxtos+0xb1>      85 ed                                 testl %ebp,%ebp
  1011e8 <_uintmaxtos+0xb3>      74 05                                 jzb $0x5
  1011ef <_uintmaxtos+0xba>      83 c4 14                              addl $0x14,%esp
  1011f2 <_uintmaxtos+0xbd>      89 d8                                 movl %ebx,%eax
  1011f4 <_uintmaxtos+0xbf>      5b                                    popl %ebx
  1011f5 <_uintmaxtos+0xc0>      5e                                    popl %esi
  1011f6 <_uintmaxtos+0xc1>      5f                                    popl %edi
  1011f7 <_uintmaxtos+0xc2>      5d                                    popl %ebp
  1011f8 <_uintmaxtos+0xc3>      c3                                    retl
  100542 <_vfprintf_i+0x208>     89 c7                                 movl %eax,%edi
  100544 <_vfprintf_i+0x20a>     8b 84 24 d4 00 00 00                  movl 0xd4(%esp),%eax
  10054b <_vfprintf_i+0x211>     83 c4 20                              addl $0x20,%esp
  10054e <_vfprintf_i+0x214>     8a 4c 24 04                           movb 0x4(%esp),%cl
  100552 <_vfprintf_i+0x218>     83 f8 05                              cmpl $0x5,%eax
  100555 <_vfprintf_i+0x21b>     76 2f                                 jbeb $0x2f
  100557 <_vfprintf_i+0x21d>     80 3f 2d                              cmpb $0x2d,(%edi)
  10055a <_vfprintf_i+0x220>     75 10                                 jnzb $0x10
  10056c <_vfprintf_i+0x232>     8b 94 24 a4 00 00 00                  movl 0xa4(%esp),%edx
  100573 <_vfprintf_i+0x239>     f6 c2 02                              testb $0x2,%dl
  100576 <_vfprintf_i+0x23c>     75 0c                                 jnzb $0xc
  100578 <_vfprintf_i+0x23e>     80 e2 01                              andb $0x1,%dl
  10057b <_vfprintf_i+0x241>     74 09                                 jzb $0x9
  100586 <_vfprintf_i+0x24c>     8b 9c 24 98 00 00 00                  movl 0x98(%esp),%ebx
  10058d <_vfprintf_i+0x253>     8d b4 24 93 00 00 00                  leal 0x93(%esp),%esi
  100594 <_vfprintf_i+0x25a>     29 fe                                 subl %edi,%esi
  100596 <_vfprintf_i+0x25c>     85 db                                 testl %ebx,%ebx
  100598 <_vfprintf_i+0x25e>     79 05                                 jnsb $0x5
  10059a <_vfprintf_i+0x260>     bb 01 00 00 00                        movl $0x1,%ebx
  10059f <_vfprintf_i+0x265>     f6 84 24 a4 00 00 00 10               testb $0x10,0xa4(%esp)
  1005a7 <_vfprintf_i+0x26d>     74 2b                                 jzb $0x2b
  1005d4 <_vfprintf_i+0x29a>     80 3f 30                              cmpb $0x30,(%edi)
  1005d7 <_vfprintf_i+0x29d>     75 27                                 jnzb $0x27
  100600 <_vfprintf_i+0x2c6>     39 f3                                 cmpl %esi,%ebx
  100602 <_vfprintf_i+0x2c8>     0f 86 cf 00 00 00                     jbel $0xcf
  1006d7 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  1006d9 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  1006dc <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  1006df <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  1006ed <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  1006f4 <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006fc <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  1006fe <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100706 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  10070a <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  10070e <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  100711 <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  100715 <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  100723 <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  10072b <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  10072d <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  100731 <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100738 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  10073d <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  100742 <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  100746 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  10074c <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100754 <_vfprintf_i+0x41a>     8d 85 50 1a 10 00                     leal 0x101a50(%ebp),%eax
  10075a <_vfprintf_i+0x420>     52                                    pushl %edx
  10075b <_vfprintf_i+0x421>     52                                    pushl %edx
  10075c <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  100763 <_vfprintf_i+0x429>     50                                    pushl %eax
  100764 <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100d01 <__GI_fputs_+0x0>       56                                    pushl %esi
  100d02 <__GI_fputs_+0x1>       53                                    pushl %ebx
  100d03 <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100d06 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d0a <__GI_fputs_+0x9>       56                                    pushl %esi
  100d0b <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d9c <__GI_strlen+0x0>       57                                    pushl %edi
  100d9d <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100da0 <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100da4 <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100da6 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100da8 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100daa <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dad <__GI_strlen+0x11>      5f                                    popl %edi
  100dae <__GI_strlen+0x12>      c3                                    retl
  100d10 <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100d13 <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100d15 <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100d19 <__GI_fputs_+0x18>      50                                    pushl %eax
  100d1a <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100d1c <__GI_fputs_+0x1b>      56                                    pushl %esi
  100d1d <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100d34 <fwrite_unlo+0x0>       57                                    pushl %edi
  100d35 <fwrite_unlo+0x1>       56                                    pushl %esi
  100d36 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100d37 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d3b <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100d3f <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100d43 <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100d46 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100d48 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100d4a <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100d4c <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100d4e <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100d50 <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d96 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d98 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d99 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d9a <fwrite_unlo+0x66>      5f                                    popl %edi
  100d9b <fwrite_unlo+0x67>      c3                                    retl
  100d22 <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100d24 <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100d27 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100d2a <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100d2c <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100d2e <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100d30 <__GI_fputs_+0x2f>      5a                                    popl %edx
  100d31 <__GI_fputs_+0x30>      5b                                    popl %ebx
  100d32 <__GI_fputs_+0x31>      5e                                    popl %esi
  100d33 <__GI_fputs_+0x32>      c3                                    retl
  100769 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  100770 <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  100772 <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  100777 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10077c <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  10077f <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  100781 <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  100783 <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  100785 <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  1007a4 <_vfprintf_i+0x46a>     50                                    pushl %eax
  1007a5 <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1007ac <_vfprintf_i+0x472>     56                                    pushl %esi
  1007ad <_vfprintf_i+0x473>     57                                    pushl %edi
  1007ae <_vfprintf_i+0x474>     e8 7a 07 00 00                        calll $0x77a
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x31,%es:(%edi)[cnt = 1]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1007b3 <_vfprintf_i+0x479>     83 c4 10                              addl $0x10,%esp
  1007b6 <_vfprintf_i+0x47c>     39 f0                                 cmpl %esi,%eax
  1007b8 <_vfprintf_i+0x47e>     75 18                                 jnzb $0x18
  1007ba <_vfprintf_i+0x480>     eb cb                                 jmpb $0xffffffcb
  100787 <_vfprintf_i+0x44d>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10078b <_vfprintf_i+0x451>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100792 <_vfprintf_i+0x458>     ba 20 00 00 00                        movl $0x20,%edx
  100797 <_vfprintf_i+0x45d>     e8 ff fa ff ff                        calll $0xfffffaff
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10079c <_vfprintf_i+0x462>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1007a0 <_vfprintf_i+0x466>     74 1a                                 jzb $0x1a
  1007bc <_vfprintf_i+0x482>     8b 9c 24 94 00 00 00                  movl 0x94(%esp),%ebx
  1007c3 <_vfprintf_i+0x489>     89 da                                 movl %ebx,%edx
  1007c5 <_vfprintf_i+0x48b>     e9 f0 fb ff ff                        jmpl $0xfffffbf0
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003cb <_vfprintf_i+0x91>      89 de                                 movl %ebx,%esi
  1003cd <_vfprintf_i+0x93>      31 c0                                 xorl %eax,%eax
  1003cf <_vfprintf_i+0x95>      29 d6                                 subl %edx,%esi
  1003d1 <_vfprintf_i+0x97>      85 f6                                 testl %esi,%esi
  1003d3 <_vfprintf_i+0x99>      7e 12                                 jleb $0x12
  1003d5 <_vfprintf_i+0x9b>      50                                    pushl %eax
  1003d6 <_vfprintf_i+0x9c>      ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1003dd <_vfprintf_i+0xa3>      56                                    pushl %esi
  1003de <_vfprintf_i+0xa4>      52                                    pushl %edx
  1003df <_vfprintf_i+0xa5>      e8 49 0b 00 00                        calll $0xb49
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x20,%es:(%edi)[cnt = 3]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1003e4 <_vfprintf_i+0xaa>      83 c4 10                              addl $0x10,%esp
  1003e7 <_vfprintf_i+0xad>      39 f0                                 cmpl %esi,%eax
  1003e9 <_vfprintf_i+0xaf>      0f 85 e3 03 00 00                     jnzl $0x3e3
  1003ef <_vfprintf_i+0xb5>      01 44 24 08                           addl %eax,0x8(%esp)
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1003fc <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100400 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100403 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100409 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100410 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100413 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100417 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  10041c <_vfprintf_i+0xe2>      58                                    popl %eax
  10041d <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100421 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  10089f <_ppfs_setar+0x0>       55                                    pushl %ebp
  1008a0 <_ppfs_setar+0x1>       57                                    pushl %edi
  1008a1 <_ppfs_setar+0x2>       56                                    pushl %esi
  1008a2 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1008a3 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1008a7 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1008ab <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1008ae <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1008b4 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1008bb <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  1008ce <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  1008d5 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  1008e8 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008f3 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  1008f7 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  1008fa <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  1008fd <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  1008ff <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100902 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100904 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100907 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100909 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100954 <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  100957 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  10095a <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  10095c <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  10095e <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  100961 <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  100963 <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100993 <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100996 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100998 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  1009b2 <_ppfs_setar+0x113>     5b                                    popl %ebx
  1009b3 <_ppfs_setar+0x114>     5e                                    popl %esi
  1009b4 <_ppfs_setar+0x115>     5f                                    popl %edi
  1009b5 <_ppfs_setar+0x116>     5d                                    popl %ebp
  1009b6 <_ppfs_setar+0x117>     c3                                    retl
  100426 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  10042e <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  100432 <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  100435 <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  10043d <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  100444 <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  100452 <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  100454 <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  10045f <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  100461 <_vfprintf_i+0x127>     41                                    incl %ecx
  100462 <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  100465 <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  100467 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  10046e <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  100470 <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100499 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  10049c <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  1004a2 <_vfprintf_i+0x168>     0f b6 b0 5b 1a 10 00                  movzxl 0x101a5b(%eax),%esi
  1004a9 <_vfprintf_i+0x16f>     bb 57 00 00 00                        movl $0x57,%ebx
  1004ae <_vfprintf_i+0x174>     83 fe 0a                              cmpl $0xa,%esi
  1004b1 <_vfprintf_i+0x177>     75 1f                                 jnzb $0x1f
  1004b3 <_vfprintf_i+0x179>     8b bc 24 a4 00 00 00                  movl 0xa4(%esp),%edi
  1004ba <_vfprintf_i+0x180>     89 f9                                 movl %edi,%ecx
  1004bc <_vfprintf_i+0x182>     83 e1 20                              andl $0x20,%ecx
  1004bf <_vfprintf_i+0x185>     83 f9 01                              cmpl $0x1,%ecx
  1004c2 <_vfprintf_i+0x188>     19 db                                 sbbl %ebx,%ebx
  1004c4 <_vfprintf_i+0x18a>     83 e3 2b                              andl $0x2b,%ebx
  1004c7 <_vfprintf_i+0x18d>     83 c3 2c                              addl $0x2c,%ebx
  1004ca <_vfprintf_i+0x190>     83 e7 40                              andl $0x40,%edi
  1004cd <_vfprintf_i+0x193>     74 03                                 jzb $0x3
  1004d2 <_vfprintf_i+0x198>     83 f8 05                              cmpl $0x5,%eax
  1004d5 <_vfprintf_i+0x19b>     77 18                                 jnbeb $0x18
  1004ef <_vfprintf_i+0x1b5>     f7 de                                 negl %esi
  1004f1 <_vfprintf_i+0x1b7>     bd 0b 00 00 00                        movl $0xb,%ebp
  1004f6 <_vfprintf_i+0x1bc>     83 bc 24 98 00 00 00 00               cmpl $0x0,0x98(%esp)
  1004fe <_vfprintf_i+0x1c4>     b1 20                                 movb $0x20,%cl
  100500 <_vfprintf_i+0x1c6>     79 07                                 jnsb $0x7
  100502 <_vfprintf_i+0x1c8>     8a 8c 24 a8 00 00 00                  movb 0xa8(%esp),%cl
  100509 <_vfprintf_i+0x1cf>     48                                    decl %eax
  10050a <_vfprintf_i+0x1d0>     bf 00 04 00 00                        movl $0x400,%edi
  10050f <_vfprintf_i+0x1d5>     74 11                                 jzb $0x11
  100511 <_vfprintf_i+0x1d7>     8b 44 24 04                           movl 0x4(%esp),%eax
  100515 <_vfprintf_i+0x1db>     8b bc 84 b8 00 00 00                  movl 0xb8(%esp,%eax,4),%edi
  10051c <_vfprintf_i+0x1e2>     81 e7 00 0f 00 00                     andl $0xf00,%edi
  100522 <_vfprintf_i+0x1e8>     88 4c 24 04                           movb %cl,0x4(%esp)
  100526 <_vfprintf_i+0x1ec>     50                                    pushl %eax
  100527 <_vfprintf_i+0x1ed>     56                                    pushl %esi
  100528 <_vfprintf_i+0x1ee>     52                                    pushl %edx
  100529 <_vfprintf_i+0x1ef>     57                                    pushl %edi
  10052a <_vfprintf_i+0x1f0>     e8 73 0b 00 00                        calll $0xb73
  1010a2 <_load_intty+0x0>       83 7c 24 0c 00                        cmpl $0x0,0xc(%esp)
  1010a7 <_load_intty+0x5>       8b 54 24 04                           movl 0x4(%esp),%edx
  1010ab <_load_intty+0x9>       8b 44 24 08                           movl 0x8(%esp),%eax
  1010af <_load_intty+0xd>       78 22                                 jsb $0x22
  1010d3 <_load_intty+0x31>      f6 c6 08                              testb $0x8,%dh
  1010d6 <_load_intty+0x34>      74 06                                 jzb $0x6
  1010de <_load_intty+0x3c>      81 fa 00 01 00 00                     cmpl $0x100,%edx
  1010e4 <_load_intty+0x42>      8b 00                                 movl (%eax),%eax
  1010e6 <_load_intty+0x44>      75 05                                 jnzb $0x5
  1010ed <_load_intty+0x4b>      81 fa 00 02 00 00                     cmpl $0x200,%edx
  1010f3 <_load_intty+0x51>      75 01                                 jnzb $0x1
  1010f6 <_load_intty+0x54>      99                                    cltd
  1010f7 <_load_intty+0x55>      c3                                    retl
  10052f <_vfprintf_i+0x1f5>     89 1c 24                              movl %ebx,(%esp)
  100532 <_vfprintf_i+0x1f8>     56                                    pushl %esi
  100533 <_vfprintf_i+0x1f9>     52                                    pushl %edx
  100534 <_vfprintf_i+0x1fa>     50                                    pushl %eax
  100535 <_vfprintf_i+0x1fb>     8d 84 24 af 00 00 00                  leal 0xaf(%esp),%eax
  10053c <_vfprintf_i+0x202>     50                                    pushl %eax
  10053d <_vfprintf_i+0x203>     e8 f3 0b 00 00                        calll $0xbf3
  101135 <_uintmaxtos+0x0>       55                                    pushl %ebp
  101136 <_uintmaxtos+0x1>       57                                    pushl %edi
  101137 <_uintmaxtos+0x2>       31 ed                                 xorl %ebp,%ebp
  101139 <_uintmaxtos+0x4>       56                                    pushl %esi
  10113a <_uintmaxtos+0x5>       53                                    pushl %ebx
  10113b <_uintmaxtos+0x6>       83 ec 14                              subl $0x14,%esp
  10113e <_uintmaxtos+0x9>       8b 4c 24 34                           movl 0x34(%esp),%ecx
  101142 <_uintmaxtos+0xd>       8b 5c 24 28                           movl 0x28(%esp),%ebx
  101146 <_uintmaxtos+0x11>      8b 74 24 2c                           movl 0x2c(%esp),%esi
  10114a <_uintmaxtos+0x15>      8b 7c 24 30                           movl 0x30(%esp),%edi
  10114e <_uintmaxtos+0x19>      85 c9                                 testl %ecx,%ecx
  101150 <_uintmaxtos+0x1b>      79 11                                 jnsb $0x11
  101152 <_uintmaxtos+0x1d>      f7 d9                                 negl %ecx
  101154 <_uintmaxtos+0x1f>      85 ff                                 testl %edi,%edi
  101156 <_uintmaxtos+0x21>      79 0b                                 jnsb $0xb
  101163 <_uintmaxtos+0x2e>      83 c8 ff                              orl $0xffffffff,%eax
  101166 <_uintmaxtos+0x31>      31 d2                                 xorl %edx,%edx
  101168 <_uintmaxtos+0x33>      c6 03 00                              movb $0x0,(%ebx)
  10116b <_uintmaxtos+0x36>      f7 f1                                 divl %ecx
  10116d <_uintmaxtos+0x38>      89 44 24 08                           movl %eax,0x8(%esp)
  101171 <_uintmaxtos+0x3c>      8d 42 01                              leal 0x1(%edx),%eax
  101174 <_uintmaxtos+0x3f>      39 c8                                 cmpl %ecx,%eax
  101176 <_uintmaxtos+0x41>      89 44 24 04                           movl %eax,0x4(%esp)
  10117a <_uintmaxtos+0x45>      75 0c                                 jnzb $0xc
  101188 <_uintmaxtos+0x53>      89 34 24                              movl %esi,(%esp)
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  1011e6 <_uintmaxtos+0xb1>      85 ed                                 testl %ebp,%ebp
  1011e8 <_uintmaxtos+0xb3>      74 05                                 jzb $0x5
  1011ef <_uintmaxtos+0xba>      83 c4 14                              addl $0x14,%esp
  1011f2 <_uintmaxtos+0xbd>      89 d8                                 movl %ebx,%eax
  1011f4 <_uintmaxtos+0xbf>      5b                                    popl %ebx
  1011f5 <_uintmaxtos+0xc0>      5e                                    popl %esi
  1011f6 <_uintmaxtos+0xc1>      5f                                    popl %edi
  1011f7 <_uintmaxtos+0xc2>      5d                                    popl %ebp
  1011f8 <_uintmaxtos+0xc3>      c3                                    retl
  100542 <_vfprintf_i+0x208>     89 c7                                 movl %eax,%edi
  100544 <_vfprintf_i+0x20a>     8b 84 24 d4 00 00 00                  movl 0xd4(%esp),%eax
  10054b <_vfprintf_i+0x211>     83 c4 20                              addl $0x20,%esp
  10054e <_vfprintf_i+0x214>     8a 4c 24 04                           movb 0x4(%esp),%cl
  100552 <_vfprintf_i+0x218>     83 f8 05                              cmpl $0x5,%eax
  100555 <_vfprintf_i+0x21b>     76 2f                                 jbeb $0x2f
  100557 <_vfprintf_i+0x21d>     80 3f 2d                              cmpb $0x2d,(%edi)
  10055a <_vfprintf_i+0x220>     75 10                                 jnzb $0x10
  10056c <_vfprintf_i+0x232>     8b 94 24 a4 00 00 00                  movl 0xa4(%esp),%edx
  100573 <_vfprintf_i+0x239>     f6 c2 02                              testb $0x2,%dl
  100576 <_vfprintf_i+0x23c>     75 0c                                 jnzb $0xc
  100578 <_vfprintf_i+0x23e>     80 e2 01                              andb $0x1,%dl
  10057b <_vfprintf_i+0x241>     74 09                                 jzb $0x9
  100586 <_vfprintf_i+0x24c>     8b 9c 24 98 00 00 00                  movl 0x98(%esp),%ebx
  10058d <_vfprintf_i+0x253>     8d b4 24 93 00 00 00                  leal 0x93(%esp),%esi
  100594 <_vfprintf_i+0x25a>     29 fe                                 subl %edi,%esi
  100596 <_vfprintf_i+0x25c>     85 db                                 testl %ebx,%ebx
  100598 <_vfprintf_i+0x25e>     79 05                                 jnsb $0x5
  10059a <_vfprintf_i+0x260>     bb 01 00 00 00                        movl $0x1,%ebx
  10059f <_vfprintf_i+0x265>     f6 84 24 a4 00 00 00 10               testb $0x10,0xa4(%esp)
  1005a7 <_vfprintf_i+0x26d>     74 2b                                 jzb $0x2b
  1005d4 <_vfprintf_i+0x29a>     80 3f 30                              cmpb $0x30,(%edi)
  1005d7 <_vfprintf_i+0x29d>     75 27                                 jnzb $0x27
  100600 <_vfprintf_i+0x2c6>     39 f3                                 cmpl %esi,%ebx
  100602 <_vfprintf_i+0x2c8>     0f 86 cf 00 00 00                     jbel $0xcf
  1006d7 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  1006d9 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  1006dc <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  1006df <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  1006ed <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  1006f4 <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006fc <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  1006fe <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100706 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  10070a <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  10070e <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  100711 <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  100715 <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  100723 <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  10072b <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  10072d <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  100731 <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100738 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  10073d <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  100742 <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  100746 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  10074c <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100754 <_vfprintf_i+0x41a>     8d 85 50 1a 10 00                     leal 0x101a50(%ebp),%eax
  10075a <_vfprintf_i+0x420>     52                                    pushl %edx
  10075b <_vfprintf_i+0x421>     52                                    pushl %edx
  10075c <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  100763 <_vfprintf_i+0x429>     50                                    pushl %eax
  100764 <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100d01 <__GI_fputs_+0x0>       56                                    pushl %esi
  100d02 <__GI_fputs_+0x1>       53                                    pushl %ebx
  100d03 <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100d06 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d0a <__GI_fputs_+0x9>       56                                    pushl %esi
  100d0b <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d9c <__GI_strlen+0x0>       57                                    pushl %edi
  100d9d <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100da0 <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100da4 <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100da6 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100da8 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100daa <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dad <__GI_strlen+0x11>      5f                                    popl %edi
  100dae <__GI_strlen+0x12>      c3                                    retl
  100d10 <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100d13 <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100d15 <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100d19 <__GI_fputs_+0x18>      50                                    pushl %eax
  100d1a <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100d1c <__GI_fputs_+0x1b>      56                                    pushl %esi
  100d1d <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100d34 <fwrite_unlo+0x0>       57                                    pushl %edi
  100d35 <fwrite_unlo+0x1>       56                                    pushl %esi
  100d36 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100d37 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d3b <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100d3f <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100d43 <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100d46 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100d48 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100d4a <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100d4c <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100d4e <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100d50 <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d96 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d98 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d99 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d9a <fwrite_unlo+0x66>      5f                                    popl %edi
  100d9b <fwrite_unlo+0x67>      c3                                    retl
  100d22 <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100d24 <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100d27 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100d2a <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100d2c <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100d2e <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100d30 <__GI_fputs_+0x2f>      5a                                    popl %edx
  100d31 <__GI_fputs_+0x30>      5b                                    popl %ebx
  100d32 <__GI_fputs_+0x31>      5e                                    popl %esi
  100d33 <__GI_fputs_+0x32>      c3                                    retl
  100769 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  100770 <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  100772 <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  100777 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10077c <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  10077f <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  100781 <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  100783 <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  100785 <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  1007a4 <_vfprintf_i+0x46a>     50                                    pushl %eax
  1007a5 <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1007ac <_vfprintf_i+0x472>     56                                    pushl %esi
  1007ad <_vfprintf_i+0x473>     57                                    pushl %edi
  1007ae <_vfprintf_i+0x474>     e8 7a 07 00 00                        calll $0x77a
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x32,%es:(%edi)[cnt = 1]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1007b3 <_vfprintf_i+0x479>     83 c4 10                              addl $0x10,%esp
  1007b6 <_vfprintf_i+0x47c>     39 f0                                 cmpl %esi,%eax
  1007b8 <_vfprintf_i+0x47e>     75 18                                 jnzb $0x18
  1007ba <_vfprintf_i+0x480>     eb cb                                 jmpb $0xffffffcb
  100787 <_vfprintf_i+0x44d>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10078b <_vfprintf_i+0x451>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100792 <_vfprintf_i+0x458>     ba 20 00 00 00                        movl $0x20,%edx
  100797 <_vfprintf_i+0x45d>     e8 ff fa ff ff                        calll $0xfffffaff
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10079c <_vfprintf_i+0x462>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1007a0 <_vfprintf_i+0x466>     74 1a                                 jzb $0x1a
  1007bc <_vfprintf_i+0x482>     8b 9c 24 94 00 00 00                  movl 0x94(%esp),%ebx
  1007c3 <_vfprintf_i+0x489>     89 da                                 movl %ebx,%edx
  1007c5 <_vfprintf_i+0x48b>     e9 f0 fb ff ff                        jmpl $0xfffffbf0
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003cb <_vfprintf_i+0x91>      89 de                                 movl %ebx,%esi
  1003cd <_vfprintf_i+0x93>      31 c0                                 xorl %eax,%eax
  1003cf <_vfprintf_i+0x95>      29 d6                                 subl %edx,%esi
  1003d1 <_vfprintf_i+0x97>      85 f6                                 testl %esi,%esi
  1003d3 <_vfprintf_i+0x99>      7e 12                                 jleb $0x12
  1003d5 <_vfprintf_i+0x9b>      50                                    pushl %eax
  1003d6 <_vfprintf_i+0x9c>      ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1003dd <_vfprintf_i+0xa3>      56                                    pushl %esi
  1003de <_vfprintf_i+0xa4>      52                                    pushl %edx
  1003df <_vfprintf_i+0xa5>      e8 49 0b 00 00                        calll $0xb49
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0xa,%es:(%edi)[cnt = 1]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1003e4 <_vfprintf_i+0xaa>      83 c4 10                              addl $0x10,%esp
  1003e7 <_vfprintf_i+0xad>      39 f0                                 cmpl %esi,%eax
  1003e9 <_vfprintf_i+0xaf>      0f 85 e3 03 00 00                     jnzl $0x3e3
  1003ef <_vfprintf_i+0xb5>      01 44 24 08                           addl %eax,0x8(%esp)
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1007e6 <_vfprintf_i+0x4ac>     8b 44 24 08                           movl 0x8(%esp),%eax
  1007ea <_vfprintf_i+0x4b0>     81 c4 5c 01 00 00                     addl $0x15c,%esp
  1007f0 <_vfprintf_i+0x4b6>     5b                                    popl %ebx
  1007f1 <_vfprintf_i+0x4b7>     5e                                    popl %esi
  1007f2 <_vfprintf_i+0x4b8>     5f                                    popl %edi
  1007f3 <_vfprintf_i+0x4b9>     5d                                    popl %ebp
  1007f4 <_vfprintf_i+0x4ba>     c3                                    retl
  10016c <__GI_vsnpri+0x71>      83 c4 10                              addl $0x10,%esp
  10016f <__GI_vsnpri+0x74>      85 f6                                 testl %esi,%esi
  100171 <__GI_vsnpri+0x76>      74 16                                 jzb $0x16
  100173 <__GI_vsnpri+0x78>      8b 54 24 10                           movl 0x10(%esp),%edx
  100177 <__GI_vsnpri+0x7c>      3b 54 24 0c                           cmpl 0xc(%esp),%edx
  10017b <__GI_vsnpri+0x80>      75 05                                 jnzb $0x5
  100182 <__GI_vsnpri+0x87>      8b 54 24 10                           movl 0x10(%esp),%edx
  100186 <__GI_vsnpri+0x8b>      c6 02 00                              movb $0x0,(%edx)
  100189 <__GI_vsnpri+0x8e>      83 c4 44                              addl $0x44,%esp
  10018c <__GI_vsnpri+0x91>      5b                                    popl %ebx
  10018d <__GI_vsnpri+0x92>      5e                                    popl %esi
  10018e <__GI_vsnpri+0x93>      c3                                    retl
  1000f7 <__GI_sprint+0x17>      83 c4 1c                              addl $0x1c,%esp
  1000fa <__GI_sprint+0x1a>      c3                                    retl
  100077 <main+0x62>             83 c4 20                              addl $0x20,%esp
  10007a <main+0x65>             83 ec 08                              subl $0x8,%esp
  10007d <main+0x68>             68 1f 1a 10 00                        pushl $0x101a1f
  100082 <main+0x6d>             68 80 29 10 00                        pushl $0x102980
  100087 <main+0x72>             e8 23 0d 00 00                        calll $0xd23
  100daf <__GI_strcol+0x0>       57                                    pushl %edi
  100db0 <__GI_strcol+0x1>       56                                    pushl %esi
  100db1 <__GI_strcol+0x2>       8b 74 24 0c                           movl 0xc(%esp),%esi
  100db5 <__GI_strcol+0x6>       8b 7c 24 10                           movl 0x10(%esp),%edi
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x31,%edi
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x31,%edi
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x2b,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x2b,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x31,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x31,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x3d,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x3d,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x32,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x32,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0xa,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0xa,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100dc1 <__GI_strcol+0x12>      31 c0                                 xorl %eax,%eax
  100dc3 <__GI_strcol+0x14>      eb 04                                 jmpb $0x4
  100dc9 <__GI_strcol+0x1a>      5e                                    popl %esi
  100dca <__GI_strcol+0x1b>      5f                                    popl %edi
  100dcb <__GI_strcol+0x1c>      c3                                    retl
  10008c <main+0x77>             83 c4 10                              addl $0x10,%esp
  10008f <main+0x7a>             85 c0                                 testl %eax,%eax
  100091 <main+0x7c>             74 06                                 jzb $0x6
  100099 <main+0x84>             83 ec 0c                              subl $0xc,%esp
  10009c <main+0x87>             6a 0c                                 pushb $0xc
  10009e <main+0x89>             6a 0a                                 pushb $0xa
  1000a0 <main+0x8b>             6a 02                                 pushb $0x2
  1000a2 <main+0x8d>             68 11 1a 10 00                        pushl $0x101a11
  1000a7 <main+0x92>             68 80 29 10 00                        pushl $0x102980
  1000ac <main+0x97>             e8 2f 00 00 00                        calll $0x2f
  1000e0 <__GI_sprint+0x0>       83 ec 0c                              subl $0xc,%esp
  1000e3 <__GI_sprint+0x3>       8d 44 24 18                           leal 0x18(%esp),%eax
  1000e7 <__GI_sprint+0x7>       50                                    pushl %eax
  1000e8 <__GI_sprint+0x8>       ff 74 24 18                           pushl 0x18(%esp)
  1000ec <__GI_sprint+0xc>       6a ff                                 pushb $0xffffffff
  1000ee <__GI_sprint+0xe>       ff 74 24 1c                           pushl 0x1c(%esp)
  1000f2 <__GI_sprint+0x12>      e8 04 00 00 00                        calll $0x4
  1000fb <__GI_vsnpri+0x0>       56                                    pushl %esi
  1000fc <__GI_vsnpri+0x1>       53                                    pushl %ebx
  1000fd <__GI_vsnpri+0x2>       83 ec 50                              subl $0x50,%esp
  100100 <__GI_vsnpri+0x5>       8d 44 24 34                           leal 0x34(%esp),%eax
  100104 <__GI_vsnpri+0x9>       8b 5c 24 5c                           movl 0x5c(%esp),%ebx
  100108 <__GI_vsnpri+0xd>       c7 44 24 10 fe ff ff ff               movl $0xfffffffe,0x10(%esp)
  100110 <__GI_vsnpri+0x15>      66 c7 44 24 0c d0 00                  movw $0xd0,0xc(%esp)
  100117 <__GI_vsnpri+0x1c>      c7 44 24 30 01 00 00 00               movl $0x1,0x30(%esp)
  10011f <__GI_vsnpri+0x24>      50                                    pushl %eax
  100120 <__GI_vsnpri+0x25>      89 de                                 movl %ebx,%esi
  100122 <__GI_vsnpri+0x27>      e8 68 00 00 00                        calll $0x68
  10018f <__stdio_ini+0x0>       57                                    pushl %edi
  100190 <__stdio_ini+0x1>       56                                    pushl %esi
  100191 <__stdio_ini+0x2>       be 38 1a 10 00                        movl $0x101a38,%esi
  100196 <__stdio_ini+0x7>       8b 7c 24 0c                           movl 0xc(%esp),%edi
  10019a <__stdio_ini+0xb>       a5                                    movsl 0,%es:(%edi)
  10019b <__stdio_ini+0xc>       a5                                    movsl 0,%es:(%edi)
  10019c <__stdio_ini+0xd>       a5                                    movsl 0,%es:(%edi)
  10019d <__stdio_ini+0xe>       a5                                    movsl 0x1,%es:(%edi)
  10019e <__stdio_ini+0xf>       a5                                    movsl 0,%es:(%edi)
  10019f <__stdio_ini+0x10>      a5                                    movsl 0,%es:(%edi)
  1001a0 <__stdio_ini+0x11>      5e                                    popl %esi
  1001a1 <__stdio_ini+0x12>      5f                                    popl %edi
  1001a2 <__stdio_ini+0x13>      c3                                    retl
  100127 <__GI_vsnpri+0x2c>      c7 44 24 30 00 00 00 00               movl $0x0,0x30(%esp)
  10012f <__GI_vsnpri+0x34>      83 c4 10                              addl $0x10,%esp
  100132 <__GI_vsnpri+0x37>      f7 d6                                 notl %esi
  100134 <__GI_vsnpri+0x39>      3b 74 24 54                           cmpl 0x54(%esp),%esi
  100138 <__GI_vsnpri+0x3d>      76 04                                 jbeb $0x4
  10013a <__GI_vsnpri+0x3f>      8b 74 24 54                           movl 0x54(%esp),%esi
  10013e <__GI_vsnpri+0x43>      8d 04 33                              leal (%ebx,%esi,1),%eax
  100141 <__GI_vsnpri+0x46>      89 5c 24 08                           movl %ebx,0x8(%esp)
  100145 <__GI_vsnpri+0x4a>      89 5c 24 10                           movl %ebx,0x10(%esp)
  100149 <__GI_vsnpri+0x4e>      89 5c 24 14                           movl %ebx,0x14(%esp)
  10014d <__GI_vsnpri+0x52>      89 5c 24 18                           movl %ebx,0x18(%esp)
  100151 <__GI_vsnpri+0x56>      89 44 24 0c                           movl %eax,0xc(%esp)
  100155 <__GI_vsnpri+0x5a>      89 44 24 1c                           movl %eax,0x1c(%esp)
  100159 <__GI_vsnpri+0x5e>      50                                    pushl %eax
  10015a <__GI_vsnpri+0x5f>      ff 74 24 60                           pushl 0x60(%esp)
  10015e <__GI_vsnpri+0x63>      ff 74 24 60                           pushl 0x60(%esp)
  100162 <__GI_vsnpri+0x67>      8d 44 24 0c                           leal 0xc(%esp),%eax
  100166 <__GI_vsnpri+0x6b>      50                                    pushl %eax
  100167 <__GI_vsnpri+0x6c>      e8 ce 01 00 00                        calll $0x1ce
  10033a <_vfprintf_i+0x0>       55                                    pushl %ebp
  10033b <_vfprintf_i+0x1>       57                                    pushl %edi
  10033c <_vfprintf_i+0x2>       56                                    pushl %esi
  10033d <_vfprintf_i+0x3>       53                                    pushl %ebx
  10033e <_vfprintf_i+0x4>       81 ec 64 01 00 00                     subl $0x164,%esp
  100344 <_vfprintf_i+0xa>       8b 9c 24 7c 01 00 00                  movl 0x17c(%esp),%ebx
  10034b <_vfprintf_i+0x11>      53                                    pushl %ebx
  10034c <_vfprintf_i+0x12>      8d b4 24 a0 00 00 00                  leal 0xa0(%esp),%esi
  100353 <_vfprintf_i+0x19>      56                                    pushl %esi
  100354 <_vfprintf_i+0x1a>      e8 9c 04 00 00                        calll $0x49c
  1007f5 <_ppfs_init+0x0>        57                                    pushl %edi
  1007f6 <_ppfs_init+0x1>        56                                    pushl %esi
  1007f7 <_ppfs_init+0x2>        b9 2f 00 00 00                        movl $0x2f,%ecx
  1007fc <_ppfs_init+0x7>        53                                    pushl %ebx
  1007fd <_ppfs_init+0x8>        8b 5c 24 10                           movl 0x10(%esp),%ebx
  100801 <_ppfs_init+0xc>        31 c0                                 xorl %eax,%eax
  100803 <_ppfs_init+0xe>        8b 74 24 14                           movl 0x14(%esp),%esi
  100807 <_ppfs_init+0x12>       89 df                                 movl %ebx,%edi
  100809 <_ppfs_init+0x14>       f3 ab                                 rep stosl %eax,%es:(%edi)[cnt = 47]
  10080b <_ppfs_init+0x16>       ff 4b 18                              decl 0x18(%ebx)
  10080e <_ppfs_init+0x19>       8d 53 28                              leal 0x28(%ebx),%edx
  100811 <_ppfs_init+0x1c>       89 33                                 movl %esi,(%ebx)
  100813 <_ppfs_init+0x1e>       b0 09                                 movb $0x9,%al
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100815 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10081b <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  10081e <_ppfs_init+0x29>       48                                    decl %eax
  10081f <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100821 <_ppfs_init+0x2c>       89 f0                                 movl %esi,%eax
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10082e <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100832 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100835 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  100837 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10083a <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10083c <_ppfs_init+0x47>       53                                    pushl %ebx
  10083d <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  100842 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100845 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  100847 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  100849 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10084b <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10082e <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100832 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100835 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  100837 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10083a <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10083c <_ppfs_init+0x47>       53                                    pushl %ebx
  10083d <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  100842 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100845 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  100847 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  100849 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10084b <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10082e <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100832 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100835 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  100837 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10083a <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10083c <_ppfs_init+0x47>       53                                    pushl %ebx
  10083d <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  100842 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100845 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  100847 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  100849 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10084b <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100829 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10082c <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  10084f <_ppfs_init+0x5a>       40                                    incl %eax
  100850 <_ppfs_init+0x5b>       eb d1                                 jmpb $0xffffffd1
  100823 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100825 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100827 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100852 <_ppfs_init+0x5d>       89 33                                 movl %esi,(%ebx)
  100854 <_ppfs_init+0x5f>       31 c0                                 xorl %eax,%eax
  100856 <_ppfs_init+0x61>       eb 03                                 jmpb $0x3
  10085b <_ppfs_init+0x66>       5b                                    popl %ebx
  10085c <_ppfs_init+0x67>       5e                                    popl %esi
  10085d <_ppfs_init+0x68>       5f                                    popl %edi
  10085e <_ppfs_init+0x69>       c3                                    retl
  100359 <_vfprintf_i+0x1f>      83 c4 10                              addl $0x10,%esp
  10035c <_vfprintf_i+0x22>      85 c0                                 testl %eax,%eax
  10035e <_vfprintf_i+0x24>      79 3a                                 jnsb $0x3a
  10039a <_vfprintf_i+0x60>      50                                    pushl %eax
  10039b <_vfprintf_i+0x61>      50                                    pushl %eax
  10039c <_vfprintf_i+0x62>      ff b4 24 80 01 00 00                  pushl 0x180(%esp)
  1003a3 <_vfprintf_i+0x69>      56                                    pushl %esi
  1003a4 <_vfprintf_i+0x6a>      e8 b6 04 00 00                        calll $0x4b6
  10085f <_ppfs_prepa+0x0>       56                                    pushl %esi
  100860 <_ppfs_prepa+0x1>       53                                    pushl %ebx
  100861 <_ppfs_prepa+0x2>       52                                    pushl %edx
  100862 <_ppfs_prepa+0x3>       8b 5c 24 10                           movl 0x10(%esp),%ebx
  100866 <_ppfs_prepa+0x7>       8b 44 24 14                           movl 0x14(%esp),%eax
  10086a <_ppfs_prepa+0xb>       8b 73 18                              movl 0x18(%ebx),%esi
  10086d <_ppfs_prepa+0xe>       89 43 4c                              movl %eax,0x4c(%ebx)
  100870 <_ppfs_prepa+0x11>      85 f6                                 testl %esi,%esi
  100872 <_ppfs_prepa+0x13>      7e 27                                 jleb $0x27
  10089b <_ppfs_prepa+0x3c>      58                                    popl %eax
  10089c <_ppfs_prepa+0x3d>      5b                                    popl %ebx
  10089d <_ppfs_prepa+0x3e>      5e                                    popl %esi
  10089e <_ppfs_prepa+0x3f>      c3                                    retl
  1003a9 <_vfprintf_i+0x6f>      83 c4 10                              addl $0x10,%esp
  1003ac <_vfprintf_i+0x72>      89 da                                 movl %ebx,%edx
  1003ae <_vfprintf_i+0x74>      c7 44 24 08 00 00 00 00               movl $0x0,0x8(%esp)
  1003b6 <_vfprintf_i+0x7c>      89 74 24 0c                           movl %esi,0xc(%esp)
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1003fc <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100400 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100403 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100409 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100410 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100413 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100417 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  10041c <_vfprintf_i+0xe2>      58                                    popl %eax
  10041d <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100421 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  10089f <_ppfs_setar+0x0>       55                                    pushl %ebp
  1008a0 <_ppfs_setar+0x1>       57                                    pushl %edi
  1008a1 <_ppfs_setar+0x2>       56                                    pushl %esi
  1008a2 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1008a3 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1008a7 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1008ab <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1008ae <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1008b4 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1008bb <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  1008ce <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  1008d5 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  1008e8 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008f3 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  1008f7 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  1008fa <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  1008fd <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  1008ff <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100902 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100904 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100907 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100909 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100954 <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  100957 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  10095a <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  10095c <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  10095e <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  100961 <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  100963 <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100993 <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100996 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100998 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  1009b2 <_ppfs_setar+0x113>     5b                                    popl %ebx
  1009b3 <_ppfs_setar+0x114>     5e                                    popl %esi
  1009b4 <_ppfs_setar+0x115>     5f                                    popl %edi
  1009b5 <_ppfs_setar+0x116>     5d                                    popl %ebp
  1009b6 <_ppfs_setar+0x117>     c3                                    retl
  100426 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  10042e <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  100432 <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  100435 <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  10043d <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  100444 <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  100452 <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  100454 <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  10045f <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  100461 <_vfprintf_i+0x127>     41                                    incl %ecx
  100462 <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  100465 <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  100467 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  10046e <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  100470 <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100499 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  10049c <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  1004a2 <_vfprintf_i+0x168>     0f b6 b0 5b 1a 10 00                  movzxl 0x101a5b(%eax),%esi
  1004a9 <_vfprintf_i+0x16f>     bb 57 00 00 00                        movl $0x57,%ebx
  1004ae <_vfprintf_i+0x174>     83 fe 0a                              cmpl $0xa,%esi
  1004b1 <_vfprintf_i+0x177>     75 1f                                 jnzb $0x1f
  1004b3 <_vfprintf_i+0x179>     8b bc 24 a4 00 00 00                  movl 0xa4(%esp),%edi
  1004ba <_vfprintf_i+0x180>     89 f9                                 movl %edi,%ecx
  1004bc <_vfprintf_i+0x182>     83 e1 20                              andl $0x20,%ecx
  1004bf <_vfprintf_i+0x185>     83 f9 01                              cmpl $0x1,%ecx
  1004c2 <_vfprintf_i+0x188>     19 db                                 sbbl %ebx,%ebx
  1004c4 <_vfprintf_i+0x18a>     83 e3 2b                              andl $0x2b,%ebx
  1004c7 <_vfprintf_i+0x18d>     83 c3 2c                              addl $0x2c,%ebx
  1004ca <_vfprintf_i+0x190>     83 e7 40                              andl $0x40,%edi
  1004cd <_vfprintf_i+0x193>     74 03                                 jzb $0x3
  1004d2 <_vfprintf_i+0x198>     83 f8 05                              cmpl $0x5,%eax
  1004d5 <_vfprintf_i+0x19b>     77 18                                 jnbeb $0x18
  1004ef <_vfprintf_i+0x1b5>     f7 de                                 negl %esi
  1004f1 <_vfprintf_i+0x1b7>     bd 0b 00 00 00                        movl $0xb,%ebp
  1004f6 <_vfprintf_i+0x1bc>     83 bc 24 98 00 00 00 00               cmpl $0x0,0x98(%esp)
  1004fe <_vfprintf_i+0x1c4>     b1 20                                 movb $0x20,%cl
  100500 <_vfprintf_i+0x1c6>     79 07                                 jnsb $0x7
  100502 <_vfprintf_i+0x1c8>     8a 8c 24 a8 00 00 00                  movb 0xa8(%esp),%cl
  100509 <_vfprintf_i+0x1cf>     48                                    decl %eax
  10050a <_vfprintf_i+0x1d0>     bf 00 04 00 00                        movl $0x400,%edi
  10050f <_vfprintf_i+0x1d5>     74 11                                 jzb $0x11
  100511 <_vfprintf_i+0x1d7>     8b 44 24 04                           movl 0x4(%esp),%eax
  100515 <_vfprintf_i+0x1db>     8b bc 84 b8 00 00 00                  movl 0xb8(%esp,%eax,4),%edi
  10051c <_vfprintf_i+0x1e2>     81 e7 00 0f 00 00                     andl $0xf00,%edi
  100522 <_vfprintf_i+0x1e8>     88 4c 24 04                           movb %cl,0x4(%esp)
  100526 <_vfprintf_i+0x1ec>     50                                    pushl %eax
  100527 <_vfprintf_i+0x1ed>     56                                    pushl %esi
  100528 <_vfprintf_i+0x1ee>     52                                    pushl %edx
  100529 <_vfprintf_i+0x1ef>     57                                    pushl %edi
  10052a <_vfprintf_i+0x1f0>     e8 73 0b 00 00                        calll $0xb73
  1010a2 <_load_intty+0x0>       83 7c 24 0c 00                        cmpl $0x0,0xc(%esp)
  1010a7 <_load_intty+0x5>       8b 54 24 04                           movl 0x4(%esp),%edx
  1010ab <_load_intty+0x9>       8b 44 24 08                           movl 0x8(%esp),%eax
  1010af <_load_intty+0xd>       78 22                                 jsb $0x22
  1010d3 <_load_intty+0x31>      f6 c6 08                              testb $0x8,%dh
  1010d6 <_load_intty+0x34>      74 06                                 jzb $0x6
  1010de <_load_intty+0x3c>      81 fa 00 01 00 00                     cmpl $0x100,%edx
  1010e4 <_load_intty+0x42>      8b 00                                 movl (%eax),%eax
  1010e6 <_load_intty+0x44>      75 05                                 jnzb $0x5
  1010ed <_load_intty+0x4b>      81 fa 00 02 00 00                     cmpl $0x200,%edx
  1010f3 <_load_intty+0x51>      75 01                                 jnzb $0x1
  1010f6 <_load_intty+0x54>      99                                    cltd
  1010f7 <_load_intty+0x55>      c3                                    retl
  10052f <_vfprintf_i+0x1f5>     89 1c 24                              movl %ebx,(%esp)
  100532 <_vfprintf_i+0x1f8>     56                                    pushl %esi
  100533 <_vfprintf_i+0x1f9>     52                                    pushl %edx
  100534 <_vfprintf_i+0x1fa>     50                                    pushl %eax
  100535 <_vfprintf_i+0x1fb>     8d 84 24 af 00 00 00                  leal 0xaf(%esp),%eax
  10053c <_vfprintf_i+0x202>     50                                    pushl %eax
  10053d <_vfprintf_i+0x203>     e8 f3 0b 00 00                        calll $0xbf3
  101135 <_uintmaxtos+0x0>       55                                    pushl %ebp
  101136 <_uintmaxtos+0x1>       57                                    pushl %edi
  101137 <_uintmaxtos+0x2>       31 ed                                 xorl %ebp,%ebp
  101139 <_uintmaxtos+0x4>       56                                    pushl %esi
  10113a <_uintmaxtos+0x5>       53                                    pushl %ebx
  10113b <_uintmaxtos+0x6>       83 ec 14                              subl $0x14,%esp
  10113e <_uintmaxtos+0x9>       8b 4c 24 34                           movl 0x34(%esp),%ecx
  101142 <_uintmaxtos+0xd>       8b 5c 24 28                           movl 0x28(%esp),%ebx
  101146 <_uintmaxtos+0x11>      8b 74 24 2c                           movl 0x2c(%esp),%esi
  10114a <_uintmaxtos+0x15>      8b 7c 24 30                           movl 0x30(%esp),%edi
  10114e <_uintmaxtos+0x19>      85 c9                                 testl %ecx,%ecx
  101150 <_uintmaxtos+0x1b>      79 11                                 jnsb $0x11
  101152 <_uintmaxtos+0x1d>      f7 d9                                 negl %ecx
  101154 <_uintmaxtos+0x1f>      85 ff                                 testl %edi,%edi
  101156 <_uintmaxtos+0x21>      79 0b                                 jnsb $0xb
  101163 <_uintmaxtos+0x2e>      83 c8 ff                              orl $0xffffffff,%eax
  101166 <_uintmaxtos+0x31>      31 d2                                 xorl %edx,%edx
  101168 <_uintmaxtos+0x33>      c6 03 00                              movb $0x0,(%ebx)
  10116b <_uintmaxtos+0x36>      f7 f1                                 divl %ecx
  10116d <_uintmaxtos+0x38>      89 44 24 08                           movl %eax,0x8(%esp)
  101171 <_uintmaxtos+0x3c>      8d 42 01                              leal 0x1(%edx),%eax
  101174 <_uintmaxtos+0x3f>      39 c8                                 cmpl %ecx,%eax
  101176 <_uintmaxtos+0x41>      89 44 24 04                           movl %eax,0x4(%esp)
  10117a <_uintmaxtos+0x45>      75 0c                                 jnzb $0xc
  101188 <_uintmaxtos+0x53>      89 34 24                              movl %esi,(%esp)
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  1011e6 <_uintmaxtos+0xb1>      85 ed                                 testl %ebp,%ebp
  1011e8 <_uintmaxtos+0xb3>      74 05                                 jzb $0x5
  1011ef <_uintmaxtos+0xba>      83 c4 14                              addl $0x14,%esp
  1011f2 <_uintmaxtos+0xbd>      89 d8                                 movl %ebx,%eax
  1011f4 <_uintmaxtos+0xbf>      5b                                    popl %ebx
  1011f5 <_uintmaxtos+0xc0>      5e                                    popl %esi
  1011f6 <_uintmaxtos+0xc1>      5f                                    popl %edi
  1011f7 <_uintmaxtos+0xc2>      5d                                    popl %ebp
  1011f8 <_uintmaxtos+0xc3>      c3                                    retl
  100542 <_vfprintf_i+0x208>     89 c7                                 movl %eax,%edi
  100544 <_vfprintf_i+0x20a>     8b 84 24 d4 00 00 00                  movl 0xd4(%esp),%eax
  10054b <_vfprintf_i+0x211>     83 c4 20                              addl $0x20,%esp
  10054e <_vfprintf_i+0x214>     8a 4c 24 04                           movb 0x4(%esp),%cl
  100552 <_vfprintf_i+0x218>     83 f8 05                              cmpl $0x5,%eax
  100555 <_vfprintf_i+0x21b>     76 2f                                 jbeb $0x2f
  100557 <_vfprintf_i+0x21d>     80 3f 2d                              cmpb $0x2d,(%edi)
  10055a <_vfprintf_i+0x220>     75 10                                 jnzb $0x10
  10056c <_vfprintf_i+0x232>     8b 94 24 a4 00 00 00                  movl 0xa4(%esp),%edx
  100573 <_vfprintf_i+0x239>     f6 c2 02                              testb $0x2,%dl
  100576 <_vfprintf_i+0x23c>     75 0c                                 jnzb $0xc
  100578 <_vfprintf_i+0x23e>     80 e2 01                              andb $0x1,%dl
  10057b <_vfprintf_i+0x241>     74 09                                 jzb $0x9
  100586 <_vfprintf_i+0x24c>     8b 9c 24 98 00 00 00                  movl 0x98(%esp),%ebx
  10058d <_vfprintf_i+0x253>     8d b4 24 93 00 00 00                  leal 0x93(%esp),%esi
  100594 <_vfprintf_i+0x25a>     29 fe                                 subl %edi,%esi
  100596 <_vfprintf_i+0x25c>     85 db                                 testl %ebx,%ebx
  100598 <_vfprintf_i+0x25e>     79 05                                 jnsb $0x5
  10059a <_vfprintf_i+0x260>     bb 01 00 00 00                        movl $0x1,%ebx
  10059f <_vfprintf_i+0x265>     f6 84 24 a4 00 00 00 10               testb $0x10,0xa4(%esp)
  1005a7 <_vfprintf_i+0x26d>     74 2b                                 jzb $0x2b
  1005d4 <_vfprintf_i+0x29a>     80 3f 30                              cmpb $0x30,(%edi)
  1005d7 <_vfprintf_i+0x29d>     75 27                                 jnzb $0x27
  100600 <_vfprintf_i+0x2c6>     39 f3                                 cmpl %esi,%ebx
  100602 <_vfprintf_i+0x2c8>     0f 86 cf 00 00 00                     jbel $0xcf
  1006d7 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  1006d9 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  1006dc <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  1006df <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  1006ed <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  1006f4 <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006fc <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  1006fe <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100706 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  10070a <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  10070e <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  100711 <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  100715 <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  100723 <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  10072b <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  10072d <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  100731 <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100738 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  10073d <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  100742 <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  100746 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  10074c <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100754 <_vfprintf_i+0x41a>     8d 85 50 1a 10 00                     leal 0x101a50(%ebp),%eax
  10075a <_vfprintf_i+0x420>     52                                    pushl %edx
  10075b <_vfprintf_i+0x421>     52                                    pushl %edx
  10075c <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  100763 <_vfprintf_i+0x429>     50                                    pushl %eax
  100764 <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100d01 <__GI_fputs_+0x0>       56                                    pushl %esi
  100d02 <__GI_fputs_+0x1>       53                                    pushl %ebx
  100d03 <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100d06 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d0a <__GI_fputs_+0x9>       56                                    pushl %esi
  100d0b <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d9c <__GI_strlen+0x0>       57                                    pushl %edi
  100d9d <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100da0 <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100da4 <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100da6 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100da8 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100daa <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dad <__GI_strlen+0x11>      5f                                    popl %edi
  100dae <__GI_strlen+0x12>      c3                                    retl
  100d10 <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100d13 <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100d15 <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100d19 <__GI_fputs_+0x18>      50                                    pushl %eax
  100d1a <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100d1c <__GI_fputs_+0x1b>      56                                    pushl %esi
  100d1d <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100d34 <fwrite_unlo+0x0>       57                                    pushl %edi
  100d35 <fwrite_unlo+0x1>       56                                    pushl %esi
  100d36 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100d37 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d3b <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100d3f <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100d43 <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100d46 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100d48 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100d4a <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100d4c <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100d4e <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100d50 <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d96 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d98 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d99 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d9a <fwrite_unlo+0x66>      5f                                    popl %edi
  100d9b <fwrite_unlo+0x67>      c3                                    retl
  100d22 <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100d24 <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100d27 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100d2a <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100d2c <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100d2e <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100d30 <__GI_fputs_+0x2f>      5a                                    popl %edx
  100d31 <__GI_fputs_+0x30>      5b                                    popl %ebx
  100d32 <__GI_fputs_+0x31>      5e                                    popl %esi
  100d33 <__GI_fputs_+0x32>      c3                                    retl
  100769 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  100770 <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  100772 <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  100777 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10077c <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  10077f <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  100781 <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  100783 <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  100785 <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  1007a4 <_vfprintf_i+0x46a>     50                                    pushl %eax
  1007a5 <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1007ac <_vfprintf_i+0x472>     56                                    pushl %esi
  1007ad <_vfprintf_i+0x473>     57                                    pushl %edi
  1007ae <_vfprintf_i+0x474>     e8 7a 07 00 00                        calll $0x77a
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x32,%es:(%edi)[cnt = 1]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1007b3 <_vfprintf_i+0x479>     83 c4 10                              addl $0x10,%esp
  1007b6 <_vfprintf_i+0x47c>     39 f0                                 cmpl %esi,%eax
  1007b8 <_vfprintf_i+0x47e>     75 18                                 jnzb $0x18
  1007ba <_vfprintf_i+0x480>     eb cb                                 jmpb $0xffffffcb
  100787 <_vfprintf_i+0x44d>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10078b <_vfprintf_i+0x451>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100792 <_vfprintf_i+0x458>     ba 20 00 00 00                        movl $0x20,%edx
  100797 <_vfprintf_i+0x45d>     e8 ff fa ff ff                        calll $0xfffffaff
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10079c <_vfprintf_i+0x462>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1007a0 <_vfprintf_i+0x466>     74 1a                                 jzb $0x1a
  1007bc <_vfprintf_i+0x482>     8b 9c 24 94 00 00 00                  movl 0x94(%esp),%ebx
  1007c3 <_vfprintf_i+0x489>     89 da                                 movl %ebx,%edx
  1007c5 <_vfprintf_i+0x48b>     e9 f0 fb ff ff                        jmpl $0xfffffbf0
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003cb <_vfprintf_i+0x91>      89 de                                 movl %ebx,%esi
  1003cd <_vfprintf_i+0x93>      31 c0                                 xorl %eax,%eax
  1003cf <_vfprintf_i+0x95>      29 d6                                 subl %edx,%esi
  1003d1 <_vfprintf_i+0x97>      85 f6                                 testl %esi,%esi
  1003d3 <_vfprintf_i+0x99>      7e 12                                 jleb $0x12
  1003d5 <_vfprintf_i+0x9b>      50                                    pushl %eax
  1003d6 <_vfprintf_i+0x9c>      ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1003dd <_vfprintf_i+0xa3>      56                                    pushl %esi
  1003de <_vfprintf_i+0xa4>      52                                    pushl %edx
  1003df <_vfprintf_i+0xa5>      e8 49 0b 00 00                        calll $0xb49
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x20,%es:(%edi)[cnt = 3]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1003e4 <_vfprintf_i+0xaa>      83 c4 10                              addl $0x10,%esp
  1003e7 <_vfprintf_i+0xad>      39 f0                                 cmpl %esi,%eax
  1003e9 <_vfprintf_i+0xaf>      0f 85 e3 03 00 00                     jnzl $0x3e3
  1003ef <_vfprintf_i+0xb5>      01 44 24 08                           addl %eax,0x8(%esp)
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1003fc <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100400 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100403 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100409 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100410 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100413 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100417 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  10041c <_vfprintf_i+0xe2>      58                                    popl %eax
  10041d <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100421 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  10089f <_ppfs_setar+0x0>       55                                    pushl %ebp
  1008a0 <_ppfs_setar+0x1>       57                                    pushl %edi
  1008a1 <_ppfs_setar+0x2>       56                                    pushl %esi
  1008a2 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1008a3 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1008a7 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1008ab <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1008ae <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1008b4 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1008bb <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  1008ce <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  1008d5 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  1008e8 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008f3 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  1008f7 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  1008fa <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  1008fd <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  1008ff <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100902 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100904 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100907 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100909 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100954 <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  100957 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  10095a <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  10095c <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  10095e <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  100961 <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  100963 <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100993 <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100996 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100998 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  1009b2 <_ppfs_setar+0x113>     5b                                    popl %ebx
  1009b3 <_ppfs_setar+0x114>     5e                                    popl %esi
  1009b4 <_ppfs_setar+0x115>     5f                                    popl %edi
  1009b5 <_ppfs_setar+0x116>     5d                                    popl %ebp
  1009b6 <_ppfs_setar+0x117>     c3                                    retl
  100426 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  10042e <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  100432 <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  100435 <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  10043d <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  100444 <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  100452 <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  100454 <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  10045f <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  100461 <_vfprintf_i+0x127>     41                                    incl %ecx
  100462 <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  100465 <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  100467 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  10046e <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  100470 <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100499 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  10049c <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  1004a2 <_vfprintf_i+0x168>     0f b6 b0 5b 1a 10 00                  movzxl 0x101a5b(%eax),%esi
  1004a9 <_vfprintf_i+0x16f>     bb 57 00 00 00                        movl $0x57,%ebx
  1004ae <_vfprintf_i+0x174>     83 fe 0a                              cmpl $0xa,%esi
  1004b1 <_vfprintf_i+0x177>     75 1f                                 jnzb $0x1f
  1004b3 <_vfprintf_i+0x179>     8b bc 24 a4 00 00 00                  movl 0xa4(%esp),%edi
  1004ba <_vfprintf_i+0x180>     89 f9                                 movl %edi,%ecx
  1004bc <_vfprintf_i+0x182>     83 e1 20                              andl $0x20,%ecx
  1004bf <_vfprintf_i+0x185>     83 f9 01                              cmpl $0x1,%ecx
  1004c2 <_vfprintf_i+0x188>     19 db                                 sbbl %ebx,%ebx
  1004c4 <_vfprintf_i+0x18a>     83 e3 2b                              andl $0x2b,%ebx
  1004c7 <_vfprintf_i+0x18d>     83 c3 2c                              addl $0x2c,%ebx
  1004ca <_vfprintf_i+0x190>     83 e7 40                              andl $0x40,%edi
  1004cd <_vfprintf_i+0x193>     74 03                                 jzb $0x3
  1004d2 <_vfprintf_i+0x198>     83 f8 05                              cmpl $0x5,%eax
  1004d5 <_vfprintf_i+0x19b>     77 18                                 jnbeb $0x18
  1004ef <_vfprintf_i+0x1b5>     f7 de                                 negl %esi
  1004f1 <_vfprintf_i+0x1b7>     bd 0b 00 00 00                        movl $0xb,%ebp
  1004f6 <_vfprintf_i+0x1bc>     83 bc 24 98 00 00 00 00               cmpl $0x0,0x98(%esp)
  1004fe <_vfprintf_i+0x1c4>     b1 20                                 movb $0x20,%cl
  100500 <_vfprintf_i+0x1c6>     79 07                                 jnsb $0x7
  100502 <_vfprintf_i+0x1c8>     8a 8c 24 a8 00 00 00                  movb 0xa8(%esp),%cl
  100509 <_vfprintf_i+0x1cf>     48                                    decl %eax
  10050a <_vfprintf_i+0x1d0>     bf 00 04 00 00                        movl $0x400,%edi
  10050f <_vfprintf_i+0x1d5>     74 11                                 jzb $0x11
  100511 <_vfprintf_i+0x1d7>     8b 44 24 04                           movl 0x4(%esp),%eax
  100515 <_vfprintf_i+0x1db>     8b bc 84 b8 00 00 00                  movl 0xb8(%esp,%eax,4),%edi
  10051c <_vfprintf_i+0x1e2>     81 e7 00 0f 00 00                     andl $0xf00,%edi
  100522 <_vfprintf_i+0x1e8>     88 4c 24 04                           movb %cl,0x4(%esp)
  100526 <_vfprintf_i+0x1ec>     50                                    pushl %eax
  100527 <_vfprintf_i+0x1ed>     56                                    pushl %esi
  100528 <_vfprintf_i+0x1ee>     52                                    pushl %edx
  100529 <_vfprintf_i+0x1ef>     57                                    pushl %edi
  10052a <_vfprintf_i+0x1f0>     e8 73 0b 00 00                        calll $0xb73
  1010a2 <_load_intty+0x0>       83 7c 24 0c 00                        cmpl $0x0,0xc(%esp)
  1010a7 <_load_intty+0x5>       8b 54 24 04                           movl 0x4(%esp),%edx
  1010ab <_load_intty+0x9>       8b 44 24 08                           movl 0x8(%esp),%eax
  1010af <_load_intty+0xd>       78 22                                 jsb $0x22
  1010d3 <_load_intty+0x31>      f6 c6 08                              testb $0x8,%dh
  1010d6 <_load_intty+0x34>      74 06                                 jzb $0x6
  1010de <_load_intty+0x3c>      81 fa 00 01 00 00                     cmpl $0x100,%edx
  1010e4 <_load_intty+0x42>      8b 00                                 movl (%eax),%eax
  1010e6 <_load_intty+0x44>      75 05                                 jnzb $0x5
  1010ed <_load_intty+0x4b>      81 fa 00 02 00 00                     cmpl $0x200,%edx
  1010f3 <_load_intty+0x51>      75 01                                 jnzb $0x1
  1010f6 <_load_intty+0x54>      99                                    cltd
  1010f7 <_load_intty+0x55>      c3                                    retl
  10052f <_vfprintf_i+0x1f5>     89 1c 24                              movl %ebx,(%esp)
  100532 <_vfprintf_i+0x1f8>     56                                    pushl %esi
  100533 <_vfprintf_i+0x1f9>     52                                    pushl %edx
  100534 <_vfprintf_i+0x1fa>     50                                    pushl %eax
  100535 <_vfprintf_i+0x1fb>     8d 84 24 af 00 00 00                  leal 0xaf(%esp),%eax
  10053c <_vfprintf_i+0x202>     50                                    pushl %eax
  10053d <_vfprintf_i+0x203>     e8 f3 0b 00 00                        calll $0xbf3
  101135 <_uintmaxtos+0x0>       55                                    pushl %ebp
  101136 <_uintmaxtos+0x1>       57                                    pushl %edi
  101137 <_uintmaxtos+0x2>       31 ed                                 xorl %ebp,%ebp
  101139 <_uintmaxtos+0x4>       56                                    pushl %esi
  10113a <_uintmaxtos+0x5>       53                                    pushl %ebx
  10113b <_uintmaxtos+0x6>       83 ec 14                              subl $0x14,%esp
  10113e <_uintmaxtos+0x9>       8b 4c 24 34                           movl 0x34(%esp),%ecx
  101142 <_uintmaxtos+0xd>       8b 5c 24 28                           movl 0x28(%esp),%ebx
  101146 <_uintmaxtos+0x11>      8b 74 24 2c                           movl 0x2c(%esp),%esi
  10114a <_uintmaxtos+0x15>      8b 7c 24 30                           movl 0x30(%esp),%edi
  10114e <_uintmaxtos+0x19>      85 c9                                 testl %ecx,%ecx
  101150 <_uintmaxtos+0x1b>      79 11                                 jnsb $0x11
  101152 <_uintmaxtos+0x1d>      f7 d9                                 negl %ecx
  101154 <_uintmaxtos+0x1f>      85 ff                                 testl %edi,%edi
  101156 <_uintmaxtos+0x21>      79 0b                                 jnsb $0xb
  101163 <_uintmaxtos+0x2e>      83 c8 ff                              orl $0xffffffff,%eax
  101166 <_uintmaxtos+0x31>      31 d2                                 xorl %edx,%edx
  101168 <_uintmaxtos+0x33>      c6 03 00                              movb $0x0,(%ebx)
  10116b <_uintmaxtos+0x36>      f7 f1                                 divl %ecx
  10116d <_uintmaxtos+0x38>      89 44 24 08                           movl %eax,0x8(%esp)
  101171 <_uintmaxtos+0x3c>      8d 42 01                              leal 0x1(%edx),%eax
  101174 <_uintmaxtos+0x3f>      39 c8                                 cmpl %ecx,%eax
  101176 <_uintmaxtos+0x41>      89 44 24 04                           movl %eax,0x4(%esp)
  10117a <_uintmaxtos+0x45>      75 0c                                 jnzb $0xc
  101188 <_uintmaxtos+0x53>      89 34 24                              movl %esi,(%esp)
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  1011e6 <_uintmaxtos+0xb1>      85 ed                                 testl %ebp,%ebp
  1011e8 <_uintmaxtos+0xb3>      74 05                                 jzb $0x5
  1011ef <_uintmaxtos+0xba>      83 c4 14                              addl $0x14,%esp
  1011f2 <_uintmaxtos+0xbd>      89 d8                                 movl %ebx,%eax
  1011f4 <_uintmaxtos+0xbf>      5b                                    popl %ebx
  1011f5 <_uintmaxtos+0xc0>      5e                                    popl %esi
  1011f6 <_uintmaxtos+0xc1>      5f                                    popl %edi
  1011f7 <_uintmaxtos+0xc2>      5d                                    popl %ebp
  1011f8 <_uintmaxtos+0xc3>      c3                                    retl
  100542 <_vfprintf_i+0x208>     89 c7                                 movl %eax,%edi
  100544 <_vfprintf_i+0x20a>     8b 84 24 d4 00 00 00                  movl 0xd4(%esp),%eax
  10054b <_vfprintf_i+0x211>     83 c4 20                              addl $0x20,%esp
  10054e <_vfprintf_i+0x214>     8a 4c 24 04                           movb 0x4(%esp),%cl
  100552 <_vfprintf_i+0x218>     83 f8 05                              cmpl $0x5,%eax
  100555 <_vfprintf_i+0x21b>     76 2f                                 jbeb $0x2f
  100557 <_vfprintf_i+0x21d>     80 3f 2d                              cmpb $0x2d,(%edi)
  10055a <_vfprintf_i+0x220>     75 10                                 jnzb $0x10
  10056c <_vfprintf_i+0x232>     8b 94 24 a4 00 00 00                  movl 0xa4(%esp),%edx
  100573 <_vfprintf_i+0x239>     f6 c2 02                              testb $0x2,%dl
  100576 <_vfprintf_i+0x23c>     75 0c                                 jnzb $0xc
  100578 <_vfprintf_i+0x23e>     80 e2 01                              andb $0x1,%dl
  10057b <_vfprintf_i+0x241>     74 09                                 jzb $0x9
  100586 <_vfprintf_i+0x24c>     8b 9c 24 98 00 00 00                  movl 0x98(%esp),%ebx
  10058d <_vfprintf_i+0x253>     8d b4 24 93 00 00 00                  leal 0x93(%esp),%esi
  100594 <_vfprintf_i+0x25a>     29 fe                                 subl %edi,%esi
  100596 <_vfprintf_i+0x25c>     85 db                                 testl %ebx,%ebx
  100598 <_vfprintf_i+0x25e>     79 05                                 jnsb $0x5
  10059a <_vfprintf_i+0x260>     bb 01 00 00 00                        movl $0x1,%ebx
  10059f <_vfprintf_i+0x265>     f6 84 24 a4 00 00 00 10               testb $0x10,0xa4(%esp)
  1005a7 <_vfprintf_i+0x26d>     74 2b                                 jzb $0x2b
  1005d4 <_vfprintf_i+0x29a>     80 3f 30                              cmpb $0x30,(%edi)
  1005d7 <_vfprintf_i+0x29d>     75 27                                 jnzb $0x27
  100600 <_vfprintf_i+0x2c6>     39 f3                                 cmpl %esi,%ebx
  100602 <_vfprintf_i+0x2c8>     0f 86 cf 00 00 00                     jbel $0xcf
  1006d7 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  1006d9 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  1006dc <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  1006df <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  1006ed <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  1006f4 <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006fc <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  1006fe <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100706 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  10070a <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  10070e <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  100711 <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  100715 <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  100723 <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  10072b <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  10072d <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  100731 <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100738 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  10073d <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  100742 <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  100746 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  10074c <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100754 <_vfprintf_i+0x41a>     8d 85 50 1a 10 00                     leal 0x101a50(%ebp),%eax
  10075a <_vfprintf_i+0x420>     52                                    pushl %edx
  10075b <_vfprintf_i+0x421>     52                                    pushl %edx
  10075c <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  100763 <_vfprintf_i+0x429>     50                                    pushl %eax
  100764 <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100d01 <__GI_fputs_+0x0>       56                                    pushl %esi
  100d02 <__GI_fputs_+0x1>       53                                    pushl %ebx
  100d03 <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100d06 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d0a <__GI_fputs_+0x9>       56                                    pushl %esi
  100d0b <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d9c <__GI_strlen+0x0>       57                                    pushl %edi
  100d9d <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100da0 <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100da4 <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100da6 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100da8 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100daa <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dad <__GI_strlen+0x11>      5f                                    popl %edi
  100dae <__GI_strlen+0x12>      c3                                    retl
  100d10 <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100d13 <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100d15 <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100d19 <__GI_fputs_+0x18>      50                                    pushl %eax
  100d1a <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100d1c <__GI_fputs_+0x1b>      56                                    pushl %esi
  100d1d <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100d34 <fwrite_unlo+0x0>       57                                    pushl %edi
  100d35 <fwrite_unlo+0x1>       56                                    pushl %esi
  100d36 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100d37 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d3b <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100d3f <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100d43 <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100d46 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100d48 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100d4a <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100d4c <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100d4e <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100d50 <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d96 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d98 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d99 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d9a <fwrite_unlo+0x66>      5f                                    popl %edi
  100d9b <fwrite_unlo+0x67>      c3                                    retl
  100d22 <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100d24 <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100d27 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100d2a <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100d2c <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100d2e <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100d30 <__GI_fputs_+0x2f>      5a                                    popl %edx
  100d31 <__GI_fputs_+0x30>      5b                                    popl %ebx
  100d32 <__GI_fputs_+0x31>      5e                                    popl %esi
  100d33 <__GI_fputs_+0x32>      c3                                    retl
  100769 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  100770 <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  100772 <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  100777 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10077c <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  10077f <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  100781 <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  100783 <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  100785 <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  1007a4 <_vfprintf_i+0x46a>     50                                    pushl %eax
  1007a5 <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1007ac <_vfprintf_i+0x472>     56                                    pushl %esi
  1007ad <_vfprintf_i+0x473>     57                                    pushl %edi
  1007ae <_vfprintf_i+0x474>     e8 7a 07 00 00                        calll $0x77a
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x30,%es:(%edi)[cnt = 2]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1007b3 <_vfprintf_i+0x479>     83 c4 10                              addl $0x10,%esp
  1007b6 <_vfprintf_i+0x47c>     39 f0                                 cmpl %esi,%eax
  1007b8 <_vfprintf_i+0x47e>     75 18                                 jnzb $0x18
  1007ba <_vfprintf_i+0x480>     eb cb                                 jmpb $0xffffffcb
  100787 <_vfprintf_i+0x44d>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10078b <_vfprintf_i+0x451>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100792 <_vfprintf_i+0x458>     ba 20 00 00 00                        movl $0x20,%edx
  100797 <_vfprintf_i+0x45d>     e8 ff fa ff ff                        calll $0xfffffaff
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10079c <_vfprintf_i+0x462>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1007a0 <_vfprintf_i+0x466>     74 1a                                 jzb $0x1a
  1007bc <_vfprintf_i+0x482>     8b 9c 24 94 00 00 00                  movl 0x94(%esp),%ebx
  1007c3 <_vfprintf_i+0x489>     89 da                                 movl %ebx,%edx
  1007c5 <_vfprintf_i+0x48b>     e9 f0 fb ff ff                        jmpl $0xfffffbf0
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003cb <_vfprintf_i+0x91>      89 de                                 movl %ebx,%esi
  1003cd <_vfprintf_i+0x93>      31 c0                                 xorl %eax,%eax
  1003cf <_vfprintf_i+0x95>      29 d6                                 subl %edx,%esi
  1003d1 <_vfprintf_i+0x97>      85 f6                                 testl %esi,%esi
  1003d3 <_vfprintf_i+0x99>      7e 12                                 jleb $0x12
  1003d5 <_vfprintf_i+0x9b>      50                                    pushl %eax
  1003d6 <_vfprintf_i+0x9c>      ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1003dd <_vfprintf_i+0xa3>      56                                    pushl %esi
  1003de <_vfprintf_i+0xa4>      52                                    pushl %edx
  1003df <_vfprintf_i+0xa5>      e8 49 0b 00 00                        calll $0xb49
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x20,%es:(%edi)[cnt = 3]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1003e4 <_vfprintf_i+0xaa>      83 c4 10                              addl $0x10,%esp
  1003e7 <_vfprintf_i+0xad>      39 f0                                 cmpl %esi,%eax
  1003e9 <_vfprintf_i+0xaf>      0f 85 e3 03 00 00                     jnzl $0x3e3
  1003ef <_vfprintf_i+0xb5>      01 44 24 08                           addl %eax,0x8(%esp)
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1003fc <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100400 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100403 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100409 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100410 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100413 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100417 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  1009b7 <_ppfs_parse+0x0>       55                                    pushl %ebp
  1009b8 <_ppfs_parse+0x1>       57                                    pushl %edi
  1009b9 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  1009bb <_ppfs_parse+0x4>       56                                    pushl %esi
  1009bc <_ppfs_parse+0x5>       53                                    pushl %ebx
  1009bd <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  1009c0 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  1009c4 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  1009cc <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  1009d4 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  1009dc <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  1009e4 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1009ec <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  1009ef <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  1009f1 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  1009f9 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  1009fc <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  1009fe <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100a02 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100a07 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100a09 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100a1a <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100a1c <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100a1f <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100a21 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100a25 <_ppfs_parse+0x6e>      8b 0d 40 29 10 00                     movl 0x102940,%ecx
  100a2b <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100a2f <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100a57 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100a5b <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100a61 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100a66 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100a8b <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100a8f <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100a91 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100a93 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100aa3 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100aaa <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100aac <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100ab4 <_ppfs_parse+0xfd>      ba c0 27 10 00                        movl $0x1027c0,%edx
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ab9 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100abb <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100abd <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100ac0 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100acd <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100ad1 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100ad5 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100ad7 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100adb <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100add <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100adf <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100ae1 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100ae5 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100ae8 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100aea <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100aec <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100af0 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100af4 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100afd <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100aff <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100b02 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100b38 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100b3a <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100b3c <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100b3f <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100b55 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100b5d <_ppfs_parse+0x1a6>     b9 90 1a 10 00                        movl $0x101a90,%ecx
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b62 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100b64 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100b66 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100b6b <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100b6c <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100b6f <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100b71 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100b73 <_ppfs_parse+0x1bc>     81 eb 90 1a 10 00                     subl $0x101a90,%ebx
  100b79 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100b7a <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100b86 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100b8a <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100b8c <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100b8f <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100b91 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b97 <_ppfs_parse+0x1e0>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100beb <_ppfs_parse+0x234>     41                                    incl %ecx
  100bec <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100bef <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b9c <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b9e <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100ba0 <_ppfs_parse+0x1e9>     81 e9 a8 27 10 00                     subl $0x1027a8,%ecx
  100ba6 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100ba9 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100bb6 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100bb9 <_ppfs_parse+0x202>     bb 83 1a 10 00                        movl $0x101a83,%ebx
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bbe <_ppfs_parse+0x207>     43                                    incl %ebx
  100bbf <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100bc2 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100bc4 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100bc6 <_ppfs_parse+0x20f>     81 eb 84 1a 10 00                     subl $0x101a84,%ebx
  100bcc <_ppfs_parse+0x215>     0f bf b4 1b 74 1a 10 00               movsxl 0x101a74(%ebx,%ebx,1),%esi
  100bd4 <_ppfs_parse+0x21d>     0f bf 8c 1b 64 1a 10 00               movsxl 0x101a64(%ebx,%ebx,1),%ecx
  100bdc <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100bde <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100be0 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100be4 <_ppfs_parse+0x22d>     b9 a8 27 10 00                        movl $0x1027a8,%ecx
  100be9 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100bf1 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100bf4 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100bf7 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100bfb <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100bff <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100c06 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100c09 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100c0c <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100c0f <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100c12 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100c14 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100c1a <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100c1d <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100c20 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100c23 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c27 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100c2a <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100c2c <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100c2f <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100c32 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100c38 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100c3c <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100ce0 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100ce4 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100ce8 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100ceb <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100cee <_ppfs_parse+0x337>     40                                    incl %eax
  100cef <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100cf1 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100cf6 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100cf9 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100cfc <_ppfs_parse+0x345>     5b                                    popl %ebx
  100cfd <_ppfs_parse+0x346>     5e                                    popl %esi
  100cfe <_ppfs_parse+0x347>     5f                                    popl %edi
  100cff <_ppfs_parse+0x348>     5d                                    popl %ebp
  100d00 <_ppfs_parse+0x349>     c3                                    retl
  10041c <_vfprintf_i+0xe2>      58                                    popl %eax
  10041d <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100421 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  10089f <_ppfs_setar+0x0>       55                                    pushl %ebp
  1008a0 <_ppfs_setar+0x1>       57                                    pushl %edi
  1008a1 <_ppfs_setar+0x2>       56                                    pushl %esi
  1008a2 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1008a3 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1008a7 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1008ab <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1008ae <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1008b4 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1008bb <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  1008ce <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  1008d5 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  1008e8 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008f3 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  1008f7 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  1008fa <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  1008fd <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  1008ff <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100902 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100904 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100907 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100909 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100954 <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  100957 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  10095a <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  10095c <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  10095e <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  100961 <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  100963 <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  1008ea <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  1008ed <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100993 <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100996 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100998 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  1009b2 <_ppfs_setar+0x113>     5b                                    popl %ebx
  1009b3 <_ppfs_setar+0x114>     5e                                    popl %esi
  1009b4 <_ppfs_setar+0x115>     5f                                    popl %edi
  1009b5 <_ppfs_setar+0x116>     5d                                    popl %ebp
  1009b6 <_ppfs_setar+0x117>     c3                                    retl
  100426 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  10042e <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  100432 <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  100435 <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  10043d <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  100444 <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  100452 <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  100454 <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  10045f <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  100461 <_vfprintf_i+0x127>     41                                    incl %ecx
  100462 <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  100465 <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  100456 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  10045d <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  100467 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  10046e <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  100470 <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100499 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  10049c <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  1004a2 <_vfprintf_i+0x168>     0f b6 b0 5b 1a 10 00                  movzxl 0x101a5b(%eax),%esi
  1004a9 <_vfprintf_i+0x16f>     bb 57 00 00 00                        movl $0x57,%ebx
  1004ae <_vfprintf_i+0x174>     83 fe 0a                              cmpl $0xa,%esi
  1004b1 <_vfprintf_i+0x177>     75 1f                                 jnzb $0x1f
  1004b3 <_vfprintf_i+0x179>     8b bc 24 a4 00 00 00                  movl 0xa4(%esp),%edi
  1004ba <_vfprintf_i+0x180>     89 f9                                 movl %edi,%ecx
  1004bc <_vfprintf_i+0x182>     83 e1 20                              andl $0x20,%ecx
  1004bf <_vfprintf_i+0x185>     83 f9 01                              cmpl $0x1,%ecx
  1004c2 <_vfprintf_i+0x188>     19 db                                 sbbl %ebx,%ebx
  1004c4 <_vfprintf_i+0x18a>     83 e3 2b                              andl $0x2b,%ebx
  1004c7 <_vfprintf_i+0x18d>     83 c3 2c                              addl $0x2c,%ebx
  1004ca <_vfprintf_i+0x190>     83 e7 40                              andl $0x40,%edi
  1004cd <_vfprintf_i+0x193>     74 03                                 jzb $0x3
  1004d2 <_vfprintf_i+0x198>     83 f8 05                              cmpl $0x5,%eax
  1004d5 <_vfprintf_i+0x19b>     77 18                                 jnbeb $0x18
  1004ef <_vfprintf_i+0x1b5>     f7 de                                 negl %esi
  1004f1 <_vfprintf_i+0x1b7>     bd 0b 00 00 00                        movl $0xb,%ebp
  1004f6 <_vfprintf_i+0x1bc>     83 bc 24 98 00 00 00 00               cmpl $0x0,0x98(%esp)
  1004fe <_vfprintf_i+0x1c4>     b1 20                                 movb $0x20,%cl
  100500 <_vfprintf_i+0x1c6>     79 07                                 jnsb $0x7
  100502 <_vfprintf_i+0x1c8>     8a 8c 24 a8 00 00 00                  movb 0xa8(%esp),%cl
  100509 <_vfprintf_i+0x1cf>     48                                    decl %eax
  10050a <_vfprintf_i+0x1d0>     bf 00 04 00 00                        movl $0x400,%edi
  10050f <_vfprintf_i+0x1d5>     74 11                                 jzb $0x11
  100511 <_vfprintf_i+0x1d7>     8b 44 24 04                           movl 0x4(%esp),%eax
  100515 <_vfprintf_i+0x1db>     8b bc 84 b8 00 00 00                  movl 0xb8(%esp,%eax,4),%edi
  10051c <_vfprintf_i+0x1e2>     81 e7 00 0f 00 00                     andl $0xf00,%edi
  100522 <_vfprintf_i+0x1e8>     88 4c 24 04                           movb %cl,0x4(%esp)
  100526 <_vfprintf_i+0x1ec>     50                                    pushl %eax
  100527 <_vfprintf_i+0x1ed>     56                                    pushl %esi
  100528 <_vfprintf_i+0x1ee>     52                                    pushl %edx
  100529 <_vfprintf_i+0x1ef>     57                                    pushl %edi
  10052a <_vfprintf_i+0x1f0>     e8 73 0b 00 00                        calll $0xb73
  1010a2 <_load_intty+0x0>       83 7c 24 0c 00                        cmpl $0x0,0xc(%esp)
  1010a7 <_load_intty+0x5>       8b 54 24 04                           movl 0x4(%esp),%edx
  1010ab <_load_intty+0x9>       8b 44 24 08                           movl 0x8(%esp),%eax
  1010af <_load_intty+0xd>       78 22                                 jsb $0x22
  1010d3 <_load_intty+0x31>      f6 c6 08                              testb $0x8,%dh
  1010d6 <_load_intty+0x34>      74 06                                 jzb $0x6
  1010de <_load_intty+0x3c>      81 fa 00 01 00 00                     cmpl $0x100,%edx
  1010e4 <_load_intty+0x42>      8b 00                                 movl (%eax),%eax
  1010e6 <_load_intty+0x44>      75 05                                 jnzb $0x5
  1010ed <_load_intty+0x4b>      81 fa 00 02 00 00                     cmpl $0x200,%edx
  1010f3 <_load_intty+0x51>      75 01                                 jnzb $0x1
  1010f6 <_load_intty+0x54>      99                                    cltd
  1010f7 <_load_intty+0x55>      c3                                    retl
  10052f <_vfprintf_i+0x1f5>     89 1c 24                              movl %ebx,(%esp)
  100532 <_vfprintf_i+0x1f8>     56                                    pushl %esi
  100533 <_vfprintf_i+0x1f9>     52                                    pushl %edx
  100534 <_vfprintf_i+0x1fa>     50                                    pushl %eax
  100535 <_vfprintf_i+0x1fb>     8d 84 24 af 00 00 00                  leal 0xaf(%esp),%eax
  10053c <_vfprintf_i+0x202>     50                                    pushl %eax
  10053d <_vfprintf_i+0x203>     e8 f3 0b 00 00                        calll $0xbf3
  101135 <_uintmaxtos+0x0>       55                                    pushl %ebp
  101136 <_uintmaxtos+0x1>       57                                    pushl %edi
  101137 <_uintmaxtos+0x2>       31 ed                                 xorl %ebp,%ebp
  101139 <_uintmaxtos+0x4>       56                                    pushl %esi
  10113a <_uintmaxtos+0x5>       53                                    pushl %ebx
  10113b <_uintmaxtos+0x6>       83 ec 14                              subl $0x14,%esp
  10113e <_uintmaxtos+0x9>       8b 4c 24 34                           movl 0x34(%esp),%ecx
  101142 <_uintmaxtos+0xd>       8b 5c 24 28                           movl 0x28(%esp),%ebx
  101146 <_uintmaxtos+0x11>      8b 74 24 2c                           movl 0x2c(%esp),%esi
  10114a <_uintmaxtos+0x15>      8b 7c 24 30                           movl 0x30(%esp),%edi
  10114e <_uintmaxtos+0x19>      85 c9                                 testl %ecx,%ecx
  101150 <_uintmaxtos+0x1b>      79 11                                 jnsb $0x11
  101152 <_uintmaxtos+0x1d>      f7 d9                                 negl %ecx
  101154 <_uintmaxtos+0x1f>      85 ff                                 testl %edi,%edi
  101156 <_uintmaxtos+0x21>      79 0b                                 jnsb $0xb
  101163 <_uintmaxtos+0x2e>      83 c8 ff                              orl $0xffffffff,%eax
  101166 <_uintmaxtos+0x31>      31 d2                                 xorl %edx,%edx
  101168 <_uintmaxtos+0x33>      c6 03 00                              movb $0x0,(%ebx)
  10116b <_uintmaxtos+0x36>      f7 f1                                 divl %ecx
  10116d <_uintmaxtos+0x38>      89 44 24 08                           movl %eax,0x8(%esp)
  101171 <_uintmaxtos+0x3c>      8d 42 01                              leal 0x1(%edx),%eax
  101174 <_uintmaxtos+0x3f>      39 c8                                 cmpl %ecx,%eax
  101176 <_uintmaxtos+0x41>      89 44 24 04                           movl %eax,0x4(%esp)
  10117a <_uintmaxtos+0x45>      75 0c                                 jnzb $0xc
  101188 <_uintmaxtos+0x53>      89 34 24                              movl %esi,(%esp)
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  10118b <_uintmaxtos+0x56>      85 ff                                 testl %edi,%edi
  10118d <_uintmaxtos+0x58>      74 35                                 jzb $0x35
  1011c4 <_uintmaxtos+0x8f>      8b 04 24                              movl (%esp),%eax
  1011c7 <_uintmaxtos+0x92>      31 d2                                 xorl %edx,%edx
  1011c9 <_uintmaxtos+0x94>      f7 f1                                 divl %ecx
  1011cb <_uintmaxtos+0x96>      89 04 24                              movl %eax,(%esp)
  1011ce <_uintmaxtos+0x99>      4b                                    decl %ebx
  1011cf <_uintmaxtos+0x9a>      88 d0                                 movb %dl,%al
  1011d1 <_uintmaxtos+0x9c>      03 44 24 38                           addl 0x38(%esp),%eax
  1011d5 <_uintmaxtos+0xa0>      83 fa 09                              cmpl $0x9,%edx
  1011d8 <_uintmaxtos+0xa3>      77 03                                 jnbeb $0x3
  1011da <_uintmaxtos+0xa5>      8d 42 30                              leal 0x30(%edx),%eax
  1011dd <_uintmaxtos+0xa8>      88 03                                 movb %al,(%ebx)
  1011df <_uintmaxtos+0xaa>      8b 04 24                              movl (%esp),%eax
  1011e2 <_uintmaxtos+0xad>      09 f8                                 orl %edi,%eax
  1011e4 <_uintmaxtos+0xaf>      75 a5                                 jnzb $0xffffffa5
  1011e6 <_uintmaxtos+0xb1>      85 ed                                 testl %ebp,%ebp
  1011e8 <_uintmaxtos+0xb3>      74 05                                 jzb $0x5
  1011ef <_uintmaxtos+0xba>      83 c4 14                              addl $0x14,%esp
  1011f2 <_uintmaxtos+0xbd>      89 d8                                 movl %ebx,%eax
  1011f4 <_uintmaxtos+0xbf>      5b                                    popl %ebx
  1011f5 <_uintmaxtos+0xc0>      5e                                    popl %esi
  1011f6 <_uintmaxtos+0xc1>      5f                                    popl %edi
  1011f7 <_uintmaxtos+0xc2>      5d                                    popl %ebp
  1011f8 <_uintmaxtos+0xc3>      c3                                    retl
  100542 <_vfprintf_i+0x208>     89 c7                                 movl %eax,%edi
  100544 <_vfprintf_i+0x20a>     8b 84 24 d4 00 00 00                  movl 0xd4(%esp),%eax
  10054b <_vfprintf_i+0x211>     83 c4 20                              addl $0x20,%esp
  10054e <_vfprintf_i+0x214>     8a 4c 24 04                           movb 0x4(%esp),%cl
  100552 <_vfprintf_i+0x218>     83 f8 05                              cmpl $0x5,%eax
  100555 <_vfprintf_i+0x21b>     76 2f                                 jbeb $0x2f
  100557 <_vfprintf_i+0x21d>     80 3f 2d                              cmpb $0x2d,(%edi)
  10055a <_vfprintf_i+0x220>     75 10                                 jnzb $0x10
  10056c <_vfprintf_i+0x232>     8b 94 24 a4 00 00 00                  movl 0xa4(%esp),%edx
  100573 <_vfprintf_i+0x239>     f6 c2 02                              testb $0x2,%dl
  100576 <_vfprintf_i+0x23c>     75 0c                                 jnzb $0xc
  100578 <_vfprintf_i+0x23e>     80 e2 01                              andb $0x1,%dl
  10057b <_vfprintf_i+0x241>     74 09                                 jzb $0x9
  100586 <_vfprintf_i+0x24c>     8b 9c 24 98 00 00 00                  movl 0x98(%esp),%ebx
  10058d <_vfprintf_i+0x253>     8d b4 24 93 00 00 00                  leal 0x93(%esp),%esi
  100594 <_vfprintf_i+0x25a>     29 fe                                 subl %edi,%esi
  100596 <_vfprintf_i+0x25c>     85 db                                 testl %ebx,%ebx
  100598 <_vfprintf_i+0x25e>     79 05                                 jnsb $0x5
  10059a <_vfprintf_i+0x260>     bb 01 00 00 00                        movl $0x1,%ebx
  10059f <_vfprintf_i+0x265>     f6 84 24 a4 00 00 00 10               testb $0x10,0xa4(%esp)
  1005a7 <_vfprintf_i+0x26d>     74 2b                                 jzb $0x2b
  1005d4 <_vfprintf_i+0x29a>     80 3f 30                              cmpb $0x30,(%edi)
  1005d7 <_vfprintf_i+0x29d>     75 27                                 jnzb $0x27
  100600 <_vfprintf_i+0x2c6>     39 f3                                 cmpl %esi,%ebx
  100602 <_vfprintf_i+0x2c8>     0f 86 cf 00 00 00                     jbel $0xcf
  1006d7 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  1006d9 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  1006dc <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  1006df <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  1006ed <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  1006f4 <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006fc <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  1006fe <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100706 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  10070a <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  10070e <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  100711 <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  100715 <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  100723 <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  10072b <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  10072d <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  100731 <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100738 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  10073d <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  100742 <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  100746 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  10074c <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100754 <_vfprintf_i+0x41a>     8d 85 50 1a 10 00                     leal 0x101a50(%ebp),%eax
  10075a <_vfprintf_i+0x420>     52                                    pushl %edx
  10075b <_vfprintf_i+0x421>     52                                    pushl %edx
  10075c <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  100763 <_vfprintf_i+0x429>     50                                    pushl %eax
  100764 <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100d01 <__GI_fputs_+0x0>       56                                    pushl %esi
  100d02 <__GI_fputs_+0x1>       53                                    pushl %ebx
  100d03 <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100d06 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d0a <__GI_fputs_+0x9>       56                                    pushl %esi
  100d0b <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d9c <__GI_strlen+0x0>       57                                    pushl %edi
  100d9d <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100da0 <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100da4 <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100da6 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100da8 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100daa <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100dad <__GI_strlen+0x11>      5f                                    popl %edi
  100dae <__GI_strlen+0x12>      c3                                    retl
  100d10 <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100d13 <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100d15 <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100d19 <__GI_fputs_+0x18>      50                                    pushl %eax
  100d1a <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100d1c <__GI_fputs_+0x1b>      56                                    pushl %esi
  100d1d <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100d34 <fwrite_unlo+0x0>       57                                    pushl %edi
  100d35 <fwrite_unlo+0x1>       56                                    pushl %esi
  100d36 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100d37 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100d3b <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100d3f <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100d43 <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100d46 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100d48 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100d4a <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100d4c <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100d4e <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100d50 <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d96 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d98 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d99 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d9a <fwrite_unlo+0x66>      5f                                    popl %edi
  100d9b <fwrite_unlo+0x67>      c3                                    retl
  100d22 <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100d24 <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100d27 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100d2a <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100d2c <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100d2e <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100d30 <__GI_fputs_+0x2f>      5a                                    popl %edx
  100d31 <__GI_fputs_+0x30>      5b                                    popl %ebx
  100d32 <__GI_fputs_+0x31>      5e                                    popl %esi
  100d33 <__GI_fputs_+0x32>      c3                                    retl
  100769 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  100770 <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  100772 <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  100777 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10077c <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  10077f <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  100781 <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  100783 <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  100785 <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  1007a4 <_vfprintf_i+0x46a>     50                                    pushl %eax
  1007a5 <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1007ac <_vfprintf_i+0x472>     56                                    pushl %esi
  1007ad <_vfprintf_i+0x473>     57                                    pushl %edi
  1007ae <_vfprintf_i+0x474>     e8 7a 07 00 00                        calll $0x77a
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0x32,%es:(%edi)[cnt = 2]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1007b3 <_vfprintf_i+0x479>     83 c4 10                              addl $0x10,%esp
  1007b6 <_vfprintf_i+0x47c>     39 f0                                 cmpl %esi,%eax
  1007b8 <_vfprintf_i+0x47e>     75 18                                 jnzb $0x18
  1007ba <_vfprintf_i+0x480>     eb cb                                 jmpb $0xffffffcb
  100787 <_vfprintf_i+0x44d>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10078b <_vfprintf_i+0x451>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  100792 <_vfprintf_i+0x458>     ba 20 00 00 00                        movl $0x20,%edx
  100797 <_vfprintf_i+0x45d>     e8 ff fa ff ff                        calll $0xfffffaff
  10029b <__stdio_wco+0x2c>      55                                    pushl %ebp
  10029c <__stdio_wco+0x2d>      57                                    pushl %edi
  10029d <__stdio_wco+0x2e>      89 c7                                 movl %eax,%edi
  10029f <__stdio_wco+0x30>      56                                    pushl %esi
  1002a0 <__stdio_wco+0x31>      53                                    pushl %ebx
  1002a1 <__stdio_wco+0x32>      89 ce                                 movl %ecx,%esi
  1002a3 <__stdio_wco+0x34>      89 cb                                 movl %ecx,%ebx
  1002a5 <__stdio_wco+0x36>      83 ec 1c                              subl $0x1c,%esp
  1002a8 <__stdio_wco+0x39>      8d 6c 24 0f                           leal 0xf(%esp),%ebp
  1002ac <__stdio_wco+0x3d>      88 54 24 0f                           movb %dl,0xf(%esp)
  1002b0 <__stdio_wco+0x41>      85 f6                                 testl %esi,%esi
  1002b2 <__stdio_wco+0x43>      74 13                                 jzb $0x13
  1002c7 <__stdio_wco+0x58>      83 c4 1c                              addl $0x1c,%esp
  1002ca <__stdio_wco+0x5b>      89 d8                                 movl %ebx,%eax
  1002cc <__stdio_wco+0x5d>      29 f0                                 subl %esi,%eax
  1002ce <__stdio_wco+0x5f>      5b                                    popl %ebx
  1002cf <__stdio_wco+0x60>      5e                                    popl %esi
  1002d0 <__stdio_wco+0x61>      5f                                    popl %edi
  1002d1 <__stdio_wco+0x62>      5d                                    popl %ebp
  1002d2 <__stdio_wco+0x63>      c3                                    retl
  10079c <_vfprintf_i+0x462>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1007a0 <_vfprintf_i+0x466>     74 1a                                 jzb $0x1a
  1007bc <_vfprintf_i+0x482>     8b 9c 24 94 00 00 00                  movl 0x94(%esp),%ebx
  1007c3 <_vfprintf_i+0x489>     89 da                                 movl %ebx,%edx
  1007c5 <_vfprintf_i+0x48b>     e9 f0 fb ff ff                        jmpl $0xfffffbf0
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c4 <_vfprintf_i+0x8a>      43                                    incl %ebx
  1003c5 <_vfprintf_i+0x8b>      eb f3                                 jmpb $0xfffffff3
  1003ba <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1003bc <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1003be <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1003c0 <_vfprintf_i+0x86>      84 c0                                 testb %al,%al
  1003c2 <_vfprintf_i+0x88>      74 03                                 jzb $0x3
  1003c7 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1003c9 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  1003cb <_vfprintf_i+0x91>      89 de                                 movl %ebx,%esi
  1003cd <_vfprintf_i+0x93>      31 c0                                 xorl %eax,%eax
  1003cf <_vfprintf_i+0x95>      29 d6                                 subl %edx,%esi
  1003d1 <_vfprintf_i+0x97>      85 f6                                 testl %esi,%esi
  1003d3 <_vfprintf_i+0x99>      7e 12                                 jleb $0x12
  1003d5 <_vfprintf_i+0x9b>      50                                    pushl %eax
  1003d6 <_vfprintf_i+0x9c>      ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  1003dd <_vfprintf_i+0xa3>      56                                    pushl %esi
  1003de <_vfprintf_i+0xa4>      52                                    pushl %edx
  1003df <_vfprintf_i+0xa5>      e8 49 0b 00 00                        calll $0xb49
  100f2d <__stdio_fwr+0x0>       55                                    pushl %ebp
  100f2e <__stdio_fwr+0x1>       57                                    pushl %edi
  100f2f <__stdio_fwr+0x2>       56                                    pushl %esi
  100f30 <__stdio_fwr+0x3>       53                                    pushl %ebx
  100f31 <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100f34 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100f38 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100f3c <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100f40 <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100f45 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100f5f <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100f63 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100f66 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100f69 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100f6b <__stdio_fwr+0x3e>      29 d0                                 subl %edx,%eax
  100f6d <__stdio_fwr+0x40>      89 dd                                 movl %ebx,%ebp
  100f6f <__stdio_fwr+0x42>      39 c3                                 cmpl %eax,%ebx
  100f71 <__stdio_fwr+0x44>      76 02                                 jbeb $0x2
  100f75 <__stdio_fwr+0x48>      50                                    pushl %eax
  100f76 <__stdio_fwr+0x49>      55                                    pushl %ebp
  100f77 <__stdio_fwr+0x4a>      57                                    pushl %edi
  100f78 <__stdio_fwr+0x4b>      52                                    pushl %edx
  100f79 <__stdio_fwr+0x4c>      e8 e9 07 00 00                        calll $0x7e9
  101767 <memcpy+0x0>            57                                    pushl %edi
  101768 <memcpy+0x1>            56                                    pushl %esi
  101769 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  10176d <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  101771 <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  101775 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  101777 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  101779 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  10177c <memcpy+0x15>           f3 a5                                 rep shrl $0x2,%ecx[cnt = 0]
  10177e <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  101780 <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  101783 <memcpy+0x1c>           74 02                                 jzb $0x2
  101785 <memcpy+0x1e>           f3 a4                                 rep movsb 0xa,%es:(%edi)[cnt = 1]
  101787 <memcpy+0x20>           5e                                    popl %esi
  101788 <memcpy+0x21>           5f                                    popl %edi
  101789 <memcpy+0x22>           c3                                    retl
  100f7e <__stdio_fwr+0x51>      83 c4 10                              addl $0x10,%esp
  100f81 <__stdio_fwr+0x54>      01 6e 10                              addl %ebp,0x10(%esi)
  100f84 <__stdio_fwr+0x57>      eb 1c                                 jmpb $0x1c
  100fa2 <__stdio_fwr+0x75>      89 d8                                 movl %ebx,%eax
  100fa4 <__stdio_fwr+0x77>      eb 70                                 jmpb $0x70
  101016 <__stdio_fwr+0xe9>      83 c4 0c                              addl $0xc,%esp
  101019 <__stdio_fwr+0xec>      5b                                    popl %ebx
  10101a <__stdio_fwr+0xed>      5e                                    popl %esi
  10101b <__stdio_fwr+0xee>      5f                                    popl %edi
  10101c <__stdio_fwr+0xef>      5d                                    popl %ebp
  10101d <__stdio_fwr+0xf0>      c3                                    retl
  1003e4 <_vfprintf_i+0xaa>      83 c4 10                              addl $0x10,%esp
  1003e7 <_vfprintf_i+0xad>      39 f0                                 cmpl %esi,%eax
  1003e9 <_vfprintf_i+0xaf>      0f 85 e3 03 00 00                     jnzl $0x3e3
  1003ef <_vfprintf_i+0xb5>      01 44 24 08                           addl %eax,0x8(%esp)
  1003f3 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  1003f6 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  1007e6 <_vfprintf_i+0x4ac>     8b 44 24 08                           movl 0x8(%esp),%eax
  1007ea <_vfprintf_i+0x4b0>     81 c4 5c 01 00 00                     addl $0x15c,%esp
  1007f0 <_vfprintf_i+0x4b6>     5b                                    popl %ebx
  1007f1 <_vfprintf_i+0x4b7>     5e                                    popl %esi
  1007f2 <_vfprintf_i+0x4b8>     5f                                    popl %edi
  1007f3 <_vfprintf_i+0x4b9>     5d                                    popl %ebp
  1007f4 <_vfprintf_i+0x4ba>     c3                                    retl
  10016c <__GI_vsnpri+0x71>      83 c4 10                              addl $0x10,%esp
  10016f <__GI_vsnpri+0x74>      85 f6                                 testl %esi,%esi
  100171 <__GI_vsnpri+0x76>      74 16                                 jzb $0x16
  100173 <__GI_vsnpri+0x78>      8b 54 24 10                           movl 0x10(%esp),%edx
  100177 <__GI_vsnpri+0x7c>      3b 54 24 0c                           cmpl 0xc(%esp),%edx
  10017b <__GI_vsnpri+0x80>      75 05                                 jnzb $0x5
  100182 <__GI_vsnpri+0x87>      8b 54 24 10                           movl 0x10(%esp),%edx
  100186 <__GI_vsnpri+0x8b>      c6 02 00                              movb $0x0,(%edx)
  100189 <__GI_vsnpri+0x8e>      83 c4 44                              addl $0x44,%esp
  10018c <__GI_vsnpri+0x91>      5b                                    popl %ebx
  10018d <__GI_vsnpri+0x92>      5e                                    popl %esi
  10018e <__GI_vsnpri+0x93>      c3                                    retl
  1000f7 <__GI_sprint+0x17>      83 c4 1c                              addl $0x1c,%esp
  1000fa <__GI_sprint+0x1a>      c3                                    retl
  1000b1 <main+0x9c>             83 c4 20                              addl $0x20,%esp
  1000b4 <main+0x9f>             83 ec 08                              subl $0x8,%esp
  1000b7 <main+0xa2>             68 2a 1a 10 00                        pushl $0x101a2a
  1000bc <main+0xa7>             68 80 29 10 00                        pushl $0x102980
  1000c1 <main+0xac>             e8 e9 0c 00 00                        calll $0xce9
  100daf <__GI_strcol+0x0>       57                                    pushl %edi
  100db0 <__GI_strcol+0x1>       56                                    pushl %esi
  100db1 <__GI_strcol+0x2>       8b 74 24 0c                           movl 0xc(%esp),%esi
  100db5 <__GI_strcol+0x6>       8b 7c 24 10                           movl 0x10(%esp),%edi
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x32,%edi
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x32,%edi
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x2b,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x2b,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x31,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x31,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x30,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x30,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x3d,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x3d,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x20,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x20,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x31,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x31,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0x32,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0x32,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0xa,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0xa,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100db9 <__GI_strcol+0xa>       ac                                    lodsb 0,%al
  100dba <__GI_strcol+0xb>       ae                                    scasb 0,%al
  100dbb <__GI_strcol+0xc>       75 08                                 jnzb $0x8
  100dbd <__GI_strcol+0xe>       84 c0                                 testb %al,%al
  100dbf <__GI_strcol+0x10>      75 f8                                 jnzb $0xfffffff8
  100dc1 <__GI_strcol+0x12>      31 c0                                 xorl %eax,%eax
  100dc3 <__GI_strcol+0x14>      eb 04                                 jmpb $0x4
  100dc9 <__GI_strcol+0x1a>      5e                                    popl %esi
  100dca <__GI_strcol+0x1b>      5f                                    popl %edi
  100dcb <__GI_strcol+0x1c>      c3                                    retl
  1000c6 <main+0xb1>             83 c4 10                              addl $0x10,%esp
  1000c9 <main+0xb4>             85 c0                                 testl %eax,%eax
  1000cb <main+0xb6>             74 06                                 jzb $0x6
  1000d3 <main+0xbe>             b8 00 00 00 00                        movl $0x0,%eax
  1000d8 <main+0xc3>             8b 4d fc                              movl -0x4(%ebp),%ecx
  1000db <main+0xc6>             c9                                    leave
  1000dc <main+0xc7>             8d 61 fc                              leal -0x4(%ecx),%esp
  1000df <main+0xca>             c3                                    retl
  10000f <UNKNOWN>               b8 00 00 00 00                        movl $0x0,%eax

[1;31mnemu: HIT GOOD TRAP[0m at eip = 0x00100014
  100014 <UNKNOWN>               d6                                    nemu trap (eax = 0)
(nemu) q
