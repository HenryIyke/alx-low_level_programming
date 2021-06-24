#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - code to print for digits
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i = 0;
int c = 0;

while (i <= 9)
{
while (c <= 14)
{
if (c > 9)
{
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
c++;
}
}
}
_putchar('\n');
}
