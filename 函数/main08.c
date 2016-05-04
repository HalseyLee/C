//写1个函数,判断1个整型的数是不是3的倍数


#include <stdio.h>
int isThree( int num)
{
    if(num % 3 == 0)
        return 1;
    else
        return 0;
    
}


int main(int argc, const char * argv[]) {
    int res = isThree(20120);
    if(res == 1)
        printf("是3的倍数");
    else
        printf("不是3的倍数");
    return 0;
}
