
// 设计一个函数,返回2个数的加减乘除的结果!
//

#include <stdio.h>
void myMath(int a,int b,int *Padd,int *Psubtract,int *Pmultiply,int *Pdivide)
{
    *Padd = a + b;
    *Psubtract = a - b;
    *Pmultiply = a * b;
    *Pdivide = a / b;
}
int main(int argc, const char * argv[]) {
    int a,b;
    printf("请输入两个整数");
    scanf("%d %d",&a,&b);
    int add = 0,subtract = 0,multiply = 0,divide = 0;
    myMath(a,b,&add,&subtract,&multiply,&divide);
    printf("加%d 减%d 乘%d 除%d",add,subtract,multiply,divide);
    
    
    
    return 0;
    
    
}
