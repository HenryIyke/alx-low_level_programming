#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Destination string
 * @s2: Source string
 * @n: Number of bytes to copy
 * Return: Pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, len1 = n;
unsigned int len2 = 0;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
len1++;
for (j = 0; s2[j] != '\0'; j++)
len2++;
s3 = malloc(sizeof(char) * (len1 + 1));
if (s3 == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
s3[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++, i++)
s3[i] = s2[j];
s3[i] = '\0';
return (s3);
}
