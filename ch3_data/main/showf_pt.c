#include <stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    /* printf 使用 %f 转换 说明打印 十进制计数法 的float 和 double 类型浮点数 */
    /* printf 使用 %e 打印指数计数法的浮点数。 */
    /* 如果系统支持十六进制格式的浮点数，可用a和A分别代替e和E */
    /* 打印long double 类型要使用%Lf %Le或La转换说明。 */
    printf("%f can be written %e \n", aboat, aboat);
    // 下一行要求编译器支持C99或其中相关特性
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}