
//  求1-200之间的所有的整数的累加和
#include <stdio.h>

int main(int argc, const char * argv[]) {

    
// while 方式实现
    
//    int i = 1,sum = 0;
//    while(i <= 200)
//    {
//        sum += i;
//        i++;
//    }
    
    for (int i = 0; i < 201; i++)
        sum += i;
    printf("%d \n",sum);
}
