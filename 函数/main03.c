// 写1个函数,传入1个人的年龄,判断年龄是否成年.


#include <stdio.h>
int isAdult( int age)
{
    if(age > 18)
        return 1;
    else
        return 0;
}
int main(int argc, const char * argv[]) {
    int res = isAdult(45);
    if(res == 1)
        printf("成年了!!!");
    else
        printf("未成年");
//    printf("Hello, World!\n");
    return 0;
}
