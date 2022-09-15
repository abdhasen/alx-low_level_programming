#include <stdio.h>
/**
 * fizz_buzz_test - fizz buzz test.
 * Return: 0.
 */
int main(void)
{
int i;
char f[5] = "Fizz";
char b[5] = "Buzz";
char fb[8] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("%s", f);
printf(" ");
}
else if (i % 5 == 0)
{
printf("%s", b);
printf(" ");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("%s", fb);
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
printf(" ");
return (0);
}
