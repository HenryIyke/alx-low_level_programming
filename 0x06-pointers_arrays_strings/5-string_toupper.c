#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - Code to return upper cases of a lowercase array
 * @s: int value for the argument of the function
 * int value for the argument of the function
 *
 * Return: Void
 */

char *string_toupper(char *s)
{
int i = 0;

while (s[1] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (0);
}
