#include "main.h"

/**
  * reverse_array - Reversing the content of the array
  * @a: The array to be reversed
  * @n: Number of elements in the array
  *
  */

void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = n -1; i >= 0; i--)
		*a = a[i];
}
