//编程实现计算几天(如46天)是几周零几 天. 天数要求用户 从控制台输入
//请用户输入1个天数 计算用户输入的天数是几周零几天。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int day,week;
    printf("请输入天数");
    scanf("%d",&day);
    week = day / 7;
    day = day % 7;
    printf("第%d周 第%d天",week,day);
    return 0;
}
