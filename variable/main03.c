
// 自定义输出数值

//请定义1个整型的变量. 将这个整型的变量的值输出
//要求: 输出的整型的变量的数据如果不足8位 则在这个数据的前面以0补齐8位.
//(提示:%8d可以使整型数据输出位数为8,%08d可以在不足的位置上补0)
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    num = 3;
    printf("%08d \n",num);
}
