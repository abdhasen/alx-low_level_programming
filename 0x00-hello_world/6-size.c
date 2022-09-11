#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always return 0
 */
int main(void)
{
  int a;
  char b;
  long int c;
  long long int d;
  float e;
  printf("the size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
  printf("the size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
  printf("the size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
  printf("the size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
  printf("the size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
  return(0);
}
