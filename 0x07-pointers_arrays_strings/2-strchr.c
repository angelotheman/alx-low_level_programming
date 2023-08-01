#include "main.h"

/**
  * _strchr - Locates a character in a string
  * @s: String to be searched
  * @c: Character to be found
  *
  * Return: pointer to first occurrence
  *         or NULL if not found
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ((char *)NULL);
}
