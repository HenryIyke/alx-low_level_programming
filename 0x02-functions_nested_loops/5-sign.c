#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - check the code for ALX School students.
 * @n: int value for argument of the function
 * Return: Always 0.
 */
int print_sign(int n)
{
int result;
if (n > 0)
{
putchar('+');
result = "1";
}
else if (n == 0)
{
putchar('0');
result = "0";
}
else
{
putchar('-');
result = "-1"
}
}
putchar('\n');
return (result);
}
