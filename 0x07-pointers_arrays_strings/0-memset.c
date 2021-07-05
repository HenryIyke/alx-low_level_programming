#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @s: Array
 * @b: character to replace
 * @n: number of bytes to replace
 * 
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; j <= n; j++)
s[j] = b;

return (s);
}
