/*
* 程序名：Maximum_2.c 
* 功能：  求三个数中的最大数
* Author : xgqin@guet.edu.cn 
* Date : Mon Dec 15 15:04:10 CST 2014
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
