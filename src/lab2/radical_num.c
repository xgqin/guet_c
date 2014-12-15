/*
 * 程序名：Radical_Num.c
 * 功能：  输入一个数，输出该数的开根数
 * Date : Mon Oct 27 09:46:21 CST 2014
 * Author : xgqin@guet.edu.cn 
 * Compiling option : gcc -o radical_num -lm radical_num.c
 * */
#include <stdio.h>
#include <math.h>

int main()
{
	float number, result;

	scanf("%f", &number); /*输入一个单精度浮点数*/   

	result = sqrt(number); /*求number的开根数*/
	printf("The radical number of %f is :%3f\n", number, result);

	return 0;
}
