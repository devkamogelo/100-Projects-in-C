#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// this is how you define constants in C
#define CHUNK_SIZE (50 * 1024 * 1024) // 50MB in bytes
#define MAX_ALLOCATIONS 20            // 20 * 50MB = 1GB

int main() {
  printf("Starting the memory leak test\n");
  printf("Allocating %dMB every second, up to %dMB total\n\n",
         CHUNK_SIZE / (1024 * 1024),
         (CHUNK_SIZE / (1024 * 1024)) * MAX_ALLOCATIONS);

  // make sure it only takes 1GB total
  // don't want my system to crash
  for (int i = 0; i < MAX_ALLOCATIONS; i++) {
    void *chunk = malloc(CHUNK_SIZE);

    // Check if we got memory and where it stop if we didn't
    if (!chunk) {
      printf("Allocation failed at iteration %d\n", i);
      break;
    }

    // writing to the memory because os does not
    // give physical memory until you actually
    // write something to it. It just gives you promise
    // of RAM
    memset(chunk, 0, CHUNK_SIZE);

    printf("Leaked: %dMB so far...\n", (i + 1) * (CHUNK_SIZE / (1024 * 1024)));
    sleep(1);
  }

  printf("\nDone.<\n");
  getchar();
  return 0;
}