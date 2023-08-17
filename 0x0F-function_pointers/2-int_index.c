#include "function_pointers.h"

/**
  * int_index - Search for an integer
  * @array: First arg
  * @size: Second arg
  * @cmp: Functional arg
  *
  * Return: -1 if no element else otherwise
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!(array) || !(size) || !(cmp))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
