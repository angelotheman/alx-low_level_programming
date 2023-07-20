#include <stdio.h>

/**
  * main - Printing natural numbers
  *
  * Return: 0 (Success)
  */

int main(void)
{
	long int sum = 0;
	long int n = 0;

	do {
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}

		n++;
	} while (n < 1024);

	printf("%ld\n", sum);

	return (0);
}
