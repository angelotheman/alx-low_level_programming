#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
  * print_strings - Print variable string
  * @separator: first args
  * @n: second args
  *
  */

void print_string(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		char *x;
		char *new_string;

		x = va_arg(args, char);

		if (*x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			unsigned int i = 0;

			while (x[i] != '\0')
			{
				strcat(*new_string, x[i]);
				i++;
			}

			new_string[i] = '\0';

			while (*new_string != '\0')
			{
				printf("%c", *new_string);
			}
		}

		if (separator != NULL && count < n - 1)
		{
			printf("%c ", *separator);
		}
	}

	va_end(args);

	printf("\n");
}
