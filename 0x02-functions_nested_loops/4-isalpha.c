#include "main.h"

/**
  * _isalpha - Checks if a given value is an alphabet.
  * @c: The value to be checked.
  *
  * Return: 1 if c is a letter, 0 if otherwise.
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
