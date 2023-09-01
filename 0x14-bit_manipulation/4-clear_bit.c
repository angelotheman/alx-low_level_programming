#include "main.h"

/**
  * clear_bit - Set value to 0
  * @n: Args 1
  * @index: Index of value
  *
  * Return: 1 if success, -1 otherwise
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n ^= (0 ^ *n) & (1UL << index);

		return (1);
	}

	return (-1);
}
