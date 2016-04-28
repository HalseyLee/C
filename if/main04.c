//
//  main.c
//  编程6
//
//  Created by Handsly on 16/4/25.
//  Copyright © 2016年 Handsly. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double a = 0;
    printf("请输入一个浮点数");
    scanf("%lf",&a);
    int b = a; // 强制类型转换,取整数部分
    b = b+1;
    if(a + 0.5 > b )
    {
         printf("%d",b);
    }
    
    if(a + 0.5 < b)
    {
        b = b-1;
        printf("%d",b);
    }
   // printf("%d",(int)a+0.5);
    
    
    
    
    
    
}
