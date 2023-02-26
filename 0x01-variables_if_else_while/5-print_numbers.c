#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; )
	{
		printf("%d", num);
		num++;
	}
	putchar(10);
	return (0);
}
