//编程将所有“水仙花数”打印出来，并打印其总个数。 “水仙花数”是一个 各个位立方之和等于该整数的三位数。


#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int a = 0;
    for (int i = 0; i <= 999; i++)
    {
        int hundred = i / 100;
        int ten = i % 100 / 10;
        int basic = i % 10;
        int lily = pow(hundred,3) + pow(ten,3) + pow(unit,3)
        if (lily == i)
            //hundred*hundred*hundred + ten*ten*ten + basic*basic*basic
        {
            printf("%d \n",i);
            a++;
        }
    }
    printf("一共 %d 个 \n",a);
    
//            for( int i = 100; i <= 999; i++)
//            {
//                int hundred = i / 100;
//                int ten = i % 100 / 10;
//                int basic = i % 10;
//                int h3 = pow(hundred,3);
//                int t3 = pow(ten,3);
//                int b3 = pow(basic,3);
//                if(h3 + t3 + b3 == i) printf("%d \n",i);
//            }
//            printf("计算完毕 \n");
    
    
    
    
    
    
    
    
    
    
    
    
    
}
