
//定义一个宏，求三个数的最大值

#include <stdio.h>
#define MAX(a,b) (a>b) b=a
int main(int argc, const char * argv[]) {
    int a = 4,b = 7,c = 8;
    if MAX(a,b);
    if MAX(c,b);
    
//    if (a > b)
//    {
//        b = a;
//    }
//    if (c > b)
//    {
//        b = c;
//    }
    printf("%d \n",b);
    return 0;
}
