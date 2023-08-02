#include "main.h"

/**
  * _puts_recursion - Prints a string
  * @s: String to be printed
  *
  * Return: 0 (Success)
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
