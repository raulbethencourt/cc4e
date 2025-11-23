#include <stdio.h>

/* convert c to lower case; ASCII only */
int lower(int c)
{
    return c >= 'A' && c <= 'Z'
        ? c + 'a' - 'A'
        : c;
}

int main()
{
    printf("Lower M is %c\n", lower('M'));
    printf("Lower x is %c\n", lower('x'));
    printf("Lower @ is %c\n", lower('@'));
    printf("Lower O is %c\n", lower('O'));
}
