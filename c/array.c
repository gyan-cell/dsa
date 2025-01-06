#include "stdio.h"

/* int main(void) { */
/*   int array[5] = {1, 2, 3, 4, 5}; */
/*   for (int i; i < 5; i++) { */
/*     printf("%d \n", array[i]); */
/*   } */
/* } */

#include <stdio.h>

int main() {
  int length;
  printf("Please enter the length of the array:");
  scanf("%d", &length);
  int array[length];
  for (int i; i < length; i++) {
    printf("Please enter the %d element of the array:", i);
    scanf("%d", &array[i]);
  }
  printf("The array Looks Something like:\n");
  for (int i = 0; i < length; i++) {
    printf("%d \n", array[i]);
  }
  return 0;
}
