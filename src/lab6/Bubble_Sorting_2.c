/*
程序名：Bubble_Sorting_2.c
功能： 输入个数，并按照从小到大的顺序输出个数
Author : xgqin@guet.edu.cn 
Date : Mon Dec 15 15:06:28 CST 2014
*/

#include <stdio.h>
#include <stdlib.h>

/*使用宏定义LENGTH长度为*/
#define LENGTH 10

void bubble_sorting(int array[], int length, int order)
{
    int i, j;
    int temp;
    for (i = 0; i < length; i++) /*外层循环从第个元素开始*/
    {
        /*执行完一次外层循环，则当前最小的元素被置于第i个元素中，i从开始*/
        for (j = i+1; j < length; j++) /*内存循环从第i+1个元素开始，其中i为外层循环变量*/
        {
            if (order != 0) /*order 为非零时，按升序排列*/           
            {
                if (array[i] > array [j]) /*如果当前第i+1个元素小于第i个元素，则两个元素互换*/
                {
                    temp = array [i];
                    array [i] = array [j];
                    array [j] = temp;
                }
            } 
            else /*order 为零时，按降序排列*/
            {
                if (array[i] < array [j]) /*如果当前第i+1个元素小于第i个元素，则两个元素互换*/
                {
                    temp = array [i];
                    array [i] = array [j];
                    array [j] = temp;
                }
            }
        }
    }
}

int main ()
{
    int elements[LENGTH];
    int i, j, temp;

    printf("Please input %d numbers\n", LENGTH);

    /*输入个数，并存放至数组elements中*/
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", &elements[i]);
    }

    bubble_sorting(elements, LENGTH, 1);/*调用bubble_sorting函数对elements数组进行排序*/

    printf("Asending order:");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%4d", elements[i]); /*以宽度为4输出每一个数组元素*/
    }

    return 0;
}
