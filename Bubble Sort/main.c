#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
  int arr[] = {92, 89, 42, 53, 35, 63, 23, 12, 76, 87};
  int len = sizeof(arr) / sizeof(arr[0]);
  bool swapped = false;

  for (int i = 0; i < len; i++) {
    swapped = false;
    for (int k = 0; k < len - i - 1; k++) {
      if (arr[k] > arr[k + 1]) {
        int temp = arr[k];
        arr[k] = arr[k + 1];
        arr[k + 1] = temp;
        swapped = true;
      }
    }
    if (swapped == false) {
      break;
    }
  }
  printf("Sorted Array: \n");
  for (int i = 0; i < len; i++) {
    printf(" %d ", arr[i]);
  }
}