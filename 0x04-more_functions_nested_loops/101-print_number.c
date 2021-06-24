#include "holberton.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
long len, r, i, temp, expo;

r = n;
expo = len =  1;
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
expo *= 10;

while (expo > 1)
{
_putchar((r / expo) % 10 + '0');
expo /= 10;
}
_putchar(r % 10 + '0');
}
