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
unsigned int i = 0;
char* arr;

arr = malloc(sizeof(str));
if (str == NULL)
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
