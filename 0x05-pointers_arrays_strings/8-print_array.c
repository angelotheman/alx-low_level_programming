#include <stdio.h>
#include "main.h"

/**
  * print_array - Print the elements of the array
  * @a: This is the array passed
  * @n: This is the number of elements to be printed
  */

void print_array(int *a, int n)
{
	int *ptr = a;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *ptr);
		else
			printf("%d", *ptr);
		ptr++;
	}
	printf("\n");
}
