#include "main.c"

/**
 * print_line - print a line _.
 * Return: 0.
 * @n: number of times _ printed.
 */
void print_line(int n)
{
int i;
 if (n > 0)
   {
 for (i = 1; i <= n; i++)
{
_putchar(95);
}
_putchar("\n");
   }
 else
   {
     _putchar("\n");
   }
}
