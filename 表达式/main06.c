//裤子的单价是78.8元. 衬衫的单价是45.6元。
//输入顾客购买的裤子数量 和 衬衫的数量
//显示顾客应该付多少钱.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float pants = 78.8, tshirt = 45.6;
    float p,t,allPrice;
    printf("请输入裤子数量和衬衫数量");
    scanf("%f %f",&p,&t);
    allPrice = p * pants + t * tshirt;
    printf("%.3f",allPrice);
    return 0;
}
