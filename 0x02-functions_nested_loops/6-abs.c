#include "main.h"

/**
 * _abs - return the abs val of a number
 * @int: the datatype to store the value
 * Return: int on success
 */

int _abs(int c)
{
	int value;

	if (c > 0 || c == 0)
	{
		value = c;
	}
	else if (c < 0)
	{
		value = -1 * (c);
	}
	return (value);
}
