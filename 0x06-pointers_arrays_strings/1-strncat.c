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
	char *pFinal;
	int a;

	pFinal = dest;

	while (*dest != '\0')
	{
		*pFinal = *dest;
		pFinal++;
		dest++;
	}

	while (a < n && src[a] != '\0')
	{
		*pFinal = src[a];
		a++;
		src++;
	}

	*pFinal = '\0';

	return (pFinal);
}
