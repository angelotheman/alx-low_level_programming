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
	int a = 0;
	unsigned int b = 0;
	int min = 1;
	int c = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;
			b = (b * 10) + (s[a] - '0');
			a++;
		}

		if (c == 1)
		{
			break;
		}
		a++;
	}

	b *= min;

	return (b);
}
