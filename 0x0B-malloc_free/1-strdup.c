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

arr = malloc(sizeof(str));
while (str[i] != '\0')
{
len++;
i++;
}
if (arr == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
arr[i] = str[i];
i++;
}
return (arr);
}
