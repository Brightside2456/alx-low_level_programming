#include "main.h"

/**
 * print_last_digit - Prints out the last digit
 *
 * @a: the digit to be worded on
 *
 * Return: an int on success on faliure
 */

int print_last_digit(int a)
{
	int l = a % 10;


	if (l >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
	{
		_putchar(-l + '0');
		l = -1 * l;
		return (l);
	}
}
