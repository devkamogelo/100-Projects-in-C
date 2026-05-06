#include "handleString.h"
#include "menu.h"
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int main() {
  char string[100];
  int option = menu();
  int shiftFactor = 0;

  while (option != 3) {
    if (option == 1) {
      printf("Enter string to encrypt: ");
      fgets(string, sizeof(string), stdin);
      string[strlen(string) - 1] = '\0';
      printf("Enter shift factor: ");
      scanf("%d", &shiftFactor);
      getchar();
      printf("Encrypted String is: %s\n", encryptString(string, shiftFactor));
      option = menu();
    } else if (option == 2) {
      printf("Enter string to decrypt: ");
      fgets(string, sizeof(string), stdin);
      string[strlen(string) - 1] = '\0';
      printf("Enter shift factor: ");
      scanf("%d", &shiftFactor);
      getchar();
      printf("Decrypted String is: %s\n", decryptString(string, shiftFactor));
      option = menu();
    } else if (option == 3) {
      printf("Goodbye ;)");
    } else {
      printf("Invalid choice please pick again.\n");
      option = menu();
    }
  }
}
