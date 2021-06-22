#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - Check for alphabet
 * @c: int for the argument of the function
 * Return: Always 0.
 */
int _isalpha(int c)
{
  if (c <= 'a' && c <= 'z' || c <= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
