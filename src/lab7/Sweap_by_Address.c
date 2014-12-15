/*
* 程序名：Sweap_by_Address.c
* 功能：  
* Author : xgqin@guet.edu.cn 
* Date : Mon Dec 15 15:09:06 CST 2014
*/

#include <stdio.h>
/*
* 函数名：sweap_by_value
* 返回值：void
* 参数列表：int x, int y
* 函数功能：无任何意义，只为说明函数“值传递”的概念
*/

void sweap_by_value(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

/*
* 函数名：sweap_by_address
* 返回值：void
* 参数列表：int *x, int *y
* 函数功能：交换两变量的值，使用“地址传递”的方式
*/
void sweap_by_address(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main ()
{
    int a, b;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("Please input two numbers:");
    scanf("%d%d", &a, &b); /* or scanf("%d%d", ptr1, ptr2); */

    printf("Before invoke sweap_by_value\n");
    printf("a = %d, b = %d\n", a, b);

    sweap_by_value(a, b);
    printf("After invoke sweap_by_value\n");
    printf("a = %d, b = %d\n", a, b);

    printf("Before invoke sweap_by_address\n");
    printf("a = %d, b = %d\n", a, b);

    sweap_by_address(&a, &b);
    /* or sweap_by_address(ptr1, ptr2);*/
    printf("After invoke sweap_by_address\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
