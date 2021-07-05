#include "holberton.h"

/**
 * _memcpy - copy n byte of b to array
 * @dest: Array destination
 * @src: Array source
 * @n: number of bytes to copy
 * Return: pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
