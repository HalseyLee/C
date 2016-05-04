
//循环录入5个人的年龄并计算平均年龄,如果录入的数据出现负数或大于100的数,立即停止输入并报错

#include <stdio.h>

int main(int argc, const char * argv[]) {
// 循环体 提示输入 如果大于 100 break;
    int i = 0,totalAge = 0;
    while(i < 5)
    {
        int age = 0 ;
        printf("请依次输入5个人的年龄");
        scanf("%d",&age);
        if (age > 0 && age < 100)
            totalAge += age;
        else break;
        i++;
    }
    if (i == 5) printf("%d",totalAge / 5);
    else printf("请输入范围内的年龄");
}
