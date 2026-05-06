#ifndef QUEUE_H
#define QUEUE_H

struct Node {
  int data;
  struct Node *next;
};

struct Queue {
  struct Node *front;
  struct Node *back;
};

void enqueue(struct Queue *queue, int value);
int dequeue(struct Queue *queue);
int peek(struct Queue *queue);
int is_empty(struct Queue *queue);

#endif