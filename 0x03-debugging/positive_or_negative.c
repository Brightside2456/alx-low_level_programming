#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - check code
 * @n: number to be checked on
 * Return: 0 on success
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
