#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check for successful malloc
 * @b: this is the size for malloc
 * Return: termination status 98 elsepointer to alloc mem
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
