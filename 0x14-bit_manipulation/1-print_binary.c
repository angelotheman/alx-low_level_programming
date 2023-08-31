#include "main.h"

/**
  * print_binary - Prints the binary rep of a number
  * @n: Args
  *
  */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 31; i > 0; i >>= 1)
	{
		_putchar((n & i) ? '1' : '0');
	}

	_putchar('\n');
}
