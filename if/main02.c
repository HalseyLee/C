//请写1个ATM程序.
//定义1个变量,用来存储该ATM机器中剩余的金额.
//接收用户输入取款金额.
//由于ATM机器只支持100的票子.
//如果用户输入的取款金额不是100的倍数的话.则打印 "对不起,本机器无法提供输入的面额"
//如果用户输入的取款金额大于了ATM的剩余金额.则打印 "对不起,余额不足."
//如果用户输入的取款金额是100的倍数,并且小于等于ATM的剩余金额就打印."正在出钞,请从出钞口拿钱.ATM机器剩余xx元"


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int money = 0,sum = 700,left = 0;
    printf("输入取款金额");
    scanf("%d",&money);
    if(money % 100 != 0)
        printf("本机无法提供输入的金额\n");
    if(money > sum)
        printf("余额不足");
    if(money % 100 == 0 && money < sum)
    {
        left = sum - money;
        printf("正在打印,请从出钞口拿钱.卡上余额%d元 \n",left);
    }
    
    
    return 0;
}
