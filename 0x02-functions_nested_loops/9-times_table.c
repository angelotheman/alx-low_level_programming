#include "main.h"

/**
  * times_table - Printing the times table
  *
  * Return: Times table from 0 to 9
  */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int sum = a * b;

			if (b < 9)
			{
				if (sum < 10)
				{
					_putchar(sum + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((sum / 10) + '0');
					_putchar((sum % 10) + '0');
					_putchar(',');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
