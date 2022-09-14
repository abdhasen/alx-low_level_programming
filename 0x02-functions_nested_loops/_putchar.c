#include "main.h"
  /**
   *putchar - display character
   *
   *Return: chars
   */
int main(void)
{
  char c[] = "Holberton";
  int i;

  for (i = 0; i < 9; i++)
    {
      _putchar(c[i]);
    }
  _putchar('\n');
  return (0);
}
