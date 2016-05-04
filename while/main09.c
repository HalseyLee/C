
//  从键盘输入10个数,求出最大数

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0, max = INT32_MIN;
    
    while( i < 10)
    {
        int num = 0;
        printf("请输入10次数字 \n 请输入第%d个数字: \n",i+1);
        scanf("%d",&num);
        if( num > max) max = num;
        i++;
    }
    printf("%d \n",max);
}
