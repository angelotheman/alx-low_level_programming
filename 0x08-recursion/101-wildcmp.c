#include "main.h"

/**
  * wildcmp - Checks for identical strings
  * @a: First string
  * @b: Second string
  * @s: String for next function
  *
  * Return: 1 if equal, 0 otherwise
  */

int is_end_of_string(char *);

int wildcmp(char *a, char *b)
{
	if (is_end_of_string(b))
	{
		return (is_end_of_string(a));
	}
	else if (*b == '*')
	{
		if (is_end_of_string(b + 1))
		{
			return (1);
		}
		else if (*a == '\0')
		{
			return (wildcmp(a, b + 1));
		}
		else
		{
			return (wildcmp(a, b + 1) || wildcmp(a + 1, b));
		}
	}
	else
	{
		return ((*a == *b) && wildcmp(a + 1, b + 1));
	}
}

/**
  * is_end_of_string - Check if it's a string
  * @s: String arg
  *
  * Return: 1 if string, 0 otherwise
  */

int is_end_of_string(char *s)
{
	return (*s == '\0');
}
