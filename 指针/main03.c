
// 有1个数组:
//int arr[] = {10,20,30,40,50,60,70,80,90,100};
//请使用四种方式遍历方式将这个数组遍历出来.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[] = {54,23,45,67,45,78,89};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0;i < len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i = 0;i < len;i++)
    {
        printf("%d ",*(arr+i));
    }
     printf("\n");
    int *p = arr;
    for(int i = 0;i < len;i++)
    {
        printf("%d ",*(p+i));
    }
     printf("\n");
    for(int i = 0;i < len;i++)
    {
        printf("%d ",*(p++));
    }
     printf("\n");
    printf("Hello, World!\n");
    
    
    return 0;
}
