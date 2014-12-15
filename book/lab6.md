### 实验要求 ###

1. 掌握函数定义和调用的方法
2. 掌握函数嵌套调用和递归调用的方法
3. 理解实参与形参的对应关系以及“值传递”调用函数的方法
4. 理解变量作用域和存在期的概念，掌握全局变量和局部变量、动态变量和静态变量的定义、说明和使用方法

### 实验内容 ### 

#### 内容一：运行程序 ####

根据老师的演示，运行老师提供的源程序，观察每一个程序的输出结果。

1. Maximum_2.c(如表1所示)：求三个数中的最大值，通过定义一个maxi函数实现求三个数中的最大值的功能；


表1. Maximum_2.c源程序

----------

``` C
/*
* 程序名：Maximum.C 
* 功能：  求三个数中的最大数
* 时间：  11/15/2011 10:15:18 AM
* 作者：  秦兴国
*/
#include <stdio.h>

int maxi(int a, int b); /*函数声明*/

/*
* 函数名：    maxi
* 参数列表：  int a, int b
* 返回值类型: int
* 函数功能：  返回a, b之间的最大值
* 作者：      秦兴国
* 修改日期：  11/15/2011 10:15:29 AM
*/
int maxi(int a, int b) /*函数定义*/
{
int max;

if ( a > b )  /* 如果a > b 则a为最大数 */
    {
        max = a;
    }
    else          /* 否则 b为最大数 */
    {
        max = b;
    }

return max; /*max保存a, b之间的最大值，并作为函数返回值*/
}

int main ()
{
    int a, b, c;
    int max;

    printf("Please input three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    max = maxi(a, b); /*调用maxi函数，其中a,b,c作为其参数，max用于保存maxi函数的返回值*/
    max = maxi(max, c);
    printf("the maximum number of %d, %d, %d is %d\n", a, b, c, max);

    return 0;
}
```

2. Find_prime_numbers.c(如表2所示)：统计1~1000之内素数个数，并输出所有素数。在实验二内容四问题求解的第5题中，要求编写程序判断1-1000之间有多少个素数，并输出所有素数(如表3所示)。

表2. Find_prime_numbers.c源程序

----------

``` C
/*
* 程序名：Find_prime_numbers.c
* 功能： 统计1~1000之内素数个数，并输出所有素数。
* 时间： 21:48 2011/10/30
* 作者： 秦兴国
*/

#include <stdio.h>
/*
* 函数名：is_prime
* 返回值类型：int
* 参数列表：int num
* 函数功能：判断num是否为素数
* 时间：2011/11/17
* 作者：秦兴国
*/
int is_prime(int num)
{
    int i;

    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            return 0; /*如果num % i == 0表明num能被i整除，则num不是素数*/
        }
    }

    return 1; /*执行完for循环后，num必然是素数*/
}

int main ()
{
    int i, j;
    int count;

    count = 0;
    for (i = 2; i <= 1000; i++)
    {
        if (is_prime(i))
        {
            count++;
            printf("%4d", i);
            if (count % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    printf("\nThere are %d prime numbers!\n", count);
    
    return 0;
}
```

3. Bubble_Sorting_2.c(如表3所示)：输入10个数，并按照从小到大的顺序输出10个数。在实验二的内容一中，给出的Bubble_Sorting.c程序的功能输入10个数，并按照从小到大的顺序输出10个数，先改进该程序，通过定义一个bubble_sorting函数实现对数组进行排序功能；

表4. Bubble_Sorting_2.c源程序

----------

``` C
/*
程序名：Bubble_Sorting_2.c
功能： 输入个数，并按照从小到大的顺序输出个数
时间： 11/15/2011 11:03:22 AM
作者： 秦兴国
*/

#include <stdio.h>
#include <stdlib.h>

/*使用宏定义LENGTH长度为*/
#define LENGTH 10

void bubble_sorting(int array[], int length, int order)
{
    int i, j;
    int temp;
    for (i = 0; i < length; i++) /*外层循环从第个元素开始*/
    {
        /*执行完一次外层循环，则当前最小的元素被置于第i个元素中，i从开始*/
        for (j = i+1; j < length; j++) /*内存循环从第i+1个元素开始，其中i为外层循环变量*/
        {
            if (order != 0) /*order 为非零时，按升序排列*/           
            {
                if (array[i] > array [j]) /*如果当前第i+1个元素小于第i个元素，则两个元素互换*/
                {
                    temp = array [i];
                    array [i] = array [j];
                    array [j] = temp;
                }
            } 
            else /*order 为零时，按降序排列*/
            {
                if (array[i] < array [j]) /*如果当前第i+1个元素小于第i个元素，则两个元素互换*/
                {
                    temp = array [i];
                    array [i] = array [j];
                    array [j] = temp;
                }
            }
        }
    }
}

int main ()
{
    int elements[LENGTH];
    int i, j, temp;

    printf("Please input %d numbers\n", LENGTH);

    /*输入个数，并存放至数组elements中*/
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", &elements[i]);
    }

    bubble_sorting(elements, LENGTH, 1);/*调用bubble_sorting函数对elements数组进行排序*/

    printf("Asending order:");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%4d", elements[i]); /*以宽度为4输出每一个数组元素*/
    }

    return 0;
}
```

