#include <stdio.h>

char menu() {
  char option;
  printf("\n");
  printf("Choose an option.(a-d)\n");
  printf("a) Enqueue.\n");
  printf("b) Dequeue.\n");
  printf("c) Peek.\n");
  printf("d) exit.\n");
  scanf(" %c", &option);
  getchar();
  return option;
}