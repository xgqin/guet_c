/*
* 程序名：Reverse_Array_Using_Pointer.c
* 功能： 使用数组指针操作数组。
* Author : xgqin@guet.edu.cn 
* Date : Mon Dec 15 15:08:23 CST 2014
*/
#include <stdio.h>

#define LENGTH 10
int main ()
{
    int array[LENGTH];
    int *ptr, i;
    ptr = array;

    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", ptr+i);
    }

    for (i = LENGTH-1; i > 0; i--)
    {
        printf("%4d", *(ptr + i));
    }

    /*
    ptr = array + LENGTH -1;
    for (i = 0; i < LENGTH; i++)
    {
        printf("%4d", *(ptr-i));
    }
    */

    return 0;
}
