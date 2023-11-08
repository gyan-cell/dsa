#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *head = NULL;

void createNode() {
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("Please Enter The Data for The node");
  scanf("%d", &temp->data);
  if (head == NULL) {
    head = temp;
  } else {
    struct node *ptr = head;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    ptr->next = temp;
  }
}

void display() {
  if (head == NULL) {
    printf("The Linked List Is Empty....\n");
  } else {
    struct node *ptr = head;
    while (ptr != NULL) {
      printf("[");
      printf("%d\n", ptr->data);
      ptr = ptr->next;
      printf("]");
    }
  }
}

void insert_begin() {
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("Please Enter the data TO be entered\n");
  scanf("%d", &temp->data);
  if (head == NULL) {
    head = temp;
  } else {
    temp->next = head;
    head = temp;
  }
}

void insert_pos() {
  struct node *temp;
  temp = (struct node *)(malloc(sizeof(struct node)));
  printf("Please Enter The data");
  scanf("%d", &temp->data);
  temp->next = NULL;
  if (head != NULL) {
    head = temp;
  } else {
    struct node *prev_ptr;
    struct node *ptr;
    int pos;
    printf("Please Enter The Position\n");
    scanf("%d", &pos);
  }
}
