#include <stdio.h>
int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, j, k = 0;
    for ( i=0; i <= 5; i++ ) {
        for( j=0; j<=i ; j++, k++ )
            printf("%c", lets[k]);
        printf("\n");
    }

    return 0;
}