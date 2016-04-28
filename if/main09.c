//编写1个程序,请用户输入1个整数,如果输入的整数大于0,则为该数加上100;如果小于0,则加上500;如果等于0,则什么都不做.
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num = 0;
    printf("请输入一个整数");
    scanf("%d",&num);
//    if (num > 0) num += 100;
//    else if (num < 0) num += 500;   
//    printf("%d",num);
    if (num != 0)
    {
        if(num > 0) num += 100;
        else num += 500;
    }
    printf("%d",num);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
