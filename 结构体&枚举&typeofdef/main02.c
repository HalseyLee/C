
//定义一个结构体,然后打印里面的每一个元素.(两种方式:结构体变量和指针)

#include <stdio.h>
struct Family
{
    char* name;
    int age;
    char* id;
};

int main(int argc, const char * argv[])
{
    struct Family family[]=
    {
        {"Alex",36,"father"},
        {"Anne",34,"mother"},
        {"Jone",17,"sun"}
    };
    int len = sizeof(family) / sizeof(struct Family);
    for(int i = 0;i < len;i++)
    {
        printf("%s %d %s",family[i].name,family[i].age,family[i].id);
    
    }
    
}
