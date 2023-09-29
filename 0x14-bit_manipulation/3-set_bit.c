#include "main.h"

/**
  * set_bit - Set's value of bit to 1
  * @n: Bit to be signed
  * @index: Value of index to be assigned
  *
  * Return: 1 if success, -1 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n ^= (-1 ^ *n) & (1UL << index);

		return (1);
	}

	return (-1);
}
