/*
程序名  String_Statistic.c
功能：  输入10个数，并按照从小到大的顺序输出10个数
Author : xgqin@guet.edu.cn 
Date : Mon Dec 15 14:58:04 CST 2014
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*包含所有与字符串操作相关的函数*/

/*使用宏定义LENGTH长度为30*/
#define LENGTH 30
int main ()
{
    char str[LENGTH];
    int i, length;
    int characters, digits, alphabets;
    
    characters = 0;
    digits = 0;
    alphabets = 0;

    printf("Please input a string:");
    gets(str); /*使用gets函数输入字符串，并将字符串保存至字符数组str中*/

    length = strlen(str); /*求字符串的实际长度，注意与定义字符数组的长度不同*/
                                  /*字符串以\0作为结束符，输入字符串时会默认加入\0作为结束*/
                                  /*\0不包含在长度内*/
    for (i = 0; i < length; i++)  /*统计字符串中包含字母、数字、其他字符的个数*/
    {
        if (str[i] > '0' && str[i] < '9')
        {
            digits++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' 
            || str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabets++;
        }
        else
        {
            characters++;
        }
    }

    printf("%s has %d characters, %d digits, %d alphabets!\n", str, characters, digits, alphabets);

    return 0;
}
