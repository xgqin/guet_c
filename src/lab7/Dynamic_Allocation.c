/*
* 程序名：Dynamic_Allocation.c
* 功能：  
* Author : xgqin@guet.edu.cn 
* Date : Mon Dec 15 15:09:45 CST 2014
*/

#include <stdio.h>
#include <stdlib.h> /* 包含malloc, free, calloc, realloc等函数定义*/
int main ()
{
    int i, n;
    int *ptr;

    printf(“Please input the length of numbers:”);
    scanf(“%d”, &n);

    /*动态分配n个整型变量长度的内存区域*/
    ptr = (int *) malloc(n*sizeof(int));

    if (ptr != NULL)
    {
        printf("Please input %d numbers:");
        for (i = 0; i < n; i++)
        {
           scanf("%d", ptr+i);
        }
    
        printf("The reverse order is :");
        for (i = n - 1; i > 0; i--)
        {
            printf("%4d", ptr+i);
        }

        free(ptr);
        ptr = NULL;
    }

    return 0;
}
