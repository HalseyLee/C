//写1个函数.传入1个年份, 判断该年份是否为闰年.


#include <stdio.h>
int isRunNian(int year)
{
    if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        return 1;
    else
        return 0;
}





int main(int argc, const char * argv[]) {
    int res = isRunNian(2016);
    if(res == 1)
        printf("闰年");
    else
        printf("平年");
    return 0;
}
