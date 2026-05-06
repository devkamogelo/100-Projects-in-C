#include <stdio.h>

char menu() {
  char option;
  printf("\n");
  printf("Choose an option.(1-2)\n");
  printf("a. Push to stack.\n");
  printf("b. Pop from stack.\n");
  printf("c. Peek at stack\n");
  printf("d. exit\n");
  scanf(" %c", &option);
  getchar();
  return option;
}