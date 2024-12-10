#include "stdio.h"

#define LOWER 0 // lower limit of table
#define UPPER 300 // upper limit
#define STEP 20 // step size

/*
 * Fahrenheit-Celsius table
 */
int main()
{
    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
