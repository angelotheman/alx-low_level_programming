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
	int a;

	while (str[i] != '\0')
	{
		i++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	new_string = (char *)malloc(i + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < i; a++)
	{
		new_string[a] = str[a];
	}

	new_string[i] = '\0';

	return (new_string);
}
