//
//  main.c
//  作业
//
//  Created by Handsly on 16/5/4.
//  Copyright © 2016年 Handsly. All rights reserved.
//

#include <stdio.h>
#include "yunSuan.h"
int main(int argc, const char * argv[]) {
//    int num = add(40,90);
//    int cheng = multip(567,90);
    int a = -98;
    int b = ~a;
  
    printf("%d\n",b);
    return 0;
}

 题目:
 2. 请计算97在计算机内存中是以什么样的二进制存储的.
 
 
 3. 请计算出如下数据的原码、反码、补码.
 13
 -81
 
 
 
 4. 请分析以下结果是什么?
 int a = 20;
 int b =  a & 3;
 请问b的值是多少
 
 
 5.  int a = -67;
 int b = 3;
 int c = a | b;
 请问c的值是多少
 
 6.  int a = -87;
 int b = -9;
 int c = a ^ b;
 请问c的值是多少
 
 
 7.  int a = -98;
 int b = ~a;
 请问b的值是多少.
 
 8.  int a = 81;
 int b = 3;
 int c = a << b;
 请问c的值是多少?
 
 9.  int a = 8;
 int b = 2;
 int c = a  >> b;
 请问c的值是多少.
 
 
 10. 有两个变量.int a = 10, b = 20;
 请至少用3种方法交换这两个变量的值.
 
 
 11. 请算出十进制数21的二进制表现形式.
 
 
 12. 请将下列十进制数据转换为对应存储在内存中的二进制形式.
 -19
 20
 
 
 
 
 13. 请将下列二进制的数据转换为对应的十进制数.
 00000000 00000000 00000000 00011111
 
 11111111 11111111 11111111 11111001
 
 
 
 14. 请将下列的十六进制数转换为二进制.
 0x1A3DE
 0xAEF19
 
 
 
 
 ********************答案**********************************
 
 
 第二题: 00000000 00000000 00000000 01100001

 第三题: 13
        原码:00000000 00000000 00000000 00001101
        反码:00000000 00000000 00000000 00001101
        补码:00000000 00000000 00000000 00001101
        -81
        原码:10000000 00000000 00000000 01010001
        反码:11111111 11111111 11111111 10101110
        补码:11111111 11111111 11111111 10101111
 第四题: 20: 00000000 00000000 00000000 00010100
        3:  00000000 00000000 00000000 00000011
        结果: 0 ;
 第五题: -67:原码: 10000000 00000000 00000000 01000011
            反码: 11111111 11111111 11111111 10111100
            补码: 11111111 11111111 11111111 10111101
          3:补码: 00000000 00000000 00000000 00000011
        -------------------------------------------------    
                 11111111 11111111 11111111 10111111
           反码:  11111111 11111111 11111111 10111110
           原码:  10000000 00000000 00000000 01000001
        结果:-65
 第六题: -87:原码: 10000000 00000000 00000000 01010111
            反码: 11111111 11111111 11111111 10101000
            补码: 11111111 11111111 11111111 10101001
 
         -9:原码: 10000000 00000000 00000000 00001001
            反码: 11111111 11111111 11111111 11110110
            补码: 11111111 11111111 11111111 11110111
 
            补码: 11111111 11111111 11111111 10101001
            ------------------------------------------------
                 00000000 00000000 00000000 01011110
 
 
 
 第七题:  ~ -98 补码: 10000000 00000000 00000000 01100010
 
               补码: 01111111 11111111 11111111 10011110
               反码: 01111111 11111111 11111111 10011101
 
               原码: 00000000 00000000 00000000 01100001
 
 
 
 
 第八题:  81 * 8 = 648
 第九题:  8 / 4 = 2 
 第十题: temp = a ; a = b; b = temp;
        a = a + b ; b = a - b ; a = a - b;
        a = a ^ b ; b = a ^ b ; a = a ^ b;
 
 第十一题:00000000 00000000 00000000 00010101
 
 第十二题: -19:10000000 00000000 00000000 00010011
           20:00000000 00000000 00000000 00010100
 
 第十三题: 31;-7
 
 第十四题:
   1     A      3      D     E
 0001   1010   0011   1101  1110
   A     E      F      1     9
 1010   1110    1111 0001   1001

