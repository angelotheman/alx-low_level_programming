#include "main.h"

/**
  * reverse_array - Reversing the content of the array
  * @a: The array to be reversed
  * @n: Number of elements in the array
  *
  */

void reverse_array(int *a, int n)
{
	int i;
	int temp;


	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
