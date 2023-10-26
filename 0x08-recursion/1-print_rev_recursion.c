#include "main.h"

/**
 * _print_rev_recursion - print the reverse of a recursion
 * @s: parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
