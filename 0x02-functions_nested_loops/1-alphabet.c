#include "main.h"

/**
 * print_alphabet - A function to print alphabet in lowercase ans a newline
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
