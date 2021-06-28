#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Code to update the value of an integer parameter
 * @s: String value for the argument of the function
 * Return: void
 */

void rev_string(char *s)
{
int c;

for (c = 0; s[c] != 0; c++)
{
}
for (c = c - 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
