/** Variables in C are used to store data.
Variables are nothing but the name given to computer memory
    Declaring and initializing variables
 * **/

#include <stdio.h>
int main() {
  // Declaring and initializing variables Basic Syntax : dataType variableName =
  // value
  int mainNumber = 20;               // This is int
  char name = 'a';                   // This is char
  long int age = 254154154154151515; // This is long int
  printf("%d is the main number  \n ", mainNumber);
  printf("%c is the name  \n", name);
  printf("%ld is the age  \n", age);
  return 0;
}
