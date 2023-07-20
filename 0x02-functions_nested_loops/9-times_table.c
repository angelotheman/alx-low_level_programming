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
	int prod;
	int mod;
	int div;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;
			if (prod > 9)
			{
				mod = prod % 10;
				div = (prod - mod) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(div + '0');
				_putchar(mod + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(prod + '0');
			}
		}
		_putchar('\n');
	}

}
