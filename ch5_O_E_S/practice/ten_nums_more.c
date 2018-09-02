#include <stdio.h>

int main(void)
{
    int num, count;
    printf("Enter a num: \n");
    scanf("%d", &num);

    count = 0;
    while (count < 10) {
        printf("%d, \t", num);
        count++;
        num++;
    }
    printf("\nDone! \n");
    return 0;
}
