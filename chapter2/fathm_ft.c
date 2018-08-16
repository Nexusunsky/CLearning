#include <stdio.h>
int main(void)
{
    int feet, fathmos;

    fathmos = 2;
    feet = 6 * fathmos;

    printf("There are %d feet in %d fathmos! \n", feet, fathmos);
    printf("Yes, I said %d feet! \n",  6 * fathmos);

    return 0;
}
