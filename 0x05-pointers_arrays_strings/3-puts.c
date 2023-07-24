#include "main.h"

/**
  * _puts - Print a string followed by a newline
  * @str: The string to be printed
  *
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
