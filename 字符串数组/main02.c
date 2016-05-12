
//8,在控制台上输入整数,创建一个长度为3的int数组,用数组每一个元素的指针组成一个存放指针的数组,通过这个指针数组求int数组内元素的最小值
#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int num;
//    int arr[3];
//    int *p = arr;
//    int min = INT32_MAX;
//    for(int i = 0;i < 3;i++)
//    {
//        printf("请输入三个整数");
//        scanf("%d",&num);
//        *(p+i) = num;
//        if(*(p+i) < min)
//        {
//            min = *(p+i);
//        }
//    }
//    printf("%d \n",min);
    
 //   int num = 0;
    int arr[3] = {0};
    int *parr[3];
    int min = INT32_MAX;
    for(int i = 0;i < 3;i++)
    {
        printf("请输入%d个整数",i+1);
        scanf("%d",&arr[i]);
        parr[i] = &arr[i];
        if(*parr[i] < min)
        {
            min = *parr[i];
        }
    }
    printf("%d",min);
    
    
    
    
    
    
    
    
    
    
    
}
