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
	return (_sqrt_recursive_helper(n, 1));
}

/**
 * _sqrt_recursive_helper - helper function
 * @n: param
 * @guess: param
 * Return: int
 */

int _sqrt_recursive_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_recursive_helper(n, gues + 1));
}
