#include <stdio.h>
#include "holberton.h"

/**
 * _islower - check the code for ALX School students.
 *@c: parameter the int will use to check for the argument of the function
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' &&  c <= 'z')
{
return (1);
}
else
return (0);
}
