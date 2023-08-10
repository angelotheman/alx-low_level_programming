#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocate memory using malloc
  * @b: Unsigned int arg
  *
  * Return: Pointer to space alloted
  */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
