#include <stdio.h>

/**
  * main - Entry point for this code
  *
  * Return: 0 since main is void
  */

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 113 && n != 101)
		{
			putchar(n);
		}
	}

	putchar('\n');

	return (0);
}
