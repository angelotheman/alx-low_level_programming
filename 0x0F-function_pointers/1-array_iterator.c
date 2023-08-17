#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - Executes a function
  * @array: Args
  * @size: Args
  * @action: Function args
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array) || !(size) || !(action))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
