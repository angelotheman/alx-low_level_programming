#include "main.h"

/**
  * _sqrt_recursion - Returns natural square of number
  * @n: Argument passed
  * @low: Args
  * @high: Args
  *
  * Return: Square of number.
  * Example: int _sqrt_recursion(int 4)
  *	     Return 2
  */

int sqrt_binary_search(int n, int low, int high);

int _sqrt_recursion(int n)
{
	int (n <= 0)
		return (-1);

	return (sqrt_binary_search(n, 0, n));
}

/**
  * sqrt_binary_search - Returns the value to determine sqrt
  * @n: first argument
  * @low: second argument
  * @high: last argument
  *
  * Return: The floor of the squre root
  */

int sqrt_binary_search(int n, int low, int high)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square > n)
		{
			return (sqrt_binary_search(n, low, mid - 1));
		}
		else
		{
			return (sqrt_binary_search(n, mid + 1, high));
		}
	}

	return (high);
}
