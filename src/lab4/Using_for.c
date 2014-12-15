/*
程序名：Using_for.c
功能：  输入一个正整数，输出从1开始到该正整数之间的所有数
Author : xgqin@guet.edu.cn 
Date : Mon Dec 15 15:01:21 CST 2014
*/

#include <stdio.h>

int main ()
{
    int n, i;

    printf("Please input a number:");
    scanf("%d", &n);

    if (n <= 0) /*如果输入的值小于等于0，则提示错误*/
    {
        printf("A positive number is needed!\n");
    }

    for (i = 1; i <= n; i++) 
    {
        printf("%4d", i); /*以四个宽度输出i的值，请修改%4d为%d看看输出结果怎样*/
    }
    
    return 0;
}
