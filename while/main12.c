//老师问学生,这道题你会做了吗?
//如果学生答"会了(y)",则可以放学.
//如果学生不会做(n),则老师再讲一遍,再问学生是否会做了......直到学生会为止,才可以放学.
//直到学生会或老师给他讲了10遍还不会,都要放学

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char answer = 'a';
    int i = 0;
    //循环体: 接收 判断会不会
    while( i < 10)
    {
        printf("说你到底会不会啊? y/n");
        rewind(stdin);
        scanf("%c",&answer);
        
        if (answer == 'y') break;
        else printf("好!!我再讲一遍 \n");
        i++;
        if(i == 10)
            printf("去死!!!!");
    }
    printf("放学");
}
 