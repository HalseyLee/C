//编一个程序，定义圆周率Pi=3.14,
//要求用户输入圆柱的底圆的半径和圆柱的高 求出圆柱的体积。
//圆柱的体积:Pi*圆的半径的平方*圆柱的高

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float pi = 3.14;
    float r,height,bulk;
    printf("请输入半径和高\n");
    scanf("%f%f",&r,&height);
    bulk = pi * r * height;
    printf("%.3f",bulk);
    return 0;
}
