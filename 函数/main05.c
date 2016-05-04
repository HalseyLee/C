//写1个函数,传入1个年份和月份,返回这1年的这1月有多少天.

#include <stdio.h>

int howDay(int year,int month)
{
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            //break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            //break;
        case 2:
            if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
                return 29;
            else
                return 28;
        default:
            return 0;
            break;
    
    }
}

int main(int argc, const char * argv[]) {
    int day = howDay(2016,2);
    printf("%d",day);
    return 0;
}
