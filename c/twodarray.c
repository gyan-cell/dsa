#include "stdio.h"

/* int main() { */
/*   int array[2][3] = {{1, 2, 3}, {4, 5, 6}}; */
/*   for (int i = 0; i < 2; i++) { */
/*     for (int j = 0; j < 3; j++) { */
/*       printf("%d ", array[i][j]); */
/*     } */
/*     printf("\n"); */
/*   } */
/* } */

/* now we will see how to create multidimensional matrix using the
 * multidimensional arrays */

void main() {
  printf("please enter the dimensions of the matrix in the form m n\n");
  int m, n;
  scanf("%d%d", &m, &n);
  int array[m][n];
  printf("Now the matrix looks something like:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
  printf("Lets Enter the matrix\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Please enter the %d %d element of the matrix:", i, j);
      scanf("%d", &array[i][j]);
    }
  }
  printf("Now the matrix looks something like:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}
