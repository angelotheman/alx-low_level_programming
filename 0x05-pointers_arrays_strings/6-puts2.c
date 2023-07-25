#include <string.h>
#include "main.h"

/**
  * puts2 - Print every other character of a string
  * @str: The string to be printed
  *
  */

void puts2(char *str)
{
	int a;

	if (str == NULL)
		return;

	for (a = 0; a < strlen(str); a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
