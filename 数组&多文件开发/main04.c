
//写1个程序,接收输入班级的人数, 然后依次的输入每1个学员的成绩.将学员的成绩存储在数组之中.输入完毕之后, 显示总成绩和平均成绩.

#include <stdio.h>
#include "paiXu.h"

int main(int argc, const char * argv[])
{
    int len = 0;
    int num[len];
    printf("请输入有多少同学");
    scanf("%d",&len);
    printf("有%d名学生 \n",len);
    int sum = 0;
    for(int i = 0;i < len;i++)
    {
        printf("请输入第%d位同学成绩:",i+1);
        scanf("%d",&num[i]);
        sum += num[i];
    }
    printf("总成绩: %d \n",sum);
    printf("平均成绩: %d \n",sum / len);
    maoPao(num,len);
    for(int i = 0;i < len;i++)
    {
        printf("%d \n",num[i]);
    }
    int qsum = 0;
    for(int i = 1;i < len - 1;i++)
    {
        qsum += num[i];
    }
    printf("去掉最高分和最低分 总成绩: %d \n",qsum);
    printf("平均成绩: %d",qsum / len);
}
