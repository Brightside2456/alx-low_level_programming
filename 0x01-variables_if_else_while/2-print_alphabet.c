#include <stdio.h>

/**
 * main : entry point
 *
 * Return : 0 on successfull completions
 *
 */

int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	putchar(10);

	return (0);
}
