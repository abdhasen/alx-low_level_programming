#include "main.h"

/**
 * print_triangle - prints triangle
 * Return: 0.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
int i;
int j;
int k;
if (size <= 0)
{
_putchar(10);
}
else
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(32);
}
for (k = 1; k <= i; k++)
{
_putchar(35);
}
_putchar(10);
}
}
}
