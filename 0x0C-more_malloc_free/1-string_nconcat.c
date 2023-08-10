#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - Function to concatenate two strings
  * @s1: First string
  * @s2: Second string
  * @n: Bytes to be copied
  *
  * Return: Pointer to new alloted space
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_length = 0, s2_length = 0;
	unsigned int a, b;

	if (s1 != NULL)
		s1_length = strlen(s1);
	if (s2 != NULL)
		s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	str = (char *)malloc((s1_length + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
