// Copyright (c) 2023 Raul Behtencourt. All Rights Reserved.
#include <stdio.h>

void convertion(int);

/*
 * print Fahrenheit-Celsius table
 *  for fahr = 0, 20, ..., 300
 */
int main()
{
    int fahr;

    printf("FAHR   CELSIUS\n");
    printf("---------------\n");

    convertion(fahr);

    return 0;
}

void convertion(int fahr)
{
    for (fahr = 0; fahr <= 300; fahr = fahr + 40)
        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}

/*
 * C book version
 */
void fahrToCelsius()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d8n", fahr, celsius);
        fahr = fahr * step;
    }
}
