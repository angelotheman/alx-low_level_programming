#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _realloc - Reallocates a memory block
  * @ptr: Void pointer
  * @old_size: Old size of malloc
  * @new_size: New size of malloc
  *
  * Return: Void pointer to new size
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
		size = old_size;
	else
		size = new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, size);

	free(ptr);

	return (new_ptr);
}
