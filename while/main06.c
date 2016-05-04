
//  求1-100之间6的倍数的个数


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i =1,b = 0;
    while(i <= 100)
    {
        if( i % 6 == 0) b++;
        i++;
    }
    printf("%d \n",b);
}
