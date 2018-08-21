#include <stdio.h>
int main(void)
{
    float f1, f2;

    scanf("%f", &f1);
    printf("The input is %0.1f or %0.3e. \n", f1, f1);

    scanf("%f", &f2);
    printf("The input is %+0.3f or %0.3E. \n", f2, f2);

    return 0;
}