
//  输入班级人数,然后依次输入学员成绩，计算班级学员的平均成绩和总成绩

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number = 0,totalScore = 0,i = 0;
    printf("请输入班级人数");
    scanf("%d",&number);
    while(i < number)
    {
        int score = 0;
        printf("请输入第%d位同学的分数",i+1);
        scanf("%d",&score);
        totalScore += score;
        i++;
    }
    printf("总成绩:%d \n",totalScore);
    printf("平均分:%d",totalScore / number);
}
