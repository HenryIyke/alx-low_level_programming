#include "holberton.h"

/**
 * print_square -  a function that draws a square on the terminal
 * @size: input number of times '\' should be printed
 * Return: a square
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
