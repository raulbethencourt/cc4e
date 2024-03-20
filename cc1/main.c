// Copyright (c) 2023 Raul Behtencourt. All Rights Reserved.
#include <stdio.h>

int main(void) {
  /* NOTE: K&R Exercise 1-1 */
  printf("Hello world\n");

  /* NOTE: Exercise RS-1 */
  printf("Hello world\n");
  printf("Answer %d\n", 18);
  printf("Name %s\n", "Sarah");

  /* NOTE: Exercise RS-2 */
  int usf;
  printf("Enter US Floor\n");
  scanf("%d", &usf);
  printf("EU Floor %d\n", usf - 1);
  
  /* 21:13 */
}
