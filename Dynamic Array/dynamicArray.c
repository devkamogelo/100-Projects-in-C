#include "dynamicArray.h"
#include <stdio.h>
#include <stdlib.h>

int *ptr;
int size;

void createArray() {
  printf("Enter size of elements: ");
  scanf("%d", &size);

  // Malloc does not initialize values
  // Calloc initializes all bits to zero
  ptr = (int *)calloc(size, sizeof(int));

  if (!ptr) {
    printf("Memory allocation failed: ");
    exit(0);
  }
  // adding items into the array
  for (int j = 0; j < size; j++) {
    ptr[j] = j + 1;
  }
  // print the array
  printf("The elements of the array are: ");
  for (int i = 0; i < size; i++) {
    printf("%d, ", ptr[i]);
  }
  printf("\n");
}

void resizeArray() {
  int oldSize = size;
  int *temp = ptr;
  printf("Enter the new array size: ");
  scanf("%d", &size);

  ptr = (int *)realloc(ptr, size * sizeof(int));
  if (!ptr) {
    printf("Memory Re-allocation failed.\n");
    ptr = temp;
  }

  for (int j = oldSize; j < size; j++) {
    ptr[j] = j + 1;
  }

  printf("The new elements of the array are: ");
  for (int k = 0; k < size; k++) {
    printf("%d ", ptr[k]);
  }
}

void freeArray() {
  free(ptr);
  ptr = NULL;
  size = 0;
  printf("Memory allocated to Array freed successfully.\n");
}