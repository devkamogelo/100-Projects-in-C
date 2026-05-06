#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Stack {
  struct Node *top;
};

// Adds a node to the stack and pushes the first one down
void push(struct Stack *stack, int value) {
  // Basically just create a link and add it to the stack
  // See linked list code for explaination if lost
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (!newNode) {
    printf("Memory Allocation Failed.\n");
    return;
  }
  newNode->data = value;
  newNode->next = stack->top;
  stack->top = newNode;
}

// Remove a link from the stack and push the next one up
int pop(struct Stack *stack) {

  int value = 0;
  if (stack->top == NULL) {
    printf("Stack is empty");
    return -1;
  }
  // create a temp
  // and delete the link
  // again see linked list code if lost
  struct Node *temp = NULL;
  temp = stack->top;
  value = temp->data;
  stack->top = temp->next;
  free(temp);
  return value;
}

// looking at the value of the top without changing anything
int peek(struct Stack *stack) {
  if (stack->top == NULL) {
    printf("Stack is empty");
    return -1;
  }
  return stack->top->data;
}

int main() {
  // initialize stack top to NULL
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  if (!stack) {
    printf("Stack memory allocation failed.\n");
    return 1;
  }

  stack->top = NULL;

  int value;
  char choice = menu();

  while (choice != 'd') {
    switch (choice) {
    case 'a':
      printf("Enter value to push: ");
      scanf(" %d", &value);
      push(stack, value);
      printf("%d pushed to stack.\n", value);
      choice = menu();
      break;
    case 'b':
      printf("%d popped from stack.\n", pop(stack));
      choice = menu();
      break;
    case 'c':
      printf("Top of stack is: %d.\n", peek(stack));
      choice = menu();
      break;
    default:
      printf("Invalid choice, please try again.");
      choice = menu();
    }
  }

  // NEVER FORGET TO FREE AGAIN!!!!
  free(stack);
  return 0;
}