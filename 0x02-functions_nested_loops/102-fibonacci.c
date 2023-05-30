#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 on correct completion
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	int i;

	printf("%ld, %ld", num1, num2);
	for (i = 1; i <= 48; i++)
	{
		long int sum = num1 + num2;

		num1 = num2;
		num2 = sum;
		printf(", %ld", sum);
	}

	putchar('\n');
	return (0);
}
