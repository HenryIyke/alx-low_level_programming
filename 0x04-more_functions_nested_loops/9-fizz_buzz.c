#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - code to print for digits
 *
 * Return: Always 0.
 */
int main(void)
{
int c;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";
for (c = 1; c <= 100; c++)
{
if (c % 3 == 0 && c % 5 == 0)
{
printf("%s ", fb);
}
else if (c % 3 == 0)
{
printf("%s ", f);
}
else if (c % 5 == 0)
{
printf("%s ", b);
}
else
printf("%d ", c);
}
printf("\n");
return (0);
}
