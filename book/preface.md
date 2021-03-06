[TOC]

### 0.1课程目的

本课程将介绍使用C语言进行程序设计、开发所涉及到的基本语法、算法、工具使用等概念。
并帮助你学会如何在主流操作系统及开发环境中使用C语言编写、编译、执行、测试
简单的计算机程序。这些计算机程序将演示如何从键盘读取数据，执行计算，输出结果等；
更为重要的是，通过本课程学习，你应该学会如何从计算机的角度分析、细化问题，
并建立对应的算法模型，从而指导你自己编写出正确的计算机程序。

### 0.2在课程学习过程当中的自我评估

在本课程当中，需要你对自己的任务完成情况进行自我评估。自我评价的过程是基于你将自己作为成年人对待，并基于你对本课程学习拥有较高的兴趣，且有能力制定自己对于本课程的学习目标以及愿意对自己的课程学习进行自我评价。
现实工作当中，有很多不同类型的程序员。其中一些喜欢深入到问题本身及其内部的任何细节，并且在工作当中从最基础的部分做起，直至其了解项目开发的整个细节。就像是建房时，从粘土、水开始制作砖块，从而再利用砖块建造墙面、房间、房子一样。其他人则更喜欢直接使用砖块建造出各种不同类型的房子。而另外一些人则喜欢在已有的房子基础上，进行一些修改，例如敲掉一面墙，增加一些装饰品。
我不介意你愿意选择上述任何一种做事方式，这些方式和技能都有其一技之长。本课程的目标是鼓励你通过这门课程体验上述不同做事的方式，并选择其中一种你喜欢的方式。
编程对于计算机专业学生而言是一项重要的技能，它对于理解大学二～四年级的专业问题、课程，理解、探索专业领域起到非常重要的作用。

本课程当中，有不少课程内容需要你对自己的工作进行自我评估。对于课程当中的每一个内容，请问自己"我是否已经掌握了这些内容？"，如果没有，请采取适当的措施和方法。思考、阅读、沉思、实践、与他人交流、请教老师。无论如何，请想办法解决它。并且请在老师规定的截至日期之前解决掉。老师会以ftp或网络形式要求你将自己所写的程序提交上来。当你提交你的程序时，我们默认你已经对你的工作进行了自我评估，你也确信自己达成了课程任务目标。

### 0.3关于合作

关于学习程序设计的方法和方式，这完全取决于你自己，但是下面是我们的一些建议：
我们建议你通过结对编程的形式完成课程的大部分内容，在结对编程中，结对的两个人需要共同分析问题，并写下问题解决的流程图、算法、伪代码；其中一个编程能力弱的同学负责敲入代码，而另外一个能力较强的同学则负责监督和观察，并指出他的错误。最终两个人协作完成课程的任务。
结对编程的好处在于，我们可以大量减少编程过程当中所遇到的语法错误，并能更快的定位语法、语义错误；此外，还意味着在任何时刻都有另外一个人在帮助你检查你敲入了什么。而双方之间对于问题的解释、交流可以极大的促进双方对于问题的理解和思考。在结对编程中始终要遵循的原则是：让编程能力较弱的一方负责编码工作，这样结对编程的双方才能理解解决问题的思路、算法的所有细节。

### 0.4关于拷贝

在现实的工作当中，拷贝他人程序的行为是值得鼓励的：

- 首先，拷贝可以节约我们的时间;

- 其次，拷贝可以避免再次敲入代码时的键入错误;

- 再次，拷贝让你将你的主要精力放在如何解决项目出现的新问题和挑战中。

因此，在本课程中，拷贝代码在某些场合对你而言是有帮助的。
例如，拷贝一个与你当前要解决问题相似的代码，在此基础上修改它，
并让它能够正确解决你的问题。你可以从网络上拷贝相应的代码，并使用它。
但是本课程的底线是`"你了解这段代码是如何解决你当前遇到的问题吗？"`。
显然，将别人对问题的答案（程序代码）直接拷贝过来对于你达成本课程的目标
——学习程序设计来说是没有任何帮助的。
因此，做任何事情前，请自我进行评估，如果你不明白你所拷贝代码的任何细节，
请不要使用它，除非你对其进行思考，并完全理解。

