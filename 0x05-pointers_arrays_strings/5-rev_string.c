#include <string.h>
#include "main.h"

/**
  * rev_string - This is a function that reverses a string
  * @s: The string to be reversed
  *
  */

void rev_string(char *s)
{
	char *start = s;
	char *end = s + strlen(s) - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
