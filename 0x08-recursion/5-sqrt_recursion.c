#include "holberton.h"
#include <stdlib.h>

/**
 * _puts_recursion - prints a string
 * @s: String argument
 *
 *
 * Return: pointer to s
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (squarecheck(n, 1));
}

/**
 * squarecheck - check for square value for n
 * @n: number
 * @i: value to increment
 * Return: i
 */

int squarecheck(int n, int i)
{
if (n == (i * i))
return (i);
else if (n > (i * i))
return (squarecheck(n, i + 1));
else
return (-1);
}
