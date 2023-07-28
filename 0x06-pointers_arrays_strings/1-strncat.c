#include "main.h"

/**
  * _strncat - Concatenates two different strings with some
  *            bytes
  * @dest: The destination string
  * @src: The string to be added
  * @n: The number of characters to be copied
  *
  * Return: The concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
