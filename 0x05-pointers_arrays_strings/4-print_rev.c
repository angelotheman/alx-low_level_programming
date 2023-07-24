#include "main.h"

/**
  * print_rev - Prints a string in a reverse order
  * @s: The string to be printed
  *
  */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}

	while (s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
