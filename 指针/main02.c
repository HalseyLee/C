// 请编写1个函数. 该函数返回1个整型数组中的最大值、最小值、平均值、累积和.

#include <stdio.h>
int myMath(int *arr,int len,int *Pmin,int *Pmax,int *Pavg)
{
    int max = INT32_MIN;
    int min = INT32_MAX;
    int sum = 0,avg = 0;
    for(int i = 0;i < len;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
        sum += arr[i];
    }
    avg = sum / len;
    *Pmin = min;
    *Pmax = max;
    *Pavg = avg;
    return sum;
}

int main(int argc, const char * argv[]) {
    
    int min = 0;
    int max = 0;
    int avg = 0;
//    int *Pmin = &min;
//    int *Pmax = &max;
//    int *Pavg = &avg;
    int arr[] = {12,43,65,87,34,89,34,54,23,67};
    int len = sizeof(arr) / sizeof(arr[0]);
    int res = myMath(arr,len,&min,&max,&avg);
    printf("%d %d %d %d",res,min,max,avg);
    return 0;
}
