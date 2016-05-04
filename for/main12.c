//假设一个班中有20个学生，输入每一位的成绩然后统计出该班不及格的学生人数


#include <stdio.h>

int main(int argc, const char * argv[]) {
      int score = 0,num = 0;
    for(int i = 0;i < 20;i++)
    {
      
        printf("请输入第%d名同学成绩:",i+1);
        scanf("%d",&score);
        if(score < 60) num++;
    }
    printf("不及格的人数为:%d",num);
}
