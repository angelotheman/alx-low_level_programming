#include "main.h"

/**
  * print_to_98 - Printing all natural numbers up to 98
  * @n: The starting point of the numbers
  *
  * Return: The natural numbers till 98
  */

void print_to_98(int n)
{
	if (n > 98)
	{
		int a;
		
		for (a = n; a >= 98; a--)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			
			if (a > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		int a;

		for (a = n; a <= 98; a++)
		{
			if (a / 10 != 0)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(a + '0');
			}

			if (a < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
