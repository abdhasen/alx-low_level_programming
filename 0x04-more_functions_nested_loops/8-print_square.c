#include "main.c"

/**
 * print_square - print square with #.
 * Return: 0
 * @size: size of the square.
 */
void print_square(int size)
{
int i;
if (size > 0)
{
for (i = 0; i <= size; i++)
{
for (i = 0; i <= size; i++)
{
_putchar("#");
}
_putchar("\n");
}
}
else
{
_putchar("\n");
}
}
