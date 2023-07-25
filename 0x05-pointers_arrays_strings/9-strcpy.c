#include <string.h>
#include "main.h"

/**
  * _strcpy - Function to copy string
  * @dest: Destintion for the copy
  * @src: Source of the copy
  *
  * Return: Pointer to the destination
  */

void *_strcpy(char *dest, char *src)
{
	char *pDest;

	pDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (pDest);
}
