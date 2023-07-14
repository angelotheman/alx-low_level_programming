#include <stdio.h>

/**
  * main - Entry point for the code
  *
  * Return: 0 since main is void
  */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
