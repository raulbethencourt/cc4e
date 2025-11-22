#include <stdio.h>

int get_length(char s[])
{
    int count;
    for (count = 0; s[count] != '\0'; ++count)
        ;
    return count;
}

int power(int x, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int htoi(char s[])
{
    int len, i, j, n, value;

    len = get_length(s);

    j = n = 0;
    for (i = len - 1; i >= 0; --i) {
        switch ((char)s[j]) {
        case 'a':
        case 'A':
            value = 10;
            break;
        case 'b':
        case 'B':
            value = 11;
            break;
        case 'c':
        case 'C':
            value = 12;
            break;
        case 'd':
        case 'D':
            value = 13;
            break;
        case 'e':
        case 'E':
            value = 14;
            break;
        case 'f':
        case 'F':
            value = 15;
            break;
        default:
            // transforming char int to int
            value = s[j] - '0';
            break;
        }

        n += (int)value * power(16, i);

        ++j;
    }
    return n;
}

int main()
{
    int htoi(char s[]);
    printf("htoi('8e01d') = %d\n", htoi("8e01d"));
    printf("htoi('f') = %d\n", htoi("f"));
    printf("htoi('F0') = %d\n", htoi("F0"));
    printf("htoi('12fab') = %d\n", htoi("12fab"));
}
