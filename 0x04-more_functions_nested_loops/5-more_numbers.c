#include "main.h"

/**
 * more_numbers - prints 0 -14 10x.
 * Return: 0
 */
int more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar"(%c", j);
_putchar("\n");
}
}
}  
