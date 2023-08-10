#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array
  * @nmemb: First argument
  * @size: Size of array
  *
  * Return: Pointer to void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
