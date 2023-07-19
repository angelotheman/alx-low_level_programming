#include <stdio.h>

/**
  * main - Printing the first 50 Fibonacci numbers
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	int num1 = 1;
	int num2 = 2;
	int sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;

		num1 = num2;
		num2 = sum;

		printf("%d", sum);

		if (i == 49)
			break;

		printf(", ");
	}

	printf("\n");

	return (0);
}
