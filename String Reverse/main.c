#include <stdio.h>

int main() {

  char string[30];
  int length = 0;
  char reversedString[30];

  printf("Enter the string: ");
  fgets(string, sizeof(string), stdin);

  while (string[length] != '\0') {
    length++;
  }

  for (int i = 0; i < length; i++) {
    reversedString[i] = string[length - 1 - i];
  }

  printf("Your string reversed is: %s\n", reversedString);
  return 0;
}