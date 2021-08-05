#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b- Binary string
 *
 * Return: Unsigned int conversion, OR
 * 		0 if b is NULL or string chars are invalid
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bi = 0, j = 0, len = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = len; i >= 0; i--,j++)
	{
		bi += (b[i] * (_pow(10, j)));

		if ((b[i] != '0' || b[i] != '1') && b == NULL)
			return (0);
	}
	return (bi);
}

/**
 * _pow - Returns a power
 * @x: integer argument
 * @y: integer power
 *
 * Return: value of X raised to the power y.
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow(x, y - 1));
}
