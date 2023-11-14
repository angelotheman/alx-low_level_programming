#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: The string input
  *
  * Return: Length of string (int)
  */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
