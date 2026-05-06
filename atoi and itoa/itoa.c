#include "itoa.h"
#include <stdio.h>
#include <stdlib.h>

char *itao(int num) {
  // Get the number of digits so i can decide
  // how long the array should be
  int digits = 0;
  int temp = num;
  while (temp != 0) {
    digits++;
    temp = temp / 10;
  }

  if (num == 0) {
    return "0";
  }

  char *str = malloc((digits + 1) * sizeof(char));

  int i = digits - 1;

  while (i >= 0) {
    str[i] = (num % 10) + '0';
    num = num / 10;
    i--;
  }

  return str;
}

int main() {
  char *result = itao(32903);
  printf("%s\n", result);
  free(result);
  return 0;
}