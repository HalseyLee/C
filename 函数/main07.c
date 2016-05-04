//写1个函数,返回指定范围中所有的数的累加和.


#include <stdio.h>
int sum (int a,int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;

}
int main(int argc, const char * argv[]) {
    int res = sum (1,100);
    printf("%d \n",res);
    return 0;
}
