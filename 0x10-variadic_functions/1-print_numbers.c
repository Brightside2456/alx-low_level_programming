#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Funct to print variable Numbers
 * @separator: str to separate the values
 * @n: num of arduments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		printf("%d", num);
		if (separator == NULL)
			;
		else
		{
			if ((i + 1) == n)
				break;
			printf("%s", separator);
		}
	}
	printf("\n");
}
