#include "main.h"

/**
  * _strncpy - Copies a string to another
  * @dest: Destination string
  * @src: The source string
  * @n: The number of bytes to be copied
  *
  * Return: A pointer to the string copied
  */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for ( ; a < n; a++)
		dest[i] = '\0';

	return dest;
}
