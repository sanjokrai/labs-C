#include <stdio.h>

int main() {

  printf("--- data types and size");

  printf("char : %zu bytes\n", sizeof(char));
  printf("int: %zu bytes\n", sizeof(int));
  printf("float : %zu bytes\n", sizeof(float));
  printf("double: %zu bytes\n", sizeof(double));
  printf("pointer: %zu bytes\n", sizeof(int *));
  printf("long: %zu bytes\n", sizeof(long));

  return 0;
}
