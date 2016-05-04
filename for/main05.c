
//  操场上100多人排队，三人一组多1人，四人一组多2人，五人一组多3人，共多少人？
#include <stdio.h>

int main(int argc, const char * argv[]) {
    for( int i = 100; i < 200; i++)
        if(i%3==1 && i%4==2 && i%5==3) printf("%d \n",i);
}
