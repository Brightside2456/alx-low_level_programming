#include "main.h"
/**
 * _islower - function to check for lowercase
 *
 * @c: letter to be checked
 *
 * Return: 1 if lowercase or 0 if otherwise
 */
int _islower(int c)
{
	int letter;
	int retVal;

	letter = 'a';
	retVal = 0;
	while (letter <= 'z')
	{
		if (c == letter)
		{
			retVal = 1;
			break;
		}

		letter++;
	}
	return (retVal);
}
