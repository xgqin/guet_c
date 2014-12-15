/*
* 程序名：Pointer_1.c 
* 功能：  通过指针变量访问整型变量
* Author : xgqin@guet.edu.cn 
* Date : Mon Dec 15 15:07:51 CST 2014
*/
#include <stdio.h>

int main ()
{
    int a, b;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;
    printf("请输入两个整型数:");
    scanf("%d%d", ptr1, ptr2);

    printf("a和b变量的值分别为a = %d, b = %d\n", a, b);
    printf("a和b变量的值分别为a = %d, b = %d\n", *ptr1, *ptr2);

    return 0;
}
