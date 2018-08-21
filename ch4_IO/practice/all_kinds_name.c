#include <stdio.h>

/* Mac 上 表现不一致 */

int main(void)
{
    char name[40];

    printf("Pleas Enter your name. \n");
    scanf("%s", name);

    printf("\"%s\" \n", name);
    printf("\"%20s\" \n", name);
    printf("\"%-20s\" \n", name);
    printf("\"%*s\" \n", strlen(name) + 3, name);

    return 0;
}