#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocate memory using malloc
  * @b: Unsigned int arg
  *
  */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = (int *)malloc(b * sizeof(int *));

	if (a == NULL)
	{
		exit (98);
	}

	return (a);
}
