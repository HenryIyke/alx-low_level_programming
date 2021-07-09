#include "holberton.h"
#include <stdio.h>
/**
 * _puts - Code to print string to standard output
 * @str: string value for the argument of the function
 * Return: void
 */

void _puts(char *str)
{
int c;
for (c = 0; str[c] != 0; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
