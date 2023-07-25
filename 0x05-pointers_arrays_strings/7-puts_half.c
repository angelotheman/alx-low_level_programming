#include <string.h>
#include "main.h"

/**
  * puts_half - Printing half of a string
  * @str: String to be printed
  *
  */

void puts_half(char *str)
{
	char *second_half;
	int length = strlen(str);
	int startIdx = length / 2;

	if (str == NULL)
		return;

	if (length % 2 != 0)
		startIdx = (length - 1) / 2;
	else
		startIdx = length / 2;

	second_half = str + (startIdx - 1);

	while (*second_half != '\0')
	{
		_putchar(*second_half);
		second_half++;
	}
	_putchar('\n');
}
