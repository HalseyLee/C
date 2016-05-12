//自己定义一个字符串数组,打印里面的每一个字符(用两种方式定义)
//

#include <stdio.h>
#include "string.h"
int main(int argc, const char * argv[]) {
//    char arr[] = "abnknakubopjzknaehrihjanb";
//    int len = sizeof(arr)/ sizeof(arr[0]);
//    for(int i = 0;i < len;i++)
//    {
//        printf("%c",arr[i]);
//    }
//    return 0;

//    char *arr = "abnknakubopjzknaehrihjanb";
//    unsigned long len = strlen(arr);
//    for(int i = 0;i < len;i++)
//    {
//        printf("%c",*(arr+i));
//    
//    }
    
    
    
//    char arr[][5] = {"Alex","Lily","Lucy"};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    for(int i = 0;i < len;i++)
//    {
//        printf("%s\n",arr[i]);
//    }
    
    
    char *arr[] = {"Alex","Lily","Lucy"};
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < len;i++)
    {
        printf("%s\n",arr[i]);
    
    }
    
    
    
    
    

}
