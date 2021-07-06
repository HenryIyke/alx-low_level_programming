#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen_recursion - prints a string length
 * @s: String argument
 *
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
unsigned int i = 0;

if (s[i] == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}
