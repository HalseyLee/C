//请输入儿子的成绩.
//90以上  奖励保时捷汽车.
//80-89  奖励奔驰汽车
//70-79  奖励东风日产汽车
//60-69  拖拉机.
//30-59  打屁股
//30以下  断绝父子关系.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float achievement = 0;
    printf("请输入土豪的成绩");
    scanf("%f",&achievement);
    if (achievement < 30 )
        printf("断绝父子关系");
    if (achievement >= 30 && achievement <= 59 )
        printf("打屁股");
    if(achievement >= 60 && achievement <= 69)
        printf("拖拉机");
    if (achievement >= 70&& achievement <= 79)
        printf("奖励东风日产");
    if(achievement >= 80&& achievement <= 89)
        printf("奖励奔驰");
    if(achievement >= 90)
        printf("奖励保时捷");
    
    return 0;
}
