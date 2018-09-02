#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num < 21) {
        printf("num =%4d num^2 =%6d \n", num, num * num);
        num = num + 1;
    }

    return 0;
}