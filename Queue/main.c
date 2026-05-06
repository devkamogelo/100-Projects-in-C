#include "menu.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  char option;
  int value;
  struct Queue *queue;

  queue = (struct Queue *)malloc(sizeof(struct Queue));
  queue->back = NULL;
  queue->front = NULL;

  option = menu();

  while (option != 'd') {
    switch (option) {
    case 'a':
      printf("Enter the value to insert to queue: ");
      scanf(" %d", &value);
      enqueue(queue, value);
      option = menu();
      break;
    case 'b':
      printf("%d removed from queue\n", dequeue(queue));
      option = menu();
      break;
    case 'c':
      printf("Front is %d\n", peek(queue));
      option = menu();
      break;
    default:
      printf("Invalid choice, try again.\n");
      option = menu();
    }
  }
  printf("Goodbye.");
  free(queue);
  return 0;
}