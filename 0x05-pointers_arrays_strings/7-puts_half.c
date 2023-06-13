#include "main.h"

/**
 * puts_half - printthe second half of a string
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int lenght, i, start_index;

	/* Get string lenght */
	for (lenght = 0; str[lenght] != '\0'; lenght++)
	{

	}
	/* Check if lenght is odd or even */
	if (lenght % 2 == 0)
	{
		start_index = lenght / 2;
	}
	else
	{
		start_index = (lenght - 1) / 2;
	}

	for (i = start_index; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
