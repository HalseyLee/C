
// 请用户从控制台输入3个整型的数,显示这3个数中的最大数.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0, b=0, c=0;
    printf("亲输入三个整数");
    scanf("%d%d%d",&a,&b,&c);
//    if( a>b && a>c)
//        printf("%d",a);
//    if( b>a && b>c)
//        printf("%d",b);
//    if( c>a && c>b)
//        printf("%d",c);
    //先两个数字比较,把数字大的留下.
    if (a > b)
        b = a;
    //把剩下的两个进行比较,输出较大值.
    if (b > c)
        c = b;
    
    printf("%d \n",c);
    
}
