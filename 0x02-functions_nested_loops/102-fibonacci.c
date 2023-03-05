#include <stdio.h>

/**
 * main - entry point
 *
 * @void: no parameters
 *
 * Return: 0 on sucess
 */

int main(void)
{
	long long a;
	long long b;
	int limit;
	long long c;

	a = 1;
	b = 2;

	printf("%lld, %lld", a, b);

	for (limit = 3; limit <= 50; limit++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
