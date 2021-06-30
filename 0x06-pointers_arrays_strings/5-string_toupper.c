#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - Code to return upper cases of a lowercase array
 * @str: int value for the argument of the function
 * int value for the argument of the function
 *
 * Return: 0
 */

char *string_toupper(char *str)
{
int i = 0;

while (str[1] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (0);
}
