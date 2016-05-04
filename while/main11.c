
// 求1-100中 是7的倍数 的数值之和
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i= 1,sum = 0;
    while(i <= 100)
    {
        if (i % 7 == 0) sum += i;
        i++;
    }
    printf("%d \n",sum);
}