
//定义一个结构体,然后打印里面的每一个元素.(两种方式:结构体变量和指针)

#include <stdio.h>

struct printArr
{
    int age;
    char* name;
    double salary;
};
int main()
{
    struct printArr Alex = {30,"埃里克",1234.65};
    printf("%d %s %.2f \n",Alex.age,Alex.name,Alex.salary);
    struct printArr* pAlex;
    pAlex = &Alex;
    printf("%d %s %.2f",pAlex->age,pAlex->name,pAlex->salary);
}
