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
for (c = strlen; s[c] != 0; c--)
{
_putchar(c);
}
_putchar('\n');
}