/*
 * File name：digit.c 
 * Description ：  输入一个正整数，输出该数的个位，十位和百位数字分别是多少
 * 时间：  14:36 2011/9/7
 * Date : Mon Oct 27 09:44:37 CST 2014
 * Author : xgqin@guet.edu.cn 
 * */
#include <stdio.h>

int main ()
{
	int num;

	scanf("%d", &num);

	printf("%d 的百位是%d\n", num, num/100); 
	/* /符号是取整操作 例如 124/100 结果为1*/
	printf("%d 的十位是%d\n", num, (num%100)/10);
	/* %符号是取余操作 例如 124 %100 结果为24*/
	printf("%d 的个位是%d\n", num, num%10);

	return 0;
}
