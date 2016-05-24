
//定义一个带参的宏，实现两个整数之间的交换

#import <Foundation/Foundation.h>
#include <stdio.h>
#define CG(a,b,temp) temp = a; a = b; b = temp

int main(int argc, const char * argv[])
{
    int a = 5,b = 6,temp = 0;
    CG(a,b,temp);
//    temp = a;
//    a = b;
//    b = temp;
    printf("%d %d \n",a,b);
    return 0;
}
