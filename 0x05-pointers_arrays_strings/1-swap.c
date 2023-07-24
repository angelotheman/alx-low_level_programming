#include "main.h"

/**
  * swap_int - This swaps the values of two integers
  * @a: First integer
  * @b: Second integer
  *
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
