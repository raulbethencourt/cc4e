#include <stdio.h>

/*
 * Fix this to be Celsius-Fahrenheit table
 */
int main()
{
    int cel;

    printf("CELSIUS   FAHR\n");
    printf("---------------\n");

    for (cel = 0; cel <= 100; cel = cel + 20)
        printf("%4d %6.1f\n", cel, ((5.0 / 9.0) * cel) - 32.0); // Celsius-Fahrenheit
}
