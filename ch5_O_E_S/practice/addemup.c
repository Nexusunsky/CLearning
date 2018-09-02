#include <stdio.h>

int main(void)
{
    int sum, day, days, money;
    printf("Enter a number represent the date you want to count in. \n");

    scanf("%d", &days);
    sum = 0;
    day = days;

    while (days-- > 0) {
        printf("Earn how much money in day %d ? \n", days);
        scanf("%d", &money);
        sum = sum + money;
    }

    printf("You have earn %d$ in %ddays \n", sum, day);
    printf("Done! \n");
    return 0;
}