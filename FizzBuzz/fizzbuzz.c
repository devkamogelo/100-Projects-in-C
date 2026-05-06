#include <stdio.h>
#include <string.h>

void fizzbuzz(int n) {
  char result[n][10];
  char numAsString[10];
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      strcpy(result[i], "FizzBuzz");
    } else if (i % 3 == 0) {
      strcpy(result[i], "Fizz");
    } else if (i % 5 == 0) {
      strcpy(result[i], "Buzz");
    } else {
      sprintf(numAsString, "%d", i);
      strcpy(result[i], numAsString);
    }
    printf(" %s ", result[i]);
  }
}