#include "main.h"

/**
  * get_endianness - Checks the endianness
  *
  * Return: 0 if big endian and 1 if little
  */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte;

	byte = (char *)&num;

	return (*byte == 1);
}
