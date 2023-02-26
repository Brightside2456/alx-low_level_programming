#include <stdio.h>

/**
 * main - entry point of code
 *
 * Reeturn: 0 on success
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
