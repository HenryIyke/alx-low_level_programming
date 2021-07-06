#include "holberton.h"
#include <stdlib.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: String argument
 *
 *
 * Return: pointer to s
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
