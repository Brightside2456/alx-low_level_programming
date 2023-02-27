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

	for (num = 49; num <= 57;)
	{
		putchar(num);
		num++;
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar(10);

	return (0);
}
