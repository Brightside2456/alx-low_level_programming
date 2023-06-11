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

	for (size = 0; s[size] != '\0'; size++)
	{

	}
	for (i = size; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
