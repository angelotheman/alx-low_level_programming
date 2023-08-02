#include "main.h"

/**
  * _strlen_recursion - Returns length of a string
  * @s: String to be passed
  *
  * Return: Int (length of a string)
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	
	return 1 + _strlen_recursion(s + 1);
}
