#include <stdio.h>
int main(void)
{
    int i,j;
    char dollar[5] = "$$$$$";
    for ( i = 0; i < 5; i++ ){
        for ( j = 0; j <= i; j++ )
            printf("%c", dollar[j]);
        printf("\n");
    }

    return 0;
}