//打印九九乘法表


#include <stdio.h>

int main(int argc, const char * argv[]) {
    for(int i = 1; i <= 9;i++)
    {
        for(int j = 1;j <= i;j++) printf("%d * %d=%d \t",j,i,i*j);
        printf("\n");
    }
}
