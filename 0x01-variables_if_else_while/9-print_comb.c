#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
while (i = '0' ; i <= '9' ; i++)
{
putchar(i);
if (i < 9)

putchar(',');
putchar(' ');

else

break;

}
putchar('\n');
}
return (0);
}
