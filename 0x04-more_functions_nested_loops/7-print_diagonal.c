#include "main.h"

/**
 * print_diagonal - prints diagonal line with \.
 * Return: 0
 * @n: numer of times the \ printed.
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i == j)
{
_putchar(92);
break;
}
_putchar(' ');
}
_putchar(10);
}
}
else
{
_putchar(10);
}
}
