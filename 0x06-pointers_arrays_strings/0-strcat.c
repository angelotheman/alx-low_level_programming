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
	char *pFinal;
	int a;

	pFinal = dest;

	while (*dest != '\0')
	{
		*pFinal = *dest;
		pFinal++;
		dest++;
	}

	for (a = 0; src[i] != '\0' && dest[i] != '\0'; i++)
	{
		*pFinal = src[i];
		pFinal++;
	}

	*pFinal = '\0';

	return (pFinal);
}
