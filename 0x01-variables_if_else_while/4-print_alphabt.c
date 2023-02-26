#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success, non-zero on failure.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';)
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}

	}
	putchar(10);

	return (0);
}
