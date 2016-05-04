//实现要求用户一直输入QQ号码和密码，只要不是123456、888888就一直提示要求重新输入,如果正确则提登录成功.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int account = 0, passWord = 0;
    while(account != 123456 || passWord != 888888)
    {
        
        printf("请输入帐号");
        scanf("%d",&account);
        printf("请输入密码");
        scanf("%d",&passWord);
    }
    printf("恭喜!!登录成功");
}
