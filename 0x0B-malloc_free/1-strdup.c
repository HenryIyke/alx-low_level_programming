#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: string
 *
 *
 * Return: Pointer to array
 */

char *_strdup(char *str)
{
int i = 0, len = 0;
char *arr;

while (str[i] != '\0')
{
len++;
i++;
}
arr = malloc(len * sizeof(str));
if (arr == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
arr[i] = str[i];
i++;
}
return (arr);
}
