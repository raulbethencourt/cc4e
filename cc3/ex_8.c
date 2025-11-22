#include <stdio.h>

char* copy(char s1[], char s2[]);
void reverse(char t[]);

int main()
{
    char t[1000];

    copy("Hello world", t);
    printf("%s\n", t);
    reverse(t);
    printf("%s\n", t);
    reverse(copy("XY", t));
    printf("%s\n", t);
    reverse(copy("Even", t));
    printf("%s\n", t);
    reverse(copy("Odd", t));
    printf("%s\n", t);
    reverse(copy("civic", t));
    printf("%s\n", t);
}

/*
 * Copy s1 to s2; assume s2 big enough
 */
char* copy(char s1[], char s2[])
{
    int i;

    for (i = 0; (s2[i] = s1[i]); i++)
        ;
    return s2;
}

/*
 * Reverse order of characters in string
 */
void reverse(char t[])
{
    char r[100];
    int i, j;

    for (i = 0; (r[i] = t[i]); i++)
        if (t[i] == '\0')
            break;
    for (j = 0; (t[i - 1] = r[j]); j++)
        i--;
}
