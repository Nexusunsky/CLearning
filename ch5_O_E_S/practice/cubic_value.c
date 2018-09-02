#include <stdio.h>
int cubic(double input);

int main(void)
{
    float input;
    scanf("%f", &input);
    cubic(input);

    return 0;
}

int cubic(double input)
{
    double cubic_value = input * input * input;
    printf("Origin value %f ,Cubic value %f \n", input, cubic_value);
    return 0;
}
