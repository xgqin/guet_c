/*
程序名：Reverse_Array.c
功能：  输入10个数，按输入数据的逆序输入这10个数
Author : xgqin@guet.edu.cn 
Date : Mon Dec 15 14:55:45 CST 2014
*/

#include <stdio.h>

/*使用宏定义LENGTH长度为10*/
#define LENGTH 10
int main ()
{
    int array[LENGTH];
    int i, temp;

    printf("Please input %d numbers\n", LENGTH);

    /*使用循环输入10个数，依次存入数组array中*/
    /*数组引用的下标从0开始，至LENGTH - 1*/
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", &array[i]); /*array[i]也是一个变量，输入时应加&取地址符*/
    }

    printf("方法一、使用循环逆序输出array数组中的元素,逆序引用数组元素时，下标从LENGTH - 1开始，至0\n");

    /*使用循环逆序输出array数组中的元素*/
    /*方法一、逆序引用数组元素时，下标从LENGTH - 1开始，至0*/
    /*\t表示制表符*/
    for (i = LENGTH - 1; i >= 0; i--)
    {
        printf("%d\t", array[i]);
    }

    /*使用循环逆序输出array数组中的元素*/
    /*方法二、将数组的首尾元素值进行交换，并按照下标顺序输出数组*/
    /*\t表示制表符*/
    printf("方法二、将数组的首尾元素值进行交换，并按照下标顺序输出数组\n");
    for (i = 0; i <= LENGTH/2; i++)
    {
        temp = array[i];
        array[i] = array[LENGTH - 1 - i];
        array[LENGTH - 1 - i] = temp;
    }

    for ( i = 0; i < LENGTH; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
