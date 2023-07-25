#include <string.h>
#include "main.h"

/**
  * puts_half - Printing half of a string
  * @str: String to be printed
  *
  */

void puts_half(char *str)
{
	int length = strlen(str);
	int startIdx = length / 2;

	if (length % 2 != 0)
		startIdx = (length - 1) / 2;

	char *second_half;
	
	second_half = str + startIdx;

	while (*second_half != '\0')
	{
		_putchar(*second_half);
		second_half++;
	}
}
