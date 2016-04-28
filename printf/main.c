//1. 请编写1个程序，定义变量保存1个人的年龄、身高、体重。
//然后输出这个人的信息.
//
//输出:我的年龄是xx岁,我的身高是xx,我的体重是xxKg

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int age;
//    int height;
//    int weight;
//    age = 45;
//    height = 170;
//    weight = 50;
//    printf("我的年龄是 %d 岁\n",age);
//    printf("我的身高是 %d cm\n",height);
//    printf("我的体重是 %d kg\n",weight);
    int age = 0,height = 0, weight = 0;
    printf("请输入你的年龄/身高/体重");
    scanf("%d%d%d",&age,&height,&weight);
    printf("我的年龄是 %d 岁\n 我的身高是 %d cm\n 我的体重是 %d kg\n",age,
           height,weight);
}
