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

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
