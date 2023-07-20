#include <stdio.h>

/**
  * main - Print more Fibonacci sequence
  *
  * Return: 0 (I am a shark)
  */

int main(void)
{
	long int sum = 0;
	long int num1 = 1;
	long int num2 = 2;

	do {
		if (num2 % 2 == 0)
			sum += num2;
		num2 += num1;
		num1 = num2 - num1;
	} while (num2 <= 4000000);

	printf("%ld\n", sum);

	return (0);
}
