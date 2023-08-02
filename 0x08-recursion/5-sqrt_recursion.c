#include "main.h"

/**
  * _sqrt_recursion - Returns natural square of number
  * @n: Argument passed
  *
  * Return: Square of number.
  * Example: int _sqrt_recursion(int 4)
  *	     Return 2
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	int root = _sqrt_recursion(n / 2);

	if (root * root == n)
		return root;
	else
		return (root + 1);
}
