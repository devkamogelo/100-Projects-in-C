#include <string.h>

char *encryptString(char *string, int shiftFactor) {
  char lowercaseAlphabet[27] = "abcdefghijklmnopqrstuvwxyz";
  char uppercaseAlphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int length = strlen(string);

  for (int i = 0; i < length; i++) {
    for (int k = 0; k < 26; k++) {
      if (string[i] == uppercaseAlphabet[k]) {
        string[i] = uppercaseAlphabet[(k + shiftFactor) % 26];
        break;
      } else if (string[i] == lowercaseAlphabet[k]) {
        string[i] = lowercaseAlphabet[(k + shiftFactor) % 26];
        break;
      }
    }
  }

  return string;
}

char *decryptString(char *string, int shiftFactor) {
  char lowercaseAlphabet[27] = "abcdefghijklmnopqrstuvwxyz";
  char uppercaseAlphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int length = strlen(string);

  for (int i = 0; i < length; i++) {
    for (int k = 0; k < 26; k++) {
      if (string[i] == uppercaseAlphabet[k]) {
        string[i] = uppercaseAlphabet[(k - shiftFactor + 26) % 26];
        break;
      } else if (string[i] == lowercaseAlphabet[k]) {
        string[i] = lowercaseAlphabet[(k - shiftFactor + 26) % 26];
        break;
      }
    }
  }

  return string;
}