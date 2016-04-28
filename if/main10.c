//编写1个程序,请用户输入1个字符数据。***
//如果这个字符是1个小写的字母,则输出"你输入的是1个小写的字母"
//如果这个字符是1个大写的字母,则输出"你输入的是1个大写的字母"
//否则,就提示你输入的不是字母.
//提示: 我们讲过,每1个字符都有1个ASCII码,而字符的ASCII码是有规律的. 可以通过判断字符的ASCII码来判断该字符是1个什么样的字符.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char alph;
    printf("亲输入一个字母");
    scanf("%c",&alph);
    if(alph > 'A' && alph < 'Z')
        printf("你输入的是一个大写字母");
    else if(alph > 'a' && alph < 'z')
        printf("你输入的是一个小写字母");
    else
        printf("请输入一个大小写字母");
}
