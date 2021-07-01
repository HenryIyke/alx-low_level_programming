#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - Code to join copy string on n byte
 * @dest: String value for the argument of the function
 * @src: String value for the argument of the function
 * @n: Int value for the byte of the string
 * Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0;

while (a < n)
{
dest[a] = src[a];
b++;
a++;
if (src[a] == '\0')
{
break;
}
}
while (a < n)
{
dest[a] = '\0';
b++;
}
return (dest);
}
