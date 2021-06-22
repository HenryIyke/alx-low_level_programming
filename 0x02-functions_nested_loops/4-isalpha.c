#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - Check for alphabet
 * @c: int for the argument of the function
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
return (0);
}
