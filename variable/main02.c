//在屏幕上输出：我的手机  型号:998   价格:1500元   重量:0.3kg,
//请定义变量存存储上面的值,并显示在屏幕上.
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int model;
    int price;
    int weight;
    model = 998;
    price = 1500;
    weight = 0.3;
    printf("型号: %d",model);
    printf("价格: %d",price);
    printf("重量: %d kg \n",weight);
}
