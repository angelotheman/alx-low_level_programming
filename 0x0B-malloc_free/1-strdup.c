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
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	new_string = (char *)malloc(i);

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
