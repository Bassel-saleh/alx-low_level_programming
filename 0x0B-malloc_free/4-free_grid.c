#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2d array
 * @height: height of string
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
