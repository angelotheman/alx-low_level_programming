#include "main.h"

/**
  * get_bit - Gets the bits
  * @n: Args 1
  * @index: Args 2
  *
  * Return: Bit at index or -1 if otherwise
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	val <<= index;

	if (val & n)
		return (1);
	else
		return (0);
}
