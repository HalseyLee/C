//写1个函数,传入1个5位数,判断这个5位数的各位数之和是否为5.


#include <stdio.h>
int isFive(int num)
{
    int wan = num / 10000;
    int qian = num % 10000 / 1000;
    int bai = num % 10000 % 1000 / 100;
    int shi = num % 10000 % 1000 % 100 / 10;
    int ge = num % 10;
    if (wan + qian + bai + shi + ge == 5)
        return 1;
    else
        return 0;
}




int main(int argc, const char * argv[]) {
        int res = isFive(20120);
        if(res == 1)
            printf("是");
        else
            printf("否");
    return 0;
}
