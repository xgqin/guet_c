/*
 * File name : Maximum.c 
 * Description : Get the maximum value among three numbers
 * Date : Fri Oct 31 15:14:38 CST 2014
 * Author : xgqin@guet.edu.cn 
 * */
#include <stdio.h>

int main ()
{
	int a, b, c;
	int max;

	printf("Please input three numbers:");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)  /* 如果a > b 则a为最大数 */
	{
		max = a;
	}
	else          /* 否则 b为最大数 */
	{
		max = b;
	}

	if (max < c) /*a, b之间的最大数与c做比较，如果max < c 则c为最大数*/
	{
		max = c;
	}

	printf("the maximum number of %d, %d, %d is %d\n", a, b, c, max);

	return 0;
}
