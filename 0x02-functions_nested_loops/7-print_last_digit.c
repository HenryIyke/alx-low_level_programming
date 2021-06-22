#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - check the code for ALX School students.
 * @n: int for the argument of the function
 * Return: Always 0.
 */
int print_last_digit(int n)
{
if (n >= 0)
{
_putchar (n % 10 + '0');
return (n % 10);
}
else
{
n = n * -1;
_putchar (n % 10 + '0');
return (c % 10);
}
}
