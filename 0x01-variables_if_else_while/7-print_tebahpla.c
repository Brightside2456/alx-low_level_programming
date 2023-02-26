#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	letter = 'z';

	while (letter > 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar(10);

	return (0);
}
