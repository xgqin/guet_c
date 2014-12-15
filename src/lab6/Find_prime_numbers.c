/*
* 程序名：Find_prime_numbers.c
* 功能： 统计1~1000之内素数个数，并输出所有素数。
* Author : xgqin@guet.edu.cn 
* Date : Mon Dec 15 15:05:18 CST 2014
*/

#include <stdio.h>

/*
* 函数名：is_prime
* 返回值类型：int
* 参数列表：int num
* 函数功能：判断num是否为素数
* Author : xgqin@guet.edu.cn 
* Date : Mon Dec 15 15:05:31 CST 2014
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