#### 内容二：改编程序 ####
1. 在实验二的内容一中，给出了Embedded_for.c程序，该程序实现的功能是在屏幕中输出如下的序列。

    ``` C
    1 
    1  2 
    1  2  3 
    1  2  3  4 
    1  2  3  4  5 
    1  2  3  4  5  6 
    1  2  3  4  5  6  7 
    1  2  3  4  5  6  7  8 
    1  2  3  4  5  6  7  8  9
    ```

    现要求改编Embedded_for.c程序，新的程序需要定义一个print_num函数，该函数实现在屏幕中输出从1至num之间的所有整数。其中print_num函数的声明如下表5所示。完成print_num后，改写Embedded_for.c程序，在Embedded_for.c程序中调用print_num函数，使得新的Embedded_for.c实现与原Embedded_for.c相同的功能。

    表5 print_num函数声明

    ----------

    ``` C
    /*
    * 函数名：print_num
    * 返回值类型：void
    * 参数列表：int num
    * 函数功能：在屏幕中输出1至num之间的所有整数，每个整数的输出宽度
    * 为4，输出所有整数后以输出换行为结束
    * 时间： 这里填入编写该函数的时间
    * 作者：  这里填入你的名字
    */
    void print_num(int num);
    ```
    
2. 在实验二内容四问题求解的第1题中，要求编写程序判断1~1000之内的哪些数是水仙花数。

    现要求改写该程序，新的程序中需要定义一个is_daffodils函数，该函数功能是判断函数参数num是否为水仙花数，如果是则函数返回值为1，否则为0。完成is_daffodils函数定义后，改写你原来所编写的程序，在改写的程序中调用is_daffodils函数，使得新的改写的程序能判断1~1000之内的哪些数是水仙花数。其中is_daffodils函数的声明应如表6所示。

    表6. is_daffodils函数声明

    ----------    

    ``` C
    /*
    * 函数名：is_daffodils
    * 返回值类型：int 
    * 参数列表：int num
    * 函数功能：判断num是否为水仙花数，
    *           如果num是水仙花数则返回值为1，否则为0
    * 时间：这里填入编写该函数的时间
    * 作者：这里填入你的名字
    */
    int is_daffodils(int num);
    ```

#### 内容三：模仿创新 ####
无

#### 内容四：问题求解 ####
1. 编程实现如下功能：从键盘输入一串字符，判断该字符是否为回文，如果是则输出YES，否则输出NO。

    > 注：回文是指字符串从顺序读与倒序读都是同一串字符，如ABCdCBA以及level等。在你所编写的程序中，需要定义一个函数is_ palindrome用于判断字符串是否为回文，如果是则函数返回为1，否则为0。请仔细考虑is_palindrome函数的返回类型、函数参数。

2. 编程实现组合数的公式C(m,n)， 表示n个数中选择m个数的组合：，其中

    a. 首先，定义一个用于计算阶乘的函数`long factorial(long n)`，该函数参数为长整型变量n，返回值为n的阶乘n!；

    > 注：函数factorial中需要检查n的情况，特别是n为0和负数时的情况，仔细考虑函数的返回值类型；

    b. 其次，定义一个用于计算组合数的函数`int combination(int m, int n)`，该函数的参数为整型变量m和n，返回值为n和m的组合数C(m,n)；

    > 注：函数`combination`需要调用函数`factorial`；

    c. 根据以上两个函数，请求解C(5,8)、C(2,7)、C(1,8)、C(7,7)、C(0,8)的值。
    > 注：你所编写的程序能否计算出C(5, 20)的值？为什么？

3. 编程实现求解如下序列第n项的值：
A(1) = 1、A(2) = 1/(1+A(1))、A(3) = 1/(1+A(2))、……、A(n) = 1/(1+A(n-1))

    > 注：需要定义一个递归函数用于实现求

### 实验报告内容 ###

实验报告内容必须包含内容二和内容三中的所有内容的源代码；内容四任意选取2道题目完成。特别要求：对于内容四中所选择的题目，请首先用流程图对问题解决方法进行描述，然后给出对应的源代码。实验报告格式无具体限制。
