File Edit Options Buffers Tools C Help
#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - code to print for digits
 * @n: Int for argument of the function
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
int j;
if (n >= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
