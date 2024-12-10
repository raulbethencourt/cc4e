#include <ctype.h>
#include <stdio.h>

/*
 * count new lines in input
 */
int main()
{
    int c;
    int nl = 0;
    int ws = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            nl++;
        else if (isspace(c))
            ws++;
    }

    printf("%d %d\n", ws, nl);
}
