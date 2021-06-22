#include <stdio.h>
#include "holberton.h"

/**
 * _islower - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int _islower(int c);
{
if (c >= 'a' &&  c <= 'Z')
{
return (1);
}
else
return (0);
}
