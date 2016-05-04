
//让用户反复不停的输入1个数,然后打印这个数的2倍, 当用户输入的是100的时候就停止输入.
#include <stdio.h>

int main(int argc, const char * argv[]) {
   
//    int i= 0;
//    while( i != 100)
//    {
//        printf("Please Enter A Number \n");
//        scanf("%d",&i);
//        if ( i == 100) break;
//        printf("%d \n",2*i);
//    }
    while (1)
    {
        int num;
        printf("请输入一个数字");
        scanf("%d \n",&num);
        if( num == 100)
            break;
        printf("%d \n",2*num);
 
    }
    
}
