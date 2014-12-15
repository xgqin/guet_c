/*
 * File name : comparing.c
 * Description : Detect an user input integer is positive or negative.
 * Date : Sun Oct 26 18:52:32 CST 2014
 * Author : xgqin@guet.edu.cn 
 *
 **/

#include <stdio.h>

int main ()
{
	int data;

	printf("Please input an integer :");

	scanf("%d", &data);

	if (data >= 0)
	{
		printf("%d is a positive number\n", data);
	}
	else
	{
		printf("%d is a negative number\n", data);
	}

	return 0;
}
