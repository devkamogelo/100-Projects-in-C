#include "dynamicArray.h"
#include "menu.h"
#include <stdio.h>

int main() {
  char option;
  option = menu();

  while (option != 'd') {
    switch (option) {
    case 'a':
      createArray();
      option = menu();
      break;
    case 'b':
      resizeArray();
      option = menu();
      break;
    case 'c':
      freeArray();
      option = menu();
    default:
      printf("Invalid choice please try again");
      option = menu();
    }
  }
  return 0;
}