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
	if (size == 0)
	{
		return (NULL);
	}
	char *ptr = (char *)malloc(size * sizeof(c));

	return (ptr);
}
