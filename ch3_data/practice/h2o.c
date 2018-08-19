#include <stdio.h>
int main(void)
{
    long double h2o = 3.0e-23;
    float qkWater = 950;
    int weight;
    long double numbers;

    printf("Please enter waters quake: \n");
    scanf("%d", &weight);
    numbers = weight * qkWater / h2o ;
    printf("H2o's number is %Le \n", numbers);

    return 0;
}