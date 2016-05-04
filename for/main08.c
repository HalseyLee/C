//打印100 - 999中不能被7整除又不包含7的数


#include <stdio.h>

int main(int argc, const char * argv[]) {
    for( int i = 100; i <= 999;i++)
    {
        if (i % 7 != 0)
        {
            int hundred = i / 100;
            int ten = i % 100 / 10;
            int basic = i % 10;
            if(  hundred != 7 && ten != 7 && basic!= 7)
                printf("%d \n",i);
            
            
        }
    }
}
