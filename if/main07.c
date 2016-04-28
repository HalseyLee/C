
//  要求用户输入两个整型的数a、b. 如果a能被b整除 或者 a加b的结果大于100. 则输出a的值,否则输出b的值.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a ,b;
    printf("请输入两个整数 \n");
    scanf("%d%d",&a,&b);
    if (a % b == 0 || a + b > 100 )
        printf("%d \n",a);
    else
        printf("%d \n",b);
}
