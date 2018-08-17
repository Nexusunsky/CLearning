#include <stdio.h>
int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);//当 变量溢出时并不会提示用户，因此，在编程时需要自己注意。

    return 0;
}