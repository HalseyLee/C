
//请编写1个函数. 自己设计算法将1个字符串连接到另外1个字符的后面.

#include <stdio.h>
void con(char one[],char two[])
{
    int i,j;
    char three[80];
    for(i = 0;one[i] != '\0';i++)
    {
        three[i] = one[i];
    }
    for(j = 0;two[j] != '\0';j++)
    {
        three[i+j] = two[j];
    }
    three[i+j] = '\0';
    puts(three);
}

int main(int argc, const char * argv[]) {
    
    char one[40],two[40];
    printf("请输入一个字符串");
    gets(one);
    
    printf("请输入一个字符串");
    gets(two);
//    int i,j;li
//    for(i = 0; one[i] != '\0'; i++)
//    {
//        three[i] = one[i];
//    }
//    for(j = 0; two[j] != '\0'; j++)
//    {
//        three[i+j] = two[j];
//    }
//    three[i+j] = '\0';
//    puts(three);
    con(one,two);
    return 0;
    
    
    
//    int i,j;
//    
//    char a[40],b[40],c[80];
//    
//    printf("请输入第一个字符串: ");
//    gets(a);
//    
//    printf("请输入第二个字符串: ");
//    gets(b);
//    
//    for (i = 0; a[i] != '\0'; i++) {
//        c[i] = a[i];
//    }
//    
//    for (j = 0 ; b[j] != '\0'; j++) {
//        c[i+j] = b[j];
//    }
//    
//    c[i + j] = '\0';
//    
//    puts(c);
//    
//    return 0;
    
}
