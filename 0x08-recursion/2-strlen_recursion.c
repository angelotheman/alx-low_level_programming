#include "main.h"

/**
  * _strlen_recursion - Returns length of a string
  * @s: String to be passed
  *
  * Return: Int (length of a string)
  */

int _strlen_recursion (char *s)
{
	int a = 0;

	if (*s == '\0')
		return;
	a++;
	_strlen_recursion(s + 1);

	return (a);
}
