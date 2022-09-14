#include "main.h"

/**
 * _ialower - print lowercase alphabets.
 *
 * Return: Always 0.
 *@l: passed number.
 */
int _islower(int l)
{
  if (l >= 'a' && l <= 'z')
    return (1);
  else
    return (0);
}
