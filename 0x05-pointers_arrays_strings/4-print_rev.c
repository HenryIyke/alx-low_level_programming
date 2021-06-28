#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Code to print a string in reverse
 * @s: String value for the argument of the function
 * Return: void
 */

void print_rev(char *s)
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
