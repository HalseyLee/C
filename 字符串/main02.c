//请编写1个函数.计算存储在字符数组中的字符串的长度.算法自拟,请不要调用strlen()函数.;
//得出数组的长度,作为遍历循环的轮数
//遍历字符数组,是否包含 \0
//返回 i 值

#include <stdio.h>
int test(char chs[],int len)
{
    for(int i = 0;i<len;i++)
    {
        if(chs[i] == '\0')
        {
            return i;
        }
    }
    return 0;
}
int test2(char arr[])
{
    int len = 0;
    while(arr[len] != '\0')
    {
        len++;
    }
    return len;
}

int main(int argc, const char * argv[])
{
    char num[] = "jack";
    //int len = sizeof(num);
   // int res = test(num,len);
    int res = test2(num);
    printf("%d \n",res);
}