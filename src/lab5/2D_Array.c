/*
程序名  String_Statistic.c
功能：  二维数组操作实例
Author : xgqin@guet.edu.cn 
Date : Mon Dec 15 14:58:36 CST 2014
*/

#include <stdio.h>

#define M 5
#define N 4

int main ()
{
    int elements[M][N];
    int i, j;

    printf("Please input the %d*%d matrix:\n", M, N);

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &elements[i][j]);
            
            /*对二维数组元素做归一化处理，>100 则为1，否则则为0*/
            if (elements[i][j] > 100)
            {
                elements[i][j] = 1;
            }
            else
            {
                elements[i][j] = 0;
            }
        }
    }

    printf("Now the matrix looks like this:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%3d", elements[i][j]);
        }
        printf("\n"); /*每输出一行后，进行换行输出*/
    }

    return 0;
}
