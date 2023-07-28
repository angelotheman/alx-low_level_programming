#include "main.h"

/**
  * string_toupper - Changes lowercase to uppercase
  * @a: Character to be changed
  *
  * Return: Changed characters
  */

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122 || )
		{
			return (c - 32);
		}
		else
		{
			return (c);
		}
	}
}
