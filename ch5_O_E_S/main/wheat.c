#include <stdio.h>
#define SQUARES 64

int main(void)
{
    const double CROP = 3E16;
    double current, total;
    int count = 1;

    printf("Square      grains      total       fraction of \n");
    printf("            added       grains      world total \n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e  %12.2e \n", count, current, total, total / CROP);

    while (count < SQUARES) { // while 循环块 开始
        count = count + 1;
        current = current * 2;
        total = total + current;
        printf("%4d %13.2e %12.2e  %12.2e \n", count, current, total, total / CROP);
    }

    printf("That's all. \n");

    return 0;
}