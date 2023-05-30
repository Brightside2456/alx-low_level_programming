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
	long int total;
	long int sum;

	while (sum <= 4000000)
	{
		if (num2 % 2 == 0)
		{
			total += num2;
		}
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	printf("%ld\n", total);
	return (0);
}
