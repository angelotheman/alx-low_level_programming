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
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(c));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
