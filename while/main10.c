//1000~ 5000之间有多少整数，其各位数字之和为5，分别是哪些数（例如整数2003的各位数字之和为 2+0+0+3 ，等于5）），
//并统计满足条件的整数有多少个。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 1000;
    while( i <= 5000)
    {
        int thousand = i / 1000;
        int hundred = i % 1000 / 100;
        int ten = i % 1000 % 100 /10;
        int basic = i % 10;
        if (thousand + hundred + ten + basic ==5) printf("%d \n",i);
        i++;
    }
}
