#include "main.h"
/**
 * print_last_digit - Function to find the last digit
 *
 * @c: value whose last digit is to be found
 *
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c == 0)
	{
		last_digit = 0;
	}
	else if (c < 0)
	{
		last_digit = (-1 * c) % 10;
	}
	else
	{
		last_digit = c % 10;
	}
	_putchar((char) last_digit);
	return ((char) last_digit);
}
