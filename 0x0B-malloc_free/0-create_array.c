#include "main.h"
#include <stdlib.h>

/**
  * create_array - Create array of chars
  * @size: First argument
  * @c: Second argument
  *
  * Return: NULL if size is 0, pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(c));

	return (ptr);
}
