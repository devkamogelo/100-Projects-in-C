#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

int main() {
  // create an empty node;
  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;
  struct Node *fourth = NULL;

  // assign the address of each node to the variable;
  // malloc(size) -> create a space that is this big in the memory
  //(struct Node *) -> that memory belongs to a pointer to Node.
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // if the value of the variable = NULL; no memory could be allocated
  if (!head || !second || !third || !fourth) {
    printf("Memory allocation failed.");
    return 1;
  }

  // assigning the data and link to each node
  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = fourth;

  fourth->data = 4;
  // NULL because it is the last node in the list
  fourth->next = NULL;

  // prints the list
  // we use temp because we do not want to change/move the head
  // because that will end up breaking the list.
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");

  // free up the memory that we allocated
  // so next is equal to the next node,
  // remove the memory allocated to the node and
  // move on to the next and do the same
  // until you are done.
  // we free up the memory manually because we do
  // not want to cause a memory leak
  temp = head;
  while (temp != NULL) {
    struct Node *next = temp->next;
    free(temp);
    temp = next;
  }
}