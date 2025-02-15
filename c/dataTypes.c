/**
 *
 Each variable in C has an associated data type.
 It specifies the type of data that the variable can store like integer,
 character, floating, double, etc each data type requires different amounts of
 memory and has some specific operations which can be performed over it.

 C has 4 primitive  data types
 1. int
 2. char
 3. float
 4. double
 5.void

Primitive data types are the most basic data types that are used for
representing simple values such as integers, float, characters, etc.

Derived Data Types
1. Array
2. Pointer
3. Function

The data types that are derived from the primitive or built-in datatypes are
referred to as Derived Data Types.


User Defined Data Types :

1. Structure
2. Union
3. Enum

The user-defined data types are defined by the user himself.


 * **/

/**
 |Integer Data Types in C
 The Integer  data types in C are used to represent the positive negative and
 Zero numbers :
 Octals values , Hexadecimal values and Decimal values can be stored in int data
 types in c language.\

 Raange : -2,147,483,648 to 2,147,483,647
 Size 4 Bytes
 format specifier : %d


 types of int
 1. signed : Signed int data type in C is used to store the data values from
 negative
 2. unsigned : Unsigned int data type in C is used to store the data values from
 zero to positive numbers but it can’t store negative values like signed int.

Character Data Type

Character data type allows its variable to store only a single character. The
size of the character is 1 byte. It is the most basic data type in C. It stores
a single character and requires a single byte of memory in almost all compilers.
Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c

Float Data Type :
In C programming float data type is used to store floating-point values. Float
in C is used to store decimal and exponential values. It is used to store
decimal numbers (numbers with floating point values) with single precision.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f

A Double data type in C is used to store decimal numbers (numbers with floating
point values) with double precision. It is used to define numeric values which
hold numbers with decimal values in C.

The double data type is basically a precision sort of data type that is capable
of holding 64 bits of decimal numbers or floating points. Since double has more
precision as compared to that float then it is much more obvious that it
occupies twice the memory occupied by the floating-point type. It can easily
accommodate about 16 to 17 digits after or before a decimal point.

    Range: 1.7E-308 to 1.7E+308
    Size: 8 bytes
    Format Specifier: %lf




 *
 *
 * **/

// Below are the implementation of the above data types

// C program to print Integer data types.

#include <stdio.h>

int intDataTypes() {
  // Integer value with positive data.
  int a = 9;

  // integer value with negative data.
  int b = -9;

  // U or u is Used for Unsigned int in C.
  int c = 89U;

  // L or l is used for long int in C.
  long int d = 99998L;

  printf("Integer value with positive data: %d\n", a);
  printf("Integer value with negative data: %d\n", b);
  printf("Integer value with an unsigned int data: %u\n", c);
  printf("Integer value with an long int data: %ld", d);

  return 0;
}

// C program to print Integer data types.

int charDataTypes() {
  char a = 'a';
  char c;

  printf("Value of a: %c\n", a);

  a++;
  printf("Value of a after increment is: %c\n", a);

  // c is assigned ASCII values
  // which corresponds to the
  // character 'c'
  // a-->97 b-->98 c-->99
  // here c will be printed
  c = 99;

  printf("Value of c: %c", c);

  return 0;
}

// C Program to demonstrate use
// of Floating types

int floatDataTypes() {
  float a = 9.0f;
  float b = 2.5f;

  // 2x10^-4
  float c = 2E-4f;
  printf("%f\n", a);
  printf("%f\n", b);
  printf("%f", c);

  return 0;
}

// C Program to demonstrate
// use of double data type

int doubleDataTypes() {
  double a = 123123123.00;
  double b = 12.293123;
  double c = 2312312312.123123;

  printf("%lf\n", a);

  printf("%lf\n", b);

  printf("%lf", c);

  return 0;
}

/**

Size of Data Types in C
The size of the data types in C is dependent on the size of the architecture, so
we cannot define the universal size of the data types. For that, the C language
provides the sizeof() operator to check the size of the data types.
**/

// C Program to print size of
// different data type in C

int sizeOfDataTypes() {
  int size_of_int = sizeof(int);
  int size_of_char = sizeof(char);
  int size_of_float = sizeof(float);
  int size_of_double = sizeof(double);

  printf("The size of int data type : %d\n", size_of_int);
  printf("The size of char data type : %d\n", size_of_char);
  printf("The size of float data type : %d\n", size_of_float);
  printf("The size of double data type : %d", size_of_double);

  return 0;
}

int main() {
  intDataTypes();
  charDataTypes();
  floatDataTypes();
  doubleDataTypes();
  sizeOfDataTypes();
  return 0;
}
