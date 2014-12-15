/*
程序名：Bubble_Sorting.c
功能：  输入10个数，并按照从小到大的顺序输出10个数
Author : xgqin@guet.edu.cn 
Date : Mon Dec 15 14:56:52 CST 2014
*/

#include <stdio.h>
#include <stdlib.h>

/*使用宏定义LENGTH长度为10*/
#define LENGTH 10
int main ()
{
    int elements[LENGTH];
    int i, j, temp;

    printf("Please input %d numbers\n", LENGTH);

    /*输入10个数，并存放至数组elements中*/
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", &elements[i]);
    }

    for (i = 0; i < LENGTH; i++) /*外层循环从第0个元素开始*/
    {
        /*执行完一次外层循环，则当前最小的元素被置于第i个元素中，i从0开始*/
        for (j = i+1; j < LENGTH; j++) /*内层循环从第i+1个元素开始，其中i为外层循环变量*/
        {
            if (elements[i] > elements[j]) /*如果当前第i+1个元素小于第i个元素，则两个元素互换*/
            {
                temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;
            }
        }
    }

    printf("Asending order:");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%4d", elements[i]); /*以宽度为4输出每一个数组元素*/
    }

    return 0;
}
