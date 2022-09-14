#include "main.h"

/**
 * print_last_digit - a function that prints last digit of a number.
 *
 * Return: Always 0.
 *@n: number to be checked.
 */
int print_last_digit(int n)
{
  int m;

  m = (n % 10);

  if (m < 0)
    {
      m = (-1 * m);
    }

  _putchar(m + '0');
  return (m);
}
