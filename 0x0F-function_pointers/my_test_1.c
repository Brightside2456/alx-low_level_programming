#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator -  execute function on every element in array
 * @array: array element
 * @size: size of array
 * @action: function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*act)(int);

	act = action;
	for (i = 0; i < size; i++, *array++)
		act(*array);
}

