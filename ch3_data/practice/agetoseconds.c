//一年3.156 * 10 7次方秒
#include <stdio.h>
int main(void)
{
    int age;
    float seconds;

    printf("Please enter your age: \n");
    scanf("%d", &age);
    seconds = age * 3.156e7;

    printf("Your age equals %f seconds. \n", seconds);

    return 0;
}