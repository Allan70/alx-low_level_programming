#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}

	free(grid);
}
