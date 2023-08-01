#include "main.h"

/**
  * _memset - Filling memory with a constant byte
  * @s: First argument
  * @b: Second argument
  * @n: Integer to be added
  *
  * Return: Pointer to the memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		s[i] = b;
	}

	s[i] = '\0';
	
	return s;
}
