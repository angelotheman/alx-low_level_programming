#include "main.h"

/**
  * string_toupper - Changes lowercase to uppercase
  * @c: Character to be changed
  *
  * Return: Changed characters
  */

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
		c++;
	}

	return (c);
}
