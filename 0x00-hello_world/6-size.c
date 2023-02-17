#include <stdio.h>

/**
 * main - The entry point of this program
 * return 0 - main must always return 0
 */
int main(void)
{
  int intType;
  float floatType;
  char characterType;
  long int longIntType;
  long long int long2xIntType;

  /* print out the memory size of variable with type char */
  printf("Size of a char: %lu byte(s)\n", sizeof(characterType));

  /* print out the memory size of variable with type int */
  printf("Size of an int: %lu byte(s)\n", sizeof(intType));

  /* print out the meory size of variable with type long int */
  printf("Size of a long int: %lu byte(s)\n", sizeof(longIntType));

  /* print out the memory size of variable with type long long int*/
  printf("Size of a long long int: %lu byte(s)\n", sizeof(long2xIntType));

  /* print out the memoery size of the variable with type float*/
  printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

  return 0;
}
