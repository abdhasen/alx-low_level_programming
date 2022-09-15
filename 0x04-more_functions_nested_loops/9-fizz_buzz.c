#include "main.c"

/**
 * fizz_buzz_test - fizz buzz test.
 * Return: 0.
 */
void fizz_buzz_test(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz", " ");
}
else if (i % 5 == 0)
{
printf("Buzz", " ");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz", " ");
}
else
{
printf(i, " ");
}
}
printf("\n");
}
