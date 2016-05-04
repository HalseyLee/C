//本金10000元存入银行，年利率是千分之三，每过1年，将本金和利息相加作为新的本金。计算5年后，获得的本金是多少？

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int principal = 10000;
//    for(int i = 0; i < 5;i++)
//        principal = principal * 0.03 + principal ;
//    printf("%d \n",principal);
    float principal = 10000;
    for (int i = 1; i<=5;i++ )
    {
        float interest = 0.003 * principal;
        principal += interest;
    }
    printf("%.2f \n",principal);

 

}
