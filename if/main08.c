
//请用户输入年龄,如果大于等于18岁,则告知用户本网站可以查看;
//如果小于10岁, 则告知用户不允许查看.
//如果大于等于10岁并且小于18岁,则再次询问用户是否要继续查看,如果用户的选择是继续查看,就显示给他看,否则就提示"你放弃查看"
//
//提示: 在询问用户是否要查看的时候,可以提示用户输入 y或者n 的字符. y代表yes n代表no
//请问你要继续查看吗? y/n
//接收用户输入y或者n。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int age= 0;
    printf("请输入你的年龄 \n");
    scanf("%d",&age);
//    if(age > 18)
//        printf("可以看,让你爽了");
//    
//    else if( age >= 10 && age < 18 )
//    {
//        //缓存清零
//        rewind(stdin);
//        char quanXian = 'n';
//        printf("你是否继续查看  y/n \n");
//        scanf("%c",&quanXian);
//        if (quanXian == 'y')
//            printf("你可以看了");
//        else
//            printf("好的,你放弃了");
//    }
//    else
//        printf("小兔崽子,你想干嘛!!!");


    if (age > 18) printf("你可以看了");
    else
        if(age < 10) printf("就你还想看,再等等!!! \n");
        else
        {
            char a;
            rewind(stdin);
            printf("是否查看 y/n \n");
            scanf("%c",&a);
//            if(a == 'y')
//                printf("你还是没忍住 哈哈哈");
//            else
//                printf("你抵制住了诱惑!!恭喜");
            
            a == 'y' ? printf("你还是没忍住 哈哈哈") : printf("你抵制住了诱惑!!恭喜");
        }
    
}
