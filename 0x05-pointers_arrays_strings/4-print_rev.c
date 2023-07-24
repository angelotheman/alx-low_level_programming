#include <string.h>
#include "main.h"

/**
  * print_rev - Prints a string in a reverse order
  * @s: The string to be printed
  *
  */

void print_rev(char *s)
{
	char *last = strlen(s)

	while (last >= s)
	{
		_putchar(*last);
		last--;

	}

	_putchar('\n');
}
