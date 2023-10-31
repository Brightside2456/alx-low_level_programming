#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of int
 * @width: width
 * @height: height
 * Return: pointer to a 2d Array
 */
int **alloc_grid(int width, int height)
{
	int **num, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	num = malloc(sizeof(int *) * height);
	if (num == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		num[i] = malloc(sizeof(int) * width);
		if (num[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(num[j]);
			}
			free(num);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			num[i][j] = 0;
		}
	}
	return (num);
}
