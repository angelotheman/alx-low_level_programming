#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - Pointer of 2D array
  * @width: number of columns
  * @height: number of rows
  *
  * Return: NULL on failure, otherwise Pointer
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(width * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int *));
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
