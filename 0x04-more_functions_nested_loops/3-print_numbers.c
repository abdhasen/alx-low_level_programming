#include "main.h"

/**
 * print_numbers - prints 0 to 9 with new line
 * Return: 0
 */
void print_numbers(void)
{
int i;
for (i = '0'; i < '9'; i++)
{
putchar(i);
}
 putchar('\n');
}
