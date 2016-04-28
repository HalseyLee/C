//模拟: 在ios6/7/8/9显示不同的"相机"这个应用的图标,
//提示:
//版本号可以用一个整数来接收,根据输入的版本号,来打印一句话表示显示图片:如printf("现在显示是iosXXX版本图标");

要求用2种方式实现;

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int edition = 0;
    printf("亲输入版本号");
    scanf("%d",&edition);
    switch(edition){
        case 6:
            printf("现在显示的是%d版本图标",edition);
            break;
        case 7:
            printf("现在显示的是%d版本图标",edition);
            break;
        case 8:
            printf("现在显示的是%d版本图标",edition);
            break;
        case 9:
            printf("现在显示的是%d版本图标",edition);
            break;
        default:
            printf("请输入6-9ios版本");
    }
}
