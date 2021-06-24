#include "holberton.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
long len, r, i, temp, e;

r = n;
e = len =  1;
/*To check for negatives*/
if (r < 0)
{
r *= -1;
_putchar('-');
}

temp = r;
while (temp >= 10)
{
len++;
temp /= 10;
}
/* To create exponent*/
for (i = 1; i < len; i++)
e *= 10;

while (e > 1)
{
_putchar((r / e) % 10 + '0');
e /= 10;
}
_putchar(r % 10 + '0');
}
