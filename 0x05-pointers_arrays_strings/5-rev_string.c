#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Code to update the value of an integer parameter
 * @s: String value for the argument of the function
 * Return: void
 */

void rev_string(int *s)
{
int c;
for (c = 10; s[c] >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
