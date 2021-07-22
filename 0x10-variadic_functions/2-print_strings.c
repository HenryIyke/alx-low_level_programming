#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_string - Function that prints strings
 * @separator: String between strings
 * @n: number of strings
 *
 */

void print_string(const char *separator, const unsigned int n, ...)
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
			if ( i == n - 1)
			{
				if (va_arg(ptr, char *) == NULL)
					printf("nil\n");
				else
					printf("%s\n", va_arg(ptr, char *));
			}
			else
			{
				if (va_arg(ptr, char *) == NULL)
					printf("nil%s ", separator);
				else
					printf("%s%s ", va_arg(ptr, char *), separator);
			}
		}
	}
	va_end(ptr);
}
