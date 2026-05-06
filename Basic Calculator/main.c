#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  int result = 0.0f;
  char operand = '\0';

  printf("Enter the first number: ");
  scanf(" %d", &a);

  printf("Enter the operand: ");
  scanf(" %c", &operand);

  printf("Enter the second number: ");
  scanf(" %d", &b);

  switch (operand) {
  case '/':
    result = a / b;
    break;
  case '*':
    result = a * b;
    break;
  case '+':
    result = a + b;
    break;
  case '-':
    result = a - b;
    break;
  default:;
  }

  printf("The answer is: %d\n", result);

  return 0;
}