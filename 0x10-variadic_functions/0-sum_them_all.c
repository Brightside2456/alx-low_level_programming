#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all inputed numbers
 * @n: preceeding var
 * Return: sum of argguments passed
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum;
	va_list numbers;

	va_start(numbers, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, int);
		sum += x;
	}
	return (sum);
}

