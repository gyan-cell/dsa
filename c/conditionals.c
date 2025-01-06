#include "stdio.h"

int isEligibleTovote(int age) {
  if (age >= 18) {
    return 1;
  } else if (age <= 0) {
    return -1;
  } else {
    return 0;
  }
}

void main() {
  int age;
  printf("please enter the age:");
  scanf("%d", &age);
  int result = isEligibleTovote(age);
  if (result == 1) {
    printf("Eligible to vote");
  } else if (result == 0) {
    printf("Not eligible to vote");
  } else {
    printf("Invalid age");
  }
}
