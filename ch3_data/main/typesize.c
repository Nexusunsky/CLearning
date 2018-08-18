#include <stdio.h>
int main(void)
{
    /* C99 和 C11 提供 提供 %zd 转换说明 匹配 sizeof 的返回类型 */
    /* 不支持C99 和 C11 的编译器 可用 %u 或 %lu 代替 %zd*/
    printf("Type int has a size of %zd bytes. \n", sizeof(int));
    printf("Type char has a size of %zd bytes. \n", sizeof(char));
    printf("Type long has a size of %zd bytes. \n", sizeof(long));
    printf("Type long long has a size of %zd bytes. \n", sizeof(long long));
    printf("Type double has a size of %zd bytes. \n", sizeof(double));
    printf("Type long double has a size of %zd bytes. \n", sizeof(long double));

    return 0;
}