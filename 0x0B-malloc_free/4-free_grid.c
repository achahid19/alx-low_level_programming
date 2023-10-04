#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array created by alloc_grid
 * @grid: 2d array
 * @height: rows of the array
 * Return: void.
*/
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
