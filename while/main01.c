//请写1个支付宝接龙红包程序.
//随机产生1-100的随机数,作为红包金额.
//让用户不断的去猜,直到猜正确为止.最后发给用户的红包金额是 红包金额/猜得次数.

#include <stdio.h>
#include  <stdlib.h>
int main(int argc, const char * argv[]) {
    int num = arc4random_uniform(100)+1;
    printf("%d",num);
    //    while(1)
    //    {
    //        int input = 0,i = 0;
    //        printf("嘿!嘿!嘿! 你猜红包数额多少?\n");
    //        scanf("%d",&input);
    //        i++;
    //        printf("%d",i);
    //        if(input == num) break;
    //    }
    //    printf("你获得了%f元 \n",num / (float)i);
    int input = 0,i = 0 ;
    while(input != num)
    {
        printf("嘿!嘿!嘿! 你猜红包数额多少?\n");
        scanf("%d",&input);
        i++;
        printf("%d \n",i);
    }
    printf("算你狠,给你%f", num / (float)i);    
}
