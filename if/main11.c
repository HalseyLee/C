//模拟:在8.1到8.2中所有版本显示第一种图片,8.4到9.2版本显示第二种图片,9.3版本以后显示第三种图片
//提示:
//版本号可以用一个实型的数来接收,根据输入的版本号,来打印一句话表示显示图片:如printf("现在显示的是第一种图片");

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num = 0;
    printf("请输入版本号");
    scanf("%f",&num);
    if( num >= 9.3)
    {
        printf("现在显示第一种图片");
    }
    else if( num >= 8.4)
    {
        printf("现在显示第二种图片");
    }
    else if(num >= 8.1 && num <= 8.2 )
    {
        printf("现在显示第三种图片");
    }
    else
        printf("该版本不支持");
}
