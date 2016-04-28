//请写1个ATM程序.
//定义1个变量,用来存储该ATM机器中剩余的金额.
//接收用户输入取款金额.
//由于ATM机器只支持100的票子.
//如果用户输入的取款金额不是100的倍数的话.则打印 "对不起,本机器无法提供输入的面额"
//如果用户输入的取款金额大于了ATM的剩余金额.则打印 "对不起,余额不足."
//如果用户输入的取款金额是100的倍数,并且小于等于ATM的剩余金额就打印."正在出钞,请从出钞口拿钱.ATM机器剩余xx元"

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int shengYu = 1000,quKuan= 0;
    printf("请输入取款金额,本机器不支持小于100面额的纸币 \n");
    scanf("%d",&quKuan);
    
//    if(quKuan % 100 == 0 && quKuan <= shengYu)
//        printf("正在出超,请从出钞口拿钱,ATM机器剩余%d元.",shengYu-quKuan);
//   
//    else if(quKuan % 100 != 0  )
//        printf("对不起,本机起无法提供 输入的面额");
//    
//    else if(quKuan > shengYu)
//        printf("对不起余额不足");
    
    if(quKuan % 100 != 0)
        printf("对不起,本机起无法提供输入的面额 \n");
    else{
        if(quKuan <= shengYu)
        {
            int yuEr= shengYu - quKuan;
            printf("卡上剩余%d \n",yuEr);
        }
        else{
            printf("对不起余额不足!!");
        }
    
    
    
    }
        
        
    
    
    
    
    
    
    
    
    
    
    
}
