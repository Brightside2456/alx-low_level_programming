#include "main.h"
/**
 * _strlen_recursion - function to find the lenght of str
 *
 * @s: variable to hold str
 * Return: lenght of n
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
