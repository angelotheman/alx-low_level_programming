#include <stdio.h>

/**
  * main - Entry point for the code
  *
  * Return: 0 since main is void
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
