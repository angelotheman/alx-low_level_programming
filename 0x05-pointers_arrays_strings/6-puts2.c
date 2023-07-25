#include <string.h>
#include "main.h"

/**
  * puts2 - Print every other character of a string
  * @str: The string to be printed
  *
  */

void puts2(char *str)
{
	int a = 0;

	if (str == NULL)
		return;

	while (*str != '\0')
	{
		_putchar(*str);

		str += 2;
	}
	_putchar('\n');
}
