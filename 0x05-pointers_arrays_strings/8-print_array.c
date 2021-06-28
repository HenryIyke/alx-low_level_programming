#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Code to print a string in reverse
 * @a: Int value for argument of the function
 * @n: Int value for the argument of the function
 * Return: void
 */

void print_array(int *a, int n)
{
int i;
*a = l[n];
for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d", l[i]);
}
else
{
printf("%d, " l[i]);
}
}
}
