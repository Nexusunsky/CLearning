#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{

   short num = PAGES;
   short mnum = -PAGES;

   printf("num as short and unsigned short: %hd %hu\n", num, num);

   /*
   第二行变量对应的转换说明符%u(无符号)输出是 65200
   1，short int 大小是2 字节
   2，系统使用二进制补码来表示有符号整数。
        0 ～ 32767 为其本身， 32768 ～ 65535 表示负数。
        -336 的 表示为 65200，那么当被解释成有符号int时，65200 表示 -336，而解释为有符号int时，65200 表示 65200；
   3，注意%u 转换说明符 的行为
    */
   printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);

   /*
   short int 为 2字节，char是1 字节
   而当使用%c 打印 336时，它只会查看存储336的2字节的后1字节。
   这种截断相当于用一个整数除以256，只保留其余数。
   */
   printf("num as int and char: %hd %hu\n", num, num);

    /*同上类似，不过会截取两个字节，需要取模为 65535*/
   printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

   return 0;
}
