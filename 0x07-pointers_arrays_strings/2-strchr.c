#include <stdio.h>
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
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
