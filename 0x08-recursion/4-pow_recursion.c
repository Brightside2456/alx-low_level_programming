#include "main.h"

/**
 * _pow_recursion - calculate value of x raised to y
 * @x: base number
 * @y: index
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	/* Recursive Step: x^y = x* x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
