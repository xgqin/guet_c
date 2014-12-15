### 实验要求
1. 掌握指针的概念、指针变量定义格式和引用
2. 掌握指针的运算方法
3. 掌握数组的指针和指向数组的指针变量
4. 掌握指针与函数的关系
5. 掌握字符串的指针和指向字符串的指针变量


### 实验内容

#### 内容一：运行程序

1. 根据老师的演示，运行老师提供的源程序，观察每一个程序的输出结果。

表1. Pointer_1.c源程序

----------

``` C
/*
* 程序名：Pointer_1.c 
* 功能：  通过指针变量访问整型变量
* 时间：  14:39 2011/9/7
* 作者：  秦兴国
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
```

2. Reverse_Array_Using_Pointer.c：使用数组指针完成实验四例1中Reverse_Array.c程序的功能。

表2. Reverse_Array_Using_Pointer.c源程序

----------

``` C
/*
* 程序名：Reverse_Array_Using_Pointer.c
* 功能： 使用数组指针操作数组。
* 时间： 21:48 2011/10/30
* 作者： 秦兴国
*/
#include <stdio.h>

#define LENGTH 10
int main ()
{
    int array[LENGTH];
    int *ptr, i;
    ptr = array;

    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", ptr+i);
    }

    for (i = LENGTH-1; i > 0; i--)
    {
        printf("%4d", *(ptr + i));
    }

    /*
    ptr = array + LENGTH -1;
    for (i = 0; i < LENGTH; i++)
    {
        printf("%4d", *(ptr-i));
    }
    */

    return 0;
}
```

3. Sweap_by_Address.c：以指针作为函数参数的“地址传递”方式

表3. Sweap_by_Address.c源程序

----------

```C
/*
* 程序名：Sweap_by_Address.c
* 功能：  
* 时间：  21:48 2011/10/30
* 作者：  秦兴国
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
```

4. Dynamic_Allocation.c：对输入的N个数按照逆序输出，其中数据的个数N由用户输入，N个数也由用户输入。

表4. Dynamic_Allocation.c源程序

----------

``` C
/*
* 程序名：Dynamic_Allocation.c
* 功能：  
* 时间：  21:48 2011/10/30
* 作者：  秦兴国
*/

#include <stdio.h>
#include <stdlib.h> /* 包含malloc, free, calloc, realloc等函数定义*/
int main ()
{
    int i, n;
    int *ptr;

    printf(“Please input the length of numbers:”);
    scanf(“%d”, &n);

    /*动态分配n个整型变量长度的内存区域*/
    ptr = (int *) malloc(n*sizeof(int));

    if (ptr != NULL)
    {
        printf("Please input %d numbers:");
        for (i = 0; i < n; i++)
        {
           scanf("%d", ptr+i);
        }
    
        printf("The reverse order is :");
        for (i = n - 1; i > 0; i--)
        {
            printf("%4d", ptr+i);
        }

        free(ptr);
        ptr = NULL;
    }

    return 0;
}
```

#### 内容二：改编程序

1. 在实验四例2中，使用了冒泡排序算法对数组进行从小到大排序，现在请改编此程序，改用指针实现冒泡排序算法的功能。

#### 内容三：模仿创新

无

#### 内容四：问题求解
1. 输入3个整数，按照由小到大的顺序输出，使用指针实现。
2. 统计N个同学的某一门成绩的平均分，其中N由键盘输入，使用指针及动态分配内存的方式实现。
3. 有n个人围成一圈，顺序编号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。

### 实验报告内容

实验报告内容必须包含内容二和内容三中的所有内容的源代码；内容四任意选取2道题目完成。特别要求：对于内容四中所选择的题目，请首先用流程图对问题解决方法进行描述，然后给出对应的源代码。实验报告格式无具体限制。
