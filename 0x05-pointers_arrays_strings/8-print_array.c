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
if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%p", a[i]);
}
else
{
printf("%p, " a[i]);
}
}
}
}
