
//把int arr[]={65,66,67,78}转换成一个字符数组输出
#include <stdio.h>
int main(int argc, const char * argv[]) {
    
    int arr[] = {65,66,67,78};
    char arrChar[4];
    for(int i = 0;i < 4;i++)
    {
        arrChar[i] = arr[i];
    }
    for(int i = 0;i < 4;i++)
    {
        printf("%c \n",arrChar[i]);
    }
}
