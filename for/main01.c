//有一篮鸡蛋，不止一个，有人两个两个数，多余一个，三个三个数，多余一个，再四个四个地数，也多余一个，请问这篮鸡蛋至少有多少个

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    for(int i = 0; i < 999;i++)
//        if(i % 2 == 1 && i % 3 == 1 && i % 4 == 1) printf("%d \n",i);
    int egg = 0;
    for (int i =2;(i%2 || i%3 || i%4);i++)
        egg = i + 1;
    printf("%d",egg);
    
}
