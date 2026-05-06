#include "atoi.h"
#include <stdio.h>

int atoi(const char *str) {

  int pos = 0;
  int answer = 0;
  char i = str[pos];

  // skip the leading spaces
  while (i == ' ') {
    pos++;
    i = str[pos];
  }

  if (i < '0' || i > '9') {
    return 0;
  }

  // loops while the character is a digit
  while (i >= '0' && i <= '9') {
    answer = answer * 10 + (str[pos] - '0');
    pos++;
    i = str[pos];
  }
  return answer;
}

int main() {
  printf("%d\n", atoi("29303"));
  return 0;
}