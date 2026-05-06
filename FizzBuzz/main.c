#include "fizzbuzz.h"
#include <stdio.h>

int main() {

  int number = 0;
  printf("Enter a number: ");
  scanf("%d", &number);

  fizzbuzz(number);

  return 0;
}