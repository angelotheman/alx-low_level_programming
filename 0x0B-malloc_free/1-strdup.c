#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Pointer to newly allocated space
  * @str: The string argument
  *
  * Return: NULL for insufficient memory, pointer otherwise
  */

char *_strdup(char *str)
{
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}

	new_string = (char *)malloc(strlen(str) + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		*new_string = *str;
		new_string++;
		str++;
	}

	new_string = '\0';

	return (new_string);
}
