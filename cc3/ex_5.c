#include <ctype.h>
#include <stdio.h>

/*
 * 5.1 - Count new lines in input
 */
int main()
{
    int c;
    int nl = 0;
    int ws = 0;
    int t = 0;

    while ((c = getchar()) != EOF) {
        if ('\n' == c)
            nl++;
        else if (isspace(c))
            ws++;
        else if ('\t' == c)
            t++;
    }
  
    printf("%d %d %d\n", ws, nl, t);

    return 0;
}
