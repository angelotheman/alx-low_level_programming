#include "main.h"

/**
  * print_diagonal - Print diagonal characters
  * @n: The number of times to be printed
  *
  */

void print_diagonal(int n)
{
	int a;
	int b;
	int sum = 0;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < sum; b++)
		{
			_putchar(' ');
		}
		sum++;
		_putchar('\n');
	}
}
