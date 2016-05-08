
//请用户输入10个整型的数,将其存储到数组之中. 然后将其逆序输出.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10] = {0};
    for(int i = 0;i < 10;i++)
    {
        printf("请输入第%d个数 \n",i+1);
        scanf("%d",&arr[i]);
    }
    //选择排序
    for(int i = 0;i < 10;i++)
    {
        for(int j = i+1;j < 10;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0;i < 10;i++)
    {
        printf("%d  ",arr[i]);
    }
}
