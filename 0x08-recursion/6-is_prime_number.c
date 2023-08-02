#include "main.h"

/**
  * is_prime_number - Checks for a prime number
  * @n: Integer to be checked
  * @div: Helper argument
  *
  * Return: 1 if prime, 0 otherwise
  */

int is_prime_recursive(int n, int div);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
  * is_prime_recursive - Helper function
  * @div: Helper argument
  * @n: First argument
  *
  * Return: 1 if prime, 0 otherwise
  */

int is_prime_recursive(int n, int div)
{
	if (div * div > n)
		return (1);

	if (n % div == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, div + 1));
}
