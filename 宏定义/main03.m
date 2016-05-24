
// 将计算圆面积的宏定义存储在一个头文件，输入半径便可得到圆的面积

#import <Foundation/Foundation.h>
#define CE(r) r * r * 3.14
int main(int argc, const char * argv[]) {
    int r = 5;
    int res = CE(r);
    //int circle = r * r * 3.14;
    printf("%d \n",res);
    return 0;
}
