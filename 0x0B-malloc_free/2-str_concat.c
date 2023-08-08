#include "main.h"
#include <stdlib.h>

/**
  * str_concat - Concatenate two strings with malloc
  * copy_string - Helper function
  * @s1: First string
  * @s2: Second string
  * @src: Source string
  * @dest: Destination string
  *
  * Return: Pointer to string location
  */

void copy_string(char *src, char *dest);

char *str_concat(char *s1, char *s2)
{
	int s1_length = 0;
	int s2_length = 0;
	char *new_string;
	int total_length = 0;

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

	total_length = s1_length + s2_length;

	new_string = (char *)malloc(total_length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	copy_string(s1, new_string);
	copy_string(s2, new_string + s1_length);

	new_string[total_length] = '\0';

	return (new_string);
}

/**
  * copy_string - Copies string from source to dest
  * @src: source string
  * @dest: destination string
  *
  * Return: 0 Success
  */

void copy_string(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
}
