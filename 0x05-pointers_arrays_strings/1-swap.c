#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - Code to swap the values of int a and b
 * @a: Int value for the argument of the function
 * @b: Int value for the argument of the function
 * Return: void
 */

void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
