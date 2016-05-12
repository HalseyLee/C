//
//  main.c
//  作业
//
//1. 有代码如下:
//int num = 10;
//int *p1 = &num;
//
//请写代码输出num、p1 变量的地址和值.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num = 10;
    int *p1 = &num;
    printf("num的地址:%p \n",&num);
    printf("p1的地址:%p \n",&p1);
    printf("num的值:%d \n",num);
    printf("p1的值:%p \n",p1);
    printf("*p1的值:%d \n",*p1);
    return 0;
}
