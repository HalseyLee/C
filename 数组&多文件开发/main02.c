
//写1个函数判断指定的元素是否在指定的数组中存在.



#include <stdio.h>
//int isExist(int arr[],int len, int key);
int main(int argc, const char * argv[])
{
    int num[] = {23,45,67,3,21,45,56,7,89,65};
    int len = sizeof(num) / sizeof(num[0]);
    int key = 31,flag = 0;
    for(int i = 0;i < len;i++)
    {
        if(num[i] == key)
        {
            printf("找到了 \n");
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("没找到! \n");
    }
}
