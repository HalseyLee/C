//写一个程序,判断输入的一个年份是否为闰年,只在这个年份是闰年的时候打印"这个年份是闰年"
//-> 年份能够被400整除.
//-> 年份能够被4整除但是不能被100整除

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //申明变量
    int year = 0;
    printf("请输入一个年份");
    scanf("%d",&year);
    //判断条件
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        printf("这个年份是闰年\n");
    return 0;
}
