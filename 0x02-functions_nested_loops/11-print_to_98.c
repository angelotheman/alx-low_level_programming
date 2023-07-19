#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - Printing all natural numbers up to 98
  * @n: The starting point of the numbers
  *
  * Return: The natural numbers till 98
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n ; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
