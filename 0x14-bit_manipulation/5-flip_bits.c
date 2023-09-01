#include "main.h"

/**
  * flip_bits - Flip the bits
  * @n: Args
  * @m: Bits to flip
  *
  * Return: 0 int success
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	unsigned long int i = (n ^ m);
	int count = 0;

	while (i != 0)
	{
		count++;

		i &= (i - 1);
	}

	return (count);
}
