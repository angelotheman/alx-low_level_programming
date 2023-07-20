#include "main.h"

/**
  * print_square - Printing a square of all numbers
  * @size: The size of the square to be printed
  *
  */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
