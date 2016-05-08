
//完成冒泡排序的理解

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[] = {23,45,67,3,21,45,56,7,89,65};
    int len = sizeof(num) / sizeof(num[0]);
    //比较时,因为不包含自身,所以 len - 1
    for(int i = 0;i < len - 1;i++)
    {
        //不包含自身,下标为1开始比较
        for(int j = i + 1;j < len;j++)
        {
            if(num[i] < num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(int i = 0; i < len; i++)
    {
        printf("%d  ",num[i]);
    }
}
