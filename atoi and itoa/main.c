#include "atoi.h"
#include "itoa.h"
#include <stdio.h>

int main() {
  char str[] = " 230923";
  int num = 339230;
  int val = atoi(str);
  printf("%d\n ", val);
  printf("%s\n", itoa(num));
  return 0;
}