### 0.5什么是计算机程序
计算机处理数据、进行计算并根据不同的条件作出选择执行不同的指令。而指令的集合称之为计算机程序。计算机（CPU，存储器，主板，鼠标，键盘等）通常成为硬件(hardware)，而运行在计算机之上的程序(program)通常成为软件(software)。
计算机程序包含的指令通常以二进制序列(a sequence of binary digits)的机器码(machine code)形式进行存储，并由计算机进行执行。在计算机发展早期，程序员通过机器语言编写计算机程序。虽然机器指令可以直接被计算机所执行，但是对于人类而言，却难以阅读和理解。因此，汇编器（assemblers)被发明出来，用于将机器指令（machine instructions)映射为类似与英语缩写短语形式的符号语言，这类符号语言被称为汇编语言（assembly language)。之后，高级程序设计语言(high-level programming languages)被发明出来（例如，Fortran(1954), COBOL(1959), BASIC(1963), PASCAL(1971)，C(1972)），这类语言使得编写程序更接近于日常使用的英语句子等形式。由高级语言所编写的程序通常需要有一个称为编译器(compiler)的程序将其翻译(translated)成机器指令，从而使得由高级语言所写的程序可以被计算机执行。编译之后的程序，通常成为执行文件；而由高级语言所编写的程序通常成为源程序、源代码。

### 0.6编辑、编译、运行程序

#### 0.6.1一个简单的C程序
以下给出的例子显示了一个由C语言编写的源程序，其功能用于计算两个输入数之和，并将结果输出至屏幕。程序代码量虽然小，但它已是一个包含了基本语法要素的完整程序。

``` C
 //program to add two intergers typed by user at keyboard
#include <stdio.h>

int main ()
{
    int a, b, total;
    
    printf("Enter intergers to b added:\n");
    scanf("%d%d", &a, &b);

    total = a + b;
    printf("The sum is %d\n", total);
    
    return 0;
}
```

所有的C程序均包含头部，代码主体，如下所示：

``` C
// 注释语句，会被编译器忽略，仅用来提醒读者或做为备注
#include <头文件名>

int main ()
{
    变量申明语句;
    语句;

   return 0;
}
```

为了方便引用及介绍程序，我们通常在每条语句前加上行标，用于指明当前的语句是第几行。但是，在实际编程时，你不应该在程序前加上行标。以下是本课程当中通常所使用到的代码表示形式。

``` C
1   //program to add two intergers typed by user at keyboard
2  #include <stdio.h>
3  
4  int main ()
5  {
6      int a, b, total;
7      
8      printf("Enter intergers to b added:\n");
9      scanf("%d%d", &a, &b);
10  
11    total = a + b;
12    printf("The sum is %d\n", total);
13    
14    return 0;
15 }
``` 

第1行：在一个文件或程序的头部，通常会由程序开发者加入注释语句。在C语言中注释语句以/*开头，以*/结尾的成为块注释，在这两个符号之间的所有文字均视为注释；以//开头的成为行注释，从//开头到该行行尾，所有的文字均视为注释。在文件头部通常以注释的形式给出对当前文件、程序的描述信息，例如：本程序的功能、作者、编写日期等等。此外，程序开发者可在任何地方增加其认为必要的注释用于对代码的执行，算法的实现进行描述，以方便他人理解代码。注释不是必须的，且编译器将忽略掉注释。因此注释不是写给编译器看的，而是写给程序开发者自己，或维护者看的。合理的注释是开发者专业与否的一个区别。

第2行：以#include开头的称为头文件包含语句，通常用于包含其他已经写好的头文件，库文件。这些头文件，库文件通常以.h结尾（header)，并包含了其他一些标准库函数或用户自定义函数的声明方式。这样，我们就不必再重复编写所有功能或函数。每一个头文件需要单独使用一条#include语句包含。#include语句又被成为头文件包含预处理语句。编译器在对程序编译前进行预处理，把所需的头文件包含到当前文件中。

第3行：空行，同理（第7行、第10行、第13行）。空行被引入程序中，主要用于增加代码的可读性。编译器在编译程序的时候，会忽略掉空行。白空格(Whitespace)包括空格(spaces)、制表符(tabs)、换行符(newlines)同样也会被编译器忽略。白空格的引入主要是为了增加代码的可读性。

