#include "holberton.h"
#include <stdlib.h>

/**
 * _pow_recursion - prints a string
 * @x: integer argument
 * @y: int power
 *
 * Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));
}
