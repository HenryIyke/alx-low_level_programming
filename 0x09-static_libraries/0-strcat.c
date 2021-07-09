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
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
