//
//  main.c
//  06-冒泡排序
//
//  Created by Apple on 14/11/8.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


/**
 打印数组
 */
void printArray(int array[],int count)
{
    //  int count  =  sizeof(array) / sizeof(int);
    printf("[");
    for (int i = 0 ; i < count ; i++) {
        //    打印数字
        printf("%d",array[i]);
        //    打印逗号
        if (i != count -1) {
            printf(",");
        }
    }
    printf("]\n");
}


/*
   冒泡排序
 */
void bubbleSort(int array[],int count)
{
    //  冒泡排序规则：两两比较大的下沉小的上浮
    //  外层循环控制趟
    for (int i = 0; i < count - 1; i++) {
        //      两两比较大下沉小上浮
        for (int j = 0; j < count - 1 - i; j++) {
            //           如果上面的大于下面的就交换位置
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
}



int main(int argc, const char * argv[]) {
  
    //  按升序排序：从小到大
    int nums[5] = {8,6,10,2,1};

//  计算数组长度
    int length = sizeof(nums) / sizeof(int);
    
    printArray(nums, length);
    
    bubbleSort(nums, length);
    
    printArray(nums, length);
    
    return 0;
}
