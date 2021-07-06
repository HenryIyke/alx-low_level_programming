#include "holberton.h"
#include <stdlib.h>

/**
 * factorial - prints a string
 * @n: integer argument
 *
 *
 * Return: factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
