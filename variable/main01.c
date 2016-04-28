//定义一个变量存储一个人的年龄(18),然后发现这个人的年龄不是18岁,
//要把这个人的年龄修改成20岁(本题体会变量可以被重复多次赋值),
//最后把这个人的年龄输出到屏幕上?

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int age;
    age = 18;
    printf("My age is %d \n",age);
    age = 20;
    printf("NONONO!!!My age is %d \n",age);
}
