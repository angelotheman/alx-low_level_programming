#include "main.h"

/**
  * factorial - Factorial of a given number
  * @n: Given number
  *
  * Return: Int (Success)
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
