#include <stdio.h>

char menu() {
  char option;
  printf("\n");
  printf("Choose an option.(a-d)\n");
  printf("a) Create Array.\n");
  printf("b) Increase Array size.\n");
  printf("c) Free the array memory allocation.\n");
  printf("d) exit.\n");
  scanf(" %c", &option);
  getchar();
  return option;
}