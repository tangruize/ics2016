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
  100026 <main+0x11>             83 ec 08                              subl $0x8,%esp
  100029 <main+0x14>             68 40 19 10 00                        pushl $0x101940
  10002e <main+0x19>             68 4e 19 10 00                        pushl $0x10194e
  100033 <main+0x1e>             e8 23 00 00 00                        calll $0x23
  10005b <__GI_printf+0x0>       83 ec 0c                              subl $0xc,%esp
  10005e <__GI_printf+0x3>       8d 44 24 14                           leal 0x14(%esp),%eax
  100062 <__GI_printf+0x7>       52                                    pushl %edx
  100063 <__GI_printf+0x8>       50                                    pushl %eax
  100064 <__GI_printf+0x9>       ff 74 24 18                           pushl 0x18(%esp)
  100068 <__GI_printf+0xd>       ff 35 44 27 10 00                     pushl 0x102744
  10006e <__GI_printf+0x13>      e8 10 01 00 00                        calll $0x110
  100183 <vfprintf+0x0>          57                                    pushl %edi
  100184 <vfprintf+0x1>          56                                    pushl %esi
  100185 <vfprintf+0x2>          53                                    pushl %ebx
  100186 <vfprintf+0x3>          83 ec 20                              subl $0x20,%esp
  100189 <vfprintf+0x6>          8b 74 24 30                           movl 0x30(%esp),%esi
  10018d <vfprintf+0xa>          83 7e 24 00                           cmpl $0x0,0x24(%esi)
  100191 <vfprintf+0xe>          0f 94 c3                              setzb %bl
  100194 <vfprintf+0x11>         75 1f                                 jnzb $0x1f
  1001b5 <vfprintf+0x32>         f6 06 40                              testb $0x40,(%esi)
  1001b8 <vfprintf+0x35>         74 14                                 jzb $0x14
  1001ce <vfprintf+0x4b>         83 ec 0c                              subl $0xc,%esp
  1001d1 <vfprintf+0x4e>         56                                    pushl %esi
  1001d2 <vfprintf+0x4f>         e8 94 0d 00 00                        calll $0xd94
  100f6b <__stdio_tra+0x0>       53                                    pushl %ebx
  100f6c <__stdio_tra+0x1>       83 ec 08                              subl $0x8,%esp
  100f6f <__stdio_tra+0x4>       8b 5c 24 10                           movl 0x10(%esp),%ebx
  100f73 <__stdio_tra+0x8>       8b 03                                 movl (%ebx),%eax
  100f75 <__stdio_tra+0xa>       a8 20                                 testb $0x20,%al
  100f77 <__stdio_tra+0xc>       74 14                                 jzb $0x14
  100f8d <__stdio_tra+0x22>      a8 03                                 testb $0x3,%al
  100f8f <__stdio_tra+0x24>      74 42                                 jzb $0x42
  100fd3 <__stdio_tra+0x68>      8b 13                                 movl (%ebx),%edx
  100fd5 <__stdio_tra+0x6a>      89 d0                                 movl %edx,%eax
  100fd7 <__stdio_tra+0x6c>      83 c8 40                              orl $0x40,%eax
  100fda <__stdio_tra+0x6f>      66 89 03                              movw %ax,(%ebx)
  100fdd <__stdio_tra+0x72>      31 c0                                 xorl %eax,%eax
  100fdf <__stdio_tra+0x74>      80 e6 03                              andb $0x3,%dh
  100fe2 <__stdio_tra+0x77>      75 06                                 jnzb $0x6
  100fea <__stdio_tra+0x7f>      83 c4 08                              addl $0x8,%esp
  100fed <__stdio_tra+0x82>      5b                                    popl %ebx
  100fee <__stdio_tra+0x83>      c3                                    retl
  1001d7 <vfprintf+0x54>         83 c4 10                              addl $0x10,%esp
  1001da <vfprintf+0x57>         85 c0                                 testl %eax,%eax
  1001dc <vfprintf+0x59>         74 dc                                 jzb $0xffffffdc
  1001ba <vfprintf+0x37>         52                                    pushl %edx
  1001bb <vfprintf+0x38>         ff 74 24 3c                           pushl 0x3c(%esp)
  1001bf <vfprintf+0x3c>         ff 74 24 3c                           pushl 0x3c(%esp)
  1001c3 <vfprintf+0x40>         56                                    pushl %esi
  1001c4 <vfprintf+0x41>         e8 db 00 00 00                        calll $0xdb
  1002a4 <_vfprintf_i+0x0>       55                                    pushl %ebp
  1002a5 <_vfprintf_i+0x1>       57                                    pushl %edi
  1002a6 <_vfprintf_i+0x2>       56                                    pushl %esi
  1002a7 <_vfprintf_i+0x3>       53                                    pushl %ebx
  1002a8 <_vfprintf_i+0x4>       81 ec 64 01 00 00                     subl $0x164,%esp
  1002ae <_vfprintf_i+0xa>       8b 9c 24 7c 01 00 00                  movl 0x17c(%esp),%ebx
  1002b5 <_vfprintf_i+0x11>      53                                    pushl %ebx
  1002b6 <_vfprintf_i+0x12>      8d b4 24 a0 00 00 00                  leal 0xa0(%esp),%esi
  1002bd <_vfprintf_i+0x19>      56                                    pushl %esi
  1002be <_vfprintf_i+0x1a>      e8 9c 04 00 00                        calll $0x49c
  10075f <_ppfs_init+0x0>        57                                    pushl %edi
  100760 <_ppfs_init+0x1>        56                                    pushl %esi
  100761 <_ppfs_init+0x2>        b9 2f 00 00 00                        movl $0x2f,%ecx
  100766 <_ppfs_init+0x7>        53                                    pushl %ebx
  100767 <_ppfs_init+0x8>        8b 5c 24 10                           movl 0x10(%esp),%ebx
  10076b <_ppfs_init+0xc>        31 c0                                 xorl %eax,%eax
  10076d <_ppfs_init+0xe>        8b 74 24 14                           movl 0x14(%esp),%esi
  100771 <_ppfs_init+0x12>       89 df                                 movl %ebx,%edi
  100773 <_ppfs_init+0x14>       f3 ab                                 rep stosl %eax,%es:(%edi)[cnt = 47]
  100775 <_ppfs_init+0x16>       ff 4b 18                              decl 0x18(%ebx)
  100778 <_ppfs_init+0x19>       8d 53 28                              leal 0x28(%ebx),%edx
  10077b <_ppfs_init+0x1c>       89 33                                 movl %esi,(%ebx)
  10077d <_ppfs_init+0x1e>       b0 09                                 movb $0x9,%al
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10077f <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  100785 <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100788 <_ppfs_init+0x29>       48                                    decl %eax
  100789 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  10078b <_ppfs_init+0x2c>       89 f0                                 movl %esi,%eax
  10078d <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  10078f <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100791 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100793 <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  100796 <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  100798 <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  10079c <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  10079f <_ppfs_init+0x40>       74 16                                 jzb $0x16
  1007a1 <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  1007a4 <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  1007a6 <_ppfs_init+0x47>       53                                    pushl %ebx
  1007a7 <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  100921 <_ppfs_parse+0x0>       55                                    pushl %ebp
  100922 <_ppfs_parse+0x1>       57                                    pushl %edi
  100923 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  100925 <_ppfs_parse+0x4>       56                                    pushl %esi
  100926 <_ppfs_parse+0x5>       53                                    pushl %ebx
  100927 <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  10092a <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  10092e <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  100936 <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  10093e <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  100946 <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  10094e <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100956 <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  100959 <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  10095b <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  100963 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  100966 <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  100968 <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  10096c <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100971 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100973 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100984 <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100986 <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100989 <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  10098b <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  10098f <_ppfs_parse+0x6e>      8b 0d 40 28 10 00                     movl 0x102840,%ecx
  100995 <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100999 <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  1009c1 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  1009c5 <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  1009cb <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  1009d0 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  1009f5 <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  1009f9 <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  1009fb <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  1009fd <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100a0d <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100a14 <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100a16 <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100a1e <_ppfs_parse+0xfd>      ba c4 26 10 00                        movl $0x1026c4,%edx
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a4b <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100a4f <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100a52 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100a54 <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100a56 <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100a5a <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100a5e <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100a67 <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100a69 <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100a6c <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100aa2 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100aa4 <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100aa6 <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100aa9 <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100abf <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100ac7 <_ppfs_parse+0x1a6>     b9 b8 19 10 00                        movl $0x1019b8,%ecx
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100adb <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100add <_ppfs_parse+0x1bc>     81 eb b8 19 10 00                     subl $0x1019b8,%ebx
  100ae3 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100ae4 <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100af0 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100af4 <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100af6 <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100af9 <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100afb <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b01 <_ppfs_parse+0x1e0>     b9 ac 26 10 00                        movl $0x1026ac,%ecx
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b0a <_ppfs_parse+0x1e9>     81 e9 ac 26 10 00                     subl $0x1026ac,%ecx
  100b10 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100b13 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100b15 <_ppfs_parse+0x1f4>     f7 c5 00 04 00 00                     testl $0x400,%ebp
  100b1b <_ppfs_parse+0x1fa>     74 03                                 jzb $0x3
  100b20 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100b23 <_ppfs_parse+0x202>     bb ab 19 10 00                        movl $0x1019ab,%ebx
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b30 <_ppfs_parse+0x20f>     81 eb ac 19 10 00                     subl $0x1019ac,%ebx
  100b36 <_ppfs_parse+0x215>     0f bf b4 1b 9c 19 10 00               movsxl 0x10199c(%ebx,%ebx,1),%esi
  100b3e <_ppfs_parse+0x21d>     0f bf 8c 1b 8c 19 10 00               movsxl 0x10198c(%ebx,%ebx,1),%ecx
  100b46 <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100b48 <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100b4a <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100b4e <_ppfs_parse+0x22d>     b9 ac 26 10 00                        movl $0x1026ac,%ecx
  100b53 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100b5b <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100b5e <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100b61 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100b65 <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100b69 <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100b70 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100b73 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100b76 <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100b79 <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100b7c <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100b7e <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100b84 <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100b87 <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100b8a <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100b8d <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100b91 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100b94 <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100b96 <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100b99 <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100b9c <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100ba2 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100ba6 <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100c4a <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100c4e <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100c52 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100c55 <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100c58 <_ppfs_parse+0x337>     40                                    incl %eax
  100c59 <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100c5b <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100c60 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100c63 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100c66 <_ppfs_parse+0x345>     5b                                    popl %ebx
  100c67 <_ppfs_parse+0x346>     5e                                    popl %esi
  100c68 <_ppfs_parse+0x347>     5f                                    popl %edi
  100c69 <_ppfs_parse+0x348>     5d                                    popl %ebp
  100c6a <_ppfs_parse+0x349>     c3                                    retl
  1007ac <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  1007af <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  1007b1 <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  1007b3 <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  1007b5 <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  10078d <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  10078f <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  100791 <_ppfs_init+0x32>       74 29                                 jzb $0x29
  1007bc <_ppfs_init+0x5d>       89 33                                 movl %esi,(%ebx)
  1007be <_ppfs_init+0x5f>       31 c0                                 xorl %eax,%eax
  1007c0 <_ppfs_init+0x61>       eb 03                                 jmpb $0x3
  1007c5 <_ppfs_init+0x66>       5b                                    popl %ebx
  1007c6 <_ppfs_init+0x67>       5e                                    popl %esi
  1007c7 <_ppfs_init+0x68>       5f                                    popl %edi
  1007c8 <_ppfs_init+0x69>       c3                                    retl
  1002c3 <_vfprintf_i+0x1f>      83 c4 10                              addl $0x10,%esp
  1002c6 <_vfprintf_i+0x22>      85 c0                                 testl %eax,%eax
  1002c8 <_vfprintf_i+0x24>      79 3a                                 jnsb $0x3a
  100304 <_vfprintf_i+0x60>      50                                    pushl %eax
  100305 <_vfprintf_i+0x61>      50                                    pushl %eax
  100306 <_vfprintf_i+0x62>      ff b4 24 80 01 00 00                  pushl 0x180(%esp)
  10030d <_vfprintf_i+0x69>      56                                    pushl %esi
  10030e <_vfprintf_i+0x6a>      e8 b6 04 00 00                        calll $0x4b6
  1007c9 <_ppfs_prepa+0x0>       56                                    pushl %esi
  1007ca <_ppfs_prepa+0x1>       53                                    pushl %ebx
  1007cb <_ppfs_prepa+0x2>       52                                    pushl %edx
  1007cc <_ppfs_prepa+0x3>       8b 5c 24 10                           movl 0x10(%esp),%ebx
  1007d0 <_ppfs_prepa+0x7>       8b 44 24 14                           movl 0x14(%esp),%eax
  1007d4 <_ppfs_prepa+0xb>       8b 73 18                              movl 0x18(%ebx),%esi
  1007d7 <_ppfs_prepa+0xe>       89 43 4c                              movl %eax,0x4c(%ebx)
  1007da <_ppfs_prepa+0x11>      85 f6                                 testl %esi,%esi
  1007dc <_ppfs_prepa+0x13>      7e 27                                 jleb $0x27
  100805 <_ppfs_prepa+0x3c>      58                                    popl %eax
  100806 <_ppfs_prepa+0x3d>      5b                                    popl %ebx
  100807 <_ppfs_prepa+0x3e>      5e                                    popl %esi
  100808 <_ppfs_prepa+0x3f>      c3                                    retl
  100313 <_vfprintf_i+0x6f>      83 c4 10                              addl $0x10,%esp
  100316 <_vfprintf_i+0x72>      89 da                                 movl %ebx,%edx
  100318 <_vfprintf_i+0x74>      c7 44 24 08 00 00 00 00               movl $0x0,0x8(%esp)
  100320 <_vfprintf_i+0x7c>      89 74 24 0c                           movl %esi,0xc(%esp)
  100324 <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  100326 <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  100328 <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  100331 <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  100333 <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  10035d <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  100360 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  100366 <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  10036a <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  10036d <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  100373 <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  10037a <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  10037d <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  100381 <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  100921 <_ppfs_parse+0x0>       55                                    pushl %ebp
  100922 <_ppfs_parse+0x1>       57                                    pushl %edi
  100923 <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  100925 <_ppfs_parse+0x4>       56                                    pushl %esi
  100926 <_ppfs_parse+0x5>       53                                    pushl %ebx
  100927 <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  10092a <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  10092e <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  100936 <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  10093e <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  100946 <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  10094e <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100956 <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  100959 <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  10095b <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  100963 <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  100966 <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  100968 <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  10096c <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100971 <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100973 <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100984 <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100986 <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100989 <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  10098b <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  10098f <_ppfs_parse+0x6e>      8b 0d 40 28 10 00                     movl 0x102840,%ecx
  100995 <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100999 <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  1009c1 <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  1009c5 <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  1009cb <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  1009d0 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  1009f5 <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  1009f9 <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  1009fb <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  1009fd <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100a0d <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100a14 <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100a16 <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100a1e <_ppfs_parse+0xfd>      ba c4 26 10 00                        movl $0x1026c4,%edx
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a23 <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100a25 <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100a27 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100a2a <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100a37 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100a3b <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100a3f <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100a41 <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100a45 <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100a47 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100a49 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100a4b <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100a4f <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100a52 <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100a54 <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100a56 <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100a5a <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100a5e <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100a67 <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100a69 <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100a6c <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100aa2 <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100aa4 <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100aa6 <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100aa9 <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100abf <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100ac7 <_ppfs_parse+0x1a6>     b9 b8 19 10 00                        movl $0x1019b8,%ecx
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100acc <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100ace <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100ad0 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100ad5 <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100ad6 <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ad9 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100adb <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100add <_ppfs_parse+0x1bc>     81 eb b8 19 10 00                     subl $0x1019b8,%ebx
  100ae3 <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100ae4 <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100af0 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100af4 <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100af6 <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100af9 <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100afb <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100b01 <_ppfs_parse+0x1e0>     b9 ac 26 10 00                        movl $0x1026ac,%ecx
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b55 <_ppfs_parse+0x234>     41                                    incl %ecx
  100b56 <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100b59 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100b06 <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100b08 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100b0a <_ppfs_parse+0x1e9>     81 e9 ac 26 10 00                     subl $0x1026ac,%ecx
  100b10 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100b13 <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100b15 <_ppfs_parse+0x1f4>     f7 c5 00 04 00 00                     testl $0x400,%ebp
  100b1b <_ppfs_parse+0x1fa>     74 03                                 jzb $0x3
  100b20 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100b23 <_ppfs_parse+0x202>     bb ab 19 10 00                        movl $0x1019ab,%ebx
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b28 <_ppfs_parse+0x207>     43                                    incl %ebx
  100b29 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100b2c <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100b2e <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100b30 <_ppfs_parse+0x20f>     81 eb ac 19 10 00                     subl $0x1019ac,%ebx
  100b36 <_ppfs_parse+0x215>     0f bf b4 1b 9c 19 10 00               movsxl 0x10199c(%ebx,%ebx,1),%esi
  100b3e <_ppfs_parse+0x21d>     0f bf 8c 1b 8c 19 10 00               movsxl 0x10198c(%ebx,%ebx,1),%ecx
  100b46 <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100b48 <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100b4a <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100b4e <_ppfs_parse+0x22d>     b9 ac 26 10 00                        movl $0x1026ac,%ecx
  100b53 <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100b5b <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100b5e <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100b61 <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100b65 <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100b69 <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100b70 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100b73 <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100b76 <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100b79 <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100b7c <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100b7e <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100b84 <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100b87 <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100b8a <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100b8d <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100b91 <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100b94 <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100b96 <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100b99 <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100b9c <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100ba2 <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100ba6 <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100c4a <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100c4e <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100c52 <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100c55 <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100c58 <_ppfs_parse+0x337>     40                                    incl %eax
  100c59 <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100c5b <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100c60 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100c63 <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100c66 <_ppfs_parse+0x345>     5b                                    popl %ebx
  100c67 <_ppfs_parse+0x346>     5e                                    popl %esi
  100c68 <_ppfs_parse+0x347>     5f                                    popl %edi
  100c69 <_ppfs_parse+0x348>     5d                                    popl %ebp
  100c6a <_ppfs_parse+0x349>     c3                                    retl
  100386 <_vfprintf_i+0xe2>      58                                    popl %eax
  100387 <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  10038b <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  100809 <_ppfs_setar+0x0>       55                                    pushl %ebp
  10080a <_ppfs_setar+0x1>       57                                    pushl %edi
  10080b <_ppfs_setar+0x2>       56                                    pushl %esi
  10080c <_ppfs_setar+0x3>       53                                    pushl %ebx
  10080d <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  100811 <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  100815 <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  100818 <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  10081e <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  100825 <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  100838 <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  10083f <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  100852 <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  100854 <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  100857 <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  10085d <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  100861 <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  100864 <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  100867 <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  100869 <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  10086c <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  10086e <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100871 <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100873 <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100875 <_ppfs_setar+0x6c>      83 fb 07                              cmpl $0x7,%ebx
  100878 <_ppfs_setar+0x6f>      75 44                                 jnzb $0x44
  1008be <_ppfs_setar+0xb5>      8d 5a 04                              leal 0x4(%edx),%ebx
  1008c1 <_ppfs_setar+0xb8>      89 58 4c                              movl %ebx,0x4c(%eax)
  1008c4 <_ppfs_setar+0xbb>      8b 12                                 movl (%edx),%edx
  1008c6 <_ppfs_setar+0xbd>      89 11                                 movl %edx,(%ecx)
  1008c8 <_ppfs_setar+0xbf>      83 c1 0c                              addl $0xc,%ecx
  1008cb <_ppfs_setar+0xc2>      89 f2                                 movl %esi,%edx
  1008cd <_ppfs_setar+0xc4>      eb 85                                 jmpb $0xffffff85
  100854 <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  100857 <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  1008fd <_ppfs_setar+0xf4>      8b 50 08                              movl 0x8(%eax),%edx
  100900 <_ppfs_setar+0xf7>      85 d2                                 testl %edx,%edx
  100902 <_ppfs_setar+0xf9>      79 18                                 jnsb $0x18
  10091c <_ppfs_setar+0x113>     5b                                    popl %ebx
  10091d <_ppfs_setar+0x114>     5e                                    popl %esi
  10091e <_ppfs_setar+0x115>     5f                                    popl %edi
  10091f <_ppfs_setar+0x116>     5d                                    popl %ebp
  100920 <_ppfs_setar+0x117>     c3                                    retl
  100390 <_vfprintf_i+0xec>      0f b6 84 24 ca 00 00 00               movzxl 0xca(%esp),%eax
  100398 <_vfprintf_i+0xf4>      89 44 24 14                           movl %eax,0x14(%esp)
  10039c <_vfprintf_i+0xf8>      83 c4 10                              addl $0x10,%esp
  10039f <_vfprintf_i+0xfb>      83 bc 24 ac 00 00 00 00               cmpl $0x0,0xac(%esp)
  1003a7 <_vfprintf_i+0x103>     8d 84 24 e4 00 00 00                  leal 0xe4(%esp),%eax
  1003ae <_vfprintf_i+0x10a>     7e 0c                                 jleb $0xc
  1003bc <_vfprintf_i+0x118>     31 d2                                 xorl %edx,%edx
  1003be <_vfprintf_i+0x11a>     31 c9                                 xorl %ecx,%ecx
  1003c0 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  1003c7 <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  1003c9 <_vfprintf_i+0x125>     89 c2                                 movl %eax,%edx
  1003cb <_vfprintf_i+0x127>     41                                    incl %ecx
  1003cc <_vfprintf_i+0x128>     83 c0 0c                              addl $0xc,%eax
  1003cf <_vfprintf_i+0x12b>     eb ef                                 jmpb $0xffffffef
  1003c0 <_vfprintf_i+0x11c>     3b 8c 24 b0 00 00 00                  cmpl 0xb0(%esp),%ecx
  1003c7 <_vfprintf_i+0x123>     7d 08                                 jnlb $0x8
  1003d1 <_vfprintf_i+0x12d>     8b 84 24 b4 00 00 00                  movl 0xb4(%esp),%eax
  1003d8 <_vfprintf_i+0x134>     85 c0                                 testl %eax,%eax
  1003da <_vfprintf_i+0x136>     75 27                                 jnzb $0x27
  100403 <_vfprintf_i+0x15f>     83 f8 07                              cmpl $0x7,%eax
  100406 <_vfprintf_i+0x162>     0f 87 6d 01 00 00                     jnbel $0x16d
  100579 <_vfprintf_i+0x2d5>     83 f8 0f                              cmpl $0xf,%eax
  10057c <_vfprintf_i+0x2d8>     77 45                                 jnbeb $0x45
  1005c3 <_vfprintf_i+0x31f>     8d 48 ee                              leal -0x12(%eax),%ecx
  1005c6 <_vfprintf_i+0x322>     83 f9 01                              cmpl $0x1,%ecx
  1005c9 <_vfprintf_i+0x325>     0f 87 6d 01 00 00                     jnbel $0x16d
  1005cf <_vfprintf_i+0x32b>     83 f8 13                              cmpl $0x13,%eax
  1005d2 <_vfprintf_i+0x32e>     75 4e                                 jnzb $0x4e
  1005d4 <_vfprintf_i+0x330>     8b 3a                                 movl (%edx),%edi
  1005d6 <_vfprintf_i+0x332>     85 ff                                 testl %edi,%edi
  1005d8 <_vfprintf_i+0x334>     74 27                                 jzb $0x27
  1005da <_vfprintf_i+0x336>     8b 94 24 98 00 00 00                  movl 0x98(%esp),%edx
  1005e1 <_vfprintf_i+0x33d>     83 c8 ff                              orl $0xffffffff,%eax
  1005e4 <_vfprintf_i+0x340>     85 d2                                 testl %edx,%edx
  1005e6 <_vfprintf_i+0x342>     78 02                                 jsb $0x2
  1005ea <_vfprintf_i+0x346>     51                                    pushl %ecx
  1005eb <_vfprintf_i+0x347>     51                                    pushl %ecx
  1005ec <_vfprintf_i+0x348>     bd 0b 00 00 00                        movl $0xb,%ebp
  1005f1 <_vfprintf_i+0x34d>     50                                    pushl %eax
  1005f2 <_vfprintf_i+0x34e>     57                                    pushl %edi
  1005f3 <_vfprintf_i+0x34f>     e8 21 07 00 00                        calll $0x721
  100d19 <__GI_strnle+0x0>       8b 44 24 08                           movl 0x8(%esp),%eax
  100d1d <__GI_strnle+0x4>       8b 4c 24 04                           movl 0x4(%esp),%ecx
  100d21 <__GI_strnle+0x8>       8d 50 01                              leal 0x1(%eax),%edx
  100d24 <__GI_strnle+0xb>       8d 41 ff                              leal -0x1(%ecx),%eax
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d27 <__GI_strnle+0xe>       40                                    incl %eax
  100d28 <__GI_strnle+0xf>       4a                                    decl %edx
  100d29 <__GI_strnle+0x10>      74 05                                 jzb $0x5
  100d2b <__GI_strnle+0x12>      80 38 00                              cmpb $0x0,(%eax)
  100d2e <__GI_strnle+0x15>      75 f7                                 jnzb $0xfffffff7
  100d30 <__GI_strnle+0x17>      29 c8                                 subl %ecx,%eax
  100d32 <__GI_strnle+0x19>      c3                                    retl
  1005f8 <_vfprintf_i+0x354>     83 c4 10                              addl $0x10,%esp
  1005fb <_vfprintf_i+0x357>     89 c6                                 movl %eax,%esi
  1005fd <_vfprintf_i+0x359>     b1 20                                 movb $0x20,%cl
  1005ff <_vfprintf_i+0x35b>     eb 40                                 jmpb $0x40
  100641 <_vfprintf_i+0x39d>     31 db                                 xorl %ebx,%ebx
  100643 <_vfprintf_i+0x39f>     83 fd 0b                              cmpl $0xb,%ebp
  100646 <_vfprintf_i+0x3a2>     8d 04 33                              leal (%ebx,%esi,1),%eax
  100649 <_vfprintf_i+0x3a5>     74 0c                                 jzb $0xc
  100657 <_vfprintf_i+0x3b3>     8b 94 24 9c 00 00 00                  movl 0x9c(%esp),%edx
  10065e <_vfprintf_i+0x3ba>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100666 <_vfprintf_i+0x3c2>     39 c2                                 cmpl %eax,%edx
  100668 <_vfprintf_i+0x3c4>     76 06                                 jbeb $0x6
  100670 <_vfprintf_i+0x3cc>     03 44 24 08                           addl 0x8(%esp),%eax
  100674 <_vfprintf_i+0x3d0>     03 44 24 04                           addl 0x4(%esp),%eax
  100678 <_vfprintf_i+0x3d4>     80 f9 30                              cmpb $0x30,%cl
  10067b <_vfprintf_i+0x3d7>     89 44 24 08                           movl %eax,0x8(%esp)
  10067f <_vfprintf_i+0x3db>     75 0c                                 jnzb $0xc
  10068d <_vfprintf_i+0x3e9>     f6 84 24 a4 00 00 00 08               testb $0x8,0xa4(%esp)
  100695 <_vfprintf_i+0x3f1>     75 27                                 jnzb $0x27
  100697 <_vfprintf_i+0x3f3>     8b 4c 24 04                           movl 0x4(%esp),%ecx
  10069b <_vfprintf_i+0x3f7>     8b 84 24 70 01 00 00                  movl 0x170(%esp),%eax
  1006a2 <_vfprintf_i+0x3fe>     ba 20 00 00 00                        movl $0x20,%edx
  1006a7 <_vfprintf_i+0x403>     e8 59 fb ff ff                        calll $0xfffffb59
  100205 <vfprintf+0x82>         55                                    pushl %ebp
  100206 <vfprintf+0x83>         57                                    pushl %edi
  100207 <vfprintf+0x84>         89 c7                                 movl %eax,%edi
  100209 <vfprintf+0x86>         56                                    pushl %esi
  10020a <vfprintf+0x87>         53                                    pushl %ebx
  10020b <vfprintf+0x88>         89 ce                                 movl %ecx,%esi
  10020d <vfprintf+0x8a>         89 cb                                 movl %ecx,%ebx
  10020f <vfprintf+0x8c>         83 ec 1c                              subl $0x1c,%esp
  100212 <vfprintf+0x8f>         8d 6c 24 0f                           leal 0xf(%esp),%ebp
  100216 <vfprintf+0x93>         88 54 24 0f                           movb %dl,0xf(%esp)
  10021a <vfprintf+0x97>         85 f6                                 testl %esi,%esi
  10021c <vfprintf+0x99>         74 13                                 jzb $0x13
  100231 <vfprintf+0xae>         83 c4 1c                              addl $0x1c,%esp
  100234 <vfprintf+0xb1>         89 d8                                 movl %ebx,%eax
  100236 <vfprintf+0xb3>         29 f0                                 subl %esi,%eax
  100238 <vfprintf+0xb5>         5b                                    popl %ebx
  100239 <vfprintf+0xb6>         5e                                    popl %esi
  10023a <vfprintf+0xb7>         5f                                    popl %edi
  10023b <vfprintf+0xb8>         5d                                    popl %ebp
  10023c <vfprintf+0xb9>         c3                                    retl
  1006ac <_vfprintf_i+0x408>     3b 44 24 04                           cmpl 0x4(%esp),%eax
  1006b0 <_vfprintf_i+0x40c>     0f 85 86 00 00 00                     jnzl $0x86
  1006b6 <_vfprintf_i+0x412>     c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  1006be <_vfprintf_i+0x41a>     8d 85 78 19 10 00                     leal 0x101978(%ebp),%eax
  1006c4 <_vfprintf_i+0x420>     52                                    pushl %edx
  1006c5 <_vfprintf_i+0x421>     52                                    pushl %edx
  1006c6 <_vfprintf_i+0x422>     ff b4 24 78 01 00 00                  pushl 0x178(%esp)
  1006cd <_vfprintf_i+0x429>     50                                    pushl %eax
  1006ce <_vfprintf_i+0x42a>     e8 98 05 00 00                        calll $0x598
  100c6b <__GI_fputs_+0x0>       56                                    pushl %esi
  100c6c <__GI_fputs_+0x1>       53                                    pushl %ebx
  100c6d <__GI_fputs_+0x2>       83 ec 10                              subl $0x10,%esp
  100c70 <__GI_fputs_+0x5>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100c74 <__GI_fputs_+0x9>       56                                    pushl %esi
  100c75 <__GI_fputs_+0xa>       e8 8c 00 00 00                        calll $0x8c
  100d06 <__GI_strlen+0x0>       57                                    pushl %edi
  100d07 <__GI_strlen+0x1>       83 c9 ff                              orl $0xffffffff,%ecx
  100d0a <__GI_strlen+0x4>       8b 7c 24 08                           movl 0x8(%esp),%edi
  100d0e <__GI_strlen+0x8>       31 c0                                 xorl %eax,%eax
  100d10 <__GI_strlen+0xa>       f2 ae                                 repnz scasb 0,%eax[cnt = 1]
  100d12 <__GI_strlen+0xc>       f7 d1                                 notl %ecx
  100d14 <__GI_strlen+0xe>       8d 41 ff                              leal -0x1(%ecx),%eax
  100d17 <__GI_strlen+0x11>      5f                                    popl %edi
  100d18 <__GI_strlen+0x12>      c3                                    retl
  100c7a <__GI_fputs_+0xf>       83 c4 10                              addl $0x10,%esp
  100c7d <__GI_fputs_+0x12>      89 c3                                 movl %eax,%ebx
  100c7f <__GI_fputs_+0x14>      ff 74 24 14                           pushl 0x14(%esp)
  100c83 <__GI_fputs_+0x18>      50                                    pushl %eax
  100c84 <__GI_fputs_+0x19>      6a 01                                 pushb $0x1
  100c86 <__GI_fputs_+0x1b>      56                                    pushl %esi
  100c87 <__GI_fputs_+0x1c>      e8 12 00 00 00                        calll $0x12
  100c9e <fwrite_unlo+0x0>       57                                    pushl %edi
  100c9f <fwrite_unlo+0x1>       56                                    pushl %esi
  100ca0 <fwrite_unlo+0x2>       53                                    pushl %ebx
  100ca1 <fwrite_unlo+0x3>       8b 74 24 1c                           movl 0x1c(%esp),%esi
  100ca5 <fwrite_unlo+0x7>       8b 5c 24 14                           movl 0x14(%esp),%ebx
  100ca9 <fwrite_unlo+0xb>       8b 7c 24 18                           movl 0x18(%esp),%edi
  100cad <fwrite_unlo+0xf>       f6 06 40                              testb $0x40,(%esi)
  100cb0 <fwrite_unlo+0x12>      74 0a                                 jzb $0xa
  100cb2 <fwrite_unlo+0x14>      85 db                                 testl %ebx,%ebx
  100cb4 <fwrite_unlo+0x16>      74 4a                                 jzb $0x4a
  100cb6 <fwrite_unlo+0x18>      85 ff                                 testl %edi,%edi
  100cb8 <fwrite_unlo+0x1a>      75 14                                 jnzb $0x14
  100cba <fwrite_unlo+0x1c>      eb 44                                 jmpb $0x44
  100d00 <fwrite_unlo+0x62>      31 c0                                 xorl %eax,%eax
  100d02 <fwrite_unlo+0x64>      5b                                    popl %ebx
  100d03 <fwrite_unlo+0x65>      5e                                    popl %esi
  100d04 <fwrite_unlo+0x66>      5f                                    popl %edi
  100d05 <fwrite_unlo+0x67>      c3                                    retl
  100c8c <__GI_fputs_+0x21>      89 c1                                 movl %eax,%ecx
  100c8e <__GI_fputs_+0x23>      83 c4 10                              addl $0x10,%esp
  100c91 <__GI_fputs_+0x26>      83 c8 ff                              orl $0xffffffff,%eax
  100c94 <__GI_fputs_+0x29>      39 d9                                 cmpl %ebx,%ecx
  100c96 <__GI_fputs_+0x2b>      75 02                                 jnzb $0x2
  100c98 <__GI_fputs_+0x2d>      89 c8                                 movl %ecx,%eax
  100c9a <__GI_fputs_+0x2f>      5a                                    popl %edx
  100c9b <__GI_fputs_+0x30>      5b                                    popl %ebx
  100c9c <__GI_fputs_+0x31>      5e                                    popl %esi
  100c9d <__GI_fputs_+0x32>      c3                                    retl
  1006d3 <_vfprintf_i+0x42f>     8b 84 24 80 01 00 00                  movl 0x180(%esp),%eax
  1006da <_vfprintf_i+0x436>     89 d9                                 movl %ebx,%ecx
  1006dc <_vfprintf_i+0x438>     ba 30 00 00 00                        movl $0x30,%edx
  1006e1 <_vfprintf_i+0x43d>     e8 1f fb ff ff                        calll $0xfffffb1f
  100205 <vfprintf+0x82>         55                                    pushl %ebp
  100206 <vfprintf+0x83>         57                                    pushl %edi
  100207 <vfprintf+0x84>         89 c7                                 movl %eax,%edi
  100209 <vfprintf+0x86>         56                                    pushl %esi
  10020a <vfprintf+0x87>         53                                    pushl %ebx
  10020b <vfprintf+0x88>         89 ce                                 movl %ecx,%esi
  10020d <vfprintf+0x8a>         89 cb                                 movl %ecx,%ebx
  10020f <vfprintf+0x8c>         83 ec 1c                              subl $0x1c,%esp
  100212 <vfprintf+0x8f>         8d 6c 24 0f                           leal 0xf(%esp),%ebp
  100216 <vfprintf+0x93>         88 54 24 0f                           movb %dl,0xf(%esp)
  10021a <vfprintf+0x97>         85 f6                                 testl %esi,%esi
  10021c <vfprintf+0x99>         74 13                                 jzb $0x13
  100231 <vfprintf+0xae>         83 c4 1c                              addl $0x1c,%esp
  100234 <vfprintf+0xb1>         89 d8                                 movl %ebx,%eax
  100236 <vfprintf+0xb3>         29 f0                                 subl %esi,%eax
  100238 <vfprintf+0xb5>         5b                                    popl %ebx
  100239 <vfprintf+0xb6>         5e                                    popl %esi
  10023a <vfprintf+0xb7>         5f                                    popl %edi
  10023b <vfprintf+0xb8>         5d                                    popl %ebp
  10023c <vfprintf+0xb9>         c3                                    retl
  1006e6 <_vfprintf_i+0x442>     83 c4 10                              addl $0x10,%esp
  1006e9 <_vfprintf_i+0x445>     39 d8                                 cmpl %ebx,%eax
  1006eb <_vfprintf_i+0x447>     75 4f                                 jnzb $0x4f
  1006ed <_vfprintf_i+0x449>     85 f6                                 testl %esi,%esi
  1006ef <_vfprintf_i+0x44b>     75 1d                                 jnzb $0x1d
  10070e <_vfprintf_i+0x46a>     50                                    pushl %eax
  10070f <_vfprintf_i+0x46b>     ff b4 24 74 01 00 00                  pushl 0x174(%esp)
  100716 <_vfprintf_i+0x472>     56                                    pushl %esi
  100717 <_vfprintf_i+0x473>     57                                    pushl %edi
  100718 <_vfprintf_i+0x474>     e8 5d 07 00 00                        calll $0x75d
  100e7a <__stdio_fwr+0x0>       55                                    pushl %ebp
  100e7b <__stdio_fwr+0x1>       57                                    pushl %edi
  100e7c <__stdio_fwr+0x2>       56                                    pushl %esi
  100e7d <__stdio_fwr+0x3>       53                                    pushl %ebx
  100e7e <__stdio_fwr+0x4>       83 ec 0c                              subl $0xc,%esp
  100e81 <__stdio_fwr+0x7>       8b 74 24 28                           movl 0x28(%esp),%esi
  100e85 <__stdio_fwr+0xb>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100e89 <__stdio_fwr+0xf>       8b 5c 24 24                           movl 0x24(%esp),%ebx
  100e8d <__stdio_fwr+0x13>      66 f7 06 00 02                        testw $0x200,(%esi)
  100e92 <__stdio_fwr+0x18>      74 18                                 jzb $0x18
  100eac <__stdio_fwr+0x32>      83 7e 04 fe                           cmpl $0xfffffffe,0x4(%esi)
  100eb0 <__stdio_fwr+0x36>      8b 56 10                              movl 0x10(%esi),%edx
  100eb3 <__stdio_fwr+0x39>      8b 46 0c                              movl 0xc(%esi),%eax
  100eb6 <__stdio_fwr+0x3c>      75 1b                                 jnzb $0x1b
  100ed3 <__stdio_fwr+0x59>      29 d0                                 subl %edx,%eax
  100ed5 <__stdio_fwr+0x5b>      39 c3                                 cmpl %eax,%ebx
  100ed7 <__stdio_fwr+0x5d>      77 6b                                 jnbeb $0x6b
  100ed9 <__stdio_fwr+0x5f>      51                                    pushl %ecx
  100eda <__stdio_fwr+0x60>      53                                    pushl %ebx
  100edb <__stdio_fwr+0x61>      57                                    pushl %edi
  100edc <__stdio_fwr+0x62>      52                                    pushl %edx
  100edd <__stdio_fwr+0x63>      e8 d2 07 00 00                        calll $0x7d2
  1016b4 <memcpy+0x0>            57                                    pushl %edi
  1016b5 <memcpy+0x1>            56                                    pushl %esi
  1016b6 <memcpy+0x2>            8b 54 24 14                           movl 0x14(%esp),%edx
  1016ba <memcpy+0x6>            8b 44 24 0c                           movl 0xc(%esp),%eax
  1016be <memcpy+0xa>            8b 74 24 10                           movl 0x10(%esp),%esi
  1016c2 <memcpy+0xe>            89 d1                                 movl %edx,%ecx
  1016c4 <memcpy+0x10>           89 c7                                 movl %eax,%edi
  1016c6 <memcpy+0x12>           c1 e9 02                              shrl $0x2,%ecx
  1016c9 <memcpy+0x15>           f3 a5                                 rep movsl 0x21646c72,%es:(%edi)[cnt = 3]
  1016cb <memcpy+0x17>           89 d1                                 movl %edx,%ecx
  1016cd <memcpy+0x19>           83 e1 03                              andl $0x3,%ecx
  1016d0 <memcpy+0x1c>           74 02                                 jzb $0x2
  1016d2 <memcpy+0x1e>           f3 a4                                 rep movsb 0xa,%es:(%edi)[cnt = 1]
  1016d4 <memcpy+0x20>           5e                                    popl %esi
  1016d5 <memcpy+0x21>           5f                                    popl %edi
  1016d6 <memcpy+0x22>           c3                                    retl
  100ee2 <__stdio_fwr+0x68>      83 c4 10                              addl $0x10,%esp
  100ee5 <__stdio_fwr+0x6b>      01 5e 10                              addl %ebx,0x10(%esi)
  100ee8 <__stdio_fwr+0x6e>      66 f7 06 00 01                        testw $0x100,(%esi)
  100eed <__stdio_fwr+0x73>      75 04                                 jnzb $0x4
  100ef3 <__stdio_fwr+0x79>      50                                    pushl %eax
  100ef4 <__stdio_fwr+0x7a>      53                                    pushl %ebx
  100ef5 <__stdio_fwr+0x7b>      6a 0a                                 pushb $0xa
  100ef7 <__stdio_fwr+0x7d>      57                                    pushl %edi
  100ef8 <__stdio_fwr+0x7e>      e8 da 07 00 00                        calll $0x7da
  1016d7 <memrchr+0x0>           57                                    pushl %edi
  1016d8 <memrchr+0x1>           56                                    pushl %esi
  1016d9 <memrchr+0x2>           53                                    pushl %ebx
  1016da <memrchr+0x3>           8b 4c 24 14                           movl 0x14(%esp),%ecx
  1016de <memrchr+0x7>           8b 54 24 18                           movl 0x18(%esp),%edx
  1016e2 <memrchr+0xb>           8b 44 24 10                           movl 0x10(%esp),%eax
  1016e6 <memrchr+0xf>           88 cb                                 movb %cl,%bl
  1016e8 <memrchr+0x11>          01 d0                                 addl %edx,%eax
  1016ea <memrchr+0x13>          85 d2                                 testl %edx,%edx
  1016ec <memrchr+0x15>          74 0c                                 jzb $0xc
  1016ee <memrchr+0x17>          a8 03                                 testb $0x3,%al
  1016f0 <memrchr+0x19>          74 08                                 jzb $0x8
  1016f2 <memrchr+0x1b>          48                                    decl %eax
  1016f3 <memrchr+0x1c>          38 18                                 cmpb %bl,(%eax)
  1016f5 <memrchr+0x1e>          74 69                                 jzb $0x69
  101760 <memrchr+0x89>          5b                                    popl %ebx
  101761 <memrchr+0x8a>          5e                                    popl %esi
  101762 <memrchr+0x8b>          5f                                    popl %edi
  101763 <memrchr+0x8c>          c3                                    retl
  100efd <__stdio_fwr+0x83>      83 c4 10                              addl $0x10,%esp
  100f00 <__stdio_fwr+0x86>      85 c0                                 testl %eax,%eax
  100f02 <__stdio_fwr+0x88>      74 eb                                 jzb $0xffffffeb
  100f04 <__stdio_fwr+0x8a>      83 ec 0c                              subl $0xc,%esp
  100f07 <__stdio_fwr+0x8d>      56                                    pushl %esi
  100f08 <__stdio_fwr+0x8e>      e8 4a f2 ff ff                        calll $0xfffff24a
  100157 <__stdio_wco+0x0>       53                                    pushl %ebx
  100158 <__stdio_wco+0x1>       83 ec 08                              subl $0x8,%esp
  10015b <__stdio_wco+0x4>       8b 5c 24 10                           movl 0x10(%esp),%ebx
  10015f <__stdio_wco+0x8>       8b 43 08                              movl 0x8(%ebx),%eax
  100162 <__stdio_wco+0xb>       8b 53 10                              movl 0x10(%ebx),%edx
  100165 <__stdio_wco+0xe>       29 c2                                 subl %eax,%edx
  100167 <__stdio_wco+0x10>      74 0f                                 jzb $0xf
  100169 <__stdio_wco+0x12>      89 43 10                              movl %eax,0x10(%ebx)
  10016c <__stdio_wco+0x15>      51                                    pushl %ecx
  10016d <__stdio_wco+0x16>      52                                    pushl %edx
  10016e <__stdio_wco+0x17>      50                                    pushl %eax
  10016f <__stdio_wco+0x18>      53                                    pushl %ebx
  100170 <__stdio_wco+0x19>      e8 76 0c 00 00                        calll $0xc76
  100deb <__stdio_WRI+0x0>       55                                    pushl %ebp
  100dec <__stdio_WRI+0x1>       57                                    pushl %edi
  100ded <__stdio_WRI+0x2>       56                                    pushl %esi
  100dee <__stdio_WRI+0x3>       53                                    pushl %ebx
  100def <__stdio_WRI+0x4>       83 ec 0c                              subl $0xc,%esp
  100df2 <__stdio_WRI+0x7>       8b 7c 24 20                           movl 0x20(%esp),%edi
  100df6 <__stdio_WRI+0xb>       8b 74 24 24                           movl 0x24(%esp),%esi
  100dfa <__stdio_WRI+0xf>       8b 5c 24 28                           movl 0x28(%esp),%ebx
  100dfe <__stdio_WRI+0x13>      85 db                                 testl %ebx,%ebx
  100e00 <__stdio_WRI+0x15>      74 6c                                 jzb $0x6c
  100e02 <__stdio_WRI+0x17>      89 dd                                 movl %ebx,%ebp
  100e04 <__stdio_WRI+0x19>      78 04                                 jsb $0x4
  100e06 <__stdio_WRI+0x1b>      89 d8                                 movl %ebx,%eax
  100e08 <__stdio_WRI+0x1d>      eb 05                                 jmpb $0x5
  100e0f <__stdio_WRI+0x24>      52                                    pushl %edx
  100e10 <__stdio_WRI+0x25>      50                                    pushl %eax
  100e11 <__stdio_WRI+0x26>      56                                    pushl %esi
  100e12 <__stdio_WRI+0x27>      ff 77 04                              pushl 0x4(%edi)
  100e15 <__stdio_WRI+0x2a>      e8 4a 09 00 00                        calll $0x94a
  101764 <__GI_write+0x0>        53                                    pushl %ebx
  101765 <__GI_write+0x1>        83 ec 08                              subl $0x8,%esp
  101768 <__GI_write+0x4>        8b 54 24 18                           movl 0x18(%esp),%edx
  10176c <__GI_write+0x8>        8b 4c 24 14                           movl 0x14(%esp),%ecx
  101770 <__GI_write+0xc>        8b 44 24 10                           movl 0x10(%esp),%eax
  101774 <__GI_write+0x10>       53                                    pushl %ebx
  101775 <__GI_write+0x11>       89 c3                                 movl %eax,%ebx
  101777 <__GI_write+0x13>       b8 04 00 00 00                        movl $0x4,%eax
invalid opcode(eip = 0x0010177c): cd 80 5b 3d 00 f0 ff ff ...

There are two cases which will trigger this unexpected exception:
1. The instruction at eip = 0x0010177c is not implemented.
2. Something is implemented incorrectly.
Find this eip value(0x0010177c) in the disassembling result to distinguish which case it is.

[1;31mIf it is the first case, see
 _ ____   ___    __    __  __                         _ 
(_)___ \ / _ \  / /   |  \/  |                       | |
 _  __) | (_) |/ /_   | \  / | __ _ _ __  _   _  __ _| |
| ||__ < > _ <| '_ \  | |\/| |/ _` | '_ \| | | |/ _` | |
| |___) | (_) | (_) | | |  | | (_| | | | | |_| | (_| | |
|_|____/ \___/ \___/  |_|  |_|\__,_|_| |_|\__,_|\__,_|_|

for more details.

If it is the second case, remember:
* The machine is always right!
* Every line of untested code is always wrong![0m

Makefile:63: recipe for target 'run' failed
