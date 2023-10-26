/**
 * factorial - find the factorial of a num
 *
 * @n: number to find factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if(n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
