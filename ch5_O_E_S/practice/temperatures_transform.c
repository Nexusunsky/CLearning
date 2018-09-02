#include <stdio.h>

int temperature(double input);

int main(void)
{
    float huashi;
    printf("Please enter a number which present a ℉ other character \n");

    while (scanf("%f", &huashi) == 1) {
        temperature(huashi);
    }

    return 0;
}

int temperature(double input)
{
    double celsius, kelvin;
    celsius = 5.0 / 9.0 * (input - 32.0);
    printf("celsius is %.2f \t", celsius);
    kelvin = celsius + 273.16;
    printf("kelvin is %.2f \n", kelvin);

    return 0;
}