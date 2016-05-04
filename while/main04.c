
//1-100之间不能够被7整除的数的和.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i= 1,sum = 0;
    while(i <= 100)
    {
        if (i % 7 != 0) sum += i;
        i++;
    }
    printf("%d \n",sum);
}
