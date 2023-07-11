#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2 dimenssion array
 * @grid: 2 dimenssion grid
 * @height: height dimension of grid
 * Description: free memory of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
