#include "randomNum.h"
#include <stdio.h>

int main() {
  int max = 100;
  int min = 50;
  int guess;
  int tries = 0;
  int randomNumber = randInt(min, max);

  printf("Please Pick a number between 50 and 100.\n");
  scanf("%d", &guess);
  while (guess != randomNumber) {
    tries++;
    if (guess > randomNumber) {
      printf("Too high guess again.\n");
      scanf("%d", &guess);
    } else if (guess < randomNumber) {
      printf("Too low guess again.\n");
      scanf("%d", &guess);
    }
  };
  printf("You win! answer: %d\n", randomNumber);
  printf("Tries: %d\n", tries);
};