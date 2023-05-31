#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int m, i;

	printf("%lu, %lu", num1, num2);
	for (i = 1; i <= 96; i++)
	{
		m = num1 + num2;
		num1 = num2;
		num2 = m;
		printf(", %lu", num2);
	}
	putchar('\n');
	return (0);
}
