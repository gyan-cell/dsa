#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node
      *next; // Here Next Stores the memory address of another Node Strucutre
  // because pointer variable stores the memeory address of another variable....
};

// This function is taking a address of a  Strucutre Of type node
void nodeValuePrinter(struct Node *p) {
  while (p != NULL) {
    printf("The data is %d\n", p->data);
    p = p->next;
  }
}

int main(int argc, char *argv[]) {
  struct Node *head;
  struct Node *one;
  struct Node *two;
  struct Node *three;
  one = malloc(sizeof(struct Node));
  two = malloc(sizeof(struct Node));
  three = malloc(sizeof(struct Node));
  one->data = 100;
  two->data = 200;
  three->data = 300;
  one->next = two;
  two->next = three;
  three->next = NULL;
  head = one;
  printf("Head->next =  %d\n",head);
  nodeValuePrinter(head);
}
