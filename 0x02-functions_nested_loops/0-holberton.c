#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
unsigned int c;
for (c = 0; c < sizeof(ch); c++)
{
_putchar(ch[c]);
}
_putchar('\n');
return (0);
}
