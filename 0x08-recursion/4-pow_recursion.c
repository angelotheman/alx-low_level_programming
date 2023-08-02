#include "main.h"

/**
  * _pow_recursion - Returns the pow (x, y)
  * @x: first argument
  * @y: second argument
  *
  * Return: x ** y (int)
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, (y - 1))));
}
