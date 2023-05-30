#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int total = 0;
	int num1 = 1;
	int num2 = 2;
	int m = 0;

	while (m <= 4000000)
	{
		if (num2 % 2 == 0)
		{
			total += num2;
		}
		m = num1 + num2;
		num1 = num2;
		num2 = m;
	}
	printf("%d\n", total);
	return (0);
}
