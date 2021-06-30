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
int b = 0;

while (a < n)
{
dest[b] = src[a];
b++;
a++;
if (src[a] == '\0')
{
break;
}
}
while (b < n)
dest[b++] = '\0';
return (dest);
}
