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

	for (pFinal = dest; *pFinal != '\0'; pFinal++)
	{
		while (*src != '\0')
		{
			*pFinal++ = *src++;
		}
	}
	*pFinal = '\0';

	return (pFinal);
}
