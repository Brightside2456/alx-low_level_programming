#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints n number of strings
 * @separator: a delimeter for the insividual sttrings
 * @n: the number of strings to print
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
		{
			printf("%s", string);
		}
		if ((i + 1) == n)
			break;
		if (separator == NULL)
			;
		else
			printf("%s", separator);
	}
	printf("\n");
}
