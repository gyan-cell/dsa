#include "stdio.h"

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

int div(int a, int b) { return a / b; }

int mod(int a, int b) { return a % b; }

int power(int a, int b) { return a ^ b; }

int main() {
  int a, b;
  printf("Please Enter the numbers");
  scanf("%d%d", &a, &b);
  int added = add(a, b);
  printf("The result of addition is %d\n", added);
  int subtracted = sub(a, b);
  printf("The result of subtraction is %d\n", subtracted);
  int multiplied = mul(a, b);
  printf("The result of multiplication is %d\n", multiplied);
  int divided = div(a, b);
  printf("The result of division is %d\n", divided);
  int modulus = mod(a, b);
  printf("The result of modulus is %d\n", modulus);
  int powered = power(a, b);
  printf("The result of power is %d\n", powered);
  return 0;
}
