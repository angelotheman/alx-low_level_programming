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
	int length = 0;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	new_string = (char *)malloc(length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < length; a++)
	{
		new_string[a] = str[a];
	}

	new_string[length] = '\0';

	return (new_string);
}
