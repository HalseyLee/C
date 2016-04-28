//买了1框鸡蛋(10个),如果这其中的坏蛋少于5个,他就吃掉.否则就退货.坏蛋的数随机产生.
//产生1个 0-10的随机数. 判断这个随机数的大小。

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int egg = arc4random_uniform(11);// (Max - Min + 1)+Min
    printf("%d \n",egg);
    if(egg < 5)
        printf("有%d个坏蛋,eat \n",egg);
    else
        printf("有%d个坏蛋 return \n",egg);
    
}
