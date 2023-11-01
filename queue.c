#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void enqueue();
void dequeue();
void show();

int array[MAX], top = -1, rear = -1;

void enqueue() {
  int val;
  if (rear == MAX - 1) {
    printf("Queue Overflow...\n");
  } else {
    if (top == -1) {
      top++;
    }
    printf("Please Enter The Number To Add in Queue\n");
    scanf("%d", &val);
    rear++;
    array[rear] = val;
  }
}
void dequeue() {
  if (top == -1 || top > rear) {
    printf("Underflow\n");
  } else {
    printf("The Number deleted is %d", array[top]);
    top++;
  }
}
void show() {
  if (top == -1 || top > rear) {
    printf("Underflow\n");
  } else {
    printf("Queue is \n");
    for (int i = top; top < rear; top++) {
      printf("%d\n", array[top]);
    }
  }
}

int main(int argc, char *argv[]) {
  int ch;
  while (1) {
    printf("1.Enqueue Operation\n");
    printf("2.Dequeue Operation\n");
    printf("3.Display the Queue\n");
    printf("4.Exit\n");
    printf("Enter your choice of operations : ");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      show();
      break;
    case 4:
      exit(0);
    default:
      printf("Incorrect choice \n");
    }
  }
}
