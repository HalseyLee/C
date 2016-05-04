//提示用户输入一个正整数n，求出1-n之间所有的整数的累加和.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 0,sum = 0;
    printf("请输入一个整数:r");
    scanf("%d",&a);
    for(int i = 0; i <= a; i++) sum += i;
    printf("%d \n",sum);
}
