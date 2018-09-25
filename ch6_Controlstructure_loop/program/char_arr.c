#include <stdio.h>
#define SIZE 26

int main(void)
{
    int index,char_arr[SIZE];
    char ch;
    for (index = 0, ch = 'a'; index < SIZE; index++, ch++)
       char_arr[index] = ch;
    for (index = 0, ch = 'a'; index < SIZE; index++, ch++)
       printf("%c \t" ,char_arr[index]);

    printf("\n");
    return 0;
}