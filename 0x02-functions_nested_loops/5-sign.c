#include "main.h"
/**
 * print_sign - funtion tho dtermine the sign of a number
 *
 * @n: the argument to store specified number
 *
 *Return: + if positive and - if negative
 */
int print_sign(int n)
{
	int retVal;

	if (n > 0)
	{
		retVal = 1;
		_putchar('+');

	}
	else if (n < 0)
	{
		retVal = -1;
		_putchar('-');
	}
	else
	{
		retVal = 0;
		_putchar('0');
	}
	return (retVal);
}
