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
	int a;
	
	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
