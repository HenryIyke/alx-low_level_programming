#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, next_term, t1 = 0, t2 = 1;
next_term = t1 + t2;
printf("%d, %d, \n", t1, t2);
while (n <= 50)
{
printf("%d, ", next_term);
t1 = t2;
t2 = next_term;
next_term = t1 + t2;
}
}
