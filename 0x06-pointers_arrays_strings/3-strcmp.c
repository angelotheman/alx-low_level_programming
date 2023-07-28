#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: First string
  * @s2: Second string
  *
  * Return: Integer value indicating which is larger
  */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
