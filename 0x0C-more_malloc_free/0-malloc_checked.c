#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Creates an array
 * @b: array size
 *
 * Return: Pointer to array
 */

void *malloc_checked(unsigned int b);
{
int* ptr;
ptr = malloc(b);
if(ptr == NULL)
exit(98);
return (0);
}
