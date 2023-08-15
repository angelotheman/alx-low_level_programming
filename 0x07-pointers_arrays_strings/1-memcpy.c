#include "main.h"

/**
  * _memcpy - Copies one memory to another
  * @dest: Destination
  * @src: Source
  * @n: Number of bytes to be copied
  *
  * Return: Pointer to the destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
