#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints number parameters
 * @separator: string to separate numbers
 * @n: number of parameters
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ptr;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			;
		else
		{
			if (i == n - 1)
				printf("%d\n", va_arg(ptr, int));
			else
				printf("%d%s ", va_arg(ptr, int), separator);
		}
	}
}
