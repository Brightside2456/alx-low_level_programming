#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 on success
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57;)
	{
		putchar(num);
		num++;
	}
	putchar(10);

	return (0);
}
