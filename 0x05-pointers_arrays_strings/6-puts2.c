#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: string pointer
 * Return: null
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
