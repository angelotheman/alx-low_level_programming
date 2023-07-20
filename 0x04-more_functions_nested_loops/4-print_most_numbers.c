#include "main.h"

/**
  * print_most_numbers - Printing the numbers that occur most
  *
  * Return: 0 (Success)
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');

	return (0);
}
