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
  10000a <UNKNOWN>               e8 06 00 00 00                        calll $0x6
  100015 <main+0x0>              8d 4c 24 04                           leal 0x4(%esp),%ecx
  100019 <main+0x4>              83 e4 f0                              andl $0xfffffff0,%esp
  10001c <main+0x7>              ff 71 fc                              pushl -0x4(%ecx)
  10001f <main+0xa>              55                                    pushl %ebp
  100020 <main+0xb>              89 e5                                 movl %esp,%ebp
  100022 <main+0xd>              51                                    pushl %ecx
  100023 <main+0xe>              83 ec 04                              subl $0x4,%esp
  100026 <main+0x11>             e8 f5 00 00 00                        calll $0xf5
  100120 <init_FLOAT_+0x0>       f3                                    rep retl[cnt = 0]
  10002b <main+0x16>             6a 00                                 pushb $0x0
  10002d <main+0x18>             68 00 00 01 00                        pushl $0x10000
  100032 <main+0x1d>             68 40 1a 10 00                        pushl $0x101a40
  100037 <main+0x22>             68 c0 29 10 00                        pushl $0x1029c0
  10003c <main+0x27>             e8 e1 00 00 00                        calll $0xe1
  100122 <__GI_sprint+0x0>       83 ec 0c                              subl $0xc,%esp
  100125 <__GI_sprint+0x3>       8d 44 24 18                           leal 0x18(%esp),%eax
  100129 <__GI_sprint+0x7>       50                                    pushl %eax
  10012a <__GI_sprint+0x8>       ff 74 24 18                           pushl 0x18(%esp)
  10012e <__GI_sprint+0xc>       6a ff                                 pushb $0xffffffff
  100130 <__GI_sprint+0xe>       ff 74 24 1c                           pushl 0x1c(%esp)
  100134 <__GI_sprint+0x12>      e8 04 00 00 00                        calll $0x4
  10013d <__GI_vsnpri+0x0>       56                                    pushl %esi
  10013e <__GI_vsnpri+0x1>       53                                    pushl %ebx
  10013f <__GI_vsnpri+0x2>       83 ec 50                              subl $0x50,%esp
  100142 <__GI_vsnpri+0x5>       8d 44 24 34                           leal 0x34(%esp),%eax
  100146 <__GI_vsnpri+0x9>       8b 5c 24 5c                           movl 0x5c(%esp),%ebx
  10014a <__GI_vsnpri+0xd>       c7 44 24 10 fe ff ff ff               movl $0xfffffffe,0x10(%esp)
  100152 <__GI_vsnpri+0x15>      66 c7 44 24 0c d0 00                  movw $0xd0,0xc(%esp)
  100159 <__GI_vsnpri+0x1c>      c7 44 24 30 01 00 00 00               movl $0x1,0x30(%esp)
  100161 <__GI_vsnpri+0x24>      50                                    pushl %eax
  100162 <__GI_vsnpri+0x25>      89 de                                 movl %ebx,%esi
  100164 <__GI_vsnpri+0x27>      e8 59 01 00 00                        calll $0x159
  1002c2 <__stdio_ini+0x0>       57                                    pushl %edi
  1002c3 <__stdio_ini+0x1>       56                                    pushl %esi
  1002c4 <__stdio_ini+0x2>       be 6c 1a 10 00                        movl $0x101a6c,%esi
  1002c9 <__stdio_ini+0x7>       8b 7c 24 0c                           movl 0xc(%esp),%edi
  1002cd <__stdio_ini+0xb>       a5                                    movsl 0,%es:(%edi)
  1002ce <__stdio_ini+0xc>       a5                                    movsl 0,%es:(%edi)
  1002cf <__stdio_ini+0xd>       a5                                    movsl 0,%es:(%edi)
  1002d0 <__stdio_ini+0xe>       a5                                    movsl 0x1,%es:(%edi)
  1002d1 <__stdio_ini+0xf>       a5                                    movsl 0,%es:(%edi)
  1002d2 <__stdio_ini+0x10>      a5                                    movsl 0,%es:(%edi)
  1002d3 <__stdio_ini+0x11>      5e                                    popl %esi
  1002d4 <__stdio_ini+0x12>      5f                                    popl %edi
  1002d5 <__stdio_ini+0x13>      c3                                    retl
  100169 <__GI_vsnpri+0x2c>      c7 44 24 30 00 00 00 00               movl $0x0,0x30(%esp)
  100171 <__GI_vsnpri+0x34>      83 c4 10                              addl $0x10,%esp
  100174 <__GI_vsnpri+0x37>      f7 d6                                 notl %esi
  100176 <__GI_vsnpri+0x39>      3b 74 24 54                           cmpl 0x54(%esp),%esi
  10017a <__GI_vsnpri+0x3d>      76 04                                 jbeb $0x4
  10017c <__GI_vsnpri+0x3f>      8b 74 24 54                           movl 0x54(%esp),%esi
  100180 <__GI_vsnpri+0x43>      8d 04 33                              leal (%ebx,%esi,1),%eax
  100183 <__GI_vsnpri+0x46>      89 5c 24 08                           movl %ebx,0x8(%esp)
  100187 <__GI_vsnpri+0x4a>      89 5c 24 10                           movl %ebx,0x10(%esp)
  10018b <__GI_vsnpri+0x4e>      89 5c 24 14                           movl %ebx,0x14(%esp)
  10018f <__GI_vsnpri+0x52>      89 5c 24 18                           movl %ebx,0x18(%esp)
  100193 <__GI_vsnpri+0x56>      89 44 24 0c                           movl %eax,0xc(%esp)
  100197 <__GI_vsnpri+0x5a>      89 44 24 1c                           movl %eax,0x1c(%esp)
  10019b <__GI_vsnpri+0x5e>      50                                    pushl %eax
  10019c <__GI_vsnpri+0x5f>      ff 74 24 60                           pushl 0x60(%esp)
  1001a0 <__GI_vsnpri+0x63>      ff 74 24 60                           pushl 0x60(%esp)
  1001a4 <__GI_vsnpri+0x67>      8d 44 24 0c                           leal 0xc(%esp),%eax
  1001a8 <__GI_vsnpri+0x6b>      50                                    pushl %eax
  1001a9 <__GI_vsnpri+0x6c>      e8 bf 02 00 00                        calll $0x2bf
  10046d <_vfprintf_i+0x0>       55                                    pushl %ebp
  10046e <_vfprintf_i+0x1>       57                                    pushl %edi
  10046f <_vfprintf_i+0x2>       56                                    pushl %esi
  100470 <_vfprintf_i+0x3>       53                                    pushl %ebx
  100471 <_vfprintf_i+0x4>       81 ec 64 01 00 00                     subl $0x164,%esp
  100477 <_vfprintf_i+0xa>       8b 9c 24 7c 01 00 00                  movl 0x17c(%esp),%ebx
  10047e <_vfprintf_i+0x11>      53                                    pushl %ebx
  10047f <_vfprintf_i+0x12>      8d b4 24 a0 00 00 00                  leal 0xa0(%esp),%esi
  100486 <_vfprintf_i+0x19>      56                                    pushl %esi
  100487 <_vfprintf_i+0x1a>      e8 9c 04 00 00                        calll $0x49c
  100928 <_ppfs_init+0x0>        57                                    pushl %edi
  100929 <_ppfs_init+0x1>        56                                    pushl %esi
  10092a <_ppfs_init+0x2>        b9 2f 00 00 00                        movl $0x2f,%ecx
  10092f <_ppfs_init+0x7>        53                                    pushl %ebx
  100930 <_ppfs_init+0x8>        8b 5c 24 10                           movl 0x10(%esp),%ebx
  100934 <_ppfs_init+0xc>        31 c0                                 xorl %eax,%eax
  100936 <_ppfs_init+0xe>        8b 74 24 14                           movl 0x14(%esp),%esi
  10093a <_ppfs_init+0x12>       89 df                                 movl %ebx,%edi
  10093c <_ppfs_init+0x14>       f3 ab                                 rep stosl %eax,%es:(%edi)[cnt = 47]
  10093e <_ppfs_init+0x16>       ff 4b 18                              decl 0x18(%ebx)
  100941 <_ppfs_init+0x19>       8d 53 28                              leal 0x28(%ebx),%edx
  100944 <_ppfs_init+0x1c>       89 33                                 movl %esi,(%ebx)
  100946 <_ppfs_init+0x1e>       b0 09                                 movb $0x9,%al
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100948 <_ppfs_init+0x20>       c7 02 08 00 00 00                     movl $0x8,(%edx)
  10094e <_ppfs_init+0x26>       83 c2 04                              addl $0x4,%edx
  100951 <_ppfs_init+0x29>       48                                    decl %eax
  100952 <_ppfs_init+0x2a>       75 f4                                 jnzb $0xfffffff4
  100954 <_ppfs_init+0x2c>       89 f0                                 movl %esi,%eax
  100956 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100958 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  10095a <_ppfs_init+0x32>       74 29                                 jzb $0x29
  10095c <_ppfs_init+0x34>       80 fa 25                              cmpb $0x25,%dl
  10095f <_ppfs_init+0x37>       75 21                                 jnzb $0x21
  100961 <_ppfs_init+0x39>       80 78 01 25                           cmpb $0x25,0x1(%eax)
  100965 <_ppfs_init+0x3d>       8d 50 01                              leal 0x1(%eax),%edx
  100968 <_ppfs_init+0x40>       74 16                                 jzb $0x16
  10096a <_ppfs_init+0x42>       83 ec 0c                              subl $0xc,%esp
  10096d <_ppfs_init+0x45>       89 13                                 movl %edx,(%ebx)
  10096f <_ppfs_init+0x47>       53                                    pushl %ebx
  100970 <_ppfs_init+0x48>       e8 75 01 00 00                        calll $0x175
  100aea <_ppfs_parse+0x0>       55                                    pushl %ebp
  100aeb <_ppfs_parse+0x1>       57                                    pushl %edi
  100aec <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  100aee <_ppfs_parse+0x4>       56                                    pushl %esi
  100aef <_ppfs_parse+0x5>       53                                    pushl %ebx
  100af0 <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  100af3 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  100af7 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  100aff <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  100b07 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  100b0f <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  100b17 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100b1f <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  100b22 <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  100b24 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  100b2c <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  100b2f <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  100b31 <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100b35 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100b3a <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100b3c <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100b4d <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100b4f <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100b52 <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100b54 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100b58 <_ppfs_parse+0x6e>      8b 0d 80 29 10 00                     movl 0x102980,%ecx
  100b5e <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100b62 <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100b8a <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100b8e <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100b94 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100b99 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100bbe <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100bc2 <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100bc4 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100bc6 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100bd6 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100bdd <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100bdf <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100be7 <_ppfs_parse+0xfd>      ba 10 28 10 00                        movl $0x102810,%edx
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100c14 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c18 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100c1b <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100c1d <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100c1f <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100c23 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100c27 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100c30 <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100c32 <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100c35 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100c6b <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100c6d <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100c6f <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100c72 <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100c88 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100c90 <_ppfs_parse+0x1a6>     b9 c4 1a 10 00                        movl $0x101ac4,%ecx
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100ca4 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100ca6 <_ppfs_parse+0x1bc>     81 eb c4 1a 10 00                     subl $0x101ac4,%ebx
  100cac <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100cad <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100cb9 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100cbd <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100cbf <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100cc2 <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100cc4 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100cca <_ppfs_parse+0x1e0>     b9 f8 27 10 00                        movl $0x1027f8,%ecx
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100cd3 <_ppfs_parse+0x1e9>     81 e9 f8 27 10 00                     subl $0x1027f8,%ecx
  100cd9 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100cdc <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100ce9 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100cec <_ppfs_parse+0x202>     bb b7 1a 10 00                        movl $0x101ab7,%ebx
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf9 <_ppfs_parse+0x20f>     81 eb b8 1a 10 00                     subl $0x101ab8,%ebx
  100cff <_ppfs_parse+0x215>     0f bf b4 1b a8 1a 10 00               movsxl 0x101aa8(%ebx,%ebx,1),%esi
  100d07 <_ppfs_parse+0x21d>     0f bf 8c 1b 98 1a 10 00               movsxl 0x101a98(%ebx,%ebx,1),%ecx
  100d0f <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100d11 <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100d13 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100d17 <_ppfs_parse+0x22d>     b9 f8 27 10 00                        movl $0x1027f8,%ecx
  100d1c <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100d24 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100d27 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100d2a <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100d2e <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100d32 <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100d39 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100d3c <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100d3f <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100d42 <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100d45 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100d47 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100d4d <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100d50 <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100d53 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100d56 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100d5a <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100d5d <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100d5f <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100d62 <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100d65 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100d6b <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100d6f <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100e13 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100e17 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100e1b <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100e1e <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100e21 <_ppfs_parse+0x337>     40                                    incl %eax
  100e22 <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100e24 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100e29 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100e2c <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100e2f <_ppfs_parse+0x345>     5b                                    popl %ebx
  100e30 <_ppfs_parse+0x346>     5e                                    popl %esi
  100e31 <_ppfs_parse+0x347>     5f                                    popl %edi
  100e32 <_ppfs_parse+0x348>     5d                                    popl %ebp
  100e33 <_ppfs_parse+0x349>     c3                                    retl
  100975 <_ppfs_init+0x4d>       83 c4 10                              addl $0x10,%esp
  100978 <_ppfs_init+0x50>       85 c0                                 testl %eax,%eax
  10097a <_ppfs_init+0x52>       78 0f                                 jsb $0xf
  10097c <_ppfs_init+0x54>       8b 03                                 movl (%ebx),%eax
  10097e <_ppfs_init+0x56>       eb d6                                 jmpb $0xffffffd6
  100956 <_ppfs_init+0x2e>       8a 10                                 movb (%eax),%dl
  100958 <_ppfs_init+0x30>       84 d2                                 testb %dl,%dl
  10095a <_ppfs_init+0x32>       74 29                                 jzb $0x29
  100985 <_ppfs_init+0x5d>       89 33                                 movl %esi,(%ebx)
  100987 <_ppfs_init+0x5f>       31 c0                                 xorl %eax,%eax
  100989 <_ppfs_init+0x61>       eb 03                                 jmpb $0x3
  10098e <_ppfs_init+0x66>       5b                                    popl %ebx
  10098f <_ppfs_init+0x67>       5e                                    popl %esi
  100990 <_ppfs_init+0x68>       5f                                    popl %edi
  100991 <_ppfs_init+0x69>       c3                                    retl
  10048c <_vfprintf_i+0x1f>      83 c4 10                              addl $0x10,%esp
  10048f <_vfprintf_i+0x22>      85 c0                                 testl %eax,%eax
  100491 <_vfprintf_i+0x24>      79 3a                                 jnsb $0x3a
  1004cd <_vfprintf_i+0x60>      50                                    pushl %eax
  1004ce <_vfprintf_i+0x61>      50                                    pushl %eax
  1004cf <_vfprintf_i+0x62>      ff b4 24 80 01 00 00                  pushl 0x180(%esp)
  1004d6 <_vfprintf_i+0x69>      56                                    pushl %esi
  1004d7 <_vfprintf_i+0x6a>      e8 b6 04 00 00                        calll $0x4b6
  100992 <_ppfs_prepa+0x0>       56                                    pushl %esi
  100993 <_ppfs_prepa+0x1>       53                                    pushl %ebx
  100994 <_ppfs_prepa+0x2>       52                                    pushl %edx
  100995 <_ppfs_prepa+0x3>       8b 5c 24 10                           movl 0x10(%esp),%ebx
  100999 <_ppfs_prepa+0x7>       8b 44 24 14                           movl 0x14(%esp),%eax
  10099d <_ppfs_prepa+0xb>       8b 73 18                              movl 0x18(%ebx),%esi
  1009a0 <_ppfs_prepa+0xe>       89 43 4c                              movl %eax,0x4c(%ebx)
  1009a3 <_ppfs_prepa+0x11>      85 f6                                 testl %esi,%esi
  1009a5 <_ppfs_prepa+0x13>      7e 27                                 jleb $0x27
  1009ce <_ppfs_prepa+0x3c>      58                                    popl %eax
  1009cf <_ppfs_prepa+0x3d>      5b                                    popl %ebx
  1009d0 <_ppfs_prepa+0x3e>      5e                                    popl %esi
  1009d1 <_ppfs_prepa+0x3f>      c3                                    retl
  1004dc <_vfprintf_i+0x6f>      83 c4 10                              addl $0x10,%esp
  1004df <_vfprintf_i+0x72>      89 da                                 movl %ebx,%edx
  1004e1 <_vfprintf_i+0x74>      c7 44 24 08 00 00 00 00               movl $0x0,0x8(%esp)
  1004e9 <_vfprintf_i+0x7c>      89 74 24 0c                           movl %esi,0xc(%esp)
  1004ed <_vfprintf_i+0x80>      8a 03                                 movb (%ebx),%al
  1004ef <_vfprintf_i+0x82>      3c 25                                 cmpb $0x25,%al
  1004f1 <_vfprintf_i+0x84>      74 07                                 jzb $0x7
  1004fa <_vfprintf_i+0x8d>      39 d3                                 cmpl %edx,%ebx
  1004fc <_vfprintf_i+0x8f>      74 28                                 jzb $0x28
  100526 <_vfprintf_i+0xb9>      80 3b 00                              cmpb $0x0,(%ebx)
  100529 <_vfprintf_i+0xbc>      0f 84 ea 03 00 00                     jzl $0x3ea
  10052f <_vfprintf_i+0xc2>      80 7b 01 25                           cmpb $0x25,0x1(%ebx)
  100533 <_vfprintf_i+0xc6>      8d 53 01                              leal 0x1(%ebx),%edx
  100536 <_vfprintf_i+0xc9>      0f 84 c1 03 00 00                     jzl $0x3c1
  10053c <_vfprintf_i+0xcf>      89 94 24 94 00 00 00                  movl %edx,0x94(%esp)
  100543 <_vfprintf_i+0xd6>      83 ec 0c                              subl $0xc,%esp
  100546 <_vfprintf_i+0xd9>      ff 74 24 18                           pushl 0x18(%esp)
  10054a <_vfprintf_i+0xdd>      e8 9b 05 00 00                        calll $0x59b
  100aea <_ppfs_parse+0x0>       55                                    pushl %ebp
  100aeb <_ppfs_parse+0x1>       57                                    pushl %edi
  100aec <_ppfs_parse+0x2>       31 ed                                 xorl %ebp,%ebp
  100aee <_ppfs_parse+0x4>       56                                    pushl %esi
  100aef <_ppfs_parse+0x5>       53                                    pushl %ebx
  100af0 <_ppfs_parse+0x6>       83 ec 34                              subl $0x34,%esp
  100af3 <_ppfs_parse+0x9>       8b 7c 24 48                           movl 0x48(%esp),%edi
  100af7 <_ppfs_parse+0xd>       c7 44 24 28 00 00 00 00               movl $0x0,0x28(%esp)
  100aff <_ppfs_parse+0x15>      c7 44 24 2c 00 00 00 00               movl $0x0,0x2c(%esp)
  100b07 <_ppfs_parse+0x1d>      c7 44 24 1c 08 00 00 00               movl $0x8,0x1c(%esp)
  100b0f <_ppfs_parse+0x25>      c7 44 24 20 08 00 00 00               movl $0x8,0x20(%esp)
  100b17 <_ppfs_parse+0x2d>      c7 44 24 04 00 00 00 00               movl $0x0,0x4(%esp)
  100b1f <_ppfs_parse+0x35>      8b 47 18                              movl 0x18(%edi),%eax
  100b22 <_ppfs_parse+0x38>      8b 1f                                 movl (%edi),%ebx
  100b24 <_ppfs_parse+0x3a>      c7 44 24 0c 00 00 00 00               movl $0x0,0xc(%esp)
  100b2c <_ppfs_parse+0x42>      89 04 24                              movl %eax,(%esp)
  100b2f <_ppfs_parse+0x45>      8a 03                                 movb (%ebx),%al
  100b31 <_ppfs_parse+0x47>      88 44 24 08                           movb %al,0x8(%esp)
  100b35 <_ppfs_parse+0x4b>      80 7c 24 08 2a                        cmpb $0x2a,0x8(%esp)
  100b3a <_ppfs_parse+0x50>      89 d8                                 movl %ebx,%eax
  100b3c <_ppfs_parse+0x52>      75 0f                                 jnzb $0xf
  100b4d <_ppfs_parse+0x63>      31 d2                                 xorl %edx,%edx
  100b4f <_ppfs_parse+0x65>      0f b6 30                              movzxl (%eax),%esi
  100b52 <_ppfs_parse+0x68>      89 f1                                 movl %esi,%ecx
  100b54 <_ppfs_parse+0x6a>      88 4c 24 13                           movb %cl,0x13(%esp)
  100b58 <_ppfs_parse+0x6e>      8b 0d 80 29 10 00                     movl 0x102980,%ecx
  100b5e <_ppfs_parse+0x74>      f6 04 71 08                           testb $0x8,(%ecx,%esi,2)
  100b62 <_ppfs_parse+0x78>      74 26                                 jzb $0x26
  100b8a <_ppfs_parse+0xa0>      80 7b ff 25                           cmpb $0x25,-0x1(%ebx)
  100b8e <_ppfs_parse+0xa4>      0f 85 9e 00 00 00                     jnzl $0x9e
  100b94 <_ppfs_parse+0xaa>      80 7c 24 13 24                        cmpb $0x24,0x13(%esp)
  100b99 <_ppfs_parse+0xaf>      75 23                                 jnzb $0x23
  100bbe <_ppfs_parse+0xd4>      83 3c 24 00                           cmpl $0x0,(%esp)
  100bc2 <_ppfs_parse+0xd8>      7f e4                                 jnleb $0xffffffe4
  100bc4 <_ppfs_parse+0xda>      39 d8                                 cmpl %ebx,%eax
  100bc6 <_ppfs_parse+0xdc>      76 0e                                 jbeb $0xe
  100bd6 <_ppfs_parse+0xec>      c7 04 24 00 00 00 00                  movl $0x0,(%esp)
  100bdd <_ppfs_parse+0xf3>      89 d8                                 movl %ebx,%eax
  100bdf <_ppfs_parse+0xf5>      c7 44 24 08 01 00 00 00               movl $0x1,0x8(%esp)
  100be7 <_ppfs_parse+0xfd>      ba 10 28 10 00                        movl $0x102810,%edx
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100bec <_ppfs_parse+0x102>     8a 0a                                 movb (%edx),%cl
  100bee <_ppfs_parse+0x104>     38 08                                 cmpb %cl,(%eax)
  100bf0 <_ppfs_parse+0x106>     8d 5a 01                              leal 0x1(%edx),%ebx
  100bf3 <_ppfs_parse+0x109>     75 0b                                 jnzb $0xb
  100c00 <_ppfs_parse+0x116>     0f b6 72 01                           movzxl 0x1(%edx),%esi
  100c04 <_ppfs_parse+0x11a>     8b 4c 24 08                           movl 0x8(%esp),%ecx
  100c08 <_ppfs_parse+0x11e>     89 da                                 movl %ebx,%edx
  100c0a <_ppfs_parse+0x120>     01 4c 24 08                           addl %ecx,0x8(%esp)
  100c0e <_ppfs_parse+0x124>     89 f1                                 movl %esi,%ecx
  100c10 <_ppfs_parse+0x126>     84 c9                                 testb %cl,%cl
  100c12 <_ppfs_parse+0x128>     75 d8                                 jnzb $0xffffffd8
  100c14 <_ppfs_parse+0x12a>     8b 54 24 04                           movl 0x4(%esp),%edx
  100c18 <_ppfs_parse+0x12e>     83 e2 0a                              andl $0xa,%edx
  100c1b <_ppfs_parse+0x131>     d1 fa                                 sarl $1,%edx
  100c1d <_ppfs_parse+0x133>     f7 d2                                 notl %edx
  100c1f <_ppfs_parse+0x135>     21 54 24 04                           andl %edx,0x4(%esp)
  100c23 <_ppfs_parse+0x139>     80 78 ff 25                           cmpb $0x25,-0x1(%eax)
  100c27 <_ppfs_parse+0x13d>     74 07                                 jzb $0x7
  100c30 <_ppfs_parse+0x146>     31 d2                                 xorl %edx,%edx
  100c32 <_ppfs_parse+0x148>     80 3b 2a                              cmpb $0x2a,(%ebx)
  100c35 <_ppfs_parse+0x14b>     75 34                                 jnzb $0x34
  100c6b <_ppfs_parse+0x181>     85 ed                                 testl %ebp,%ebp
  100c6d <_ppfs_parse+0x183>     75 0f                                 jnzb $0xf
  100c6f <_ppfs_parse+0x185>     80 38 2e                              cmpb $0x2e,(%eax)
  100c72 <_ppfs_parse+0x188>     75 14                                 jnzb $0x14
  100c88 <_ppfs_parse+0x19e>     c7 44 24 08 ff ff ff ff               movl $0xffffffff,0x8(%esp)
  100c90 <_ppfs_parse+0x1a6>     b9 c4 1a 10 00                        movl $0x101ac4,%ecx
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100c95 <_ppfs_parse+0x1ab>     8a 19                                 movb (%ecx),%bl
  100c97 <_ppfs_parse+0x1ad>     38 18                                 cmpb %bl,(%eax)
  100c99 <_ppfs_parse+0x1af>     75 03                                 jnzb $0x3
  100c9e <_ppfs_parse+0x1b4>     41                                    incl %ecx
  100c9f <_ppfs_parse+0x1b5>     80 39 00                              cmpb $0x0,(%ecx)
  100ca2 <_ppfs_parse+0x1b8>     75 f1                                 jnzb $0xfffffff1
  100ca4 <_ppfs_parse+0x1ba>     89 cb                                 movl %ecx,%ebx
  100ca6 <_ppfs_parse+0x1bc>     81 eb c4 1a 10 00                     subl $0x101ac4,%ebx
  100cac <_ppfs_parse+0x1c2>     4b                                    decl %ebx
  100cad <_ppfs_parse+0x1c3>     7f 0a                                 jnleb $0xa
  100cb9 <_ppfs_parse+0x1cf>     0f b6 69 09                           movzxl 0x9(%ecx),%ebp
  100cbd <_ppfs_parse+0x1d3>     8a 18                                 movb (%eax),%bl
  100cbf <_ppfs_parse+0x1d5>     c1 e5 08                              shll $0x8,%ebp
  100cc2 <_ppfs_parse+0x1d8>     84 db                                 testb %bl,%bl
  100cc4 <_ppfs_parse+0x1da>     0f 84 de fe ff ff                     jzl $0xfffffede
  100cca <_ppfs_parse+0x1e0>     b9 f8 27 10 00                        movl $0x1027f8,%ecx
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100d1e <_ppfs_parse+0x234>     41                                    incl %ecx
  100d1f <_ppfs_parse+0x235>     80 39 00                              cmpb $0x0,(%ecx)
  100d22 <_ppfs_parse+0x238>     75 ab                                 jnzb $0xffffffab
  100ccf <_ppfs_parse+0x1e5>     3a 19                                 cmpb (%ecx),%bl
  100cd1 <_ppfs_parse+0x1e7>     75 4b                                 jnzb $0x4b
  100cd3 <_ppfs_parse+0x1e9>     81 e9 f8 27 10 00                     subl $0x1027f8,%ecx
  100cd9 <_ppfs_parse+0x1ef>     83 f9 11                              cmpl $0x11,%ecx
  100cdc <_ppfs_parse+0x1f2>     7e 0b                                 jleb $0xb
  100ce9 <_ppfs_parse+0x1ff>     89 4f 20                              movl %ecx,0x20(%edi)
  100cec <_ppfs_parse+0x202>     bb b7 1a 10 00                        movl $0x101ab7,%ebx
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf1 <_ppfs_parse+0x207>     43                                    incl %ebx
  100cf2 <_ppfs_parse+0x208>     0f b6 33                              movzxl (%ebx),%esi
  100cf5 <_ppfs_parse+0x20b>     39 f1                                 cmpl %esi,%ecx
  100cf7 <_ppfs_parse+0x20d>     7f f8                                 jnleb $0xfffffff8
  100cf9 <_ppfs_parse+0x20f>     81 eb b8 1a 10 00                     subl $0x101ab8,%ebx
  100cff <_ppfs_parse+0x215>     0f bf b4 1b a8 1a 10 00               movsxl 0x101aa8(%ebx,%ebx,1),%esi
  100d07 <_ppfs_parse+0x21d>     0f bf 8c 1b 98 1a 10 00               movsxl 0x101a98(%ebx,%ebx,1),%ecx
  100d0f <_ppfs_parse+0x225>     09 ee                                 orl %ebp,%esi
  100d11 <_ppfs_parse+0x227>     21 f1                                 andl %esi,%ecx
  100d13 <_ppfs_parse+0x229>     89 4c 24 24                           movl %ecx,0x24(%esp)
  100d17 <_ppfs_parse+0x22d>     b9 f8 27 10 00                        movl $0x1027f8,%ecx
  100d1c <_ppfs_parse+0x232>     eb 06                                 jmpb $0x6
  100d24 <_ppfs_parse+0x23a>     0f b6 18                              movzxl (%eax),%ebx
  100d27 <_ppfs_parse+0x23d>     89 57 08                              movl %edx,0x8(%edi)
  100d2a <_ppfs_parse+0x240>     8b 54 24 04                           movl 0x4(%esp),%edx
  100d2e <_ppfs_parse+0x244>     8b 74 24 08                           movl 0x8(%esp),%esi
  100d32 <_ppfs_parse+0x248>     c7 47 1c 01 00 00 00                  movl $0x1,0x1c(%edi)
  100d39 <_ppfs_parse+0x24f>     83 e2 04                              andl $0x4,%edx
  100d3c <_ppfs_parse+0x252>     89 5f 0c                              movl %ebx,0xc(%edi)
  100d3f <_ppfs_parse+0x255>     89 77 04                              movl %esi,0x4(%edi)
  100d42 <_ppfs_parse+0x258>     83 fa 01                              cmpl $0x1,%edx
  100d45 <_ppfs_parse+0x25b>     19 d2                                 sbbl %edx,%edx
  100d47 <_ppfs_parse+0x25d>     81 e5 00 0f 00 00                     andl $0xf00,%ebp
  100d4d <_ppfs_parse+0x263>     83 e2 f0                              andl $0xfffffff0,%edx
  100d50 <_ppfs_parse+0x266>     83 c2 30                              addl $0x30,%edx
  100d53 <_ppfs_parse+0x269>     89 57 14                              movl %edx,0x14(%edi)
  100d56 <_ppfs_parse+0x26c>     8b 54 24 04                           movl 0x4(%esp),%edx
  100d5a <_ppfs_parse+0x270>     83 e2 fb                              andl $0xfffffffb,%edx
  100d5d <_ppfs_parse+0x273>     09 d5                                 orl %edx,%ebp
  100d5f <_ppfs_parse+0x275>     89 6f 10                              movl %ebp,0x10(%edi)
  100d62 <_ppfs_parse+0x278>     80 39 00                              cmpb $0x0,(%ecx)
  100d65 <_ppfs_parse+0x27b>     0f 84 3d fe ff ff                     jzl $0xfffffe3d
  100d6b <_ppfs_parse+0x281>     83 3c 24 00                           cmpl $0x0,(%esp)
  100d6f <_ppfs_parse+0x285>     0f 8e 9e 00 00 00                     jlel $0x9e
  100e13 <_ppfs_parse+0x329>     8b 54 24 24                           movl 0x24(%esp),%edx
  100e17 <_ppfs_parse+0x32d>     c6 47 26 01                           movb $0x1,0x26(%edi)
  100e1b <_ppfs_parse+0x331>     89 57 28                              movl %edx,0x28(%edi)
  100e1e <_ppfs_parse+0x334>     8b 34 24                              movl (%esp),%esi
  100e21 <_ppfs_parse+0x337>     40                                    incl %eax
  100e22 <_ppfs_parse+0x338>     89 07                                 movl %eax,(%edi)
  100e24 <_ppfs_parse+0x33a>     b8 03 00 00 00                        movl $0x3,%eax
  100e29 <_ppfs_parse+0x33f>     89 77 18                              movl %esi,0x18(%edi)
  100e2c <_ppfs_parse+0x342>     83 c4 34                              addl $0x34,%esp
  100e2f <_ppfs_parse+0x345>     5b                                    popl %ebx
  100e30 <_ppfs_parse+0x346>     5e                                    popl %esi
  100e31 <_ppfs_parse+0x347>     5f                                    popl %edi
  100e32 <_ppfs_parse+0x348>     5d                                    popl %ebp
  100e33 <_ppfs_parse+0x349>     c3                                    retl
  10054f <_vfprintf_i+0xe2>      58                                    popl %eax
  100550 <_vfprintf_i+0xe3>      ff 74 24 18                           pushl 0x18(%esp)
  100554 <_vfprintf_i+0xe7>      e8 79 04 00 00                        calll $0x479
  1009d2 <_ppfs_setar+0x0>       55                                    pushl %ebp
  1009d3 <_ppfs_setar+0x1>       57                                    pushl %edi
  1009d4 <_ppfs_setar+0x2>       56                                    pushl %esi
  1009d5 <_ppfs_setar+0x3>       53                                    pushl %ebx
  1009d6 <_ppfs_setar+0x4>       8b 44 24 14                           movl 0x14(%esp),%eax
  1009da <_ppfs_setar+0x8>       83 78 18 00                           cmpl $0x0,0x18(%eax)
  1009de <_ppfs_setar+0xc>       8d 48 50                              leal 0x50(%eax),%ecx
  1009e1 <_ppfs_setar+0xf>       0f 85 b1 00 00 00                     jnzl $0xb1
  1009e7 <_ppfs_setar+0x15>      81 78 08 00 00 00 80                  cmpl $0x80000000,0x8(%eax)
  1009ee <_ppfs_setar+0x1c>      75 11                                 jnzb $0x11
  100a01 <_ppfs_setar+0x2f>      81 78 04 00 00 00 80                  cmpl $0x80000000,0x4(%eax)
  100a08 <_ppfs_setar+0x36>      75 11                                 jnzb $0x11
  100a1b <_ppfs_setar+0x49>      31 d2                                 xorl %edx,%edx
  100a1d <_ppfs_setar+0x4b>      3b 50 1c                              cmpl 0x1c(%eax),%edx
  100a20 <_ppfs_setar+0x4e>      0f 8d a0 00 00 00                     jnll $0xa0
  100a26 <_ppfs_setar+0x54>      8b 5c 90 28                           movl 0x28(%eax,%edx,4),%ebx
  100a2a <_ppfs_setar+0x58>      8d 72 01                              leal 0x1(%edx),%esi
  100a2d <_ppfs_setar+0x5b>      83 fb 08                              cmpl $0x8,%ebx
  100a30 <_ppfs_setar+0x5e>      74 62                                 jzb $0x62
  100a32 <_ppfs_setar+0x60>      8b 50 4c                              movl 0x4c(%eax),%edx
  100a35 <_ppfs_setar+0x63>      7f 18                                 jnleb $0x18
  100a37 <_ppfs_setar+0x65>      83 fb 02                              cmpl $0x2,%ebx
  100a3a <_ppfs_setar+0x68>      74 4b                                 jzb $0x4b
  100a3c <_ppfs_setar+0x6a>      7e 49                                 jleb $0x49
  100a3e <_ppfs_setar+0x6c>      83 fb 07                              cmpl $0x7,%ebx
  100a41 <_ppfs_setar+0x6f>      75 44                                 jnzb $0x44
  100a43 <_ppfs_setar+0x71>      8d 5a 08                              leal 0x8(%edx),%ebx
invalid opcode(eip = 0x00100a46): dd 02 89 58 4c dd 19 eb ...

There are two cases which will trigger this unexpected exception:
1. The instruction at eip = 0x00100a46 is not implemented.
2. Something is implemented incorrectly.
Find this eip value(0x00100a46) in the disassembling result to distinguish which case it is.

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
