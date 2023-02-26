#include <stdio.h>

/**
 * main : entry point
 *
 * Return : 0 on success
 */

int main(void)
{
	int letter;
	letter = 97;

	for (letter; letter <= 122; letter++)
	{
		putchar(letter);
		putchar(10);
	}

	return (0);
}
