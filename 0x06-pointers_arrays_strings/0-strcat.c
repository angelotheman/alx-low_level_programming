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

	pFinal = dest;
	
	while (*dest != '\0')
	{
		*pFinal = *dest;
		pFinal++;
		dest++;
	}

	while (*src != '\0')
	{
		*pFinal = *src;
		pFinal++;
		src++;
	}

	*pFinal = '\0';

	return (pFinal);
}
