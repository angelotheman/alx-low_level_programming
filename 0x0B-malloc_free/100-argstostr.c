#include "main.h"
#include <stdlib.h>

/**
  * argstostr - Concatenates all arguments
  * @ac: Argc
  * @av: Argv
  *
  * Return: NULL if ac is 0 && av is NULL
  */

int str_len(char *str);

char *str_cat(char *dest, char *src);

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	int count = 0;
	char *buffer;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += str_len(av[i]) + 1;
	}

	buffer = (char *)malloc(total_length * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		str_cat(buffer + count, av[i]);
		str_cat(buffer + count, "\n");
		count += str_len(av[i]) + 1;
	}

	return (buffer);
}

int str_len(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

char *str_cat(char *dest, char *src)
{
	int dest_len = str_len(dest);
	int src_len = str_len(src);
	int i;

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + src_len] = '\0';

	return (dest);
}
