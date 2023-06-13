#include "main.h"
/**
 * print_rev - print the reverse of the string argument
 * @s: pointer to string
 * Return: nothing
 */
void print_rev(char *s)
{
	int size;
	int i;

	/*Calculate the lenght of the string*/
	for (size = 0; s[size] != '\0'; size++)
	{

	}
	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
