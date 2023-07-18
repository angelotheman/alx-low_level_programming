#include "main.h"

/**
  * _islower - prints all lowercase characters.
  * @c: The number to be checked.
  *
  * Return: 1 if c is lowercase, 0 otherwise.
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
