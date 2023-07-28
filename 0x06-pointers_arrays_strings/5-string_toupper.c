#include "main.h"

/**
  * string_toupper - Changes lowercase to uppercase
  * @c: Character to be changed
  *
  * Return: Changed characters
  */

char *string_toupper(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			c[a] = c[a] - 32;
		}
		c++;
	}

	return (c);
}
