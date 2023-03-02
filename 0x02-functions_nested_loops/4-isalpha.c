#include "main.h"

/**
 * _isalpha - a created function to check for an alphabetic character
 *
 * @c: the character to be chaecked on
 *
 * Return: 0 on success
 */

int _isalpha(int c)
{
	int value;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	return (value);
}
