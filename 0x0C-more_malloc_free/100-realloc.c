#include "main.h"
#include <stdlib.h>

/**
  * _realloc - Reallocates a memory block
  * @ptr: Void pointer
  * @old_size: Old size of malloc
  * @new_size: New size of malloc
  *
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL)
	}

	if (new_size < old_size)
	{
		size = new_size;
	}

	memcpy(new_ptr, ptr, size);
	
	free(ptr);

	return (new_ptr);
}
