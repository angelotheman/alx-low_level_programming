#include "main.h"

/**
  * _atoi - Converts string inputs to integer
  * @s: The string inputs
  *
  * Return: Integer of string
  * Example: _atoi("98") should print 98
  */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' ||
		*s == '\v' || *s == '\f')
		s++;

	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -sign;
		else
			sign = sign;

		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (result * 10 + (*s - '0')))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
