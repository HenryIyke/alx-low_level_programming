#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - code to print for digits
 *
 * Return: Always 0.
 */
void print_line(int n)
{
  int i = 0;

  if (n > 0)
    {
      while (i > 0)
	{
	  _putchar('_');
	  i++
	}
      _putchar('\n');
    }
  else
      _putchar('\n');
}
