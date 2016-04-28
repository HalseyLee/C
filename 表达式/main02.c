//要求用户输入圆形的半径,求出圆形的面积和周长,并将结果显示在屏幕上.
//面积:pi*r*r 周长: 2*pi*r  PI的值取3.14

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float r,area,circ;
    float PI = 3.14;
    printf("请输入半径");
    scanf("%f",&r);
    area = PI * r * r;
    circ = 2 * PI * r;
    printf("%f %f\n",area,circ);
    return 0;
}
