#include "main.h"

/**
  * print_number - Prints an integer to stdout
  * @n: Parameter of function
  *
  * Return: 0 (Success)
  */

void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((n % 10) + '0');
}
