#include "main.h"
/**
 * _puts_recursion - recursive func to print a str
 * @s: character param
 * Return: char var
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
