#include <stdio.h>

/**
 * main - Entry point of code
 *
 * Reeturn: 0 on success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' || letter != 'e')
		{
			putchar(letter);
		}

	}
	putchar(10);

	return (0);
}
