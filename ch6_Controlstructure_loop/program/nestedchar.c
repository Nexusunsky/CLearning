#include <stdio.h>
int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,j;
    for ( i = 5; i >= 0; i-- ){
        for ( j = 5; j >= i; j-- )
            printf("%c", lets[j]);
        printf("\n");
    }

    return 0;
}