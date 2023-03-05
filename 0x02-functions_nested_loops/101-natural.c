#include <stdio.h>

/**
 * main - Entry point
 * @void: no params
 *
 * Return: integer always
 */
int main(void)
{
	int total;
	int i;

	total = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total += i;
		}
		else
		{

		}
	}
	printf("%d", total);
	printf("\n");

	return (0);
}
