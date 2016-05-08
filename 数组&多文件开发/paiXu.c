//
//  paiXu.c
//  李豪 day10
//
//  Created by Handsly on 16/5/6.
//  Copyright © 2016年 Handsly. All rights reserved.
//

#include "paiXu.h"
//int xuanZhe(int arr[],int length)
//{
//    for(int i = 0;i < length - 1;i++)
//    {
//        for(int j = i + 1;j < length;j++)
//        {
//            if(arr[i] < arr[j])
//            {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    return 1;
//}
int maoPao(int arr[],int length)
{
    for(int i = 0;i < length - 1;i++)
    {
        for(int j = 0;j < length - 1 - i;j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
     return 1;
}








