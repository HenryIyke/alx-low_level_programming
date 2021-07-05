#include "holberton.h"

/**
 * _strspn - Function to return number of bytes in s from accept
 * @s: Array to check
 * @accept: characters to compare
 * Return: pointer to s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
unsigned int length;
int b;

while (s[i] != '\0')
{
b = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
b = 1;
}
j = 0;
if (b == 0)
break;
i++;
length++;
}
return (i);
}
