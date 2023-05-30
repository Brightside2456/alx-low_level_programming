#include <stdio.h>
/**
 * main - Entry point
 *
 * @void: no params
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int total = 0;
	int num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}
