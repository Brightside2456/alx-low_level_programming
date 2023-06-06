#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * positive_or_negative - Entry point
 *
 * Return: Always 0 for stdin and stdout
 */
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
