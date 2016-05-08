
#include "myMath.h"

/**
 *  求最大值
 *
 *  @param arr    数组
 *  @param length 数组长度
 *
 *  @return <#return value description#>
 */
int isMax(int arr[],int length)
{
    int max = INT32_MIN;
    for(int i = 0;i < length;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

/**
 *  求最小值
 *
 *  @param arr    数组
 *  @param length 数组长度
 *
 *  @return <#return value description#>
 */
int isMin(int arr[],int length)
{
    int min = INT32_MAX;
    for(int i = 0;i < length;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

/**
 *  求累加和
 *
 *  @param arr    数组
 *  @param length 数组长度
 *
 *  @return <#return value description#>
 */
int sum(int arr[],int length)
{
    int sum = 0;
    for(int i = 0;i < length;i++)
    {
        sum += arr[i];
    }
    return sum;
}

/**
 *  求平均值
 *
 *  @param arr    数组
 *  @param length 数组长度
 *
 *  @return <#return value description#>
 */
int avg(int arr[],int length)
{
    int sum = 0;
    for(int i = 0;i < length;i++)
    {
        sum += arr[i];
    }
    return sum / length;
}

/**
 *  数组中指定数据下标
 *
 *  @param arr    数组
 *  @param length 数组长度
 *  @param key    指定数据
 *
 *  @return <#return value description#>
 */
int number(int arr[],int length,int key)
{
    for(int i = 0;i < length;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

/**
 *  数组中是否存在指定数据
 *
 *  @param arr    数组
 *  @param length 数组长度
 *  @param key    指定数据
 *
 *  @return <#return value description#>
 */
int isExist(int arr[],int length,int key)
{
    for(int i = 0;i < length;i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return -1;
}















