// Copyright (c) 2023 Raul Behtencourt. All Rights Reserved.
#include <stdio.h>

int main(void) {
    // NOTE: K&R Exercise 1-1
    printf("Hello world\n");
    printf("\n");

    // NOTE: Exercise RS-1
    printf("Hello world\n");
    printf("Answer %d\n", 18);
    printf("Name %s\n", "Sarah");
    printf("\n");

    // NOTE: Exercise RS-2
    int usf;
    printf("Enter US Floor\n");
    scanf("%d", &usf);
    printf("EU Floor %d\n", usf - 1);
    printf("\n");

    // NOTE: Exercise RS-3
    char name[50];
    printf("Enter name\n");
    scanf("%50s", name);
    printf("Hello %s\n", name);
    printf("\n");

    // NOTE: Exercise RS-4
    char line[300];
    printf("Enter line\n");
    scanf("%[^\n]300s", line);
    printf("Line: %s\n", line);

    /* 41:31 */
}
