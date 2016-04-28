//请编写如下程序:
//请用户输入星期数(1-7).打印对应的英文星期天.
//英文星期天 请使用系统自带的词典查询.
//如果用户输入的不是1-7的数,就提示:"你是从火星来的吗?"

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int day = 0;
    printf("请输入一个数字周数");
    scanf("%d",&day);
    switch(day){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
         break;
    case 4:
        printf("Thursday");
         break;
    case 5:
        printf("Firday");
         break;
    case 6:
        printf("Saturday");
         break;
    case 7:
        printf("Sunday");
         break;
    default:
        printf("请输入1-7的数字,你是火星来的吧");
         break;
        
    }
}
