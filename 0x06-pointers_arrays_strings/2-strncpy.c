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
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];
while (i < n)
{
dest[i++] = '\0';
}
return (dest);
}
