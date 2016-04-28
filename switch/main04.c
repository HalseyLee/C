//请用户输入1个年份,再输入1个月份,显示这1年的这1月有多少天.
//提示:
//1、3、5、7、8、10、12月份,无论是那个年份 都有31天.
//4、6、9、11月份,无论是那个年份，都是30天.
//如果是2月份,年份是闰年的话那么就有29天 否则就是28天.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year = 0,month = 0;
    printf("请输入年份月份");
    scanf("%d%d",&year,&month);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d年%d月都有31天",year,month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d年%d月都有30天",year,month);
            break;
        case 2:
            if( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                printf("%d年%d月都有29天",year,month);
            else
                printf("%d年%d月都有28天",year,month);
            break;
        default:
            printf("亲输入1-12月份");
            break;
    }
}
