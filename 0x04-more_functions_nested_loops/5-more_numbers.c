#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - code to print for digits
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
int c;

for (c = 0; c <= 9; c++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
