//请用户输入1个年份,判断用户输入的年份是否为闰年,如果是闰年就显示"是闰年",否则就显示"不是闰年".
//满足下面两个条件之一的年份就是闰年
//-> 年份能够被400整除.
//-> 年份能够被4整除但是不能被100整除.

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int year = 0;
//    printf("请输入一个年份");
//    scanf("%d",&year);
    
//  性本善,性本恶. 角度方向

/* 从是闰年的角度*/
    
//    if( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        printf("是闰年");
//    else
//        printf("不是闰年");

/* 从不是闰年的角度*/
    int y;
    printf("please enter the year you want to be figured out:") ;
    scanf("%d",&y);
    
    y%4||(!(y%100)&&y%400)?printf("No, %d is not a leap year.\n",y):printf("Yes, %d is a leap year.\n",y);


}
