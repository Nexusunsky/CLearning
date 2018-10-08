#include <stdio.h>
int main(void)
{
    char ch;
    int cycle = 1;
    while ( (ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        printf("%c-%d \t", ch, ch);
        if (cycle % 8 == 0)
            printf("\n");
        cycle++;
    }

    return 0;
}