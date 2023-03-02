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
	int i;
	int value;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			value = 1;
		}
		else
		{
			value = 0;
		}
	}
	return (value);
}
