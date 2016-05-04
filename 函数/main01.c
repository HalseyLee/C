//写1个函数 返回两个整型数中的最大值.


#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main(int argc, const char * argv[]) {
    int res = max (5,7);
    printf("%d \n",res);
}
