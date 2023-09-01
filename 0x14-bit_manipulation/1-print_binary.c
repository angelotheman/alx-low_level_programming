#include "main.h"

/**
  * print_binary - Prints the binary rep of a number
  * @n: Args
  *
  */

void print_binary(unsigned long int n)
{
	char nums;

	nums = n & 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		print_binary(n >> 1);
		_putchar(nums + ('0'));
	}
}
