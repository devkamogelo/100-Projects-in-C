#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void enqueue(struct Queue *queue, int value) {
  // Create a Node
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (!newNode) {
    printf("Node memory allocation failed.\n");
    return;
  }

  newNode->data = value;
  // It joins at the back, that is why it is NULL, because
  // there is nothing behind it
  newNode->next = NULL;

  // if the back is not empty
  // move the back node up
  if (queue->back != NULL) {
    queue->back->next = newNode;
  }
  queue->back = newNode;

  // if the front is empty then the front and back are the same.
  if (queue->front == NULL) {
    queue->front = newNode;
  }

  printf("%d added to queue\n", value);
}

int dequeue(struct Queue *queue) {
  if (queue->front == NULL) {
    printf("The queue is empty.\n");
    return -1;
  }

  struct Node *temp = queue->front;
  int value = temp->data;
  queue->front = temp->next;
  free(temp);

  if (queue->front == NULL) {
    queue->back = NULL;
  }

  return value;
}

int peek(struct Queue *queue) {
  if (queue->front == NULL) {
    return -1;
  }
  return queue->front->data;
}

int is_Empty(struct Queue *queue) { return queue->front == NULL; }