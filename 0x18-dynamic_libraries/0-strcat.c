#include "main.h"

/**
  * _strcat - This function concatenates two strings
  * @dest: First string
  * @src: String to be concatenated
  *
  * Return: A char array of the string
  */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
