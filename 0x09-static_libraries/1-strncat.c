#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - Code to copy string of n byte
 * @dest: String value for the argument of the function
 * @src: String value for the argument of the function
 * @n: Int value for the byte of the string
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
a++;
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}
