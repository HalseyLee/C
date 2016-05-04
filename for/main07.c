//使用for循环,统计1-1000之间7的倍数有多少个.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 0;
    for( int i = 1;i <= 1000;i++)
    {
        if ( i % 7 == 0) a++;
    }
    printf("%d \n",a);
}
