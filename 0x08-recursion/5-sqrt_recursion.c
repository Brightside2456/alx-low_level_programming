#include "main.h"

/**
 * _sqrt_recursion - recursive func to get sqrt of a num
 *
 * @n: nuber to find sqrt
 *
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion());
}
