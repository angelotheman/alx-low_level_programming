#include "main.h"

/**
  * cap_string - Capitalize every string
  * @c: String to be capitalized
  *
  * Return: A capitalized string
  */

char *cap_string(char *c)
{
	int idx = 0;

	while (a[idx])
	{
		while (!(a[idx] >= 'a' && a[idx] <= 'z))
			idx++;

		if (a[idx - 1] == '' ||
		    a[idx - 1] == '\t ||
		    a[idx - 1] == '\n' ||
		    a[idx - 1] == ',' ||
		    a[idx - 1] == '.' ||
		    a[idx - 1] == '!' ||
		    a[idx - 1] == '?' ||
		    a[idx - 1] == '"' ||
		    a[idx - 1] == '(' ||
		    a[idx - 1] == ')' ||
		    a[idx - 1] == '{' ||
		    a[idx - 1] == '}' ||
		    idx == 0)
			a[idx] -= 32;

		idx++;
	}

	return (a);
}
