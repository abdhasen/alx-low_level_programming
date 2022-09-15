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
if (size <= 0)
{
_putchar(10);
}
else
{
for (i = 1; i <= size; i++)
{
for (j = i; j >= 1; j--)
{
_putchar(35);
}
_putchar(10);
}
}
}
