

//用户输入矩形的长和宽,求出矩形的面积和周长,并将结果显示在屏幕上.

//面积: 长*宽       周长  （长+宽)*2

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4;
    printf("输入矩形的长和宽");
    scanf("%d%d",&num1,&num2);
    num3 = num1 * num2;
    num4 = (num1 + num2) * 2;
    printf("面积:%d \n",num3);
    printf("周长:%d \n",num4);
    return 0;
}

