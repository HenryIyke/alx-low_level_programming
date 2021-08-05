#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
		_putchar(n + '0');
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
