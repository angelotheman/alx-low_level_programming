#include "main.h"

/**
  * _sqrt_recursion - Returns natural square of number
  * @n: Argument passed
  * @num: Args
  *
  * Return: Square of number.
  * Example: int _sqrt_recursion(int 4)
  *	     Return 2
  */

int sqrt_recursive(int n, double num);

int _sqrt_recursion(int n)
{
	double init_num = 1.0;

	if (n < 0)
		return (-1);

	return (sqrt_recursive(n, init_num));
}

/**
  * sqrt_recursive - Returns the value to determine sqrt
  * @n: first argument
  * @num: args
  *
  * Return: The floor of the squre root
  */

int sqrt_recursive(int n, double num)
{
	double new_num = 0.5 * (num + n / num);

	if (new_num == num)
		return (num);
	else
		return (sqrt_recursive(n, new_num));
}
