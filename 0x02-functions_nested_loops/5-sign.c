#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: this is the var that stores the number to be checked for
 *
 * Return: 1 if n> 0, -1 if n<0, and 0 if n=0
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}

	return (value);
	_putchar(value + ',' + n);
}
