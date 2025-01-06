#include "stdio.h"

int main(void) {
  printf("we will taking the transpose of the matrix\n");
  int m, n;
  printf("please enter the dimensions of the matrix in the form m n\n");
  scanf("%d%d", &m, &n);
  if (m != n) {
    printf("the matrix is not a square matrix\n");
    return 0;
  }
  int array[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Please enter the %d %d element of the matrix:", i, j);
      scanf("%d", &array[i][j]);
    }
    printf("\n");
  }
  printf("the matrix is now something like this \n ");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
  printf("now we will calculate the transpose of the matrix\n");
  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < n; j++) {
      int temp = array[i][j];
      array[i][j] = array[j][i];
      array[j][i] = temp;
    }
    printf("\n");
  }
  printf("the  transpose of the   matrix is now something like this \n ");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
  return 0;
}
