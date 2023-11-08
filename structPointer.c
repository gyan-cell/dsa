#include <stdio.h>

int main(int argc, char *argv[])
{ 
  // struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
  // meaning of these line is pretty simple first a pointer variable is created named node1;
  // it can access any part of struct obj and then malloc function is used to assign a 
  // memory to the malloc function (Struct Node*) is The type 
  struct Hello {
    int roll ;
  };
  struct Hello* hello;
  int  p  = 10;
  hello ->roll = 20;
  printf("%d\n",hello->roll);
}
