#include "holberton.h"

/**
 * print_line - code to print for digits
 * @n: Int for argument of the function
 * Return: Always 0.
 */
void print_line(int n)
{
int i = 0;

if (n > 0)
{
while (i > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}
else
_putchar('\n');
}
