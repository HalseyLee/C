
//编一个程序，求出1到100之间的奇数之和

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int sum = 0;
    for(int i = 1; i < 100; i++)
        if(i % 2 != 0) sum += i;
    printf("%d \n",sum);
}
