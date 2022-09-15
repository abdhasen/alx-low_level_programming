#include "main.h"
#include "_putchar.c"
/**
 * print_most_numbers - print numbers except 2 and 4.
 * Return: 0
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
{
return (0);
}
else
{
_putchar(i);
_putchar("\n");
}
}
}
