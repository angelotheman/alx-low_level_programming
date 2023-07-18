#include "main.h"

/**
  * print_sign - Prints the sign of a number
  * @n: Number to be printed
  *
  * Return: 1 if n > 0, 0 if n==0 or -1 if n<0.
  *
  * Description: The function would print + if n>0, 0 if equal
  * and -1 if negative
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
