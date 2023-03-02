#include "main.h"

/**
 * _islower - This function checks for a lowercase char
 *
 * @c: stores the value to check if its lowercase
 *
 * Return: 0 on success, 1 otherwise
 */

int _islower(int c)
{
	int value;

	if (c >= 97 && c <= 122)
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	return (value);
}
