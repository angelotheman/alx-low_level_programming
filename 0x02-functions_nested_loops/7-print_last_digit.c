#include "main.h"

/**
  * print_last_digit - Function to print the last digit of any number given
  * @a: Digit to be computed
  *
  * Return: The last digit of type int
  */

int print_last_digit(int a)
{
	int num;

	num = a % 10;

	if (num < 0)
		num = num * -1;

	_putchar(num + '0');
	return (num);
}
