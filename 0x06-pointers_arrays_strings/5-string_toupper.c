#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - Code to return upper cases of a lowercase array
 *
 *
 *
 * Return: 0
 */

char *string_toupper(char *)
{
int i = 0;
 char src;
 char dest;
while (src[1] != '\0')
{
if (src[i] >= 'a' && src[i] <= 'z')
{
dest[i] = src[i] - 32;
}
i++;
}
return (dest);
}
