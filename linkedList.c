#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insertBegin();
void delete_begin();
struct node *head = NULL;

struct node {
  int data;
  struct node *next;
};

void create() {
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("Enter Node Data: ");
  scanf("%d", &temp->data);
  temp->next = NULL;
  if (head == NULL) {
    head = temp;
    return;
  } else {
    struct node *ptr = head;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    ptr->next = temp;
  }
}

int main() {
  int choice;
  while (1) {
    printf("\n*****\n");
    printf("0. Create\n");
    printf("1. display\n");
    printf("2. Insert Node at beginning\n");
    printf("3. Exit\n");
    printf("4. DELEte beginning\n");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 0:
      create();
      break;
    case 1:
      display();
      break;
    case 2:
      insertBegin();
      break;
    case 4:
      delete_begin();
      break;
    case 3:
      exit(0);
    default:
      printf("\n Wrong Choice");
      break;
    }
  }
}

void display() {
  if (head == NULL) {
    printf("The Linked List is Empty...\n");
  } else {
    printf("Linked List : \n");
    struct node *ptr = head;
    while (ptr != NULL) {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
    }
  }
  printf("\n");
}

void insertBegin() {
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("Enter Node Data\n");
  scanf("%d", &temp->data);
  if (head != NULL) {
    head = temp;
    return;
  } else {
    temp->next = head;
    head = temp;
  }
}

void delete_begin() {
  if (head == NULL) {
    printf("The List is Empty . | There Is nothing to do!\n");
  } else {
    struct node *ptr;
    head = head->next;
    free(ptr);
    printf("Node Deleted");
  }
}
