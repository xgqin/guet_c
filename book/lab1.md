### 实验要求 ###
1. 掌握C程序设计开发的基本步骤
2. 熟悉一款用于C程序设计的开发工具
3. 通过运行简单的C语言程序，熟悉C语言的基本格式规范

### 实验内容 ###
#### 内容一：运行程序（课前完成）####

根据老师的演示，运行老师提供的源程序，观察每一个程序的输出结果。
在vim中编辑分别Hello.c、Comparing.c和Graph.c三个源程序，并运行其对应的可执行程序。

<center>表1 Hello.c 源文件</center>

----------

``` C
/*
程序名：hello.c
功能：  在屏幕输出 Hello world!
时间：  2011年9月5日
作者：  秦兴国
*/

1  #include <stdio.h>   /*包含输入输出标注库函数*/
2  
3  int main()
4  {
5      printf("Hello world!\n"); /*在屏幕上输出 Hello, world并换行*/
6      return 0;
7  }
```


表2 Comparing.c源文件

----------

``` C
/*
程序名：Comparing.c
功能：  输入一个数，判断该数是正数还是负数，并输出结果
时间：  2011年9月5日
作者：  秦兴国
*/

1  #include <stdio.h>
2  
3  int main()
4  {
5      int data;
6      /*定义变量，用于存放输入的数据，可以修改这条语句，尝试一下定义不同类型的变量*/
7      
8      printf("please input data :");
9      /*输出提示语句,可以尝试一下，不同的输入格式*/
10      
11    scanf("%d",&data);
12    /*利用scanf函数，从键盘读入数据*/
13    
14    if (data >= 0)/*判断如果输入的数据大于等于0，就显示该数是正数*/
15    {
16       printf("%d is positive number",data);
17    }
18    else
19    {
20       printf("%d is negative number",data);
21    }
22    
23    return 0;
24 }
```


表3 Graph.c源文件

----------

``` C
/*
程序名：Graph.c 
功能：  在屏幕上输出一个图形
时间：  2011年9月5日
作者：  秦兴国
*/
#include <stdio.h>

int main()
{
    /*考虑并尝试一下，如果没有\n，显示的图形是怎样的*/
    printf("*****\n");    
    printf("*   *\n");
    printf("*   *\n");
    printf("*****\n");
     /*考虑并尝试一下，将输出图形的边框换成其他符号，
     并改变边框的长度，或输出其他样式的图形*/
            
   return 0;
}
```


#### 内容二：改编程序（课前完成）####

1. 在给出的源程序Hello.c中，改编相应的程序语句使得程序能够实现如下功能：

    a. 在屏幕输出自己的学号和姓名，比如：

     * 格式一：

        ``` C
        1100230201  Zhang San
        ```

     * 格式二：

        ``` C
        1100230201
        Zhang San
        ```
    b. 在屏幕输出如下信息

        ``` C
        Hello  world
        Welcome
        This is a test
        ```

2. 在给出的Comparing.c中，改编相应的程序语句使得程序能实现如下要求：

    a. 从键盘输入一个整数，如果是正数，输出该数*2以后的结果值，
       如果是负数，输出该数

    b. 在Comparing.c的基础上，自己编写程序，改程序能实现如下功能：
       输入一个字符，判定字符是字母，数字还是其他符号

> **注：可以根据ASCII码表，判断一个字符是字母还是数字及其他符号。**
> **例如小写字母对应的字符范围是 ’a’ ~ ’z’，大写字符对应的字符范围是 ’A’ ~ ’Z’；**

3. 在给出的Graph.c中，改编相应的程序语句使得程序能实现如下要求：

    a. 将长方形的边界改为 & 符号; 

    b. 改变长方形的长度和宽度，长度和宽度自己确定；

    c. 自己设计输出一个菱形（先在纸上画好菱形后，在程序中设置相应的语句实现）

#### 内容三：模仿创新 ####

【学生成绩管理系统-分解模块-系统菜单打印】
参照Hello.c程序，自行设计一个程序使得该程序能在屏幕中输出如下信息：

``` C
Menu
=========================================
1. Input the students’ names and scores
2. Search scores of some students
3. Modify scores of some students
4. List all students’ scores
5. Quit the system
=========================================
```

#### 内容四：问题求解 ####
无

#### 内容五：能力及知识拓展 ####

**Code::Blocks集成开发环境下进行C/C++程序设计**

如何使用Code::Blocks IDE进行C/C++程序设计一文，简要介绍了IDE的一些基础，以及使用Code::Blocks这个跨平台的开发环境进行C/C++程序设计的一般步骤。如果你对使用vim编辑器编写C/C++源程序感到吃力，可以使用Code::Blocks集成开发环境。

##### 如何做好积累 #####
编程是一个积累的过程。从学习编程开始，请保留自己所写的任何程序，以便以后复习或重新使用。

##### 实验报告内容 #####
如何提交实验报告请根据任课老师的要求。

##### 课外阅读与资料查找 #####
通过网络或图书馆查找一下相关资料：

1. 查找“经典C程序100例”；
2. 查找可用于进行C开发的工具，尝试安装其中的任意几款工具，
   并在安装好的工具中运行“经典C程序100例”中你感兴趣的程序例子；
3. 查找C语言的发展历史、发明C语言的作者及其简历
4. 查找C语言的应用领域

##### 程序编程风格 #####

程序源代码是给人阅读的，而程序源代码编译链接后产生的是二进制代码，
计算机可以有效地理解合理的二进制代码；
一个“排版”合理的程序源代码可以有效帮助他人理解程序的功能。
编程风格可以简单的理解为程序的“排版格式”，
以下是一些程序编程风格的基本原则，请熟记于心，
并将这些原则应用到你的实际编程活动中：

1. 源程序中的每一行只能放一条语句（语句是以分号作为标识）；
2. 源程序中相对独立的程序块应该加一个空白的行作为区分（例如变量定义块与语句块之间最好空一行）；
3. 源程序中关键代码或较复杂的代码应该加以注释用于说明该代码的作用；
4. 源程序头部可以加上该程序相关信息的注释，例如程序名、功能、开发者、开发日期及修改时间等；
例如，下表分别列举了不同的两种编程风格，试比较表中上下所列举的哪种编程风格更易于阅读及了解程序的结构。

表4 采用不同的编程风格编写的程序

----------

``` C
1  #include <stdio.h>   /*包含输入输出标注库函数*/
2 
3  int main()
4  {
5      printf("Hello, world\n"); /*在屏幕上输出 Hello, world并换行*/
6 
7      return 0;
8  }
```

``` C
1  #include <stdio.h>
2
3  int main(){printf("Hello, world\n");
4    return 0;}
```