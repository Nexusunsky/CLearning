#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void)
{
    int mines, hours, left_mines;
    printf("Convert minutes to hours and minutes! \n");
    printf("Enter the minutes ( <0 to quit ) \n");

    scanf("%d", &mines);

    while (mines > 0) {
        hours = mines / MIN_PER_HOUR;
        left_mines = mines % MIN_PER_HOUR;
        printf("%d minutes is %d hours and %d minutes. \n", mines, hours, left_mines);
        scanf("%d", &mines);
    }

    printf("Done! \n");
    return 0;
}
