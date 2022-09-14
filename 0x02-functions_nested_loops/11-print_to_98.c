#include "main.h"
#include "_putchar.c"
/**
 * print_to_98 - prints number from n to 98.
 *
 * Return: Always 0.
 * @n: starting number.
 */
void print_to_98(int n)
{
  if (n < 98)
    {
      while (n <= 98)
	{
	  _putchar("%d", n);
	  if (n != 98)
	    {
	      _putchar(", ");
	    }
	  n++;
	}
    }
  else if (n > 98)
    {
      while (n >= 98)
	{
	  _putchar("%d", n);
	  if (n != 98)
	    {
	      _putchar(", ");
	    }
	  n--;
	}
    }
  else
    {
      _putchar("98");
    }
  _putchar("\n");
}

