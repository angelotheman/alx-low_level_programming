#include "main.h"
#include <stdlib.h>

/**
  * str_concat - Concatenate two strings with malloc
  * @s1: First string
  * @s2: Second string
  *
  * Return: Pointer to string location
  */

char *str_concat(char *s1, char *s2)
{
	int s1_length = 0;
	int s2_length = 0;
	int total_length = s1_length + s2_length;
	char *new_string;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}

	while (s2[s2_length] != '\0')
	{
		s2_length++;
	}

	new_string = (char *)malloc(total_length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < s1_length && s1[a] != '\0'; a++)
	{
		new_string[a] = s1[a];
	}

	for (b = 0; b < s2_length && s2[b] != '\0'; b++)
	{
		new_string[b] = s2[b];
	}

	new_string[b] = '\0';

	return (new_string);
}
