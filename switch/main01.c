//请输入儿子的成绩.
//90以上  奖励保时捷汽车.
//80-89  奖励奔驰汽车
//70-79  奖励东风日产汽车
//60-69  拖拉机.
//30-59  打屁股
//30以下  断绝父子关系.

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    float achievement;
    
    printf("请输入成绩");
    scanf("%f",&achievement);
    
    int c = achievement / 10;
    
    switch(c) {
        case 10:
        case 9:
            printf("奖励保时捷");
            break;
        case 8:
            printf("奖励奔驰");
            break;
        case 7:
            printf("奖励东风日产");
            break;
        case 6:
            printf("拖拉机");
            break;
        case 5:
        case 4:
        case 3:
            printf("打屁股");
            break;
        default:
            printf("断绝父子关系");
            
    }
}
