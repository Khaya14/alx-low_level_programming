#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid.
 *
 * @height: height of grid.
 * @grid: 2 dimensional array.
 *
 * Return: None.
 */

void free_grid(int **grid, int height)
{
	int **grid;
	int height = i;

	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

