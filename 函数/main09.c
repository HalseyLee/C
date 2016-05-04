//写1个函数 判断1个数 是否是 正数


#include <stdio.h>
int isZhenShu(int num)
{
if(num > 0)
    return 1;
else
    return 0;
}
int main(int argc, const char * argv[]) {
    int res = isZhenShu(0);
    if(res == 1)
        printf("是正");
    else
        printf("不是正数");
    return 0;
    return 0;
}
