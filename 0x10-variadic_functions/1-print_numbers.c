#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - Function to print all numbers
  * @separator: First argument
  * @n: last args
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int count;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		int x;

		x = va_arg(args, int);
		printf("%d", x);

		if (count < n - 1)
		{
			printf("%c ", *separator);
		}
	}

	va_end(args);

	printf("\n");
}
