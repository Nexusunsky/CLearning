复习题：
1，指出下面各种数据使用的合适数据类型
a，East Simpleton 的人口     答：long
b，DVD影碟的价格              答：float
c，本章出现最多的字母          答：char
d，本章出现次数最多的字母次数   答：int

2，在什么情况下使用long类型代替int
    答：当需要存储长达32位的整型数使用long类型，int型数据只能存储16位长度的整型数。

3，使用哪些可移植的数据类型可以获得32位有符号整数？选择的理由是什么？
    答： long 或 long int 型数据可以实现，这两种可以存储32位有符号数。

4，指出下列常量的类型和含义
a，'\b'：为char类型，表示的为转义的 退格
b，1066：为int类型，
c，99.44：为float类型，
d，0XAA：为十六进制的int类型，其值为十进制：170
e，2.0e30：为double类型，2.0 * 10 30次方。

5，修正程序中的错误：

'''
include <stdio.h>
main
(
    float g; h;
    float tax, rate;

    g = e21;
    tax = rate * g;
)
'''
'''
#include <stdio.h>
int main(void)
{
    float g, h;
    float tax, rate;

    g = 1.0 * e21;
    tax = rate * g;
    return 0;
}
'''

6，写出下列常量在声明中使用的数据类型和在pringf()中对应的转换说明。
12 ; int ; %d
0X3 ; int ; %x
'C' ; char ; %c
2.34E07 ; double ;
'\040' ; char ; %c
7.0 ; float ; %f
6L ; long ; %l
6.0f ; float ; %f
0x5.b6p12 ; long double ; %Lf

7，写出下列常量在声明中使用的数据类型和在printf()中对应的转换说明
012 ; int ; %d
2.9e05L ; float ; %f
's' ; char ; %c
100000 ; long ; %l
'\n' ; char ; %c
20.0f ; floaf ; %f
0x44 ; int ; %d
-40 ; signed int ; %d

8，假设程序的开头有下列声明：
    int imate = 2;
    long shot = 53456;
    char grade = 'A';
    float log = 2.71828;
    把下面printf()语句中的转换字符补充完整：
    printf("The odds against the %__(%d) were %__(%l) to 1.\n", imate, shot);
    printf("A score of %__(%f) is not an %__(%c) grade. \n", log, grade);

9，假设ch 是char类型的变量。分别使用转义序列，十进制值，八进制字符常量和十六进制字符常量
把回车字符赋给ch。

10，修正下面程序：
'''
void main(int) / this program is perfect /
{
    cows, legs, integer;
    printf("How many cow legs did you count? \n");
    scanf("%c", legs);

    cows = legs / 4;
    printf("That implies there are %f cows. \n", cows);
}

'''

'''
#include <stdio.h>

int main(void) /* this program is perfect */
{
    int cows, legs, integer;
    printf("How many cow legs did you count? \n");
    scanf("%d", legs);

    cows = legs / 4;
    printf("That implies there are %d cows. \n", cows);
}

'''

11，指出下列转义序列的含义
a，\n ：换行
b，\\ ：转义下划线
c，\' ：转义'
d，\t ：转义制表符



















