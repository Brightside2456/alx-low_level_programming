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
	int returnval;

	letter = 'a';
	while (letter <= 'z')
	{
		if (c == letter)
		{
			returnval = 1;
		}
		else
		{
			returnval = 0;
		}
	}
	return (returnval);
}
