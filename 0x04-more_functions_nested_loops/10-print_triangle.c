#include "main.h"

/**
  * print_triangle - Printing a triangle
  * @size: The size of the triangle
  *
  */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
