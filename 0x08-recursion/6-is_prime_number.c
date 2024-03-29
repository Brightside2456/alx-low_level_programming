#include "main.h"

/**
 * is_prime_number_recursive - another func
 * @n: number to check
 * @divisor: param
 * Return: int
 */

int is_prime_number_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number_recursive(n, divisor + 1));
}

/**
 *is_prime_number - check if a num is a prime num
 * @n: param
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, 2));
}
