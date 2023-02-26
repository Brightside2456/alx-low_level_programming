#include <stdio.h>

/**
 * Main function of the program.
 *
 * @return 0 on success, non-zero on failure.
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
