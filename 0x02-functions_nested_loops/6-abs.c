#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute value of anumber.
 *
 * Return: Always 0.
 * @a: number tobe checked.
 */
int _abs(int a)
{
  return (a * ((a > 0) - (a < 0)));
}
