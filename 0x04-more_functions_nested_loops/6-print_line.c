#include "main.h"

/**
  * print_line - It draws a straight line in the terminal
  * @n: Argument to be passed
  */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
			_putchar('_');
		_putchar('\n');
	}
}
