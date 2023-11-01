#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to  deallocate the allocated space for int grid
 * @grid: pointer to int *
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
