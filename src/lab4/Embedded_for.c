/*
程序名：Embedded_for.c
功能：  在屏幕上输出如下数据
        1
        1   2
        1   2    3
        1   2    3   4
        1   2    3   4   5
        1   2    3   4   5   6
        1   2    3   4   5   6   7
        1   2    3   4   5   6   7   8
        1   2    3   4   5   6   7   8   9

Author : xgqin@guet.edu.cn 
Date : Mon Dec 15 15:02:08 CST 2014
*/

#include <stdio.h>

int main ()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%4d", j);
        }
        printf("\n");
    }

    return 0;
}
