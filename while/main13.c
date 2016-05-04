//写1个程序. 随机的产生1个2位数的加法运算.让用户输入这个运算的结果 然后判断这个结果是否正确.
//来10次.
//每个人默认有10分.
//产生10个加法运算.操作数的范围在10-99之间. 每产生1个加法运算 就让用户输入结果.判断是否正确.
//当回答正确的时候就为用户加1分. 错误的时候就扣1分.
//当10道题目回答完毕之后 就显示用户得的分数.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int i = 0,socre = 10,usum = 0;
    while( i < 10)
    {
        int ram1 = arc4random_uniform(90)+10;
        int ram2 = arc4random_uniform(90)+10;
        printf("%d + %d = ",ram1,ram2);
        scanf("%d",&usum);
        if( usum == ram1 + ram2) socre += 1;
        else socre -= 1;
        i++;
    }
    printf("您得了%d分 \n",socre);
}
