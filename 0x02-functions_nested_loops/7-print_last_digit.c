#include "main.h"
/**
 * print_last_digit - Funtion to print the last digit
 *
 * @c: argument
 *
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	char last_digit;

	if (c < 0)
	{
		last_digit = (-1 * c) % 10;
	}
	if (c == 0)
	{
		last_digit = 0;
	}
	else if (c > 0)
	{
		last_digit = c % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

