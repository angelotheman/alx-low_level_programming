#include "main.h"

/**
  * _isupper- Checks for uppercase character
  * @c: Character to be checked
  *
  * Return: 1 if c is uppercase, 0 if otherwise
  */

int _upper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
