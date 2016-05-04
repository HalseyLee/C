//写1个函数,返回1个浮点数的四舍五入的整数.


#include <stdio.h>
int siSheWuRu(float a)
{
    int b = a + 0.5;
    return b;
}
int main(int argc, const char * argv[]) {
    int res = siSheWuRu(9.123434);
    printf("%d",res);
    return 0;
}
