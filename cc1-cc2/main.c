// Copyright (c) 2023 Raul Behtencourt. All Rights Reserved.
#include <stdio.h>

int main()
{
    // NOTE: K&R Exercise 1-1
    printf("Hello world");
    printf("\n");

    // NOTE: Exercise RS-1
    // printf("Hello world\n");
    // printf("Answer %d\n", 18);
    // printf("Name %s\n", "Sarah");
    // printf("\n");

    // NOTE: Exercise RS-2
    // int usf;
    // printf("Enter US Floor\n");
    // scanf("%d", &usf);
    // printf("EU Floor %d\n", usf - 1);
    // printf("\n");

    // NOTE: Exercise RS-3
    // char name[50];
    // printf("Enter name\n");
    // scanf("%50s", name);
    // printf("Hello %s\n", name);
    // printf("\n");
    //
    // // NOTE: Exercise RS-4
    // char line[300];
    // printf("Enter line\n");
    // scanf("%[^\n]300s", line);
    // printf("Line: %s\n", line);

    // NOTE: Exercise RS-5-1
    // char line[300];
    // printf("Enter line\n");
    // fgets(line, 300, stdin);
    // printf("Line: %s\n", line);

    // NOTE: Exercise RS-5-2
    // char line[300];
    // FILE *hand;
    // hand = fopen("test.txt", "r");
    // while (fgets(line, 300, hand) != NULL) {
    //     printf("%s", line);
    // }

    // NOTE: Exercise RS-6
    // int i;
    // for (i = 0; i < 5; i++) {
    //     printf("%d\n", i);
    // }

    // NOTE: Exercise RS-7
    // int first = 1;
    // int val, maxval, minval;
    //
    // // NOTE: EOF equals to <ctrl-d>
    // while ((val = getchar()) != EOF) {
    //     if (first || val > maxval)
    //         maxval = val;
    //     if (first || val < minval)
    //         minval = val;
    //     first = 0;
    // }

    // printf("Maximum %d\n", maxval);
    // printf("Minimum %d\n", minval);

    // NOTE: Exercise RS-8
    // int guess;
    //
    // while (scanf("%d", &guess) != EOF) {
    //     if (guess == 42) {
    //         printf("Nice work!\n");
    //         break;
    //     } else if (guess < 42)
    //         printf("Too low - guess again\n");
    //     else
    //         printf("Too high - guess again\n");
    // }

    // NOTE: Exercise RS-9
    // int mymult(int a, int b);
    // int retval;
    //
    // retval = mymult(6, 7);
    // printf("Answer: %d\n", retval);
}

int mymult(int a, int b)
{
    int c = a * b;
    return c;
}
