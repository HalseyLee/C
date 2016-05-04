
//  随机产生10个3-200之间的随机数,求出其中的最大值.


#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int b = 3;
    for(int i = 0;i<10;i++)
    {
        int a = arc4random_uniform(198) + 3;
        if ( a > b) b = a;
    }
    printf("%d \n",b);
}
