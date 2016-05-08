
//  返回1个整型数组中的最大值.

// 返回1个整型数组中的最小值.

//  返回1个整型数组中的累加和.

//  返回1个整型数组中的平均值.

//  返回指定的数据在 组中的下标.
#include <stdio.h>
#include "myMath.h"
int main(int argc, const char * argv[]) {
    int num[] = {34,56,67,23,567,67,98,87};
    int len = sizeof(num) / sizeof(num[0]);
    //最大值
    int res = isMax(num,len);
    printf("%d \n",res);
    //最小值
    res = isMin(num,len);
    printf("%d \n",res);
    //累加和
    res = sum(num,len);
    printf("%d \n",res);
    //平均数
    res = avg(num,len);
    printf("%d \n",res);
    //找
    int key = 23;
    res = number(num,len,key);
    printf("%d \n",res);
}
