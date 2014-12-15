/*
 * File name : Descending.c 
 * Description : Output the input numbers in descending order
 * Date : Fri Oct 31 15:17:13 CST 2014
 * Author : xgqin@guet.edu.cn 
 * */

#include <stdio.h>

int main ()
{
	int a, b, c;
	int max, min, mid;

	printf("Please input three numbers:");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)  /* 如果a > b 则a为最大数 反之求最小数*/
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	if (max < c) /*a, b之间的最大数与c做比较，如果max < c 则c为最大数*/
	{
		max = c;
	}

	if (min > c) /*a, b之间的最小数与c做比较，如果min > c 则c为最小数*/
	{
		min = c;
	}

	mid = a + b + c - max - min; /*中间的数则为三个数之和减去最大和最小数*/

	printf("The numbers are:%d, %d, %d\n", a, b, c);
	printf("Output in descending order:%d, %d, %d\n", min, mid, max);

	return 0;
}
