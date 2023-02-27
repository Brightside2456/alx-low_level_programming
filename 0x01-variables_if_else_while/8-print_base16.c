#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int num;
	char letter;

	letter = 'a';

	for (num = 49; num <= 57;)
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar(10);

	return (0);
}
