#include <stdio.h>

/**
 * main - entry point
 *
 * @void: no parameters
 *
 * return: 0 on sucess
 */

int main(void)
{
	int a;
	int b;
	int limit;
	int c;

	a = 1;
	b = 2;

	printf("%d\n", a);

	for (limit = 1; limit <= 50; limit++)
	{
		printf("%d\n", b);

		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
