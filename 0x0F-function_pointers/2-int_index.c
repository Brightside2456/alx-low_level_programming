 
 
;
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - returns the index of the first array element that meets
 * the requirement
 * @array: Array
 * @size: number of array elements
 * @cmp: pointer to function
 * Return: index of specified array element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*f)(int);

	f = cmp;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (f(*(array + i)))
			return (i);
	return (-1);
}

