#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - Entry point for alphabet print.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c = 0;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
