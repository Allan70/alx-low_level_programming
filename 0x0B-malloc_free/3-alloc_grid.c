#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a ponter to a 2-dimensional array of integers
 *
 * @width: width of 2-dimensional array
 * @height: height of 2-dimensional array
 *
 * Return: returns a pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int index, count;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid  = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		grid[index] = malloc(sizeof(int) * width);

		if (grid[index] == NULL)
		{
			for (; index >= 0; index--)
			{
				free(grid[index]);
			}
			free(grid);
			return (NULL);
		}
	}
	index = 0;
	while (index < height)
	{
		for (count = 0; count < width; count++)
		{
			grid[index][count] = 0;
		}
		index++;
	}
	return (grid);
}
