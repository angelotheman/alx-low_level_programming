#include "main.h"

/**
  * puts2 - Print every other character of a string
  * @str: The string to be printed
  *
  */

void puts2(char *str)
{
	int a;
	int b = 0;

	if (str == NULL)
		return;

	while (str[b] != '\0')
		b++;

	for (a = 0; a < b; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
