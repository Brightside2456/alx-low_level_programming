#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to an new but duplicate str
 * @str: string to be duplicated
 * Return: pointer to new but 'copied' string
 */
char *_strdup(char *str)
{
	char *array;
	int i;
	int j;


	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	array = malloc(sizeof(char) + 1 * (i));
	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		array[j] = str[j];
	}
	return (array);
}
