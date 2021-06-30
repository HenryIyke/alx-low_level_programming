#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - Code to update the value of an integer parameter
 * @dest: String value for the argument of the function
 * @src: String value for the argument of the function
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int length;
int i;

while (length != '\0')
{
length++;
}
for (j = 0; dest[j] != '\0'; j++, ++length)
{
src[length] = dest[j];
}
src[length] = '\0';
_putchar(src);
}
