
#include <stdio.h>
#include <stdlib.h>

// we  will be writing stack code
// We needTo decide size of the array

#define SIZE 5

int top = -1,  array[SIZE];

void push() {
  if (top == SIZE - 1) {
    printf("OverFlow\n");
  } else {
    int num;
    printf("Please Enter the number U wish to Add \n");
    scanf("%d", &num);
    top = top + 1;
    array[top] = num;
  }
}

void pop() {
  if (top == -1) {
    printf("UnderFlow\n");
  } else {
    printf("Element %d IS Pooped !\n", array[top]);
    top = top - 1;
  }
}

void show() {
  if (top == -1) {
    printf("UnderFlow\n");
  } else {
    for (int i = 0; i <= top; i++) {
      printf("%d\n", array[i]);
    }
  }
}

int main() {
  int choice;
  while (1) {
    printf("\n 1:Push \n 2:POP  \n 3:SHOW \n 4:Exit\n");
    printf("Cmon Choose Any One .\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      show();
      break;
    case 4:
      exit(0);
    }
  }
}

