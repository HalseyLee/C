//写1个函数,根据传入的分数返回这个分数的所在的等级  成绩>=90 ：A, 成绩>=80 ：B,成绩>=70 ：C,  成绩>=60 ：D  , 成绩<60   ：E


#include <stdio.h>
char score(int num)
{
    if(num >= 90)
        return 'A';
    else if(num >= 80)
        return 'B';
    else if(num >= 70)
        return 'C';
    else if(num >= 60)
        return 'D';
    else
        return 'E';
}

int main(int argc, const char * argv[]) {
    char res = score(10);
    printf("%c\n", res);
    return 0;
}
