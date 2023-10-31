#include "main.h"
#include <stdlib.h>

/**
 * create_array - func to create arr of chars
 * @size: size of array
 * @c: initializing char
 * Return: a char array on success
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *array;
		unsigned int i;

		array  = malloc(sizeof(char) * size);

		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		return (array);
	}
}
