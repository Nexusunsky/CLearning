#include <stdio.h>
int main(void)
{
    int i, j, k, l, m, index;
    char ch = 'A';
    for ( i=0; i<5; i++ ) {
        for ( j=0; j<5-1-i; j++ )
            printf(" ");

        for ( k=5-1-i, index=0; k<=5-1; k++,index++)
            printf("%c", ch + index);

        while ( --index>0 )
            printf("%c", ch + index - 1);

        for ( l=5+i; l<5*2-1; l++ )
            printf(" ");
        printf("\n");
    }

    return 0;
}