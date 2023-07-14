#include <stdio.h>

/**
  * main - Entry point for the code
  *
  * Return: 0 since main is void
  */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if ((a != b && a != c && b != c)  && (a < b && a < c && b < c))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a < 7 && b <= 8 && c <= 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
