#include "variadic_functions.h"

/**
  * sum_them_all - Sum all integers
  * @n: first argument
  *
  * Return: 0 if n is 0 else sum.
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
