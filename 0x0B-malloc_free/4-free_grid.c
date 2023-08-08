#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Free up space for other use
  * @grid: 2D array pointer
  * @height: height of array
  */

void free_grid(int **grid, int height)
{
	int i;
	int j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[i][j]);
		}
	}
}
