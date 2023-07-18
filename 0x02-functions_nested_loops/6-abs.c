#include "main.h"

/**
  * _abs - This function calculates the absolute value of digits
  * @a: Value to be processed
  *
  * Returns: The absolute number of the integer
  */

int _abs(int a)
{
	if (a < 0)
	{
		int value = 0 - a;
		return (value);
	}
	else
	{
		return (a);
	}
}
