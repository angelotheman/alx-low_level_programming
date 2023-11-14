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

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