第4行：在本行中，首先定义了函数的名字为main，而函数的参数为空，返回值为int类型。函数的定义除了函数名，参数列表，返回值外，由{(左花括号)、}(右花括号)执行函数体的开始和结束。花括号总是成对出现的。当程序被执行时，程序当中的语句的执行顺序与他们出现在程序当中的顺序有关。此外，任何C程序都是从main函数开始执行的，在main函数当中，第6行的语句会比第8行的语句先被执行。

第6行：变量声明语句（declaration of variables)。变量声明语句就像是一个剧本当中的演员列表一样。语句当中的a, b以及total都是变量(variables)的名字。变量对应计算机内存当中的一个存储单元，可以用于存储程序运行过程当中使用到的数据。我们可以通过变量名对这个存储单元进行赋值或引用。变量声明时，通常需要指明变量的类别。在本行中，a, b和total都被声明为int型(整型、integer)，这也意味着a, b和total只能存储整数类型的数据。在变量声明的时候，如果未对变量进行赋值，则变量的值是随机的。
 
第8行：printf函数是C标准库函数提供的输入输出函数中的一个，它可按照指定格式说明形式输字符串至标准输出端。printf函数的原型为：int printf(const char *format, ...)。函数调用时，参数列表中各参数以,逗号作为间隔。在本例中printf("Enter intergers to b added:\n");，双引号括起来的字符串成为格式字符串，格式字符串中包含格式字符、转义和普通字符。格式字符通常由%开头，由\(反斜杠)开头的则称为转义字符。本例中不存在格式字符，因此普通字符原样输出，\n转义字符表示为换行。第12行中的printf函数调用的格式字符串中包含格式字符%d，表明在该位置上要输出一个整型数，而整型数由函数参数列表的其他参数指定，在本例中为total变量。

第9行：scanf函数是C标准库函数提供的输入输出函数中的一个，它将用户输入按照指定格式进行存储，至指定的变量地址中（存储单元中）。

第11行：为简单的赋值语句。表示将a+b的结果赋值给total。

第14行：return语句是函数的返回语句。任何时候遇到return语句时，无论return语句之后是否还有其他语句，函数将返回，不在执行之后的语句。在本例中，return后接了一个0，作为返回值。返回值通常用于主调函数，判断被调函数的状态。

### 0.7课程当中程序开发涉及的三个步骤

课程当中的C程序开发过程主要涉及三个步骤：编辑（编写代码）、编译（将源代码、源程序编译转换为执行代码并检测语法错误）、运行程序并检查逻辑错误（调试、debugging）。

1. 编辑
编辑代码指使用文本编辑器或集成开发环境使用C语言语法规则编写所需解决问题的代码。将编辑的源文件保存后，源文件的后缀通常为.c，用于表明这个文件是一个C语言程序文件(例如： SimpleAdder.c)

2. 编译
译器将C程序"转换"成机器语言代码（目标代码、object code）并以.o为扩展名存储编译之后的文件（例如：SimpleAdder.o)。链接器再将目标代码与程序中可能使用到的标准库函数进行链接后，产生执行文件，执行文件同样存储在磁盘中。通常而言在不同的操作系统当中，执行文件的扩展名是不同的。（例如：在Unix/Linux操作系统中，执行文件可以没有扩展名, SimpleAdder；在Windows操作系统中，执行文件的扩展名为.exe，SimpleAdder.exe)

3. 执行
执行文件被从磁盘装载进内存，计算机的CPU负责执行依次执行程序当中的指令集。

需要特别注意的是，从源程序到执行文件这一过程，并不代表程序开发已经完成，执行文件本身可能由于在算法设计时存在逻辑错误等情况。因此需要进行测试才能确定当前编写的程序未发现错误。在实际程序开发工作当中，编辑——编译——执行这些过程需要不断反复迭代直至代码通过测试为止。

### 0.8编写第一个C程序

启动Ubuntu 13.04系统后，开启终端。终端启动后，shell提示符如下所示：
``` shell
[stu@localhost ~]$ 
```

其中，stu是你登录本系统的帐号，localhost是当前系统的主机名，
~符号表示当前所在路径(~表示为当前用户的家目录/home/stu)。

首先，运行mkdir命令创建一个属于你自己的文件夹（一般用你的学号），如下所示：

``` Shell
[stu@localhost ~]$ mkdir 1400310101
```

