#include <stdio.h>

/**
  * main - Entry point for the code
  *
  * Return: 0 since main is void
  */

int main(void)
{
	int a = 0;
	int b = 1;

	while (a <= 98)
	{
		while (b <= 99)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}

			b++;
		}
		b = a + 2;
		a++;
	}

	putchar('\n');
	return (0);
}
