#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - Code to print string to standard output
 * @str: string value for the argument of the function
 * Return: void
 */

void puts_half(char *str)
{
int c;
int a;

for (c = 0; str[c] != 0; c++)
{
}
if (c / 2 == 0)
{
for ((a = c / 2); str[a] != 0; a++)
{
_putchar(str[a]);
}
}
else
{
for (a = ((c - 1) / 2); str[a] != 0; a++)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
