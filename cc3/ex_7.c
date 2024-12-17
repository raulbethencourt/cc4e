#include <ctype.h>
#include <stdio.h>

/*
 * 5.2 - Strip extra white space in lines
 */
int main()
{
    int c;
    int last = 0;

    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            putchar('\n');
            continue;
        }
        putchar(c);
    }

    return 0;
}
