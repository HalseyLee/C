//请用户从控制台输入1个秒数,求用户输入的秒数是几天几小时几分钟几秒? *****


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int minute,day,hour,second;
    printf("请输入秒数");
    scanf("%d",&second);
    minute = second / 60; //分钟
    hour = minute / 60; // 小时
    day = hour / 24;  //天数 确定
    
    hour = hour % 24; // 模 小时
    minute = minute % 60; // 模 分钟
    second = second % 60; //模 秒
    
    printf("%d day %d hour %d minute %d second",day,hour,minute,second);
    return 0;
}
