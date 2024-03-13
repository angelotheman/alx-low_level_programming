#include "search_algos.h"

/**
 * binary_search - Searches for a value using the binary search algorithm
 *
 * @array: Pointer to the first element in the array
 * @size: The size of the array
 * @value: The value to look for
 *
 * Return: Index of value, -1 if not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(left, right);
		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}


/**
 * print_array - Prints out the array
 *
 * @start: Start of array
 * @end: End of array
 */

void print_array(size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%lu", i);

		if (i < end)
		{
			printf(", ");
		}
	}
	printf("\n");
}