在Shell下运行命令，输入命令后，敲回车则执行该命令。
命令执行结束后，Shell会重新输入Shell提示符，这说明上一条命令运行结束。
命令运行成功与否要看Shell的提示信息。一般而言，Unix/Linux系统中，
命令执行成功往往没有输出提示信息，执行失败才会提示信息。如下所示：

``` Shell
[stu@localhost ~]$ mkdir 1400310101 
[stu@localhost ~]$ ls 
1400310101 
[stu@localhost ~]$ cd 1400310101/ 
[stu@localhost 1400310101]$ 
```

执行mkdir命令后，可以使用`ls`命令查看当前目录是否存在一个1400310101的目录。
如果存在，则使用cd命令后加目录名，进入该目录。
进入该目录后，使用touch命令创建一个名为main.c的新文件。如下所示：

``` Shell
[stu@localhost 1400310101]$ touch main.c 
[stu@localhost 1400310101]$ ls 
main.c 
```

创建新文件后，可以使用任意一款编辑器编辑源文件。这里推荐你使用vim。
启动vim编辑器编辑文件的方法如下：

``` Shell
[stu@localhost 1400310101]$ vim main.c 

1  #include <stdio.h>
2
3  int main()
4  {
5      prirntf(“Hello world\n”);
6      return 0;
7  }
```

- 启动vim之后，界面如下：

``` VIM
  1 
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                                                                                                           
~                                                                               
~                                                                               
~                                                                               
"main.c" 0L, 0C                                               0,0-1         All 
```

- 通过键入i, o,a等键，进入编辑模式，完成编辑之后，键入ESC键则返回命令模式。

``` VIM
  1 #include <stdio.h> 
  2 
  3 int main () 
  4 {       
  5         printf("Hello world!\n"); 
  6         return 0; 
  7 } 
~                                                                                                                                                           
~                                                                               
~                                                                               
-- INSERT --                                                  5,27-34       All 
```

- 此时，键入:符号可进入末行模式，敲入wq则保存文件并退出vim，如下所示：

``` VIM
  1 #include <stdio.h> 
  2 
  3 int main () 
  4 {       
  5         printf("Hello world!\n"); 
  6         return 0; 
  7 } 
~                                                                               
~                                                                                                                                                                                                                             
~                                                                               
:wq 
```

- 完成代码编辑工作后，在shell终端中你可以使用cat命令查看文件的内容。例如：

``` Shell
[stu@localhost 1400310101]$ cat main.c 
#include <stdio.h> 

int main () 
{ 
    printf("Hello world!\n"); 
    return 0; 
} 
[stu@localhost 1400310101]$ 
```

cat命令加文件名，可将文件的内容输出到标准输出端，即终端中显示。
可以看到，main.c文件已经发生了改变，并记录了vim程序中的编辑内容。
接下来，进行程序开发的第二步——编译。

在Shell中敲入gcc 文件名 可以直接编译源文件，在无语法错误的情况下，
则直接生成执行文件，默认生成的执行文件名为a.out。如下：

``` Shell
[stu@localhost 1400310101]$ gcc main.c 
[stu@localhost 1400310101]$ ls 
a.out  main.c 
[stu@localhost 1400310101]$ 
```

如果你需要指定生成的执行文件名，可以通过`gcc -o 指定文件名 源文件名` 的形式
指定gcc编译器的输出文件名。
如下，指定gcc输出文件的名字为first_program，编译的源文件为main.c：

``` Shell
[stu@localhost 1400310101]$ gcc -o first_program main.c 
[stu@localhost 1400310101]$ ls 
a.out  first_program  main.c 
[stu@localhost 1400310101]$ 
```

执行编译后的执行文件，在shell下需要使用如下方式执行：

``` Shell
[stu@localhost 1400310101]$ ./first_program 
Hello world! 
[stu@localhost 1400310101]$ 
```

在执行文件名前加`./`表示在当前路径下执行`first_program`命令（执行文件）。
frist_program执行文件一旦被执行，则其向标准输出端，输出Hello world!字符串后，
并输出换行符后，程序结束。此时，Shell重新输出shell提示符。

- 更改main.c文件，并人为加入一下语法错误，重新编译，看看gcc是否会报错。
- 更改main.c文件，并加入其他输出语句，重新编译，看看程序运行结果是什么。
