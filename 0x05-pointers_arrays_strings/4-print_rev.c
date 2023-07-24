#include "main.h"

/**
  * print_rev - Prints a string in a reverse order
  * @s: The string to be printed
  *
  */

void print_rev(char *s)
{
	char *last = s;

	while (*last != '\0')
	{
		last++;
	}

	while (last > s)
	{
		_putchar(*last);
		last--;

	}

	_putchar('\n');
}
