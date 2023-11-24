#include <stdio.h>
#include <stdlib.h>

#define max 5

int top = -1, array[max];

void insert() {
  if (top == max - 1) {
    printf("Stack Underflow");
  } else {
    int val;
    printf("Please Enter The Number\n");
    scanf("%d", &val);
    top = top + 1;
    array[top] = val;
  }
}

void pop() {
  if (top == -1) {
    printf("Stack Underflow");
  } else {
    printf("The Element deleted is %d\n", array[top]);
    top--;
  }
}

void show() {

  if (top == -1) {
    printf("Stack Underflow");
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
      insert();
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
