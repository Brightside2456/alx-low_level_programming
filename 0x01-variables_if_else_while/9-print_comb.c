#include <stdio.h>

/**
 * main - Entry pooint
 *
 * Return: 0 on success
 */

int main(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		putchar(num);
		putchar(32);
		putchar(44);
		num++;
	}
	putchar(36);
	putchar(10);

	return (0);

}
