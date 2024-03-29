#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of members in array
 * @size: size of array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
	{
		array[i] = 0;
	}

	return (array);
}
