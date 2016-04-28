//请用户输入密码,
//如果密码是888888则提示正确,
//否则要求再输入1次,如果第2次输入正确,就提示正确,否则就提示错误.


/*两种方法实现*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int input = 0;
    printf("请输入密码");
    scanf("%d",&input);
    
/*使用 switch 方法*/
    switch (input){
        case 8888:
            printf("密码正确");
            break;
        default :
            printf("密码错误 请输入密码 \n");
            scanf("%d",&input);
            while ( input != 88888)
            {
                printf("密码不正确 请输入密码\n");
                scanf("%d",&input);
            }
            printf("密码正确");
    }
}

/*使用 if - else 方法*/
//    if( input==88888)
//        printf("密码正确");
//    else
//    {
//        while ( input!=88888)
//        {
//            printf("密码不正确 请输入密码\n");
//            scanf("%d",&input);
//        }
//        printf("密码正确");
//    }
            
            
            
            

