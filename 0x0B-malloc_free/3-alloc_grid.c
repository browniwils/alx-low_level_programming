#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: 2 dimensional array otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
