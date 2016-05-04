//写1个函数 求指定范围中所有奇数的累加和


#include <stdio.h>
int sumQiShu(int a,int b)
{
    int sum = 0;
    for(int i = a;i <= b;i++)
    {
        if ( i % 2 != 0 )
        {
            sum += i;
        }
    }
    return sum;
}
int main(int argc, const char * argv[]) {
    int res = sumQiShu(1,100);
    printf("%d",res);
    return 0;
}
