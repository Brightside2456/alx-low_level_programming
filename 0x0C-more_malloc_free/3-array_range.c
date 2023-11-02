#include <stdlib.h>
#include "main.h"
/**
 * array_range - allocate in order an integer memory address
 * @min: start
 * @max: stop
 * Return: ordered pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
