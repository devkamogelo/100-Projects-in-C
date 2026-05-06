#include <stdio.h>
int menu() {
  int option = 0;
  printf("\n");
  printf("Choose an option.(1-2)\n");
  printf("1. Encrypt String.\n");
  printf("2. Decrypt String.\n");
  printf("3. exit\n");
  scanf("%d", &option);
  getchar();
  return option;
}