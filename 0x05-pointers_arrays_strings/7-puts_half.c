#include "main.h"

/**
  * puts_half - Printing half of a string
  * @str: String to be printed
  *
  */

void puts_half(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
		b++;

	if (b % 2 != 0)
	{
		a = (b - 1) / 2;
		a += 1;
	}
	else
	{
		a = b / 2;
	}

	for (; a < b; a++)
		_putchar(str[a]);

	_putchar('\n');
}
