#include "search_algos.h"

/**
 * linear_search - Search using the linear search algorithm
 *
 * @array: Pointer to the first element to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of value, else -1 if not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (!array)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (array[count] == value)
		{
			return (count);
		}
	}

	return (-1);
}
