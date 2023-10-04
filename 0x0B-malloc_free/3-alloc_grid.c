#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate 2D array of ints
 * @width: number of columns in the array
 * @height: number of rows in the array
 * Return: pointer to 2Darray
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int count1, count2;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (count1 = 0; count1 < height; count1++)
	{
		grid[count1] = malloc(sizeof(int) * width);
		if (grid[count1] == NULL)
		{
			free(grid);
			count1--;
			while (count1 >= 0)
			{
				free(grid[count1]);
				count1--;
			}
			return (NULL);
		}
		for (count2 = 0; count2 < width; count2++)
		{
			grid[count1][count2] = 0;
		}
	}
	return (grid);
}
